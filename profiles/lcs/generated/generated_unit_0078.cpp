#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0078[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 8, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 17, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 29, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38,
    0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 0, 45, 46, 0, 0, 0, 0, 47,
    0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 61, 0, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0,
    74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 84, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 0, 0, 95, 96, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0,
    0, 0, 104, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0,
    115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0,
    135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 140, 141, 0, 0, 142, 0, 143, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178,
    0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0,
    187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196,
    0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 213, 0,
    0, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0,
    0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0,
    230, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0,
    238, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0,
    254, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 261, 0, 262, 263, 0, 0, 0, 0, 0, 0, 264,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0,
    0, 270, 0, 271, 0, 272, 0, 0, 273, 0, 274, 0, 275, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0,
    280, 0, 281, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 288, 0, 289, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0,
    292, 0, 0, 293, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0,
    0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0,
    314, 0, 315, 0, 316, 0, 317, 0, 0, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323,
    0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 335, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 352, 0,
    353, 0, 354, 0, 355, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 0, 361, 0, 362, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 365, 0, 366, 0, 367, 0, 368, 0, 0, 0, 369, 0, 370, 0, 371,
    0, 372, 0, 373, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 382,
    0, 0, 0, 0, 0, 0, 0, 383, 384, 0, 0, 385, 0, 386, 0, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 0, 392, 0, 393, 0, 394,
    0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 401, 0, 402, 0, 0, 403, 0, 404, 0, 0, 405,
    0, 406, 0, 0, 407, 0, 408, 0, 0, 409, 0, 410, 0, 0, 411, 412, 0, 0, 413, 0, 0, 414, 0, 415, 0, 0, 0, 416, 417, 0, 418, 0,
    0, 0, 419, 0, 420, 0, 0, 0, 421, 422, 0, 423, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 427, 428, 0, 0,
    429, 0, 430, 0, 0, 0, 431, 0, 432, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0,
    438, 0, 0, 439, 0, 440, 441, 0, 442, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 446, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 448, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 460, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0,
    0, 0, 0, 0, 466, 0, 467, 0, 468, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 474,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0,
    0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 488, 0, 489, 0, 490, 0, 491, 0,
    492, 0, 0, 493, 0, 494, 0, 495, 0, 0, 0, 496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 505, 0,
    0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0,
    0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 524, 0, 525, 0, 526, 0, 0, 527, 0, 0,
    0, 528, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 533, 0, 534, 0, 535, 0, 536, 537, 0, 538, 0, 0, 0, 539, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0,
    0, 0, 0, 0, 0, 544, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0,
    0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 561, 0, 562, 0, 0, 563, 0, 564, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 572,
    0, 573, 0, 0, 574, 0, 0, 0, 0, 575, 0, 576, 0, 0, 577, 0, 0, 0, 578, 0, 579, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 582,
    0, 583, 0, 584, 0, 585, 0, 586, 0, 587, 0, 0, 0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 0, 0, 593, 0, 0, 594, 0, 0, 595,
    0, 596, 597, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 0, 604, 0, 605, 606, 0, 0,
    607, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 610, 0, 611, 0, 0, 0, 612, 0, 613, 0, 614, 0, 615, 0, 616, 0, 0, 0, 617, 0, 0,
    618, 0, 0, 619, 0, 620, 621, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0,
    629, 630, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 635, 0, 0, 636, 0, 0, 637, 0, 638, 639, 0, 0, 640,
    0, 0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0,
    0, 648, 0, 0, 0, 0, 649, 0, 650, 0, 0, 651, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0,
    655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 662, 0, 663, 0, 664, 0, 665, 0, 666, 0, 0,
    0, 667, 0, 668, 0, 669, 0, 670, 0, 671, 0, 672, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0,
    0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0,
    680, 0, 681, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 0, 684, 0, 685, 0, 686, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0, 0, 0, 690,
    0, 0, 0, 0, 0, 0, 691, 0, 692, 0, 0, 693, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 0, 0,
    0, 698, 0, 699, 0, 0, 0, 0, 700, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 705, 0,
    0, 706, 0, 0, 707, 0, 0, 0, 0, 708, 0, 709, 710, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 714, 0, 715, 0, 716, 0,
    717, 0, 0, 718, 0, 0, 719, 0, 720, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 723, 0, 724, 0, 725, 0, 0, 726, 0, 0,
    0, 727, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 732, 0,
    733, 0, 734, 0, 0, 0, 735, 0, 736, 0, 737, 0, 738, 0, 739, 0, 740, 0, 741, 0, 742, 0, 743, 0, 744, 0, 0, 745, 0, 746, 0, 747,
    0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 758, 0, 759, 0,
    760, 0, 0, 0, 761, 0, 762, 0, 763, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 768,
    769, 0, 770, 0, 0, 0, 771, 0, 0, 772, 0, 0, 773, 0, 0, 0, 0, 0, 774, 775, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0,
    0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 781, 0, 0, 782, 0, 0, 783, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 786, 0,
    0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 790, 0, 0, 0, 791, 0, 792, 0, 0,
    793, 0, 0, 0, 0, 794, 0, 0, 0, 0, 795, 0, 796, 0, 797, 0, 798, 0, 799, 0, 800, 0, 0, 0, 801, 0, 802, 0, 0, 803, 0, 804,
    0, 805, 0, 806, 0, 807, 0, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 813, 0,
    0, 814, 0, 815, 0, 816, 0, 0, 0, 817, 0, 818, 0, 819, 0, 820, 0, 821, 0, 822, 0, 0, 823, 0, 824, 0, 825, 0, 0, 0, 826, 0,
    0, 827, 0, 0, 0, 828, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    832, 0, 833, 0, 834, 0, 0, 0, 835, 0, 836, 0, 837, 0, 838, 0, 839, 0, 840, 0, 841, 0, 842, 0, 843, 0, 844, 0, 845, 0, 0, 0,
    846, 0, 0, 0, 847, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 852,
    0, 853, 0, 854, 0, 855, 0, 856, 0, 0, 857, 0, 0, 0, 858, 0, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0, 861,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 863, 0, 864, 0, 0, 0, 865, 0, 866, 0, 867, 0, 868, 0, 869, 0, 870, 0, 871, 0, 0,
    872, 0, 0, 0, 873, 0, 0, 0, 0, 874, 0, 875, 0, 0, 876, 0, 0, 877, 0, 0, 878, 0, 0, 0, 0, 879, 0, 880, 0, 0, 881, 0,
    0, 882, 0, 0, 883, 884, 0, 0, 885, 0, 886, 0, 887, 0, 0, 0, 0, 888, 0, 889, 0, 0, 0, 0, 890, 0, 891, 0, 892, 0, 0, 0,
    0, 0, 893, 0, 894, 0, 0, 0, 0, 0, 0, 895, 0, 896, 0, 0, 0, 897, 0, 0, 0, 898, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0,
    900, 0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 0, 902, 0, 0, 903, 0, 0, 0, 904, 0, 0, 0, 0, 905, 0, 906, 0, 0, 907, 0, 0,
    908, 0, 0, 909, 0, 910, 0, 0, 911, 0, 0, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 913, 914, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 915, 0, 0, 0, 916, 0, 0, 917, 0, 0, 0, 918, 0, 919, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    920, 0, 0, 0, 0, 0, 0, 921, 0, 922, 0, 0, 0, 0, 0, 923, 924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 925, 0, 926, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 927, 0, 928, 0, 929, 0, 0, 0, 0, 0, 0, 930, 0, 931, 0, 0, 932, 0, 0, 0, 0,
    933, 0, 0, 0, 0, 0, 934, 0, 935, 0, 936, 0, 0, 937, 0, 0, 0, 938, 0, 0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 940,
};
void recomp_unit_0078_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0893C004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0078[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0893C004;
    case 2u: goto L_0893C024;
    case 3u: goto L_0893C02C;
    case 4u: goto L_0893C034;
    case 5u: goto L_0893C054;
    case 6u: goto L_0893C05C;
    case 7u: goto L_0893C064;
    case 8u: goto L_0893C068;
    case 9u: goto L_0893C070;
    case 10u: goto L_0893C0A0;
    case 11u: goto L_0893C0A8;
    case 12u: goto L_0893C0B0;
    case 13u: goto L_0893C0B4;
    case 14u: goto L_0893C0BC;
    case 15u: goto L_0893C0E8;
    case 16u: goto L_0893C0F0;
    case 17u: goto L_0893C0F4;
    case 18u: goto L_0893C0FC;
    case 19u: goto L_0893C128;
    case 20u: goto L_0893C15C;
    case 21u: goto L_0893C1B4;
    case 22u: goto L_0893C1BC;
    case 23u: goto L_0893C1C4;
    case 24u: goto L_0893C1D0;
    case 25u: goto L_0893C1FC;
    case 26u: goto L_0893C22C;
    case 27u: goto L_0893C238;
    case 28u: goto L_0893C248;
    case 29u: goto L_0893C250;
    case 30u: goto L_0893C254;
    case 31u: goto L_0893C25C;
    case 32u: goto L_0893C280;
    case 33u: goto L_0893C284;
    case 34u: goto L_0893C2A8;
    case 35u: goto L_0893C2C0;
    case 36u: goto L_0893C2C8;
    case 37u: goto L_0893C2F8;
    case 38u: goto L_0893C300;
    case 39u: goto L_0893C308;
    case 40u: goto L_0893C310;
    case 41u: goto L_0893C340;
    case 42u: goto L_0893C348;
    case 43u: goto L_0893C350;
    case 44u: goto L_0893C358;
    case 45u: goto L_0893C368;
    case 46u: goto L_0893C36C;
    case 47u: goto L_0893C380;
    case 48u: goto L_0893C38C;
    case 49u: goto L_0893C3A4;
    case 50u: goto L_0893C3B0;
    case 51u: goto L_0893C3C8;
    case 52u: goto L_0893C3F0;
    case 53u: goto L_0893C3F8;
    case 54u: goto L_0893C40C;
    case 55u: goto L_0893C44C;
    case 56u: goto L_0893C468;
    case 57u: goto L_0893C474;
    case 58u: goto L_0893C47C;
    case 59u: goto L_0893C48C;
    case 60u: goto L_0893C4B0;
    case 61u: goto L_0893C510;
    case 62u: goto L_0893C520;
    case 63u: goto L_0893C528;
    case 64u: goto L_0893C530;
    case 65u: goto L_0893C538;
    case 66u: goto L_0893C540;
    case 67u: goto L_0893C548;
    case 68u: goto L_0893C550;
    case 69u: goto L_0893C558;
    case 70u: goto L_0893C560;
    case 71u: goto L_0893C568;
    case 72u: goto L_0893C570;
    case 73u: goto L_0893C578;
    case 74u: goto L_0893C584;
    case 75u: goto L_0893C58C;
    case 76u: goto L_0893C5B0;
    case 77u: goto L_0893C5B8;
    case 78u: goto L_0893C5C4;
    case 79u: goto L_0893C5D4;
    case 80u: goto L_0893C608;
    case 81u: goto L_0893C63C;
    case 82u: goto L_0893C644;
    case 83u: goto L_0893C66C;
    case 84u: goto L_0893C670;
    case 85u: goto L_0893C680;
    case 86u: goto L_0893C6A4;
    case 87u: goto L_0893C6C4;
    case 88u: goto L_0893C6C8;
    case 89u: goto L_0893C6F0;
    case 90u: goto L_0893C708;
    case 91u: goto L_0893C734;
    case 92u: goto L_0893C73C;
    case 93u: goto L_0893C744;
    case 94u: goto L_0893C74C;
    case 95u: goto L_0893C75C;
    case 96u: goto L_0893C760;
    case 97u: goto L_0893C774;
    case 98u: goto L_0893C794;
    case 99u: goto L_0893C7B8;
    case 100u: goto L_0893C7E4;
    case 101u: goto L_0893C7EC;
    case 102u: goto L_0893C7F4;
    case 103u: goto L_0893C7FC;
    case 104u: goto L_0893C80C;
    case 105u: goto L_0893C810;
    case 106u: goto L_0893C824;
    case 107u: goto L_0893C834;
    case 108u: goto L_0893C84C;
    case 109u: goto L_0893C854;
    case 110u: goto L_0893C85C;
    case 111u: goto L_0893C864;
    case 112u: goto L_0893C86C;
    case 113u: goto L_0893C874;
    case 114u: goto L_0893C87C;
    case 115u: goto L_0893C884;
    case 116u: goto L_0893C88C;
    case 117u: goto L_0893C894;
    case 118u: goto L_0893C89C;
    case 119u: goto L_0893C8A4;
    case 120u: goto L_0893C8AC;
    case 121u: goto L_0893C8B0;
    case 122u: goto L_0893C8B8;
    case 123u: goto L_0893C8D8;
    case 124u: goto L_0893C90C;
    case 125u: goto L_0893C91C;
    case 126u: goto L_0893C924;
    case 127u: goto L_0893C92C;
    case 128u: goto L_0893C93C;
    case 129u: goto L_0893C944;
    case 130u: goto L_0893C9C8;
    case 131u: goto L_0893C9D0;
    case 132u: goto L_0893CA58;
    case 133u: goto L_0893CA68;
    case 134u: goto L_0893CA74;
    case 135u: goto L_0893CA84;
    case 136u: goto L_0893CA98;
    case 137u: goto L_0893CAB0;
    case 138u: goto L_0893CAD8;
    case 139u: goto L_0893CB0C;
    case 140u: goto L_0893CB14;
    case 141u: goto L_0893CB18;
    case 142u: goto L_0893CB24;
    case 143u: goto L_0893CB2C;
    case 144u: goto L_0893CB30;
    case 145u: goto L_0893CBB8;
    case 146u: goto L_0893CBC0;
    case 147u: goto L_0893CC48;
    case 148u: goto L_0893CC58;
    case 149u: goto L_0893CC68;
    case 150u: goto L_0893CC78;
    case 151u: goto L_0893CC98;
    case 152u: goto L_0893CCA4;
    case 153u: goto L_0893CCAC;
    case 154u: goto L_0893CCB4;
    case 155u: goto L_0893CCBC;
    case 156u: goto L_0893CCCC;
    case 157u: goto L_0893CCF4;
    case 158u: goto L_0893CD0C;
    case 159u: goto L_0893CD1C;
    case 160u: goto L_0893CD2C;
    case 161u: goto L_0893CD50;
    case 162u: goto L_0893CD88;
    case 163u: goto L_0893CDA8;
    case 164u: goto L_0893CDB0;
    case 165u: goto L_0893CDB8;
    case 166u: goto L_0893CDC4;
    case 167u: goto L_0893CDD8;
    case 168u: goto L_0893CDE4;
    case 169u: goto L_0893CE00;
    case 170u: goto L_0893CE10;
    case 171u: goto L_0893CE18;
    case 172u: goto L_0893CEA0;
    case 173u: goto L_0893CEAC;
    case 174u: goto L_0893CEC0;
    case 175u: goto L_0893CED0;
    case 176u: goto L_0893CEE0;
    case 177u: goto L_0893CEF0;
    case 178u: goto L_0893CF00;
    case 179u: goto L_0893CF10;
    case 180u: goto L_0893CF20;
    case 181u: goto L_0893CF30;
    case 182u: goto L_0893CF40;
    case 183u: goto L_0893CF4C;
    case 184u: goto L_0893CF5C;
    case 185u: goto L_0893CF68;
    case 186u: goto L_0893CF78;
    case 187u: goto L_0893CF84;
    case 188u: goto L_0893CF94;
    case 189u: goto L_0893CFA0;
    case 190u: goto L_0893CFAC;
    case 191u: goto L_0893CFBC;
    case 192u: goto L_0893CFC8;
    case 193u: goto L_0893CFD8;
    case 194u: goto L_0893CFE4;
    case 195u: goto L_0893CFF4;
    case 196u: goto L_0893D000;
    case 197u: goto L_0893D00C;
    case 198u: goto L_0893D018;
    case 199u: goto L_0893D028;
    case 200u: goto L_0893D034;
    case 201u: goto L_0893D03C;
    case 202u: goto L_0893D044;
    case 203u: goto L_0893D070;
    case 204u: goto L_0893D080;
    case 205u: goto L_0893D084;
    case 206u: goto L_0893D0B4;
    case 207u: goto L_0893D0C0;
    case 208u: goto L_0893D0C8;
    case 209u: goto L_0893D0D0;
    case 210u: goto L_0893D0DC;
    case 211u: goto L_0893D0E8;
    case 212u: goto L_0893D0F8;
    case 213u: goto L_0893D0FC;
    case 214u: goto L_0893D118;
    case 215u: goto L_0893D120;
    case 216u: goto L_0893D128;
    case 217u: goto L_0893D134;
    case 218u: goto L_0893D140;
    case 219u: goto L_0893D150;
    case 220u: goto L_0893D158;
    case 221u: goto L_0893D164;
    case 222u: goto L_0893D170;
    case 223u: goto L_0893D17C;
    case 224u: goto L_0893D18C;
    case 225u: goto L_0893D194;
    case 226u: goto L_0893D19C;
    case 227u: goto L_0893D254;
    case 228u: goto L_0893D264;
    case 229u: goto L_0893D270;
    case 230u: goto L_0893D284;
    case 231u: goto L_0893D290;
    case 232u: goto L_0893D2A4;
    case 233u: goto L_0893D2B0;
    case 234u: goto L_0893D2C4;
    case 235u: goto L_0893D2D0;
    case 236u: goto L_0893D2E4;
    case 237u: goto L_0893D2F0;
    case 238u: goto L_0893D304;
    case 239u: goto L_0893D310;
    case 240u: goto L_0893D320;
    case 241u: goto L_0893D32C;
    case 242u: goto L_0893D33C;
    case 243u: goto L_0893D348;
    case 244u: goto L_0893D35C;
    case 245u: goto L_0893D374;
    case 246u: goto L_0893D38C;
    case 247u: goto L_0893D3A4;
    case 248u: goto L_0893D3B0;
    case 249u: goto L_0893D3B8;
    case 250u: goto L_0893D3C0;
    case 251u: goto L_0893D3D0;
    case 252u: goto L_0893D3E0;
    case 253u: goto L_0893D3EC;
    case 254u: goto L_0893D404;
    case 255u: goto L_0893D410;
    case 256u: goto L_0893D41C;
    case 257u: goto L_0893D428;
    case 258u: goto L_0893D434;
    case 259u: goto L_0893D444;
    case 260u: goto L_0893D450;
    case 261u: goto L_0893D458;
    case 262u: goto L_0893D460;
    case 263u: goto L_0893D464;
    case 264u: goto L_0893D480;
    case 265u: goto L_0893D4C8;
    case 266u: goto L_0893D4D8;
    case 267u: goto L_0893D4E8;
    case 268u: goto L_0893D4F0;
    case 269u: goto L_0893D4F8;
    case 270u: goto L_0893D508;
    case 271u: goto L_0893D510;
    case 272u: goto L_0893D518;
    case 273u: goto L_0893D524;
    case 274u: goto L_0893D52C;
    case 275u: goto L_0893D534;
    case 276u: goto L_0893D548;
    case 277u: goto L_0893D554;
    case 278u: goto L_0893D56C;
    case 279u: goto L_0893D574;
    case 280u: goto L_0893D584;
    case 281u: goto L_0893D58C;
    case 282u: goto L_0893D598;
    case 283u: goto L_0893D5A8;
    case 284u: goto L_0893D5E0;
    case 285u: goto L_0893D604;
    case 286u: goto L_0893D628;
    case 287u: goto L_0893D64C;
    case 288u: goto L_0893D650;
    case 289u: goto L_0893D658;
    case 290u: goto L_0893D670;
    case 291u: goto L_0893D678;
    case 292u: goto L_0893D684;
    case 293u: goto L_0893D690;
    case 294u: goto L_0893D69C;
    case 295u: goto L_0893D6A4;
    case 296u: goto L_0893D6AC;
    case 297u: goto L_0893D6BC;
    case 298u: goto L_0893D6C8;
    case 299u: goto L_0893D6D0;
    case 300u: goto L_0893D6E0;
    case 301u: goto L_0893D704;
    case 302u: goto L_0893D710;
    case 303u: goto L_0893D718;
    case 304u: goto L_0893D728;
    case 305u: goto L_0893D750;
    case 306u: goto L_0893D760;
    case 307u: goto L_0893D76C;
    case 308u: goto L_0893D790;
    case 309u: goto L_0893D79C;
    case 310u: goto L_0893D7C0;
    case 311u: goto L_0893D7D4;
    case 312u: goto L_0893D7EC;
    case 313u: goto L_0893D7FC;
    case 314u: goto L_0893D804;
    case 315u: goto L_0893D80C;
    case 316u: goto L_0893D814;
    case 317u: goto L_0893D81C;
    case 318u: goto L_0893D82C;
    case 319u: goto L_0893D834;
    case 320u: goto L_0893D83C;
    case 321u: goto L_0893D844;
    case 322u: goto L_0893D84C;
    case 323u: goto L_0893D880;
    case 324u: goto L_0893D88C;
    case 325u: goto L_0893D89C;
    case 326u: goto L_0893D8AC;
    case 327u: goto L_0893D8C0;
    case 328u: goto L_0893D8D8;
    case 329u: goto L_0893D8F4;
    case 330u: goto L_0893D8FC;
    case 331u: goto L_0893D914;
    case 332u: goto L_0893D930;
    case 333u: goto L_0893D938;
    case 334u: goto L_0893D940;
    case 335u: goto L_0893D948;
    case 336u: goto L_0893D954;
    case 337u: goto L_0893D968;
    case 338u: goto L_0893D980;
    case 339u: goto L_0893D9AC;
    case 340u: goto L_0893D9B4;
    case 341u: goto L_0893D9BC;
    case 342u: goto L_0893D9C4;
    case 343u: goto L_0893D9CC;
    case 344u: goto L_0893D9D8;
    case 345u: goto L_0893D9E8;
    case 346u: goto L_0893D9F8;
    case 347u: goto L_0893DA04;
    case 348u: goto L_0893DA24;
    case 349u: goto L_0893DA38;
    case 350u: goto L_0893DA6C;
    case 351u: goto L_0893DA74;
    case 352u: goto L_0893DA7C;
    case 353u: goto L_0893DA84;
    case 354u: goto L_0893DA8C;
    case 355u: goto L_0893DA94;
    case 356u: goto L_0893DAA0;
    case 357u: goto L_0893DAA8;
    case 358u: goto L_0893DAD0;
    case 359u: goto L_0893DAD8;
    case 360u: goto L_0893DAF8;
    case 361u: goto L_0893DB14;
    case 362u: goto L_0893DB1C;
    case 363u: goto L_0893DB28;
    case 364u: goto L_0893DB30;
    case 365u: goto L_0893DB48;
    case 366u: goto L_0893DB50;
    case 367u: goto L_0893DB58;
    case 368u: goto L_0893DB60;
    case 369u: goto L_0893DB70;
    case 370u: goto L_0893DB78;
    case 371u: goto L_0893DB80;
    case 372u: goto L_0893DB88;
    case 373u: goto L_0893DB90;
    case 374u: goto L_0893DB98;
    case 375u: goto L_0893DBAC;
    case 376u: goto L_0893DBC4;
    case 377u: goto L_0893DBCC;
    case 378u: goto L_0893DBD4;
    case 379u: goto L_0893DBE0;
    case 380u: goto L_0893DBE8;
    case 381u: goto L_0893DBF8;
    case 382u: goto L_0893DC00;
    case 383u: goto L_0893DC20;
    case 384u: goto L_0893DC24;
    case 385u: goto L_0893DC30;
    case 386u: goto L_0893DC38;
    case 387u: goto L_0893DC44;
    case 388u: goto L_0893DC4C;
    case 389u: goto L_0893DC54;
    case 390u: goto L_0893DC5C;
    case 391u: goto L_0893DC64;
    case 392u: goto L_0893DC70;
    case 393u: goto L_0893DC78;
    case 394u: goto L_0893DC80;
    case 395u: goto L_0893DC88;
    case 396u: goto L_0893DC90;
    case 397u: goto L_0893DC98;
    case 398u: goto L_0893DCAC;
    case 399u: goto L_0893DCC4;
    case 400u: goto L_0893DCCC;
    case 401u: goto L_0893DCD8;
    case 402u: goto L_0893DCE0;
    case 403u: goto L_0893DCEC;
    case 404u: goto L_0893DCF4;
    case 405u: goto L_0893DD00;
    case 406u: goto L_0893DD08;
    case 407u: goto L_0893DD14;
    case 408u: goto L_0893DD1C;
    case 409u: goto L_0893DD28;
    case 410u: goto L_0893DD30;
    case 411u: goto L_0893DD3C;
    case 412u: goto L_0893DD40;
    case 413u: goto L_0893DD4C;
    case 414u: goto L_0893DD58;
    case 415u: goto L_0893DD60;
    case 416u: goto L_0893DD70;
    case 417u: goto L_0893DD74;
    case 418u: goto L_0893DD7C;
    case 419u: goto L_0893DD8C;
    case 420u: goto L_0893DD94;
    case 421u: goto L_0893DDA4;
    case 422u: goto L_0893DDA8;
    case 423u: goto L_0893DDB0;
    case 424u: goto L_0893DDB8;
    case 425u: goto L_0893DDD0;
    case 426u: goto L_0893DDE4;
    case 427u: goto L_0893DDF4;
    case 428u: goto L_0893DDF8;
    case 429u: goto L_0893DE04;
    case 430u: goto L_0893DE0C;
    case 431u: goto L_0893DE1C;
    case 432u: goto L_0893DE24;
    case 433u: goto L_0893DE34;
    case 434u: goto L_0893DE3C;
    case 435u: goto L_0893DE54;
    case 436u: goto L_0893DE68;
    case 437u: goto L_0893DE78;
    case 438u: goto L_0893DE84;
    case 439u: goto L_0893DE90;
    case 440u: goto L_0893DE98;
    case 441u: goto L_0893DE9C;
    case 442u: goto L_0893DEA4;
    case 443u: goto L_0893DEB0;
    case 444u: goto L_0893DEB8;
    case 445u: goto L_0893E0A0;
    case 446u: goto L_0893E114;
    case 447u: goto L_0893E118;
    case 448u: goto L_0893E18C;
    case 449u: goto L_0893E190;
    case 450u: goto L_0893E1A0;
    case 451u: goto L_0893E278;
    case 452u: goto L_0893E334;
    case 453u: goto L_0893E360;
    case 454u: goto L_0893E378;
    case 455u: goto L_0893E3A4;
    case 456u: goto L_0893E3B4;
    case 457u: goto L_0893E418;
    case 458u: goto L_0893E430;
    case 459u: goto L_0893E438;
    case 460u: goto L_0893E444;
    case 461u: goto L_0893E44C;
    case 462u: goto L_0893E45C;
    case 463u: goto L_0893E498;
    case 464u: goto L_0893E4F4;
    case 465u: goto L_0893E4FC;
    case 466u: goto L_0893E514;
    case 467u: goto L_0893E51C;
    case 468u: goto L_0893E524;
    case 469u: goto L_0893E52C;
    case 470u: goto L_0893E53C;
    case 471u: goto L_0893E554;
    case 472u: goto L_0893E55C;
    case 473u: goto L_0893E574;
    case 474u: goto L_0893E580;
    case 475u: goto L_0893E5A8;
    case 476u: goto L_0893E5B0;
    case 477u: goto L_0893E5BC;
    case 478u: goto L_0893E5CC;
    case 479u: goto L_0893E5D8;
    case 480u: goto L_0893E5FC;
    case 481u: goto L_0893E610;
    case 482u: goto L_0893E638;
    case 483u: goto L_0893E640;
    case 484u: goto L_0893E648;
    case 485u: goto L_0893E650;
    case 486u: goto L_0893E658;
    case 487u: goto L_0893E660;
    case 488u: goto L_0893E664;
    case 489u: goto L_0893E66C;
    case 490u: goto L_0893E674;
    case 491u: goto L_0893E67C;
    case 492u: goto L_0893E684;
    case 493u: goto L_0893E690;
    case 494u: goto L_0893E698;
    case 495u: goto L_0893E6A0;
    case 496u: goto L_0893E6B0;
    case 497u: goto L_0893E6B8;
    case 498u: goto L_0893E6C0;
    case 499u: goto L_0893E6C8;
    case 500u: goto L_0893E6D0;
    case 501u: goto L_0893E6D8;
    case 502u: goto L_0893E6E0;
    case 503u: goto L_0893E6E8;
    case 504u: goto L_0893E6F0;
    case 505u: goto L_0893E6FC;
    case 506u: goto L_0893E708;
    case 507u: goto L_0893E720;
    case 508u: goto L_0893E73C;
    case 509u: goto L_0893E744;
    case 510u: goto L_0893E74C;
    case 511u: goto L_0893E754;
    case 512u: goto L_0893E764;
    case 513u: goto L_0893E774;
    case 514u: goto L_0893E7A8;
    case 515u: goto L_0893E7B8;
    case 516u: goto L_0893E7C8;
    case 517u: goto L_0893E7DC;
    case 518u: goto L_0893E7F4;
    case 519u: goto L_0893E810;
    case 520u: goto L_0893E818;
    case 521u: goto L_0893E830;
    case 522u: goto L_0893E84C;
    case 523u: goto L_0893E854;
    case 524u: goto L_0893E85C;
    case 525u: goto L_0893E864;
    case 526u: goto L_0893E86C;
    case 527u: goto L_0893E878;
    case 528u: goto L_0893E888;
    case 529u: goto L_0893E898;
    case 530u: goto L_0893E8A4;
    case 531u: goto L_0893E8C4;
    case 532u: goto L_0893E8D8;
    case 533u: goto L_0893E90C;
    case 534u: goto L_0893E914;
    case 535u: goto L_0893E91C;
    case 536u: goto L_0893E924;
    case 537u: goto L_0893E928;
    case 538u: goto L_0893E930;
    case 539u: goto L_0893E940;
    case 540u: goto L_0893E94C;
    case 541u: goto L_0893E954;
    case 542u: goto L_0893E96C;
    case 543u: goto L_0893E97C;
    case 544u: goto L_0893E998;
    case 545u: goto L_0893E9A4;
    case 546u: goto L_0893E9AC;
    case 547u: goto L_0893E9BC;
    case 548u: goto L_0893E9C8;
    case 549u: goto L_0893E9DC;
    case 550u: goto L_0893E9E4;
    case 551u: goto L_0893E9EC;
    case 552u: goto L_0893E9F4;
    case 553u: goto L_0893E9FC;
    case 554u: goto L_0893EA10;
    case 555u: goto L_0893EA18;
    case 556u: goto L_0893EA2C;
    case 557u: goto L_0893EA44;
    case 558u: goto L_0893EA80;
    case 559u: goto L_0893EAAC;
    case 560u: goto L_0893EAB4;
    case 561u: goto L_0893EABC;
    case 562u: goto L_0893EAC4;
    case 563u: goto L_0893EAD0;
    case 564u: goto L_0893EAD8;
    case 565u: goto L_0893EAE8;
    case 566u: goto L_0893EAF0;
    case 567u: goto L_0893EB1C;
    case 568u: goto L_0893EB24;
    case 569u: goto L_0893EB3C;
    case 570u: goto L_0893EB54;
    case 571u: goto L_0893EB5C;
    case 572u: goto L_0893EB80;
    case 573u: goto L_0893EB88;
    case 574u: goto L_0893EB94;
    case 575u: goto L_0893EBA8;
    case 576u: goto L_0893EBB0;
    case 577u: goto L_0893EBBC;
    case 578u: goto L_0893EBCC;
    case 579u: goto L_0893EBD4;
    case 580u: goto L_0893EBE4;
    case 581u: goto L_0893EBF4;
    case 582u: goto L_0893EC00;
    case 583u: goto L_0893EC08;
    case 584u: goto L_0893EC10;
    case 585u: goto L_0893EC18;
    case 586u: goto L_0893EC20;
    case 587u: goto L_0893EC28;
    case 588u: goto L_0893EC38;
    case 589u: goto L_0893EC40;
    case 590u: goto L_0893EC48;
    case 591u: goto L_0893EC50;
    case 592u: goto L_0893EC58;
    case 593u: goto L_0893EC68;
    case 594u: goto L_0893EC74;
    case 595u: goto L_0893EC80;
    case 596u: goto L_0893EC88;
    case 597u: goto L_0893EC8C;
    case 598u: goto L_0893EC98;
    case 599u: goto L_0893ECA8;
    case 600u: goto L_0893ECBC;
    case 601u: goto L_0893ECC4;
    case 602u: goto L_0893ECD4;
    case 603u: goto L_0893ECE0;
    case 604u: goto L_0893ECEC;
    case 605u: goto L_0893ECF4;
    case 606u: goto L_0893ECF8;
    case 607u: goto L_0893ED04;
    case 608u: goto L_0893ED14;
    case 609u: goto L_0893ED28;
    case 610u: goto L_0893ED30;
    case 611u: goto L_0893ED38;
    case 612u: goto L_0893ED48;
    case 613u: goto L_0893ED50;
    case 614u: goto L_0893ED58;
    case 615u: goto L_0893ED60;
    case 616u: goto L_0893ED68;
    case 617u: goto L_0893ED78;
    case 618u: goto L_0893ED84;
    case 619u: goto L_0893ED90;
    case 620u: goto L_0893ED98;
    case 621u: goto L_0893ED9C;
    case 622u: goto L_0893EDA8;
    case 623u: goto L_0893EDB8;
    case 624u: goto L_0893EDCC;
    case 625u: goto L_0893EDD4;
    case 626u: goto L_0893EDE4;
    case 627u: goto L_0893EDF0;
    case 628u: goto L_0893EDFC;
    case 629u: goto L_0893EE04;
    case 630u: goto L_0893EE08;
    case 631u: goto L_0893EE14;
    case 632u: goto L_0893EE24;
    case 633u: goto L_0893EE38;
    case 634u: goto L_0893EE40;
    case 635u: goto L_0893EE50;
    case 636u: goto L_0893EE5C;
    case 637u: goto L_0893EE68;
    case 638u: goto L_0893EE70;
    case 639u: goto L_0893EE74;
    case 640u: goto L_0893EE80;
    case 641u: goto L_0893EE90;
    case 642u: goto L_0893EEA4;
    case 643u: goto L_0893EEB4;
    case 644u: goto L_0893EECC;
    case 645u: goto L_0893EED4;
    case 646u: goto L_0893EEEC;
    case 647u: goto L_0893EEF4;
    case 648u: goto L_0893EF08;
    case 649u: goto L_0893EF1C;
    case 650u: goto L_0893EF24;
    case 651u: goto L_0893EF30;
    case 652u: goto L_0893EF40;
    case 653u: goto L_0893EF4C;
    case 654u: goto L_0893EF70;
    case 655u: goto L_0893EF84;
    case 656u: goto L_0893EFAC;
    case 657u: goto L_0893EFB4;
    case 658u: goto L_0893EFBC;
    case 659u: goto L_0893EFC4;
    case 660u: goto L_0893EFCC;
    case 661u: goto L_0893EFD4;
    case 662u: goto L_0893EFD8;
    case 663u: goto L_0893EFE0;
    case 664u: goto L_0893EFE8;
    case 665u: goto L_0893EFF0;
    case 666u: goto L_0893EFF8;
    case 667u: goto L_0893F008;
    case 668u: goto L_0893F010;
    case 669u: goto L_0893F018;
    case 670u: goto L_0893F020;
    case 671u: goto L_0893F028;
    case 672u: goto L_0893F030;
    case 673u: goto L_0893F038;
    case 674u: goto L_0893F040;
    case 675u: goto L_0893F068;
    case 676u: goto L_0893F08C;
    case 677u: goto L_0893F0AC;
    case 678u: goto L_0893F0E4;
    case 679u: goto L_0893F0F8;
    case 680u: goto L_0893F104;
    case 681u: goto L_0893F10C;
    case 682u: goto L_0893F120;
    case 683u: goto L_0893F12C;
    case 684u: goto L_0893F13C;
    case 685u: goto L_0893F144;
    case 686u: goto L_0893F14C;
    case 687u: goto L_0893F160;
    case 688u: goto L_0893F168;
    case 689u: goto L_0893F170;
    case 690u: goto L_0893F180;
    case 691u: goto L_0893F19C;
    case 692u: goto L_0893F1A4;
    case 693u: goto L_0893F1B0;
    case 694u: goto L_0893F1BC;
    case 695u: goto L_0893F1CC;
    case 696u: goto L_0893F1DC;
    case 697u: goto L_0893F1E8;
    case 698u: goto L_0893F208;
    case 699u: goto L_0893F210;
    case 700u: goto L_0893F224;
    case 701u: goto L_0893F22C;
    case 702u: goto L_0893F238;
    case 703u: goto L_0893F244;
    case 704u: goto L_0893F25C;
    case 705u: goto L_0893F27C;
    case 706u: goto L_0893F288;
    case 707u: goto L_0893F294;
    case 708u: goto L_0893F2A8;
    case 709u: goto L_0893F2B0;
    case 710u: goto L_0893F2B4;
    case 711u: goto L_0893F2BC;
    case 712u: goto L_0893F2D0;
    case 713u: goto L_0893F2E8;
    case 714u: goto L_0893F2EC;
    case 715u: goto L_0893F2F4;
    case 716u: goto L_0893F2FC;
    case 717u: goto L_0893F304;
    case 718u: goto L_0893F310;
    case 719u: goto L_0893F31C;
    case 720u: goto L_0893F324;
    case 721u: goto L_0893F330;
    case 722u: goto L_0893F344;
    case 723u: goto L_0893F35C;
    case 724u: goto L_0893F364;
    case 725u: goto L_0893F36C;
    case 726u: goto L_0893F378;
    case 727u: goto L_0893F388;
    case 728u: goto L_0893F394;
    case 729u: goto L_0893F3B8;
    case 730u: goto L_0893F3CC;
    case 731u: goto L_0893F3F4;
    case 732u: goto L_0893F3FC;
    case 733u: goto L_0893F404;
    case 734u: goto L_0893F40C;
    case 735u: goto L_0893F41C;
    case 736u: goto L_0893F424;
    case 737u: goto L_0893F42C;
    case 738u: goto L_0893F434;
    case 739u: goto L_0893F43C;
    case 740u: goto L_0893F444;
    case 741u: goto L_0893F44C;
    case 742u: goto L_0893F454;
    case 743u: goto L_0893F45C;
    case 744u: goto L_0893F464;
    case 745u: goto L_0893F470;
    case 746u: goto L_0893F478;
    case 747u: goto L_0893F480;
    case 748u: goto L_0893F490;
    case 749u: goto L_0893F498;
    case 750u: goto L_0893F4CC;
    case 751u: goto L_0893F4E4;
    case 752u: goto L_0893F4EC;
    case 753u: goto L_0893F520;
    case 754u: goto L_0893F538;
    case 755u: goto L_0893F540;
    case 756u: goto L_0893F558;
    case 757u: goto L_0893F568;
    case 758u: goto L_0893F574;
    case 759u: goto L_0893F57C;
    case 760u: goto L_0893F584;
    case 761u: goto L_0893F594;
    case 762u: goto L_0893F59C;
    case 763u: goto L_0893F5A4;
    case 764u: goto L_0893F5B8;
    case 765u: goto L_0893F5C0;
    case 766u: goto L_0893F5D4;
    case 767u: goto L_0893F5E8;
    case 768u: goto L_0893F600;
    case 769u: goto L_0893F604;
    case 770u: goto L_0893F60C;
    case 771u: goto L_0893F61C;
    case 772u: goto L_0893F628;
    case 773u: goto L_0893F634;
    case 774u: goto L_0893F64C;
    case 775u: goto L_0893F650;
    case 776u: goto L_0893F658;
    case 777u: goto L_0893F674;
    case 778u: goto L_0893F67C;
    case 779u: goto L_0893F68C;
    case 780u: goto L_0893F6B0;
    case 781u: goto L_0893F6B8;
    case 782u: goto L_0893F6C4;
    case 783u: goto L_0893F6D0;
    case 784u: goto L_0893F6E0;
    case 785u: goto L_0893F6F0;
    case 786u: goto L_0893F6FC;
    case 787u: goto L_0893F71C;
    case 788u: goto L_0893F730;
    case 789u: goto L_0893F754;
    case 790u: goto L_0893F760;
    case 791u: goto L_0893F770;
    case 792u: goto L_0893F778;
    case 793u: goto L_0893F784;
    case 794u: goto L_0893F798;
    case 795u: goto L_0893F7AC;
    case 796u: goto L_0893F7B4;
    case 797u: goto L_0893F7BC;
    case 798u: goto L_0893F7C4;
    case 799u: goto L_0893F7CC;
    case 800u: goto L_0893F7D4;
    case 801u: goto L_0893F7E4;
    case 802u: goto L_0893F7EC;
    case 803u: goto L_0893F7F8;
    case 804u: goto L_0893F800;
    case 805u: goto L_0893F808;
    case 806u: goto L_0893F810;
    case 807u: goto L_0893F818;
    case 808u: goto L_0893F824;
    case 809u: goto L_0893F838;
    case 810u: goto L_0893F850;
    case 811u: goto L_0893F858;
    case 812u: goto L_0893F874;
    case 813u: goto L_0893F87C;
    case 814u: goto L_0893F888;
    case 815u: goto L_0893F890;
    case 816u: goto L_0893F898;
    case 817u: goto L_0893F8A8;
    case 818u: goto L_0893F8B0;
    case 819u: goto L_0893F8B8;
    case 820u: goto L_0893F8C0;
    case 821u: goto L_0893F8C8;
    case 822u: goto L_0893F8D0;
    case 823u: goto L_0893F8DC;
    case 824u: goto L_0893F8E4;
    case 825u: goto L_0893F8EC;
    case 826u: goto L_0893F8FC;
    case 827u: goto L_0893F908;
    case 828u: goto L_0893F918;
    case 829u: goto L_0893F924;
    case 830u: goto L_0893F948;
    case 831u: goto L_0893F95C;
    case 832u: goto L_0893F984;
    case 833u: goto L_0893F98C;
    case 834u: goto L_0893F994;
    case 835u: goto L_0893F9A4;
    case 836u: goto L_0893F9AC;
    case 837u: goto L_0893F9B4;
    case 838u: goto L_0893F9BC;
    case 839u: goto L_0893F9C4;
    case 840u: goto L_0893F9CC;
    case 841u: goto L_0893F9D4;
    case 842u: goto L_0893F9DC;
    case 843u: goto L_0893F9E4;
    case 844u: goto L_0893F9EC;
    case 845u: goto L_0893F9F4;
    case 846u: goto L_0893FA04;
    case 847u: goto L_0893FA14;
    case 848u: goto L_0893FA20;
    case 849u: goto L_0893FA40;
    case 850u: goto L_0893FA54;
    case 851u: goto L_0893FA78;
    case 852u: goto L_0893FA80;
    case 853u: goto L_0893FA88;
    case 854u: goto L_0893FA90;
    case 855u: goto L_0893FA98;
    case 856u: goto L_0893FAA0;
    case 857u: goto L_0893FAAC;
    case 858u: goto L_0893FABC;
    case 859u: goto L_0893FAC8;
    case 860u: goto L_0893FAEC;
    case 861u: goto L_0893FB00;
    case 862u: goto L_0893FB28;
    case 863u: goto L_0893FB30;
    case 864u: goto L_0893FB38;
    case 865u: goto L_0893FB48;
    case 866u: goto L_0893FB50;
    case 867u: goto L_0893FB58;
    case 868u: goto L_0893FB60;
    case 869u: goto L_0893FB68;
    case 870u: goto L_0893FB70;
    case 871u: goto L_0893FB78;
    case 872u: goto L_0893FB84;
    case 873u: goto L_0893FB94;
    case 874u: goto L_0893FBA8;
    case 875u: goto L_0893FBB0;
    case 876u: goto L_0893FBBC;
    case 877u: goto L_0893FBC8;
    case 878u: goto L_0893FBD4;
    case 879u: goto L_0893FBE8;
    case 880u: goto L_0893FBF0;
    case 881u: goto L_0893FBFC;
    case 882u: goto L_0893FC08;
    case 883u: goto L_0893FC14;
    case 884u: goto L_0893FC18;
    case 885u: goto L_0893FC24;
    case 886u: goto L_0893FC2C;
    case 887u: goto L_0893FC34;
    case 888u: goto L_0893FC48;
    case 889u: goto L_0893FC50;
    case 890u: goto L_0893FC64;
    case 891u: goto L_0893FC6C;
    case 892u: goto L_0893FC74;
    case 893u: goto L_0893FC8C;
    case 894u: goto L_0893FC94;
    case 895u: goto L_0893FCB0;
    case 896u: goto L_0893FCB8;
    case 897u: goto L_0893FCC8;
    case 898u: goto L_0893FCD8;
    case 899u: goto L_0893FCE4;
    case 900u: goto L_0893FD04;
    case 901u: goto L_0893FD18;
    case 902u: goto L_0893FD34;
    case 903u: goto L_0893FD40;
    case 904u: goto L_0893FD50;
    case 905u: goto L_0893FD64;
    case 906u: goto L_0893FD6C;
    case 907u: goto L_0893FD78;
    case 908u: goto L_0893FD84;
    case 909u: goto L_0893FD90;
    case 910u: goto L_0893FD98;
    case 911u: goto L_0893FDA4;
    case 912u: goto L_0893FDC4;
    case 913u: goto L_0893FDE0;
    case 914u: goto L_0893FDE4;
    case 915u: goto L_0893FE14;
    case 916u: goto L_0893FE24;
    case 917u: goto L_0893FE30;
    case 918u: goto L_0893FE40;
    case 919u: goto L_0893FE48;
    case 920u: goto L_0893FE84;
    case 921u: goto L_0893FEA0;
    case 922u: goto L_0893FEA8;
    case 923u: goto L_0893FEC0;
    case 924u: goto L_0893FEC4;
    case 925u: goto L_0893FEF4;
    case 926u: goto L_0893FEFC;
    case 927u: goto L_0893FF30;
    case 928u: goto L_0893FF38;
    case 929u: goto L_0893FF40;
    case 930u: goto L_0893FF5C;
    case 931u: goto L_0893FF64;
    case 932u: goto L_0893FF70;
    case 933u: goto L_0893FF84;
    case 934u: goto L_0893FF9C;
    case 935u: goto L_0893FFA4;
    case 936u: goto L_0893FFAC;
    case 937u: goto L_0893FFB8;
    case 938u: goto L_0893FFC8;
    case 939u: goto L_0893FFD4;
    case 940u: goto L_0893FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0893C004:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30088));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C02C;
      }
      goto L_0893C024;
    }
L_0893C024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C064;
      }
      goto L_0893C02C;
    }
L_0893C02C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C068;
      }
      goto L_0893C034;
    }
L_0893C034:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30088));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C05C;
      }
      goto L_0893C054;
    }
L_0893C054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C064;
      }
      goto L_0893C05C;
    }
L_0893C05C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C068;
      }
      goto L_0893C064;
    }
L_0893C064:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C068;
L_0893C068:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C070:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0893C0A8;
      }
      goto L_0893C0A0;
    }
L_0893C0A0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893C0B0;
      }
      goto L_0893C0A8;
    }
L_0893C0A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C0B4;
      }
      goto L_0893C0B0;
    }
L_0893C0B0:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C0B4;
L_0893C0B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C0BC:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C0F0;
      }
      goto L_0893C0E8;
    }
L_0893C0E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C0F4;
      }
      goto L_0893C0F0;
    }
L_0893C0F0:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C0F4;
L_0893C0F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C0FC:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C1C4;
      }
      goto L_0893C15C;
    }
L_0893C15C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(120));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893C1BC;
      }
      goto L_0893C1B4;
    }
L_0893C1B4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893C1BC;
      }
      goto L_0893C1BC;
    }
L_0893C1BC:
    ctx.gpr[31] = (0x0893C1C4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893C1C4u) goto L_0893C1C4;
    return;
L_0893C1C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C1D0:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C1FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2275u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11856));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893C22Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 129u, 0x0893884Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C22Cu) goto L_0893C22C;
    return;
L_0893C22C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C238:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6576)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893C250;
      }
      goto L_0893C248;
    }
L_0893C248:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C254;
      }
      goto L_0893C250;
    }
L_0893C250:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C254;
L_0893C254:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C25C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C368;
      }
      goto L_0893C280;
    }
L_0893C280:
    ctx.gpr[4] = (ctx.gpr[16] << 8u);
    goto L_0893C284;
L_0893C284:
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(23) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C310;
      }
      goto L_0893C2A8;
    }
L_0893C2A8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30528)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C2C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C358;
      }
      goto L_0893C2C8;
    }
L_0893C2C8:
    ctx.gpr[4] = (ctx.gpr[16] << 8u);
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[31] = (0x0893C2F8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 659u, 0x0893B524u>(ctx, &aot_mem) && ctx.pc == 0x0893C2F8u) goto L_0893C2F8;
    return;
L_0893C2F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C308;
      }
      goto L_0893C300;
    }
L_0893C300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C358;
      }
      goto L_0893C308;
    }
L_0893C308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C36C;
      }
      goto L_0893C310;
    }
L_0893C310:
    ctx.gpr[4] = (ctx.gpr[16] << 8u);
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[31] = (0x0893C340u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 659u, 0x0893B524u>(ctx, &aot_mem) && ctx.pc == 0x0893C340u) goto L_0893C340;
    return;
L_0893C340:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C350;
      }
      goto L_0893C348;
    }
L_0893C348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C358;
      }
      goto L_0893C350;
    }
L_0893C350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C36C;
      }
      goto L_0893C358;
    }
L_0893C358:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 8u);
      if (branch_taken) {
          goto L_0893C284;
      }
      goto L_0893C368;
    }
L_0893C368:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C36C;
L_0893C36C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C380:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6572)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C38C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893C3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893C3A4u) goto L_0893C3A4;
    return;
L_0893C3A4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0893C3B0u);
    ctx.gpr[4] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C3B0u) goto L_0893C3B0;
    return;
L_0893C3B0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893C3C8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x0893C3C8u) goto L_0893C3C8;
    return;
L_0893C3C8:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1432), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893C3F8;
      }
      goto L_0893C3F0;
    }
L_0893C3F0:
    ctx.gpr[4] = (0u | 34u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1708), ctx.gpr[4]);
    goto L_0893C3F8;
L_0893C3F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C40C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[14];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C44C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11856));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_0893C468;
L_0893C468:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C47C;
      }
      goto L_0893C474;
    }
L_0893C474:
    ctx.gpr[31] = (0x0893C47Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 382u, 0x08941ACCu>(ctx, &aot_mem) && ctx.pc == 0x0893C47Cu) goto L_0893C47C;
    return;
L_0893C47C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0893C468;
      }
      goto L_0893C48C;
    }
L_0893C48C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6612), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6616), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C4B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (2275u << 16u);
    ctx.gpr[18] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[30] = (0u | 27u);
    ctx.gpr[23] = (0u | 28u);
    ctx.gpr[22] = (0u | 29u);
    ctx.gpr[21] = (0u | 30u);
    ctx.gpr[20] = (0u | 31u);
    ctx.gpr[19] = (0u | 32u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11856));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-30072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    goto L_0893C510;
L_0893C510:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 17u);
      if (branch_taken) {
          goto L_0893C578;
      }
      goto L_0893C520;
    }
L_0893C520:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_0893C578;
      }
      goto L_0893C528;
    }
L_0893C528:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 24u);
      if (branch_taken) {
          goto L_0893C578;
      }
      goto L_0893C530;
    }
L_0893C530:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 25u);
      if (branch_taken) {
          goto L_0893C578;
      }
      goto L_0893C538;
    }
L_0893C538:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 26u);
      if (branch_taken) {
          goto L_0893C578;
      }
      goto L_0893C540;
    }
L_0893C540:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893C578;
      }
      goto L_0893C548;
    }
L_0893C548:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0893C578;
      }
      goto L_0893C550;
    }
L_0893C550:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0893C578;
      }
      goto L_0893C558;
    }
L_0893C558:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0893C578;
      }
      goto L_0893C560;
    }
L_0893C560:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0893C578;
      }
      goto L_0893C568;
    }
L_0893C568:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0893C578;
      }
      goto L_0893C570;
    }
L_0893C570:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0893C5C4;
      }
      goto L_0893C578;
    }
L_0893C578:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C5C4;
      }
      goto L_0893C584;
    }
L_0893C584:
    ctx.gpr[31] = (0x0893C58Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_0893C824;
L_0893C58C:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893C5B0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 547u, 0x0893ABD0u>(ctx, &aot_mem) && ctx.pc == 0x0893C5B0u) goto L_0893C5B0;
    return;
L_0893C5B0:
    ctx.gpr[31] = (0x0893C5B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 358u, 0x08939F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C5B8u) goto L_0893C5B8;
    return;
L_0893C5B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0893C5C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893C5C4u) goto L_0893C5C4;
    return;
L_0893C5C4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0893C510;
      }
      goto L_0893C5D4;
    }
L_0893C5D4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0893C608:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] & 255u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-30072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_0893C63C;
L_0893C63C:
    ctx.gpr[31] = (0x0893C644u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0893C824;
L_0893C644:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C670;
      }
      goto L_0893C66C;
    }
L_0893C66C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0893C670;
L_0893C670:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0893C63C;
      }
      goto L_0893C680;
    }
L_0893C680:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0893C6A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893C75C;
      }
      goto L_0893C6C4;
    }
L_0893C6C4:
    ctx.gpr[4] = (ctx.gpr[17] << 8u);
    goto L_0893C6C8;
L_0893C6C8:
    ctx.gpr[5] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_0893C74C;
      }
      goto L_0893C6F0;
    }
L_0893C6F0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30624)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C708:
    ctx.gpr[4] = (ctx.gpr[17] << 8u);
    ctx.gpr[5] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0893C734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 645u, 0x0893B430u>(ctx, &aot_mem) && ctx.pc == 0x0893C734u) goto L_0893C734;
    return;
L_0893C734:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C744;
      }
      goto L_0893C73C;
    }
L_0893C73C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C74C;
      }
      goto L_0893C744;
    }
L_0893C744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C760;
      }
      goto L_0893C74C;
    }
L_0893C74C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 8u);
      if (branch_taken) {
          goto L_0893C6C8;
      }
      goto L_0893C75C;
    }
L_0893C75C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C760;
L_0893C760:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C774:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893C80C;
      }
      goto L_0893C794;
    }
L_0893C794:
    ctx.gpr[4] = (ctx.gpr[17] << 8u);
    ctx.gpr[5] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C7FC;
      }
      goto L_0893C7B8;
    }
L_0893C7B8:
    ctx.gpr[4] = (ctx.gpr[17] << 8u);
    ctx.gpr[5] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0893C7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 645u, 0x0893B430u>(ctx, &aot_mem) && ctx.pc == 0x0893C7E4u) goto L_0893C7E4;
    return;
L_0893C7E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C7F4;
      }
      goto L_0893C7EC;
    }
L_0893C7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C7FC;
      }
      goto L_0893C7F4;
    }
L_0893C7F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C810;
      }
      goto L_0893C7FC;
    }
L_0893C7FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C794;
      }
      goto L_0893C80C;
    }
L_0893C80C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C810;
L_0893C810:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C824:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C8AC;
      }
      goto L_0893C834;
    }
L_0893C834:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30696)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C84C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893C8B0;
      }
      goto L_0893C854;
    }
L_0893C854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C8B0;
      }
      goto L_0893C85C;
    }
L_0893C85C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0893C8B0;
      }
      goto L_0893C864;
    }
L_0893C864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_0893C8B0;
      }
      goto L_0893C86C;
    }
L_0893C86C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0893C8B0;
      }
      goto L_0893C874;
    }
L_0893C874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_0893C8B0;
      }
      goto L_0893C87C;
    }
L_0893C87C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_0893C8B0;
      }
      goto L_0893C884;
    }
L_0893C884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 7u);
      if (branch_taken) {
          goto L_0893C8B0;
      }
      goto L_0893C88C;
    }
L_0893C88C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_0893C8B0;
      }
      goto L_0893C894;
    }
L_0893C894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_0893C8B0;
      }
      goto L_0893C89C;
    }
L_0893C89C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_0893C8B0;
      }
      goto L_0893C8A4;
    }
L_0893C8A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_0893C8B0;
      }
      goto L_0893C8AC;
    }
L_0893C8AC:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C8B0;
L_0893C8B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C8B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893C8D8u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0893C4B0;
L_0893C8D8:
    ctx.gpr[4] = (0u | 9668u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6720)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[18] = (2275u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6591)));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(11856));
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893C91C;
      }
      goto L_0893C90C;
    }
L_0893C90C:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6590)));
      if (branch_taken) {
          goto L_0893C924;
      }
      goto L_0893C91C;
    }
L_0893C91C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6590)));
    goto L_0893C924;
L_0893C924:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893C93C;
      }
      goto L_0893C92C;
    }
L_0893C92C:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6588)));
      if (branch_taken) {
          goto L_0893C944;
      }
      goto L_0893C93C;
    }
L_0893C93C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6588)));
    goto L_0893C944;
L_0893C944:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6584)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6580)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30088)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30088));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6568)));
    ctx.gpr[7] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-30072));
    goto L_0893C9C8;
L_0893C9C8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
    goto L_0893C9D0;
L_0893C9D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0893C9D0;
      }
      goto L_0893CA58;
    }
L_0893CA58:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0893C9C8;
      }
      goto L_0893CA68;
    }
L_0893CA68:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_0893CA74;
L_0893CA74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0893CA84u);
    ctx.gpr[6] = (0u | 224u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0893CA84u) goto L_0893CA84;
    return;
L_0893CA84:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0893CA74;
      }
      goto L_0893CA98;
    }
L_0893CA98:
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
L_0893CAB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893CAD8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0893C4B0;
L_0893CAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6720), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (2275u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (2228u << 16u);
      if (branch_taken) {
          goto L_0893CB14;
      }
      goto L_0893CB0C;
    }
L_0893CB0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6591), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0893CB18;
      }
      goto L_0893CB14;
    }
L_0893CB14:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6591), static_cast<std::uint8_t>(0u));
    goto L_0893CB18;
L_0893CB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893CB2C;
      }
      goto L_0893CB24;
    }
L_0893CB24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6590), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0893CB30;
      }
      goto L_0893CB2C;
    }
L_0893CB2C:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6590), static_cast<std::uint8_t>(0u));
    goto L_0893CB30;
L_0893CB30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6588), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6584), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6580), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30088), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30088));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6568), ctx.gpr[4]);
    ctx.gpr[6] = (2276u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30072));
    goto L_0893CBB8;
L_0893CBB8:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_0893CBC0;
L_0893CBC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CC48;
    }
L_0893CC48:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0893CBB8;
      }
      goto L_0893CC58;
    }
L_0893CC58:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 13u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0893CC68;
L_0893CC68:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893CC78u);
    ctx.gpr[6] = (0u | 224u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0893CC78u) goto L_0893CC78;
    return;
L_0893CC78:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(156), 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0893CC98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 397u, 0x0893A310u>(ctx, &aot_mem) && ctx.pc == 0x0893CC98u) goto L_0893CC98;
    return;
L_0893CC98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0893CCB4;
      }
      goto L_0893CCA4;
    }
L_0893CCA4:
    ctx.gpr[31] = (0x0893CCACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 391u, 0x0893A2B4u>(ctx, &aot_mem) && ctx.pc == 0x0893CCACu) goto L_0893CCAC;
    return;
L_0893CCAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CCBC;
      }
      goto L_0893CCB4;
    }
L_0893CCB4:
    ctx.gpr[31] = (0x0893CCBCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893CCBCu) goto L_0893CCBC;
    return;
L_0893CCBC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0893CC68;
      }
      goto L_0893CCCC;
    }
L_0893CCCC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6612), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6616), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6572), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893CD2C;
      }
      goto L_0893CCF4;
    }
L_0893CCF4:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x0893CD0Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x08864708u>(ctx, &aot_mem) && ctx.pc == 0x0893CD0Cu) goto L_0893CD0C;
    return;
L_0893CD0C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-29992), ctx.gpr[2]);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893CD2C;
      }
      goto L_0893CD1C;
    }
L_0893CD1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0893CD2Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 99u, 0x08864748u>(ctx, &aot_mem) && ctx.pc == 0x0893CD2Cu) goto L_0893CD2C;
    return;
L_0893CD2C:
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
L_0893CD50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(213), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(213)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CDB0;
      }
      goto L_0893CD88;
    }
L_0893CD88:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2000));
    ctx.gpr[31] = (0x0893CDA8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893CDA8u) goto L_0893CDA8;
    return;
L_0893CDA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CDB8;
      }
      goto L_0893CDB0;
    }
L_0893CDB0:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0893CDB8;
L_0893CDB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CDC4:
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11856));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[4] = (2230u << 16u);
    goto L_0893CDD8;
L_0893CDD8:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0893CE00;
      }
      goto L_0893CDE4;
    }
L_0893CDE4:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(208), 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6720)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6720), ctx.gpr[8]);
    goto L_0893CE00;
L_0893CE00:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0893CDD8;
      }
      goto L_0893CE10;
    }
L_0893CE10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CE18:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(497)));
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(672)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(498))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(499))))));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[6] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CEAC;
      }
      goto L_0893CEA0;
    }
L_0893CEA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893CEAC;
L_0893CEAC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (1024u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CED0;
      }
      goto L_0893CEC0;
    }
L_0893CEC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    goto L_0893CED0;
L_0893CED0:
    ctx.gpr[7] = (2048u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CEF0;
      }
      goto L_0893CEE0;
    }
L_0893CEE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    goto L_0893CEF0;
L_0893CEF0:
    ctx.gpr[7] = (4u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CF10;
      }
      goto L_0893CF00;
    }
L_0893CF00:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    goto L_0893CF10;
L_0893CF10:
    ctx.gpr[7] = (4096u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CF30;
      }
      goto L_0893CF20;
    }
L_0893CF20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    goto L_0893CF30;
L_0893CF30:
    ctx.gpr[7] = (8192u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CF4C;
      }
      goto L_0893CF40;
    }
L_0893CF40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893CF4C;
L_0893CF4C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[6] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CF68;
      }
      goto L_0893CF5C;
    }
L_0893CF5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 32u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893CF68;
L_0893CF68:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CF84;
      }
      goto L_0893CF78;
    }
L_0893CF78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893CF84;
L_0893CF84:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CFA0;
      }
      goto L_0893CF94;
    }
L_0893CF94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 128u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893CFA0;
L_0893CFA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D00C;
      }
      goto L_0893CFAC;
    }
L_0893CFAC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[6] = (ctx.gpr[6] & 32u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CFC8;
      }
      goto L_0893CFBC;
    }
L_0893CFBC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 256u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893CFC8;
L_0893CFC8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CFE4;
      }
      goto L_0893CFD8;
    }
L_0893CFD8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 512u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893CFE4;
L_0893CFE4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D000;
      }
      goto L_0893CFF4;
    }
L_0893CFF4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 1024u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893D000;
L_0893D000:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1564)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893D03C;
      }
      goto L_0893D00C;
    }
L_0893D00C:
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0893D03C;
      }
      goto L_0893D018;
    }
L_0893D018:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D034;
      }
      goto L_0893D028;
    }
L_0893D028:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 256u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893D034;
L_0893D034:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1284)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0893D03C;
L_0893D03C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893D044:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893D070u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x0893D070u) goto L_0893D070;
    return;
L_0893D070:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] & 32768u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0893D084;
      }
      goto L_0893D080;
    }
L_0893D080:
    ctx.gpr[17] = (0u | 2u);
    goto L_0893D084;
L_0893D084:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D460;
      }
      goto L_0893D0B4;
    }
L_0893D0B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(39))))));
    ctx.gpr[31] = (0x0893D0C0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 423u, 0x08B01BB0u>(ctx, &aot_mem) && ctx.pc == 0x0893D0C0u) goto L_0893D0C0;
    return;
L_0893D0C0:
    ctx.gpr[31] = (0x0893D0C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28E68u>(ctx, &aot_mem) && ctx.pc == 0x0893D0C8u) goto L_0893D0C8;
    return;
L_0893D0C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D118;
      }
      goto L_0893D0D0;
    }
L_0893D0D0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0893D0DCu);
    ctx.gpr[4] = (0u | 1472u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x0893D0DCu) goto L_0893D0DC;
    return;
L_0893D0DC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D0FC;
      }
      goto L_0893D0E8;
    }
L_0893D0E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0893D0F8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 565u, 0x08A378CCu>(ctx, &aot_mem) && ctx.pc == 0x0893D0F8u) goto L_0893D0F8;
    return;
L_0893D0F8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0893D0FC;
L_0893D0FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0893D19C;
      }
      goto L_0893D118;
    }
L_0893D118:
    ctx.gpr[31] = (0x0893D120u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 112u, 0x08A28CB0u>(ctx, &aot_mem) && ctx.pc == 0x0893D120u) goto L_0893D120;
    return;
L_0893D120:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D164;
      }
      goto L_0893D128;
    }
L_0893D128:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0893D134u);
    ctx.gpr[4] = (0u | 1424u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x0893D134u) goto L_0893D134;
    return;
L_0893D134:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_0893D158;
    }
    goto L_0893D140;
L_0893D140:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0893D150u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 403u, 0x08A4DE78u>(ctx, &aot_mem) && ctx.pc == 0x0893D150u) goto L_0893D150;
    return;
L_0893D150:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0893D158;
L_0893D158:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0893D19C;
      }
      goto L_0893D164;
    }
L_0893D164:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0893D170u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x0893D170u) goto L_0893D170;
    return;
L_0893D170:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_0893D194;
    }
    goto L_0893D17C;
L_0893D17C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0893D18Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x0893D18Cu) goto L_0893D18C;
    return;
L_0893D18C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0893D194;
L_0893D194:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0893D19C;
L_0893D19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(504), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-129));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(497), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(599))))));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D264;
      }
      goto L_0893D254;
    }
L_0893D254:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D264;
L_0893D264:
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D284;
      }
      goto L_0893D270;
    }
L_0893D270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D284;
L_0893D284:
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D2A4;
      }
      goto L_0893D290;
    }
L_0893D290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D2A4;
L_0893D2A4:
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D2C4;
      }
      goto L_0893D2B0;
    }
L_0893D2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D2C4;
L_0893D2C4:
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D2E4;
      }
      goto L_0893D2D0;
    }
L_0893D2D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D2E4;
L_0893D2E4:
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D304;
      }
      goto L_0893D2F0;
    }
L_0893D2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D304;
L_0893D304:
    ctx.gpr[5] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D320;
      }
      goto L_0893D310;
    }
L_0893D310:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D320;
L_0893D320:
    ctx.gpr[5] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D33C;
      }
      goto L_0893D32C;
    }
L_0893D32C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D33C;
L_0893D33C:
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(322))))));
      if (branch_taken) {
          goto L_0893D38C;
      }
      goto L_0893D348;
    }
L_0893D348:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0893D35Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x0893D35Cu) goto L_0893D35C;
    return;
L_0893D35C:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x0893D374u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 285u, 0x08A89EA4u>(ctx, &aot_mem) && ctx.pc == 0x0893D374u) goto L_0893D374;
    return;
L_0893D374:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893D3B8;
      }
      goto L_0893D38C;
    }
L_0893D38C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0893D3A4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x0893D3A4u) goto L_0893D3A4;
    return;
L_0893D3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x0893D3B0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 285u, 0x08A89EA4u>(ctx, &aot_mem) && ctx.pc == 0x0893D3B0u) goto L_0893D3B0;
    return;
L_0893D3B0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    goto L_0893D3B8;
L_0893D3B8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D428;
      }
      goto L_0893D3C0;
    }
L_0893D3C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0893D3E0;
      }
      goto L_0893D3D0;
    }
L_0893D3D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D3E0;
L_0893D3E0:
    ctx.gpr[6] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D404;
      }
      goto L_0893D3EC;
    }
L_0893D3EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D404;
L_0893D404:
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D41C;
      }
      goto L_0893D410;
    }
L_0893D410:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893D41C;
L_0893D41C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893D458;
      }
      goto L_0893D428;
    }
L_0893D428:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D458;
      }
      goto L_0893D434;
    }
L_0893D434:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] & 256u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0893D450;
      }
      goto L_0893D444;
    }
L_0893D444:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0893D450;
L_0893D450:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0893D458;
L_0893D458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0893D464;
      }
      goto L_0893D460;
    }
L_0893D460:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893D464;
L_0893D464:
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
L_0893D480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1456));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1392), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1396), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1400), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1404), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1408), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1412), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1416), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1420), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1424), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1428), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1432), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1436), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1440), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893D4D8;
      }
      goto L_0893D4C8;
    }
L_0893D4C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D4F0;
      }
      goto L_0893D4D8;
    }
L_0893D4D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D4F8;
      }
      goto L_0893D4E8;
    }
L_0893D4E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D678;
      }
      goto L_0893D4F0;
    }
L_0893D4F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 350u, 0x08941734u>(ctx, &aot_mem); return;
      }
      goto L_0893D4F8;
    }
L_0893D4F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D678;
      }
      goto L_0893D508;
    }
L_0893D508:
    ctx.gpr[31] = (0x0893D510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893D510u) goto L_0893D510;
    return;
L_0893D510:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D670;
      }
      goto L_0893D518;
    }
L_0893D518:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D670;
      }
      goto L_0893D524;
    }
L_0893D524:
    ctx.gpr[31] = (0x0893D52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893D52Cu) goto L_0893D52C;
    return;
L_0893D52C:
    ctx.gpr[31] = (0x0893D534u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893D534u) goto L_0893D534;
    return;
L_0893D534:
    ctx.gpr[6] = (16000u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0893D548u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 129u, 0x0893884Cu>(ctx, &aot_mem) && ctx.pc == 0x0893D548u) goto L_0893D548;
    return;
L_0893D548:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893D56C;
      }
      goto L_0893D554;
    }
L_0893D554:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6572), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2368), ctx.gpr[16]);
    goto L_0893D56C;
L_0893D56C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D670;
      }
      goto L_0893D574;
    }
L_0893D574:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893D584u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 160u, 0x08938B58u>(ctx, &aot_mem) && ctx.pc == 0x0893D584u) goto L_0893D584;
    return;
L_0893D584:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D598;
      }
      goto L_0893D58C;
    }
L_0893D58C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2372), ctx.gpr[16]);
    goto L_0893D598;
L_0893D598:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 154u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D670;
      }
      goto L_0893D5A8;
    }
L_0893D5A8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893D650;
      }
      goto L_0893D5E0;
    }
L_0893D5E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893D650;
      }
      goto L_0893D604;
    }
L_0893D604:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893D650;
      }
      goto L_0893D628;
    }
L_0893D628:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893D650;
      }
      goto L_0893D64C;
    }
L_0893D64C:
    ctx.gpr[4] = (0u | 1u);
    goto L_0893D650;
L_0893D650:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D670;
      }
      goto L_0893D658;
    }
L_0893D658:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6572), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2368), ctx.gpr[16]);
    goto L_0893D670;
L_0893D670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D678;
      }
      goto L_0893D678;
    }
L_0893D678:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D690;
      }
      goto L_0893D684;
    }
L_0893D684:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D6A4;
      }
      goto L_0893D690;
    }
L_0893D690:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D6AC;
      }
      goto L_0893D69C;
    }
L_0893D69C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D7C0;
      }
      goto L_0893D6A4;
    }
L_0893D6A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 350u, 0x08941734u>(ctx, &aot_mem); return;
      }
      goto L_0893D6AC;
    }
L_0893D6AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D750;
      }
      goto L_0893D6BC;
    }
L_0893D6BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D704;
      }
      goto L_0893D6C8;
    }
L_0893D6C8:
    ctx.gpr[31] = (0x0893D6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893D6D0u) goto L_0893D6D0;
    return;
L_0893D6D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D704;
      }
      goto L_0893D6E0;
    }
L_0893D6E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_0893D704;
L_0893D704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D7C0;
      }
      goto L_0893D710;
    }
L_0893D710:
    ctx.gpr[31] = (0x0893D718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893D718u) goto L_0893D718;
    return;
L_0893D718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D7C0;
      }
      goto L_0893D728;
    }
L_0893D728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0893D7C0;
      }
      goto L_0893D750;
    }
L_0893D750:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D7C0;
      }
      goto L_0893D760;
    }
L_0893D760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D790;
      }
      goto L_0893D76C;
    }
L_0893D76C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_0893D790;
L_0893D790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D7C0;
      }
      goto L_0893D79C;
    }
L_0893D79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_0893D7C0;
L_0893D7C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 350u, 0x08941734u>(ctx, &aot_mem); return;
      }
      goto L_0893D7D4;
    }
L_0893D7D4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30768)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893D7EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D9AC;
      }
      goto L_0893D7FC;
    }
L_0893D7FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0893DAD8;
      }
      goto L_0893D804;
    }
L_0893D804:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0893D9B4;
      }
      goto L_0893D80C;
    }
L_0893D80C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893E5B0;
      }
      goto L_0893D814;
    }
L_0893D814:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0893E648;
      }
      goto L_0893D81C;
    }
L_0893D81C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893D82Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 89u, 0x08938628u>(ctx, &aot_mem) && ctx.pc == 0x0893D82Cu) goto L_0893D82C;
    return;
L_0893D82C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D930;
      }
      goto L_0893D834;
    }
L_0893D834:
    ctx.gpr[31] = (0x0893D83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893D83Cu) goto L_0893D83C;
    return;
L_0893D83C:
    ctx.gpr[31] = (0x0893D844u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 755u, 0x0893BC38u>(ctx, &aot_mem) && ctx.pc == 0x0893D844u) goto L_0893D844;
    return;
L_0893D844:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893D8FC;
      }
      goto L_0893D84C;
    }
L_0893D84C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893D88C;
      }
      goto L_0893D880;
    }
L_0893D880:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6590)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D8C0;
      }
      goto L_0893D88C;
    }
L_0893D88C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0893D89Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0893D89Cu) goto L_0893D89C;
    return;
L_0893D89C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[31] = (0x0893D8ACu);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893D8ACu) goto L_0893D8AC;
    return;
L_0893D8AC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0893D930;
      }
      goto L_0893D8C0;
    }
L_0893D8C0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893D8D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30128));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0893D8D8u) goto L_0893D8D8;
    return;
L_0893D8D8:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893D8F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0893D8F4u) goto L_0893D8F4;
    return;
L_0893D8F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D930;
      }
      goto L_0893D8FC;
    }
L_0893D8FC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893D914u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30136));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0893D914u) goto L_0893D914;
    return;
L_0893D914:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893D930u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0893D930u) goto L_0893D930;
    return;
L_0893D930:
    ctx.gpr[31] = (0x0893D938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893D938u) goto L_0893D938;
    return;
L_0893D938:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D9AC;
      }
      goto L_0893D940;
    }
L_0893D940:
    ctx.gpr[31] = (0x0893D948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893D948u) goto L_0893D948;
    return;
L_0893D948:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0893D954u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893D954u) goto L_0893D954;
    return;
L_0893D954:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0893D968u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 491u, 0x0893A7A4u>(ctx, &aot_mem) && ctx.pc == 0x0893D968u) goto L_0893D968;
    return;
L_0893D968:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893D9AC;
      }
      goto L_0893D980;
    }
L_0893D980:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[31] = (0x0893D9ACu);
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 90u, 0x088C46ACu>(ctx, &aot_mem) && ctx.pc == 0x0893D9ACu) goto L_0893D9AC;
    return;
L_0893D9AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 350u, 0x08941734u>(ctx, &aot_mem); return;
      }
      goto L_0893D9B4;
    }
L_0893D9B4:
    ctx.gpr[31] = (0x0893D9BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893D9BCu) goto L_0893D9BC;
    return;
L_0893D9BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D9D8;
      }
      goto L_0893D9C4;
    }
L_0893D9C4:
    ctx.gpr[31] = (0x0893D9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893D9CCu) goto L_0893D9CC;
    return;
L_0893D9CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893D9D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 293u, 0x089397F8u>(ctx, &aot_mem) && ctx.pc == 0x0893D9D8u) goto L_0893D9D8;
    return;
L_0893D9D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893D9F8;
      }
      goto L_0893D9E8;
    }
L_0893D9E8:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893DA04;
      }
      goto L_0893D9F8;
    }
L_0893D9F8:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893DA04;
L_0893DA04:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0893DA24;
    }
    goto L_0893DA24;
L_0893DA24:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893DA74;
      }
      goto L_0893DA38;
    }
L_0893DA38:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29992)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893DA6Cu);
    ctx.gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DA6Cu) goto L_0893DA6C;
    return;
L_0893DA6C:
    ctx.gpr[31] = (0x0893DA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 186u, 0x08844F84u>(ctx, &aot_mem) && ctx.pc == 0x0893DA74u) goto L_0893DA74;
    return;
L_0893DA74:
    ctx.gpr[31] = (0x0893DA7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893DA7Cu) goto L_0893DA7C;
    return;
L_0893DA7C:
    ctx.gpr[31] = (0x0893DA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DA84u) goto L_0893DA84;
    return;
L_0893DA84:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
        goto L_0893DAA8;
    }
    goto L_0893DA8C;
L_0893DA8C:
    ctx.gpr[31] = (0x0893DA94u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DA94u) goto L_0893DA94;
    return;
L_0893DA94:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0893DAA0u);
    ctx.gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DAA0u) goto L_0893DAA0;
    return;
L_0893DAA0:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(608), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_0893DAA8;
L_0893DAA8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[31] = (0x0893DAD0u);
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 90u, 0x088C46ACu>(ctx, &aot_mem) && ctx.pc == 0x0893DAD0u) goto L_0893DAD0;
    return;
L_0893DAD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D9AC;
      }
      goto L_0893DAD8;
    }
L_0893DAD8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
        goto L_0893E580;
    }
    goto L_0893DAF8;
L_0893DAF8:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 65u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893DB14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0893DB14u) goto L_0893DB14;
    return;
L_0893DB14:
    ctx.gpr[31] = (0x0893DB1Cu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893DB1Cu) goto L_0893DB1C;
    return;
L_0893DB1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DB90;
      }
      goto L_0893DB28;
    }
L_0893DB28:
    ctx.gpr[31] = (0x0893DB30u);
    ctx.gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893DB30u) goto L_0893DB30;
    return;
L_0893DB30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7540)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0893DB48u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7540), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893DB48u) goto L_0893DB48;
    return;
L_0893DB48:
    ctx.gpr[31] = (0x0893DB50u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2064)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893DB50u) goto L_0893DB50;
    return;
L_0893DB50:
    ctx.gpr[31] = (0x0893DB58u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2068), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893DB58u) goto L_0893DB58;
    return;
L_0893DB58:
    ctx.gpr[31] = (0x0893DB60u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893DB60u) goto L_0893DB60;
    return;
L_0893DB60:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2100), ctx.gpr[18]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0893DB70u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893DB70u) goto L_0893DB70;
    return;
L_0893DB70:
    ctx.gpr[31] = (0x0893DB78u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2080), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893DB78u) goto L_0893DB78;
    return;
L_0893DB78:
    ctx.gpr[31] = (0x0893DB80u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2064), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893DB80u) goto L_0893DB80;
    return;
L_0893DB80:
    ctx.gpr[31] = (0x0893DB88u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2096), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893DB88u) goto L_0893DB88;
    return;
L_0893DB88:
    ctx.gpr[31] = (0x0893DB90u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 384u, 0x08ACD7C4u>(ctx, &aot_mem) && ctx.pc == 0x0893DB90u) goto L_0893DB90;
    return;
L_0893DB90:
    ctx.gpr[31] = (0x0893DB98u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0893DB98u) goto L_0893DB98;
    return;
L_0893DB98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x0893DBACu);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893DBACu) goto L_0893DBAC;
    return;
L_0893DBAC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[31] = (0x0893DBC4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DBC4u) goto L_0893DBC4;
    return;
L_0893DBC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E444;
      }
      goto L_0893DBCC;
    }
L_0893DBCC:
    ctx.gpr[31] = (0x0893DBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DBD4u) goto L_0893DBD4;
    return;
L_0893DBD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DBF8;
      }
      goto L_0893DBE0;
    }
L_0893DBE0:
    ctx.gpr[31] = (0x0893DBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DBE8u) goto L_0893DBE8;
    return;
L_0893DBE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893E444;
      }
      goto L_0893DBF8;
    }
L_0893DBF8:
    ctx.gpr[31] = (0x0893DC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DC00u) goto L_0893DC00;
    return;
L_0893DC00:
    ctx.gpr[4] = (17522u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893DC24;
      }
      goto L_0893DC20;
    }
L_0893DC20:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893DC24;
L_0893DC24:
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[31] = (0x0893DC30u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DC30u) goto L_0893DC30;
    return;
L_0893DC30:
    ctx.gpr[31] = (0x0893DC38u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DC38u) goto L_0893DC38;
    return;
L_0893DC38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DC70;
      }
      goto L_0893DC44;
    }
L_0893DC44:
    ctx.gpr[31] = (0x0893DC4Cu);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DC4Cu) goto L_0893DC4C;
    return;
L_0893DC4C:
    ctx.gpr[31] = (0x0893DC54u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DC54u) goto L_0893DC54;
    return;
L_0893DC54:
    ctx.gpr[31] = (0x0893DC5Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 81u, 0x0880C5C0u>(ctx, &aot_mem) && ctx.pc == 0x0893DC5Cu) goto L_0893DC5C;
    return;
L_0893DC5C:
    ctx.gpr[31] = (0x0893DC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DC64u) goto L_0893DC64;
    return;
L_0893DC64:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893DC98;
      }
      goto L_0893DC70;
    }
L_0893DC70:
    ctx.gpr[31] = (0x0893DC78u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DC78u) goto L_0893DC78;
    return;
L_0893DC78:
    ctx.gpr[31] = (0x0893DC80u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1356), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DC80u) goto L_0893DC80;
    return;
L_0893DC80:
    ctx.gpr[31] = (0x0893DC88u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 490u, 0x08A36E64u>(ctx, &aot_mem) && ctx.pc == 0x0893DC88u) goto L_0893DC88;
    return;
L_0893DC88:
    ctx.gpr[31] = (0x0893DC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DC90u) goto L_0893DC90;
    return;
L_0893DC90:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    goto L_0893DC98;
L_0893DC98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7524)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0893DCACu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7524), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DCACu) goto L_0893DCAC;
    return;
L_0893DCAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893DD40;
      }
      goto L_0893DCC4;
    }
L_0893DCC4:
    ctx.gpr[31] = (0x0893DCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DCCCu) goto L_0893DCCC;
    return;
L_0893DCCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0893DCD8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DCD8u) goto L_0893DCD8;
    return;
L_0893DCD8:
    ctx.gpr[31] = (0x0893DCE0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DCE0u) goto L_0893DCE0;
    return;
L_0893DCE0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x0893DCECu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DCECu) goto L_0893DCEC;
    return;
L_0893DCEC:
    ctx.gpr[31] = (0x0893DCF4u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DCF4u) goto L_0893DCF4;
    return;
L_0893DCF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0893DD00u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DD00u) goto L_0893DD00;
    return;
L_0893DD00:
    ctx.gpr[31] = (0x0893DD08u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DD08u) goto L_0893DD08;
    return;
L_0893DD08:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0893DD14u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DD14u) goto L_0893DD14;
    return;
L_0893DD14:
    ctx.gpr[31] = (0x0893DD1Cu);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DD1Cu) goto L_0893DD1C;
    return;
L_0893DD1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0893DD28u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DD28u) goto L_0893DD28;
    return;
L_0893DD28:
    ctx.gpr[31] = (0x0893DD30u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DD30u) goto L_0893DD30;
    return;
L_0893DD30:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0893DD3Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DD3Cu) goto L_0893DD3C;
    return;
L_0893DD3C:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0893DD40;
L_0893DD40:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0893DD4Cu);
    ctx.gpr[19] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DD4Cu) goto L_0893DD4C;
    return;
L_0893DD4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DD74;
      }
      goto L_0893DD58;
    }
L_0893DD58:
    ctx.gpr[31] = (0x0893DD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DD60u) goto L_0893DD60;
    return;
L_0893DD60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DD74;
      }
      goto L_0893DD70;
    }
L_0893DD70:
    ctx.gpr[19] = (0u | 0u);
    goto L_0893DD74;
L_0893DD74:
    ctx.gpr[31] = (0x0893DD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DD7Cu) goto L_0893DD7C;
    return;
L_0893DD7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893DDA8;
      }
      goto L_0893DD8C;
    }
L_0893DD8C:
    ctx.gpr[31] = (0x0893DD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DD94u) goto L_0893DD94;
    return;
L_0893DD94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DDA8;
      }
      goto L_0893DDA4;
    }
L_0893DDA4:
    ctx.gpr[19] = (0u | 0u);
    goto L_0893DDA8;
L_0893DDA8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E430;
      }
      goto L_0893DDB0;
    }
L_0893DDB0:
    ctx.gpr[31] = (0x0893DDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DDB8u) goto L_0893DDB8;
    return;
L_0893DDB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DDE4;
      }
      goto L_0893DDD0;
    }
L_0893DDD0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0893DDE4;
L_0893DDE4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(49));
    ctx.gpr[31] = (0x0893DDF4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 276u, 0x0887683Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DDF4u) goto L_0893DDF4;
    return;
L_0893DDF4:
    ctx.gpr[18] = (0u | 0u);
    goto L_0893DDF8;
L_0893DDF8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DE84;
      }
      goto L_0893DE04;
    }
L_0893DE04:
    ctx.gpr[31] = (0x0893DE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DE0Cu) goto L_0893DE0C;
    return;
L_0893DE0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893DE84;
      }
      goto L_0893DE1C;
    }
L_0893DE1C:
    ctx.gpr[31] = (0x0893DE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DE24u) goto L_0893DE24;
    return;
L_0893DE24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(497)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893DE84;
      }
      goto L_0893DE34;
    }
L_0893DE34:
    ctx.gpr[31] = (0x0893DE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DE3Cu) goto L_0893DE3C;
    return;
L_0893DE3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DE68;
      }
      goto L_0893DE54;
    }
L_0893DE54:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0893DE68;
L_0893DE68:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0893DE78u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(49));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 276u, 0x0887683Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DE78u) goto L_0893DE78;
    return;
L_0893DE78:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
      if (branch_taken) {
          goto L_0893DDF8;
      }
      goto L_0893DE84;
    }
L_0893DE84:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DE98;
      }
      goto L_0893DE90;
    }
L_0893DE90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DE9C;
      }
      goto L_0893DE98;
    }
L_0893DE98:
    ctx.gpr[18] = (0u | 1u);
    goto L_0893DE9C;
L_0893DE9C:
    ctx.gpr[31] = (0x0893DEA4u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DEA4u) goto L_0893DEA4;
    return;
L_0893DEA4:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[31] = (0x0893DEB0u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(49)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893DEB0u) goto L_0893DEB0;
    return;
L_0893DEB0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(497), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_0893E430;
      }
      goto L_0893DEB8;
    }
L_0893DEB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E1A0;
      }
      goto L_0893E0A0;
    }
L_0893E0A0:
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893E118;
      }
      goto L_0893E114;
    }
L_0893E114:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_0893E118;
L_0893E118:
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893E190;
      }
      goto L_0893E18C;
    }
L_0893E18C:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    goto L_0893E190;
L_0893E190:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E0A0;
      }
      goto L_0893E1A0;
    }
L_0893E1A0:
    ctx.gpr[4] = (ctx.gpr[20] << 4u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15440)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(320), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(321), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 150u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E430;
      }
      goto L_0893E278;
    }
L_0893E278:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1388), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(192));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0893E334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0893E334u) goto L_0893E334;
    return;
L_0893E334:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0893E360u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0893E360u) goto L_0893E360;
    return;
L_0893E360:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49344u << 16u);
    ctx.gpr[31] = (0x0893E378u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0893E378u) goto L_0893E378;
    return;
L_0893E378:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0893E3A4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0893E3A4u) goto L_0893E3A4;
    return;
L_0893E3A4:
    ctx.gpr[4] = (48844u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x0893E3B4u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0893E3B4u) goto L_0893E3B4;
    return;
L_0893E3B4:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0893E418u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0893E418u) goto L_0893E418;
    return;
L_0893E418:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1388)));
      if (branch_taken) {
          goto L_0893E278;
      }
      goto L_0893E430;
    }
L_0893E430:
    ctx.gpr[31] = (0x0893E438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893E438u) goto L_0893E438;
    return;
L_0893E438:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893E444u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 630u, 0x0893B290u>(ctx, &aot_mem) && ctx.pc == 0x0893E444u) goto L_0893E444;
    return;
L_0893E444:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E51C;
      }
      goto L_0893E44C;
    }
L_0893E44C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6590)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893E4FC;
      }
      goto L_0893E45C;
    }
L_0893E45C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-100));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0893E498;
    }
    goto L_0893E498;
L_0893E498:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7396)));
    ctx.gpr[8] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[7] = (2233u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7396), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30144));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x0893E4F4u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0893E4F4u) goto L_0893E4F4;
    return;
L_0893E4F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E574;
      }
      goto L_0893E4FC;
    }
L_0893E4FC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893E514u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30152));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0893E514u) goto L_0893E514;
    return;
L_0893E514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E574;
      }
      goto L_0893E51C;
    }
L_0893E51C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E574;
      }
      goto L_0893E524;
    }
L_0893E524:
    ctx.gpr[31] = (0x0893E52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0893E52Cu) goto L_0893E52C;
    return;
L_0893E52C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E55C;
      }
      goto L_0893E53C;
    }
L_0893E53C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893E554u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30160));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0893E554u) goto L_0893E554;
    return;
L_0893E554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E574;
      }
      goto L_0893E55C;
    }
L_0893E55C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893E574u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30168));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0893E574u) goto L_0893E574;
    return;
L_0893E574:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_0893E580;
L_0893E580:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[31] = (0x0893E5A8u);
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 90u, 0x088C46ACu>(ctx, &aot_mem) && ctx.pc == 0x0893E5A8u) goto L_0893E5A8;
    return;
L_0893E5A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D9AC;
      }
      goto L_0893E5B0;
    }
L_0893E5B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893E5CC;
      }
      goto L_0893E5BC;
    }
L_0893E5BC:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893E5D8;
      }
      goto L_0893E5CC;
    }
L_0893E5CC:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893E5D8;
L_0893E5D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_0893E5FC;
    }
    goto L_0893E5FC;
L_0893E5FC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893E638;
      }
      goto L_0893E610;
    }
L_0893E610:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893E638u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0893E638u) goto L_0893E638;
    return;
L_0893E638:
    ctx.gpr[31] = (0x0893E640u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893E640u) goto L_0893E640;
    return;
L_0893E640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D9AC;
      }
      goto L_0893E648;
    }
L_0893E648:
    ctx.gpr[31] = (0x0893E650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893E650u) goto L_0893E650;
    return;
L_0893E650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E664;
      }
      goto L_0893E658;
    }
L_0893E658:
    ctx.gpr[31] = (0x0893E660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893E660u) goto L_0893E660;
    return;
L_0893E660:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(608), static_cast<std::uint8_t>(0u));
    goto L_0893E664;
L_0893E664:
    ctx.gpr[31] = (0x0893E66Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 235u, 0x08939268u>(ctx, &aot_mem) && ctx.pc == 0x0893E66Cu) goto L_0893E66C;
    return;
L_0893E66C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E67C;
      }
      goto L_0893E674;
    }
L_0893E674:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893E67C;
L_0893E67C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D9AC;
      }
      goto L_0893E684;
    }
L_0893E684:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(213)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E6A0;
      }
      goto L_0893E690;
    }
L_0893E690:
    ctx.gpr[31] = (0x0893E698u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893E698u) goto L_0893E698;
    return;
L_0893E698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 350u, 0x08941734u>(ctx, &aot_mem); return;
      }
      goto L_0893E6A0;
    }
L_0893E6A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E698;
      }
      goto L_0893E6B0;
    }
L_0893E6B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0893E954;
      }
      goto L_0893E6B8;
    }
L_0893E6B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0893E854;
      }
      goto L_0893E6C0;
    }
L_0893E6C0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893EF24;
      }
      goto L_0893E6C8;
    }
L_0893E6C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0893EFBC;
      }
      goto L_0893E6D0;
    }
L_0893E6D0:
    ctx.gpr[31] = (0x0893E6D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893E6D8u) goto L_0893E6D8;
    return;
L_0893E6D8:
    ctx.gpr[31] = (0x0893E6E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 89u, 0x08938628u>(ctx, &aot_mem) && ctx.pc == 0x0893E6E0u) goto L_0893E6E0;
    return;
L_0893E6E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E84C;
      }
      goto L_0893E6E8;
    }
L_0893E6E8:
    ctx.gpr[31] = (0x0893E6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893E6F0u) goto L_0893E6F0;
    return;
L_0893E6F0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0893E6FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0893E6FCu) goto L_0893E6FC;
    return;
L_0893E6FC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893E744;
      }
      goto L_0893E708;
    }
L_0893E708:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893E720u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30176));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0893E720u) goto L_0893E720;
    return;
L_0893E720:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 66u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893E73Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0893E73Cu) goto L_0893E73C;
    return;
L_0893E73C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E84C;
      }
      goto L_0893E744;
    }
L_0893E744:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E818;
      }
      goto L_0893E74C;
    }
L_0893E74C:
    ctx.gpr[31] = (0x0893E754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893E754u) goto L_0893E754;
    return;
L_0893E754:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E818;
      }
      goto L_0893E764;
    }
L_0893E764:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6591)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893E7A8;
      }
      goto L_0893E774;
    }
L_0893E774:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E7DC;
      }
      goto L_0893E7A8;
    }
L_0893E7A8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0893E7B8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0893E7B8u) goto L_0893E7B8;
    return;
L_0893E7B8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[31] = (0x0893E7C8u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893E7C8u) goto L_0893E7C8;
    return;
L_0893E7C8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0893E84C;
      }
      goto L_0893E7DC;
    }
L_0893E7DC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893E7F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30184));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0893E7F4u) goto L_0893E7F4;
    return;
L_0893E7F4:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893E810u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0893E810u) goto L_0893E810;
    return;
L_0893E810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E84C;
      }
      goto L_0893E818;
    }
L_0893E818:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893E830u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30192));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0893E830u) goto L_0893E830;
    return;
L_0893E830:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 66u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893E84Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0893E84Cu) goto L_0893E84C;
    return;
L_0893E84C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E698;
      }
      goto L_0893E854;
    }
L_0893E854:
    ctx.gpr[31] = (0x0893E85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893E85Cu) goto L_0893E85C;
    return;
L_0893E85C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E878;
      }
      goto L_0893E864;
    }
L_0893E864:
    ctx.gpr[31] = (0x0893E86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893E86Cu) goto L_0893E86C;
    return;
L_0893E86C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893E878u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 293u, 0x089397F8u>(ctx, &aot_mem) && ctx.pc == 0x0893E878u) goto L_0893E878;
    return;
L_0893E878:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893E898;
      }
      goto L_0893E888;
    }
L_0893E888:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893E8A4;
      }
      goto L_0893E898;
    }
L_0893E898:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893E8A4;
L_0893E8A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0893E8C4;
    }
    goto L_0893E8C4;
L_0893E8C4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893E90C;
      }
      goto L_0893E8D8;
    }
L_0893E8D8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29992)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893E90Cu);
    ctx.gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0893E90Cu) goto L_0893E90C;
    return;
L_0893E90C:
    ctx.gpr[31] = (0x0893E914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893E914u) goto L_0893E914;
    return;
L_0893E914:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E928;
      }
      goto L_0893E91C;
    }
L_0893E91C:
    ctx.gpr[31] = (0x0893E924u);
    ctx.gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893E924u) goto L_0893E924;
    return;
L_0893E924:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(608), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_0893E928;
L_0893E928:
    ctx.gpr[31] = (0x0893E930u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893E930u) goto L_0893E930;
    return;
L_0893E930:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893E94C;
      }
      goto L_0893E940;
    }
L_0893E940:
    ctx.gpr[4] = (0u | 291u);
    ctx.gpr[31] = (0x0893E94Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x0893E94Cu) goto L_0893E94C;
    return;
L_0893E94C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E698;
      }
      goto L_0893E954;
    }
L_0893E954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EF1C;
      }
      goto L_0893E96C;
    }
L_0893E96C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0893E9AC;
      }
      goto L_0893E97C;
    }
L_0893E97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5832)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E9AC;
      }
      goto L_0893E998;
    }
L_0893E998:
    ctx.gpr[4] = (0u | 291u);
    ctx.gpr[31] = (0x0893E9A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x0893E9A4u) goto L_0893E9A4;
    return;
L_0893E9A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EF1C;
      }
      goto L_0893E9AC;
    }
L_0893E9AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893E9E4;
      }
      goto L_0893E9BC;
    }
L_0893E9BC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EA2C;
      }
      goto L_0893E9C8;
    }
L_0893E9C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 67u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893E9DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0893E9DCu) goto L_0893E9DC;
    return;
L_0893E9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EA2C;
      }
      goto L_0893E9E4;
    }
L_0893E9E4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893E9FC;
      }
      goto L_0893E9EC;
    }
L_0893E9EC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EA18;
      }
      goto L_0893E9F4;
    }
L_0893E9F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EA2C;
      }
      goto L_0893E9FC;
    }
L_0893E9FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 68u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893EA10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0893EA10u) goto L_0893EA10;
    return;
L_0893EA10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EA2C;
      }
      goto L_0893EA18;
    }
L_0893EA18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 69u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893EA2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x0893EA2Cu) goto L_0893EA2C;
    return;
L_0893EA2C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6591)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893EAAC;
      }
      goto L_0893EA44;
    }
L_0893EA44:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-500));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0893EA80;
    }
    goto L_0893EA80;
L_0893EA80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    goto L_0893EAAC;
L_0893EAAC:
    ctx.gpr[31] = (0x0893EAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893EAB4u) goto L_0893EAB4;
    return;
L_0893EAB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EBE4;
      }
      goto L_0893EABC;
    }
L_0893EABC:
    ctx.gpr[31] = (0x0893EAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893EAC4u) goto L_0893EAC4;
    return;
L_0893EAC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EAE8;
      }
      goto L_0893EAD0;
    }
L_0893EAD0:
    ctx.gpr[31] = (0x0893EAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893EAD8u) goto L_0893EAD8;
    return;
L_0893EAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893EBE4;
      }
      goto L_0893EAE8;
    }
L_0893EAE8:
    ctx.gpr[31] = (0x0893EAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893EAF0u) goto L_0893EAF0;
    return;
L_0893EAF0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1509));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[31] = (0x0893EB1Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893EB1Cu) goto L_0893EB1C;
    return;
L_0893EB1C:
    ctx.gpr[31] = (0x0893EB24u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893EB24u) goto L_0893EB24;
    return;
L_0893EB24:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1512), ctx.gpr[17]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893EBBC;
      }
      goto L_0893EB3C;
    }
L_0893EB3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
      if (branch_taken) {
          goto L_0893EB5C;
      }
      goto L_0893EB54;
    }
L_0893EB54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0893EB80;
      }
      goto L_0893EB5C;
    }
L_0893EB5C:
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    goto L_0893EB80;
L_0893EB80:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EBB0;
      }
      goto L_0893EB88;
    }
L_0893EB88:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EBB0;
      }
      goto L_0893EB94;
    }
L_0893EB94:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (0u | 80u);
    ctx.gpr[7] = (ctx.gpr[7] & 496u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0893EBB0;
      }
      goto L_0893EBA8;
    }
L_0893EBA8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(648), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1512), 0u);
    goto L_0893EBB0;
L_0893EBB0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893EB3C;
      }
      goto L_0893EBBC;
    }
L_0893EBBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893EBD4;
      }
      goto L_0893EBCC;
    }
L_0893EBCC:
    ctx.gpr[31] = (0x0893EBD4u);
    // nop
    goto L_0893C38C;
L_0893EBD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7560)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7560), ctx.gpr[5]);
    goto L_0893EBE4;
L_0893EBE4:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893EC08;
      }
      goto L_0893EBF4;
    }
L_0893EBF4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EEA4;
      }
      goto L_0893EC00;
    }
L_0893EC00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EC20;
      }
      goto L_0893EC08;
    }
L_0893EC08:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893ED30;
      }
      goto L_0893EC10;
    }
L_0893EC10:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EE40;
      }
      goto L_0893EC18;
    }
L_0893EC18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EEA4;
      }
      goto L_0893EC20;
    }
L_0893EC20:
    ctx.gpr[31] = (0x0893EC28u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0893EC28u) goto L_0893EC28;
    return;
L_0893EC28:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_0893EC48;
    }
    goto L_0893EC38;
L_0893EC38:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893ED28;
      }
      goto L_0893EC40;
    }
L_0893EC40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EC58;
      }
      goto L_0893EC48;
    }
L_0893EC48:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893ECC4;
      }
      goto L_0893EC50;
    }
L_0893EC50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ED28;
      }
      goto L_0893EC58;
    }
L_0893EC58:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0893EC98;
      }
      goto L_0893EC68;
    }
L_0893EC68:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0893EC74u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0893EC74u) goto L_0893EC74;
    return;
L_0893EC74:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EC8C;
      }
      goto L_0893EC80;
    }
L_0893EC80:
    ctx.gpr[31] = (0x0893EC88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0893EC88u) goto L_0893EC88;
    return;
L_0893EC88:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0893EC8C;
L_0893EC8C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0893EC98;
L_0893EC98:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0893ECA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30200));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0893ECA8u) goto L_0893ECA8;
    return;
L_0893ECA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0893ECBCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x0893ECBCu) goto L_0893ECBC;
    return;
L_0893ECBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ED28;
      }
      goto L_0893ECC4;
    }
L_0893ECC4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0893ED04;
      }
      goto L_0893ECD4;
    }
L_0893ECD4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0893ECE0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0893ECE0u) goto L_0893ECE0;
    return;
L_0893ECE0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ECF8;
      }
      goto L_0893ECEC;
    }
L_0893ECEC:
    ctx.gpr[31] = (0x0893ECF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0893ECF4u) goto L_0893ECF4;
    return;
L_0893ECF4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0893ECF8;
L_0893ECF8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0893ED04;
L_0893ED04:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0893ED14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30208));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0893ED14u) goto L_0893ED14;
    return;
L_0893ED14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0893ED28u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x0893ED28u) goto L_0893ED28;
    return;
L_0893ED28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EEA4;
      }
      goto L_0893ED30;
    }
L_0893ED30:
    ctx.gpr[31] = (0x0893ED38u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0893ED38u) goto L_0893ED38;
    return;
L_0893ED38:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_0893ED58;
    }
    goto L_0893ED48;
L_0893ED48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893EE38;
      }
      goto L_0893ED50;
    }
L_0893ED50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ED68;
      }
      goto L_0893ED58;
    }
L_0893ED58:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EDD4;
      }
      goto L_0893ED60;
    }
L_0893ED60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EE38;
      }
      goto L_0893ED68;
    }
L_0893ED68:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0893EDA8;
      }
      goto L_0893ED78;
    }
L_0893ED78:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0893ED84u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0893ED84u) goto L_0893ED84;
    return;
L_0893ED84:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ED9C;
      }
      goto L_0893ED90;
    }
L_0893ED90:
    ctx.gpr[31] = (0x0893ED98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0893ED98u) goto L_0893ED98;
    return;
L_0893ED98:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0893ED9C;
L_0893ED9C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0893EDA8;
L_0893EDA8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0893EDB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30216));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0893EDB8u) goto L_0893EDB8;
    return;
L_0893EDB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0893EDCCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x0893EDCCu) goto L_0893EDCC;
    return;
L_0893EDCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EE38;
      }
      goto L_0893EDD4;
    }
L_0893EDD4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0893EE14;
      }
      goto L_0893EDE4;
    }
L_0893EDE4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0893EDF0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0893EDF0u) goto L_0893EDF0;
    return;
L_0893EDF0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EE08;
      }
      goto L_0893EDFC;
    }
L_0893EDFC:
    ctx.gpr[31] = (0x0893EE04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0893EE04u) goto L_0893EE04;
    return;
L_0893EE04:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0893EE08;
L_0893EE08:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0893EE14;
L_0893EE14:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0893EE24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30224));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0893EE24u) goto L_0893EE24;
    return;
L_0893EE24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0893EE38u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x0893EE38u) goto L_0893EE38;
    return;
L_0893EE38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EEA4;
      }
      goto L_0893EE40;
    }
L_0893EE40:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0893EE80;
      }
      goto L_0893EE50;
    }
L_0893EE50:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0893EE5Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0893EE5Cu) goto L_0893EE5C;
    return;
L_0893EE5C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EE74;
      }
      goto L_0893EE68;
    }
L_0893EE68:
    ctx.gpr[31] = (0x0893EE70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0893EE70u) goto L_0893EE70;
    return;
L_0893EE70:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0893EE74;
L_0893EE74:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0893EE80;
L_0893EE80:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0893EE90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30232));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0893EE90u) goto L_0893EE90;
    return;
L_0893EE90:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0893EEA4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x0893EEA4u) goto L_0893EEA4;
    return;
L_0893EEA4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6591)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EED4;
      }
      goto L_0893EEB4;
    }
L_0893EEB4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893EECCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30240));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0893EECCu) goto L_0893EECC;
    return;
L_0893EECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EEEC;
      }
      goto L_0893EED4;
    }
L_0893EED4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893EEECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30248));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x0893EEECu) goto L_0893EEEC;
    return;
L_0893EEEC:
    ctx.gpr[31] = (0x0893EEF4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0893EEF4u) goto L_0893EEF4;
    return;
L_0893EEF4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x0893EF08u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893EF08u) goto L_0893EF08;
    return;
L_0893EF08:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0893EF1C;
L_0893EF1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E698;
      }
      goto L_0893EF24;
    }
L_0893EF24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893EF40;
      }
      goto L_0893EF30;
    }
L_0893EF30:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893EF4C;
      }
      goto L_0893EF40;
    }
L_0893EF40:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893EF4C;
L_0893EF4C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_0893EF70;
    }
    goto L_0893EF70;
L_0893EF70:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893EFAC;
      }
      goto L_0893EF84;
    }
L_0893EF84:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893EFACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0893EFACu) goto L_0893EFAC;
    return;
L_0893EFAC:
    ctx.gpr[31] = (0x0893EFB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893EFB4u) goto L_0893EFB4;
    return;
L_0893EFB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E698;
      }
      goto L_0893EFBC;
    }
L_0893EFBC:
    ctx.gpr[31] = (0x0893EFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893EFC4u) goto L_0893EFC4;
    return;
L_0893EFC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EFD8;
      }
      goto L_0893EFCC;
    }
L_0893EFCC:
    ctx.gpr[31] = (0x0893EFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893EFD4u) goto L_0893EFD4;
    return;
L_0893EFD4:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(608), static_cast<std::uint8_t>(0u));
    goto L_0893EFD8;
L_0893EFD8:
    ctx.gpr[31] = (0x0893EFE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 235u, 0x08939268u>(ctx, &aot_mem) && ctx.pc == 0x0893EFE0u) goto L_0893EFE0;
    return;
L_0893EFE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EFF0;
      }
      goto L_0893EFE8;
    }
L_0893EFE8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893EFF0;
L_0893EFF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E698;
      }
      goto L_0893EFF8;
    }
L_0893EFF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893F020;
      }
      goto L_0893F008;
    }
L_0893F008:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893F030;
      }
      goto L_0893F010;
    }
L_0893F010:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893F2FC;
      }
      goto L_0893F018;
    }
L_0893F018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F038;
      }
      goto L_0893F020;
    }
L_0893F020:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893F1A4;
      }
      goto L_0893F028;
    }
L_0893F028:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F36C;
      }
      goto L_0893F030;
    }
L_0893F030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 350u, 0x08941734u>(ctx, &aot_mem); return;
      }
      goto L_0893F038;
    }
L_0893F038:
    ctx.gpr[31] = (0x0893F040u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F040u) goto L_0893F040;
    return;
L_0893F040:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x0893F068u);
    ctx.fpr[22] = ctx.fpr[14] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F068u) goto L_0893F068;
    return;
L_0893F068:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[31] = (0x0893F08Cu);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F08Cu) goto L_0893F08C;
    return;
L_0893F08C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x0893F0ACu);
    ctx.fpr[24] = ctx.fpr[17] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F0ACu) goto L_0893F0AC;
    return;
L_0893F0AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F120;
      }
      goto L_0893F0E4;
    }
L_0893F0E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F19C;
      }
      goto L_0893F0F8;
    }
L_0893F0F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893F104u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 274u, 0x0893960Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F104u) goto L_0893F104;
    return;
L_0893F104:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F19C;
      }
      goto L_0893F10C;
    }
L_0893F10C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0893F19C;
      }
      goto L_0893F120;
    }
L_0893F120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F19C;
      }
      goto L_0893F12C;
    }
L_0893F12C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0893F13Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 129u, 0x0893884Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F13Cu) goto L_0893F13C;
    return;
L_0893F13C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F19C;
      }
      goto L_0893F144;
    }
L_0893F144:
    ctx.gpr[31] = (0x0893F14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893F14Cu) goto L_0893F14C;
    return;
L_0893F14C:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0893F160u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 160u, 0x08938B58u>(ctx, &aot_mem) && ctx.pc == 0x0893F160u) goto L_0893F160;
    return;
L_0893F160:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F19C;
      }
      goto L_0893F168;
    }
L_0893F168:
    ctx.gpr[31] = (0x0893F170u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0893F170u) goto L_0893F170;
    return;
L_0893F170:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[31] = (0x0893F180u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893F180u) goto L_0893F180;
    return;
L_0893F180:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_0893F19C;
L_0893F19C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F030;
      }
      goto L_0893F1A4;
    }
L_0893F1A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F1BC;
      }
      goto L_0893F1B0;
    }
L_0893F1B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x0893F1BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 293u, 0x089397F8u>(ctx, &aot_mem) && ctx.pc == 0x0893F1BCu) goto L_0893F1BC;
    return;
L_0893F1BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893F1DC;
      }
      goto L_0893F1CC;
    }
L_0893F1CC:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893F1E8;
      }
      goto L_0893F1DC;
    }
L_0893F1DC:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893F1E8;
L_0893F1E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0893F208;
    }
    goto L_0893F208;
L_0893F208:
    ctx.gpr[31] = (0x0893F210u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893F210u) goto L_0893F210;
    return;
L_0893F210:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0893F224u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 160u, 0x08938B58u>(ctx, &aot_mem) && ctx.pc == 0x0893F224u) goto L_0893F224;
    return;
L_0893F224:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F244;
      }
      goto L_0893F22C;
    }
L_0893F22C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0893F238u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30256));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 87u, 0x089385D4u>(ctx, &aot_mem) && ctx.pc == 0x0893F238u) goto L_0893F238;
    return;
L_0893F238:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0893F2EC;
      }
      goto L_0893F244;
    }
L_0893F244:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F2EC;
      }
      goto L_0893F25C;
    }
L_0893F25C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893F27Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F27Cu) goto L_0893F27C;
    return;
L_0893F27C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F2E8;
      }
      goto L_0893F288;
    }
L_0893F288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F2B0;
      }
      goto L_0893F294;
    }
L_0893F294:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0893F2A8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 478u, 0x0889E6C8u>(ctx, &aot_mem) && ctx.pc == 0x0893F2A8u) goto L_0893F2A8;
    return;
L_0893F2A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
      if (branch_taken) {
          goto L_0893F2B4;
      }
      goto L_0893F2B0;
    }
L_0893F2B0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_0893F2B4;
L_0893F2B4:
    ctx.gpr[31] = (0x0893F2BCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0893F2BCu) goto L_0893F2BC;
    return;
L_0893F2BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x0893F2D0u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893F2D0u) goto L_0893F2D0;
    return;
L_0893F2D0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0893F2EC;
      }
      goto L_0893F2E8;
    }
L_0893F2E8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_0893F2EC;
L_0893F2EC:
    ctx.gpr[31] = (0x0893F2F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893F2F4u) goto L_0893F2F4;
    return;
L_0893F2F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F030;
      }
      goto L_0893F2FC;
    }
L_0893F2FC:
    ctx.gpr[31] = (0x0893F304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F304u) goto L_0893F304;
    return;
L_0893F304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893F364;
      }
      goto L_0893F310;
    }
L_0893F310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F364;
      }
      goto L_0893F31C;
    }
L_0893F31C:
    ctx.gpr[31] = (0x0893F324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F324u) goto L_0893F324;
    return;
L_0893F324:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0893F330u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F330u) goto L_0893F330;
    return;
L_0893F330:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0893F344u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 491u, 0x0893A7A4u>(ctx, &aot_mem) && ctx.pc == 0x0893F344u) goto L_0893F344;
    return;
L_0893F344:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F364;
      }
      goto L_0893F35C;
    }
L_0893F35C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893F364;
L_0893F364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F030;
      }
      goto L_0893F36C;
    }
L_0893F36C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893F388;
      }
      goto L_0893F378;
    }
L_0893F378:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893F394;
      }
      goto L_0893F388;
    }
L_0893F388:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893F394;
L_0893F394:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_0893F3B8;
    }
    goto L_0893F3B8;
L_0893F3B8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893F3F4;
      }
      goto L_0893F3CC;
    }
L_0893F3CC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893F3F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F3F4u) goto L_0893F3F4;
    return;
L_0893F3F4:
    ctx.gpr[31] = (0x0893F3FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893F3FCu) goto L_0893F3FC;
    return;
L_0893F3FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F030;
      }
      goto L_0893F404;
    }
L_0893F404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 350u, 0x08941734u>(ctx, &aot_mem); return;
      }
      goto L_0893F40C;
    }
L_0893F40C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893F434;
      }
      goto L_0893F41C;
    }
L_0893F41C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893F444;
      }
      goto L_0893F424;
    }
L_0893F424:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893F7BC;
      }
      goto L_0893F42C;
    }
L_0893F42C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F44C;
      }
      goto L_0893F434;
    }
L_0893F434:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893F6B8;
      }
      goto L_0893F43C;
    }
L_0893F43C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F8B8;
      }
      goto L_0893F444;
    }
L_0893F444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 350u, 0x08941734u>(ctx, &aot_mem); return;
      }
      goto L_0893F44C;
    }
L_0893F44C:
    ctx.gpr[31] = (0x0893F454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F454u) goto L_0893F454;
    return;
L_0893F454:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F490;
      }
      goto L_0893F45C;
    }
L_0893F45C:
    ctx.gpr[31] = (0x0893F464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F464u) goto L_0893F464;
    return;
L_0893F464:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x0893F470u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 443u, 0x0893A558u>(ctx, &aot_mem) && ctx.pc == 0x0893F470u) goto L_0893F470;
    return;
L_0893F470:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F490;
      }
      goto L_0893F478;
    }
L_0893F478:
    ctx.gpr[31] = (0x0893F480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F480u) goto L_0893F480;
    return;
L_0893F480:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(156));
    ctx.gpr[31] = (0x0893F490u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0893F490u) goto L_0893F490;
    return;
L_0893F490:
    ctx.gpr[31] = (0x0893F498u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F498u) goto L_0893F498;
    return;
L_0893F498:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0893F4CC;
    }
    goto L_0893F4CC;
L_0893F4CC:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F558;
      }
      goto L_0893F4E4;
    }
L_0893F4E4:
    ctx.gpr[31] = (0x0893F4ECu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F4ECu) goto L_0893F4EC;
    return;
L_0893F4EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0893F520;
    }
    goto L_0893F520;
L_0893F520:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F558;
      }
      goto L_0893F538;
    }
L_0893F538:
    ctx.gpr[31] = (0x0893F540u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F540u) goto L_0893F540;
    return;
L_0893F540:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F568;
      }
      goto L_0893F558;
    }
L_0893F558:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
      if (branch_taken) {
          goto L_0893F6B0;
      }
      goto L_0893F568;
    }
L_0893F568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F6B0;
      }
      goto L_0893F574;
    }
L_0893F574:
    ctx.gpr[31] = (0x0893F57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F57Cu) goto L_0893F57C;
    return;
L_0893F57C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F6B0;
      }
      goto L_0893F584;
    }
L_0893F584:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0893F594u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 129u, 0x0893884Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F594u) goto L_0893F594;
    return;
L_0893F594:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F6B0;
      }
      goto L_0893F59C;
    }
L_0893F59C:
    ctx.gpr[31] = (0x0893F5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893F5A4u) goto L_0893F5A4;
    return;
L_0893F5A4:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0893F5B8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 160u, 0x08938B58u>(ctx, &aot_mem) && ctx.pc == 0x0893F5B8u) goto L_0893F5B8;
    return;
L_0893F5B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F6B0;
      }
      goto L_0893F5C0;
    }
L_0893F5C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0893F60C;
      }
      goto L_0893F5D4;
    }
L_0893F5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F604;
      }
      goto L_0893F5E8;
    }
L_0893F5E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1356)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F604;
      }
      goto L_0893F600;
    }
L_0893F600:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893F604;
L_0893F604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F650;
      }
      goto L_0893F60C;
    }
L_0893F60C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F650;
      }
      goto L_0893F61C;
    }
L_0893F61C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x0893F628u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 220u, 0x08A292F8u>(ctx, &aot_mem) && ctx.pc == 0x0893F628u) goto L_0893F628;
    return;
L_0893F628:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(226) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F650;
      }
      goto L_0893F634;
    }
L_0893F634:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1608)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F650;
      }
      goto L_0893F64C;
    }
L_0893F64C:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893F650;
L_0893F650:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F6B0;
      }
      goto L_0893F658;
    }
L_0893F658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893F6B0;
      }
      goto L_0893F674;
    }
L_0893F674:
    ctx.gpr[31] = (0x0893F67Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0893F67Cu) goto L_0893F67C;
    return;
L_0893F67C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[31] = (0x0893F68Cu);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893F68Cu) goto L_0893F68C;
    return;
L_0893F68C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x0893F6B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 494u, 0x088EF0C0u>(ctx, &aot_mem) && ctx.pc == 0x0893F6B0u) goto L_0893F6B0;
    return;
L_0893F6B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F444;
      }
      goto L_0893F6B8;
    }
L_0893F6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F6D0;
      }
      goto L_0893F6C4;
    }
L_0893F6C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x0893F6D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 293u, 0x089397F8u>(ctx, &aot_mem) && ctx.pc == 0x0893F6D0u) goto L_0893F6D0;
    return;
L_0893F6D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893F6F0;
      }
      goto L_0893F6E0;
    }
L_0893F6E0:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893F6FC;
      }
      goto L_0893F6F0;
    }
L_0893F6F0:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893F6FC;
L_0893F6FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0893F71C;
    }
    goto L_0893F71C;
L_0893F71C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893F7AC;
      }
      goto L_0893F730;
    }
L_0893F730:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893F754u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F754u) goto L_0893F754;
    return;
L_0893F754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F7AC;
      }
      goto L_0893F760;
    }
L_0893F760:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893F770u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 462u, 0x0893A648u>(ctx, &aot_mem) && ctx.pc == 0x0893F770u) goto L_0893F770;
    return;
L_0893F770:
    ctx.gpr[31] = (0x0893F778u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 478u, 0x0889E6C8u>(ctx, &aot_mem) && ctx.pc == 0x0893F778u) goto L_0893F778;
    return;
L_0893F778:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
    ctx.gpr[31] = (0x0893F784u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0893F784u) goto L_0893F784;
    return;
L_0893F784:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x0893F798u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893F798u) goto L_0893F798;
    return;
L_0893F798:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0893F7AC;
L_0893F7AC:
    ctx.gpr[31] = (0x0893F7B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893F7B4u) goto L_0893F7B4;
    return;
L_0893F7B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F444;
      }
      goto L_0893F7BC;
    }
L_0893F7BC:
    ctx.gpr[31] = (0x0893F7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 30u, 0x089581F0u>(ctx, &aot_mem) && ctx.pc == 0x0893F7C4u) goto L_0893F7C4;
    return;
L_0893F7C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F8B0;
      }
      goto L_0893F7CC;
    }
L_0893F7CC:
    ctx.gpr[31] = (0x0893F7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893F7D4u) goto L_0893F7D4;
    return;
L_0893F7D4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893F7E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 160u, 0x08938B58u>(ctx, &aot_mem) && ctx.pc == 0x0893F7E4u) goto L_0893F7E4;
    return;
L_0893F7E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F800;
      }
      goto L_0893F7EC;
    }
L_0893F7EC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0893F7F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30256));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 87u, 0x089385D4u>(ctx, &aot_mem) && ctx.pc == 0x0893F7F8u) goto L_0893F7F8;
    return;
L_0893F7F8:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893F800;
L_0893F800:
    ctx.gpr[31] = (0x0893F808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F808u) goto L_0893F808;
    return;
L_0893F808:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F8B0;
      }
      goto L_0893F810;
    }
L_0893F810:
    ctx.gpr[31] = (0x0893F818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F818u) goto L_0893F818;
    return;
L_0893F818:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0893F824u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F824u) goto L_0893F824;
    return;
L_0893F824:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0893F838u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 502u, 0x0893A844u>(ctx, &aot_mem) && ctx.pc == 0x0893F838u) goto L_0893F838;
    return;
L_0893F838:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F8B0;
      }
      goto L_0893F850;
    }
L_0893F850:
    ctx.gpr[31] = (0x0893F858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F858u) goto L_0893F858;
    return;
L_0893F858:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F8B0;
      }
      goto L_0893F874;
    }
L_0893F874:
    ctx.gpr[31] = (0x0893F87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F87Cu) goto L_0893F87C;
    return;
L_0893F87C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x0893F888u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 443u, 0x0893A558u>(ctx, &aot_mem) && ctx.pc == 0x0893F888u) goto L_0893F888;
    return;
L_0893F888:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F8B0;
      }
      goto L_0893F890;
    }
L_0893F890:
    ctx.gpr[31] = (0x0893F898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F898u) goto L_0893F898;
    return;
L_0893F898:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893F8B0;
      }
      goto L_0893F8A8;
    }
L_0893F8A8:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893F8B0;
L_0893F8B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
      if (branch_taken) {
          goto L_0893F444;
      }
      goto L_0893F8B8;
    }
L_0893F8B8:
    ctx.gpr[31] = (0x0893F8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F8C0u) goto L_0893F8C0;
    return;
L_0893F8C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F8FC;
      }
      goto L_0893F8C8;
    }
L_0893F8C8:
    ctx.gpr[31] = (0x0893F8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F8D0u) goto L_0893F8D0;
    return;
L_0893F8D0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x0893F8DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 443u, 0x0893A558u>(ctx, &aot_mem) && ctx.pc == 0x0893F8DCu) goto L_0893F8DC;
    return;
L_0893F8DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F8FC;
      }
      goto L_0893F8E4;
    }
L_0893F8E4:
    ctx.gpr[31] = (0x0893F8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893F8ECu) goto L_0893F8EC;
    return;
L_0893F8EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(156));
    ctx.gpr[31] = (0x0893F8FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0893F8FCu) goto L_0893F8FC;
    return;
L_0893F8FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893F918;
      }
      goto L_0893F908;
    }
L_0893F908:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893F924;
      }
      goto L_0893F918;
    }
L_0893F918:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893F924;
L_0893F924:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_0893F948;
    }
    goto L_0893F948;
L_0893F948:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893F984;
      }
      goto L_0893F95C;
    }
L_0893F95C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893F984u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F984u) goto L_0893F984;
    return;
L_0893F984:
    ctx.gpr[31] = (0x0893F98Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893F98Cu) goto L_0893F98C;
    return;
L_0893F98C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F444;
      }
      goto L_0893F994;
    }
L_0893F994:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893F9BC;
      }
      goto L_0893F9A4;
    }
L_0893F9A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893F9B4;
      }
      goto L_0893F9AC;
    }
L_0893F9AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0893F9D4;
      }
      goto L_0893F9B4;
    }
L_0893F9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 350u, 0x08941734u>(ctx, &aot_mem); return;
      }
      goto L_0893F9BC;
    }
L_0893F9BC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893F9F4;
      }
      goto L_0893F9C4;
    }
L_0893F9C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F9B4;
      }
      goto L_0893F9CC;
    }
L_0893F9CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FAA0;
      }
      goto L_0893F9D4;
    }
L_0893F9D4:
    ctx.gpr[31] = (0x0893F9DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 227u, 0x08939180u>(ctx, &aot_mem) && ctx.pc == 0x0893F9DCu) goto L_0893F9DC;
    return;
L_0893F9DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F9EC;
      }
      goto L_0893F9E4;
    }
L_0893F9E4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893F9EC;
L_0893F9EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F9B4;
      }
      goto L_0893F9F4;
    }
L_0893F9F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893FA14;
      }
      goto L_0893FA04;
    }
L_0893FA04:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893FA20;
      }
      goto L_0893FA14;
    }
L_0893FA14:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893FA20;
L_0893FA20:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0893FA40;
    }
    goto L_0893FA40;
L_0893FA40:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893FA78;
      }
      goto L_0893FA54;
    }
L_0893FA54:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893FA78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FA78u) goto L_0893FA78;
    return;
L_0893FA78:
    ctx.gpr[31] = (0x0893FA80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893FA80u) goto L_0893FA80;
    return;
L_0893FA80:
    ctx.gpr[31] = (0x0893FA88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 227u, 0x08939180u>(ctx, &aot_mem) && ctx.pc == 0x0893FA88u) goto L_0893FA88;
    return;
L_0893FA88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893FA98;
      }
      goto L_0893FA90;
    }
L_0893FA90:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893FA98;
L_0893FA98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F9B4;
      }
      goto L_0893FAA0;
    }
L_0893FAA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893FABC;
      }
      goto L_0893FAAC;
    }
L_0893FAAC:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893FAC8;
      }
      goto L_0893FABC;
    }
L_0893FABC:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893FAC8;
L_0893FAC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_0893FAEC;
    }
    goto L_0893FAEC;
L_0893FAEC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893FB28;
      }
      goto L_0893FB00;
    }
L_0893FB00:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893FB28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FB28u) goto L_0893FB28;
    return;
L_0893FB28:
    ctx.gpr[31] = (0x0893FB30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893FB30u) goto L_0893FB30;
    return;
L_0893FB30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F9B4;
      }
      goto L_0893FB38;
    }
L_0893FB38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893FB60;
      }
      goto L_0893FB48;
    }
L_0893FB48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893FB70;
      }
      goto L_0893FB50;
    }
L_0893FB50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893FF40;
      }
      goto L_0893FB58;
    }
L_0893FB58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FB78;
      }
      goto L_0893FB60;
    }
L_0893FB60:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893FCB8;
      }
      goto L_0893FB68;
    }
L_0893FB68:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893FFAC;
      }
      goto L_0893FB70;
    }
L_0893FB70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 350u, 0x08941734u>(ctx, &aot_mem); return;
      }
      goto L_0893FB78;
    }
L_0893FB78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FCB0;
      }
      goto L_0893FB84;
    }
L_0893FB84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FBF0;
      }
      goto L_0893FB94;
    }
L_0893FB94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893FBA8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 129u, 0x0893884Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FBA8u) goto L_0893FBA8;
    return;
L_0893FBA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FBF0;
      }
      goto L_0893FBB0;
    }
L_0893FBB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FBD4;
      }
      goto L_0893FBBC;
    }
L_0893FBBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FBD4;
      }
      goto L_0893FBC8;
    }
L_0893FBC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x0893FBD4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0893FBD4u) goto L_0893FBD4;
    return;
L_0893FBD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0893FBE8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0893FBE8u) goto L_0893FBE8;
    return;
L_0893FBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FC18;
      }
      goto L_0893FBF0;
    }
L_0893FBF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FC14;
      }
      goto L_0893FBFC;
    }
L_0893FBFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FC14;
      }
      goto L_0893FC08;
    }
L_0893FC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x0893FC14u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0893FC14u) goto L_0893FC14;
    return;
L_0893FC14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    goto L_0893FC18;
L_0893FC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FCB0;
      }
      goto L_0893FC24;
    }
L_0893FC24:
    ctx.gpr[31] = (0x0893FC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0893FC2Cu) goto L_0893FC2C;
    return;
L_0893FC2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893FCB0;
      }
      goto L_0893FC34;
    }
L_0893FC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893FCB0;
      }
      goto L_0893FC48;
    }
L_0893FC48:
    ctx.gpr[31] = (0x0893FC50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893FC50u) goto L_0893FC50;
    return;
L_0893FC50:
    ctx.gpr[6] = (16576u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0893FC64u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 160u, 0x08938B58u>(ctx, &aot_mem) && ctx.pc == 0x0893FC64u) goto L_0893FC64;
    return;
L_0893FC64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FCB0;
      }
      goto L_0893FC6C;
    }
L_0893FC6C:
    ctx.gpr[31] = (0x0893FC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893FC74u) goto L_0893FC74;
    return;
L_0893FC74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893FCB0;
      }
      goto L_0893FC8C;
    }
L_0893FC8C:
    ctx.gpr[31] = (0x0893FC94u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0893FC94u) goto L_0893FC94;
    return;
L_0893FC94:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893FCB0;
L_0893FCB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FB70;
      }
      goto L_0893FCB8;
    }
L_0893FCB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893FCD8;
      }
      goto L_0893FCC8;
    }
L_0893FCC8:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893FCE4;
      }
      goto L_0893FCD8;
    }
L_0893FCD8:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893FCE4;
L_0893FCE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0893FD04;
    }
    goto L_0893FD04;
L_0893FD04:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893FF30;
      }
      goto L_0893FD18;
    }
L_0893FD18:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(214)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0893FDE4;
      }
      goto L_0893FD34;
    }
L_0893FD34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0893FDE4;
      }
      goto L_0893FD40;
    }
L_0893FD40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0893FDE4;
      }
      goto L_0893FD50;
    }
L_0893FD50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893FD64u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 129u, 0x0893884Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FD64u) goto L_0893FD64;
    return;
L_0893FD64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0893FDE4;
      }
      goto L_0893FD6C;
    }
L_0893FD6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FD90;
      }
      goto L_0893FD78;
    }
L_0893FD78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FD90;
      }
      goto L_0893FD84;
    }
L_0893FD84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x0893FD90u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0893FD90u) goto L_0893FD90;
    return;
L_0893FD90:
    ctx.gpr[31] = (0x0893FD98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x0893FD98u) goto L_0893FD98;
    return;
L_0893FD98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FDC4;
      }
      goto L_0893FDA4;
    }
L_0893FDA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0893FDC4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893FDC4u) goto L_0893FDC4;
    return;
L_0893FDC4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0893FDE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30292));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 87u, 0x089385D4u>(ctx, &aot_mem) && ctx.pc == 0x0893FDE0u) goto L_0893FDE0;
    return;
L_0893FDE0:
    ctx.gpr[4] = (2232u << 16u);
    goto L_0893FDE4;
L_0893FDE4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FEF4;
      }
      goto L_0893FE14;
    }
L_0893FE14:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0893FE24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x0893FE24u) goto L_0893FE24;
    return;
L_0893FE24:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0893FEC4;
      }
      goto L_0893FE30;
    }
L_0893FE30:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893FE40u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 182u, 0x08938DECu>(ctx, &aot_mem) && ctx.pc == 0x0893FE40u) goto L_0893FE40;
    return;
L_0893FE40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0893FEC4;
      }
      goto L_0893FE48;
    }
L_0893FE48:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6924)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(656), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(658), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (2232u << 16u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(659), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(662), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893FEA8;
      }
      goto L_0893FE84;
    }
L_0893FE84:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(664), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(659), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(662), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(664))))));
    ctx.gpr[31] = (0x0893FEA0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 426u, 0x08982490u>(ctx, &aot_mem) && ctx.pc == 0x0893FEA0u) goto L_0893FEA0;
    return;
L_0893FEA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FEC0;
      }
      goto L_0893FEA8;
    }
L_0893FEA8:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(659), ctx.gpr[6]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(662), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x0893FEC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FEC0u) goto L_0893FEC0;
    return;
L_0893FEC0:
    ctx.gpr[4] = (2232u << 16u);
    goto L_0893FEC4;
L_0893FEC4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893FE14;
      }
      goto L_0893FEF4;
    }
L_0893FEF4:
    ctx.gpr[31] = (0x0893FEFCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0893FEFCu) goto L_0893FEFC;
    return;
L_0893FEFC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893FF30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FF30u) goto L_0893FF30;
    return;
L_0893FF30:
    ctx.gpr[31] = (0x0893FF38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0893FF38u) goto L_0893FF38;
    return;
L_0893FF38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FB70;
      }
      goto L_0893FF40;
    }
L_0893FF40:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(214)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893FFA4;
      }
      goto L_0893FF5C;
    }
L_0893FF5C:
    ctx.gpr[31] = (0x0893FF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893FF64u) goto L_0893FF64;
    return;
L_0893FF64:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0893FF70u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0893FF70u) goto L_0893FF70;
    return;
L_0893FF70:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0893FF84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 491u, 0x0893A7A4u>(ctx, &aot_mem) && ctx.pc == 0x0893FF84u) goto L_0893FF84;
    return;
L_0893FF84:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893FFA4;
      }
      goto L_0893FF9C;
    }
L_0893FF9C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893FFA4;
L_0893FFA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FB70;
      }
      goto L_0893FFAC;
    }
L_0893FFAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893FFC8;
      }
      goto L_0893FFB8;
    }
L_0893FFB8:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893FFD4;
      }
      goto L_0893FFC8;
    }
L_0893FFC8:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893FFD4;
L_0893FFD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_0893FFF8;
    }
    goto L_0893FFF8;
L_0893FFF8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    ctx.pc = 0x08940000u; return;
}

void recomp_unit_0078(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0078_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_78(Runtime &runtime) {
    runtime.register_generated_unit(78u, 0x0893C000u, 16384u, &recomp_unit_0078, &recomp_unit_0078_entry);
    runtime.register_function(0x0893C004u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C024u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C02Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C034u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C054u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C05Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C064u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C068u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C070u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C128u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C15Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C1B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C1BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C1C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C1D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C1FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C22Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C238u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C248u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C250u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C254u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C25Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C280u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C284u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C300u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C308u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C310u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C340u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C348u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C350u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C358u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C368u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C36Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C380u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C38Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C40Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C44Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C468u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C474u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C47Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C48Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C4B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C510u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C520u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C528u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C530u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C538u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C540u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C548u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C550u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C558u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C560u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C568u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C570u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C578u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C584u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C58Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C608u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C63Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C644u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C66Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C670u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C680u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C6A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C6C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C6C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C6F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C708u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C734u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C73Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C744u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C74Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C75Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C760u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C774u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C794u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C80Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C810u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C824u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C834u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C84Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C854u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C85Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C864u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C86Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C874u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C87Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C884u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C88Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C894u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C89Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C90Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C91Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C924u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C92Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C93Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C944u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C9C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C9D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CAB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CAD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB2Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CBB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CBC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CCA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CCACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CCB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CCBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CCCCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CCF4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD2Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CEA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CEACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CEC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CED0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CEE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CEF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFF4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D000u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D00Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D018u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D028u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D034u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D03Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D044u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D070u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D080u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D084u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D118u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D120u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D128u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D134u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D140u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D150u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D158u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D164u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D170u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D17Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D18Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D194u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D19Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D254u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D264u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D270u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D284u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D290u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D304u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D310u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D320u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D32Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D33Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D348u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D35Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D374u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D38Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D404u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D410u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D41Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D428u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D434u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D444u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D450u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D458u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D460u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D464u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D480u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D508u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D510u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D518u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D524u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D52Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D534u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D548u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D554u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D56Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D574u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D584u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D58Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D598u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D604u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D628u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D64Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D650u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D658u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D670u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D678u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D684u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D690u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D69Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D704u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D710u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D718u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D728u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D750u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D760u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D76Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D790u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D79Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D804u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D80Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D814u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D81Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D82Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D834u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D83Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D844u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D84Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D880u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D88Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D89Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D914u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D930u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D938u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D940u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D948u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D954u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D968u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D980u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA6Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBCCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC44u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCCCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCF4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDF4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE9Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DEA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DEB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DEB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E0A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E114u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E118u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E18Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E190u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E1A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E278u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E334u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E360u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E378u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E3A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E3B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E418u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E430u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E438u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E444u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E44Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E45Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E498u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E514u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E51Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E524u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E52Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E53Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E554u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E55Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E574u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E580u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E610u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E638u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E640u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E648u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E650u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E658u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E660u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E664u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E66Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E674u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E67Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E684u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E690u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E698u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E708u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E720u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E73Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E744u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E74Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E754u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E764u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E774u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E7A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E7B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E7C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E7DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E7F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E810u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E818u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E830u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E84Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E854u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E85Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E864u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E86Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E878u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E888u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E898u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E90Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E914u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E91Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E924u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E928u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E930u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E940u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E94Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E954u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E96Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E97Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E998u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA2Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA44u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EABCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBCCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBF4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECF4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED9Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDCCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EECCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EED4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEF4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFCCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F008u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F010u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F018u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F020u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F028u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F030u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F038u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F040u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F068u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F08Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F104u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F10Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F120u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F12Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F13Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F144u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F14Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F160u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F168u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F170u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F180u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F19Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F208u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F210u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F224u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F22Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F238u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F244u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F25Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F27Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F288u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F294u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F304u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F310u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F31Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F324u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F330u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F344u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F35Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F364u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F36Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F378u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F388u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F394u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F404u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F40Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F41Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F424u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F42Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F434u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F43Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F444u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F44Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F454u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F45Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F464u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F470u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F478u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F480u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F490u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F498u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F520u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F538u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F540u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F558u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F568u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F574u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F57Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F584u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F594u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F59Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F600u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F604u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F60Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F61Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F628u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F634u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F64Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F650u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F658u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F674u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F67Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F68Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F71Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F730u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F754u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F760u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F770u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F778u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F784u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F798u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F800u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F808u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F810u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F818u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F824u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F838u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F850u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F858u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F874u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F87Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F888u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F890u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F898u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F908u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F918u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F924u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F948u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F95Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F984u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F98Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F994u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FABCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC2Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC6Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD6Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FDA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FDC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FDE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FDE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FEA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FEA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FEC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FEC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FEF4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FEFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF9Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFF8u, &recomp_unit_0078, "recomp_unit_0078");
}
} // namespace psprecomp
