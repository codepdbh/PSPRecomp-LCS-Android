#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0166[4091] = {
    1, 0, 0, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16,
    0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23,
    0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0,
    0, 33, 0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43,
    0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 51,
    0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 72,
    0, 0, 73, 0, 74, 0, 75, 0, 0, 76, 0, 77, 78, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 91, 0,
    0, 92, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0,
    0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 118, 119, 0, 0, 120, 0, 0,
    0, 121, 0, 122, 0, 0, 0, 123, 124, 0, 0, 125, 0, 126, 0, 0, 127, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136,
    0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 142, 0, 0, 0, 0, 143, 144, 0, 0, 0, 0, 145, 0, 146,
    0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0,
    152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 157, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 163,
    0, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178,
    0, 0, 0, 179, 180, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 187,
    0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0,
    0, 0, 195, 196, 0, 0, 197, 0, 198, 0, 0, 199, 200, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0,
    210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 215, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0,
    231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0,
    0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241,
    0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0,
    244, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0,
    0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 254, 255, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 263, 0, 264, 0, 0, 0,
    265, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 268, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 279, 0, 280, 0,
    281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 0, 287,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 306, 307, 0, 0, 308, 0, 309, 0, 310, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0,
    0, 0, 321, 0, 322, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0,
    0, 0, 330, 0, 331, 0, 0, 332, 0, 0, 333, 0, 334, 0, 335, 0, 336, 337, 0, 338, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0,
    342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 351,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0,
    0, 360, 0, 361, 362, 0, 0, 363, 0, 364, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 369, 0, 370, 371,
    0, 0, 0, 372, 0, 0, 373, 0, 374, 0, 375, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0,
    381, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 387, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0,
    399, 0, 400, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0,
    405, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0,
    417, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0,
    0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0,
    0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440,
    0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 446, 0, 0, 0, 447, 0,
    0, 0, 448, 0, 0, 449, 450, 0, 0, 451, 0, 452, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0,
    457, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 466, 0, 0,
    467, 0, 468, 0, 469, 0, 0, 470, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475,
    0, 476, 0, 477, 0, 478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491,
    0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 505, 0, 506, 0, 0, 507,
    0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523,
    0, 524, 0, 525, 0, 526, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 534, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 539, 0, 540, 0, 541,
    0, 542, 543, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 546, 0, 547, 0, 548, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 557,
    0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 560, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 569,
    0, 570, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 574, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0,
    0, 0, 0, 579, 0, 580, 581, 0, 582, 0, 583, 0, 584, 0, 0, 585, 586, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 592, 0, 593, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0,
    0, 0, 596, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 0,
    0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0,
    607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0,
    0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 616, 0, 617, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620,
    0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0,
    0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0,
    0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 637, 0,
    0, 638, 0, 639, 0, 0, 0, 0, 0, 640, 0, 641, 0, 642, 0, 0, 643, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 648, 0, 649, 0, 0, 0, 0, 650, 0, 651, 0, 0, 652, 0, 653, 0, 654,
    0, 655, 0, 656, 657, 0, 658, 0, 0, 659, 0, 660, 0, 661, 662, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 673, 0, 0, 674, 0, 675, 0, 0, 0, 676,
    0, 677, 0, 678, 679, 0, 0, 680, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 684, 0, 0, 0,
    685, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0, 0, 0, 0, 0,
    693, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 696, 0, 697, 0, 0, 698, 0, 0, 699, 0, 0, 700, 0, 0, 0, 0, 701, 0, 702,
    0, 703, 0, 704, 705, 0, 706, 0, 707, 708, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 712, 0, 713, 714, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 717, 0, 718, 0, 0, 0, 0, 0, 719, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 720, 0, 721, 722, 0, 723, 0, 0, 724, 0, 725, 0, 726, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0, 0, 729,
    0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 732, 733, 0, 734, 0, 0, 0, 735, 0, 0, 736, 0, 737, 0, 738, 0, 739, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 745, 0, 746, 0, 0, 0, 0,
    0, 747, 0, 748, 0, 749, 0, 750, 0, 751, 0, 752, 753, 0, 754, 0, 0, 0, 0, 755, 0, 756, 0, 757, 0, 0, 0, 0, 0, 758, 0, 759,
    0, 0, 760, 761, 762, 0, 0, 763, 0, 764, 0, 0, 765, 0, 0, 0, 0, 0, 766, 0, 767, 0, 768, 0, 769, 0, 0, 770, 0, 0, 0, 0,
    0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 0, 0, 773, 0, 774, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    780, 0, 0, 0, 781, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0,
    0, 0, 786, 0, 787, 0, 0, 0, 788, 0, 789, 0, 0, 790, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 793, 0, 794, 0,
    0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 797, 0, 798, 0, 0, 0, 0, 0, 0, 799,
    0, 0, 0, 0, 800, 0, 801, 0, 802, 0, 0, 803, 0, 0, 0, 0, 0, 0, 804, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    806, 0, 807, 0, 0, 808, 0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 813,
    0, 0, 0, 0, 0, 0, 814, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 818, 0, 819, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 822, 0, 823, 0, 824, 0, 825, 0, 826, 0, 0, 0, 0,
    0, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 829, 0, 0, 0, 830, 831, 0, 832, 0, 0, 0, 833, 834, 0, 0, 0, 0, 0,
    0, 0, 835, 0, 0, 836, 0, 837, 0, 838, 0, 0, 0, 0, 0, 839, 0, 840, 0, 841, 0, 842, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0,
    844, 0, 0, 0, 845, 0, 0, 0, 0, 846, 0, 847, 0, 848, 849, 850, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 852, 0,
    853, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 855, 856, 0, 0, 0, 0, 857, 0, 0, 0, 0, 858,
    0, 0, 0, 859, 0, 860, 861, 0, 862, 0, 0, 0, 0, 0, 863, 0, 0, 0, 864, 0, 0, 0, 865, 866, 0, 0, 867, 0, 868, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 870, 0, 0, 0, 871, 0, 0, 0, 872, 873,
    0, 0, 0, 874, 0, 0, 0, 875, 0, 0, 0, 0, 876, 0, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 0, 0, 878, 0, 879, 0, 880, 0,
    0, 881, 0, 0, 882, 883, 0, 0, 0, 884, 0, 885, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 887,
};
void recomp_unit_0166_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A9C000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0166[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A9C000;
    case 2u: goto L_08A9C010;
    case 3u: goto L_08A9C018;
    case 4u: goto L_08A9C020;
    case 5u: goto L_08A9C028;
    case 6u: goto L_08A9C040;
    case 7u: goto L_08A9C050;
    case 8u: goto L_08A9C060;
    case 9u: goto L_08A9C078;
    case 10u: goto L_08A9C08C;
    case 11u: goto L_08A9C0AC;
    case 12u: goto L_08A9C0B4;
    case 13u: goto L_08A9C0BC;
    case 14u: goto L_08A9C0E0;
    case 15u: goto L_08A9C0F0;
    case 16u: goto L_08A9C0FC;
    case 17u: goto L_08A9C10C;
    case 18u: goto L_08A9C118;
    case 19u: goto L_08A9C144;
    case 20u: goto L_08A9C158;
    case 21u: goto L_08A9C1B4;
    case 22u: goto L_08A9C1EC;
    case 23u: goto L_08A9C1FC;
    case 24u: goto L_08A9C208;
    case 25u: goto L_08A9C218;
    case 26u: goto L_08A9C24C;
    case 27u: goto L_08A9C270;
    case 28u: goto L_08A9C278;
    case 29u: goto L_08A9C29C;
    case 30u: goto L_08A9C2C4;
    case 31u: goto L_08A9C2E8;
    case 32u: goto L_08A9C2F4;
    case 33u: goto L_08A9C304;
    case 34u: goto L_08A9C310;
    case 35u: goto L_08A9C318;
    case 36u: goto L_08A9C324;
    case 37u: goto L_08A9C330;
    case 38u: goto L_08A9C340;
    case 39u: goto L_08A9C34C;
    case 40u: goto L_08A9C35C;
    case 41u: goto L_08A9C368;
    case 42u: goto L_08A9C370;
    case 43u: goto L_08A9C37C;
    case 44u: goto L_08A9C388;
    case 45u: goto L_08A9C394;
    case 46u: goto L_08A9C3B0;
    case 47u: goto L_08A9C3B8;
    case 48u: goto L_08A9C3CC;
    case 49u: goto L_08A9C3E8;
    case 50u: goto L_08A9C3F0;
    case 51u: goto L_08A9C3FC;
    case 52u: goto L_08A9C40C;
    case 53u: goto L_08A9C414;
    case 54u: goto L_08A9C428;
    case 55u: goto L_08A9C434;
    case 56u: goto L_08A9C438;
    case 57u: goto L_08A9C44C;
    case 58u: goto L_08A9C47C;
    case 59u: goto L_08A9C4BC;
    case 60u: goto L_08A9C4C0;
    case 61u: goto L_08A9C508;
    case 62u: goto L_08A9C524;
    case 63u: goto L_08A9C528;
    case 64u: goto L_08A9C578;
    case 65u: goto L_08A9C580;
    case 66u: goto L_08A9C594;
    case 67u: goto L_08A9C5B8;
    case 68u: goto L_08A9C5C8;
    case 69u: goto L_08A9C5D8;
    case 70u: goto L_08A9C5E0;
    case 71u: goto L_08A9C5EC;
    case 72u: goto L_08A9C5FC;
    case 73u: goto L_08A9C608;
    case 74u: goto L_08A9C610;
    case 75u: goto L_08A9C618;
    case 76u: goto L_08A9C624;
    case 77u: goto L_08A9C62C;
    case 78u: goto L_08A9C630;
    case 79u: goto L_08A9C638;
    case 80u: goto L_08A9C648;
    case 81u: goto L_08A9C650;
    case 82u: goto L_08A9C670;
    case 83u: goto L_08A9C690;
    case 84u: goto L_08A9C69C;
    case 85u: goto L_08A9C6A8;
    case 86u: goto L_08A9C6B8;
    case 87u: goto L_08A9C6C0;
    case 88u: goto L_08A9C6CC;
    case 89u: goto L_08A9C6D8;
    case 90u: goto L_08A9C6E4;
    case 91u: goto L_08A9C6F8;
    case 92u: goto L_08A9C704;
    case 93u: goto L_08A9C708;
    case 94u: goto L_08A9C720;
    case 95u: goto L_08A9C730;
    case 96u: goto L_08A9C740;
    case 97u: goto L_08A9C748;
    case 98u: goto L_08A9C74C;
    case 99u: goto L_08A9C764;
    case 100u: goto L_08A9C76C;
    case 101u: goto L_08A9C788;
    case 102u: goto L_08A9C790;
    case 103u: goto L_08A9C798;
    case 104u: goto L_08A9C7A8;
    case 105u: goto L_08A9C7B4;
    case 106u: goto L_08A9C7C4;
    case 107u: goto L_08A9C7CC;
    case 108u: goto L_08A9C7DC;
    case 109u: goto L_08A9C7E4;
    case 110u: goto L_08A9C7EC;
    case 111u: goto L_08A9C808;
    case 112u: goto L_08A9C81C;
    case 113u: goto L_08A9C82C;
    case 114u: goto L_08A9C838;
    case 115u: goto L_08A9C848;
    case 116u: goto L_08A9C850;
    case 117u: goto L_08A9C860;
    case 118u: goto L_08A9C864;
    case 119u: goto L_08A9C868;
    case 120u: goto L_08A9C874;
    case 121u: goto L_08A9C884;
    case 122u: goto L_08A9C88C;
    case 123u: goto L_08A9C89C;
    case 124u: goto L_08A9C8A0;
    case 125u: goto L_08A9C8AC;
    case 126u: goto L_08A9C8B4;
    case 127u: goto L_08A9C8C0;
    case 128u: goto L_08A9C8C4;
    case 129u: goto L_08A9C8CC;
    case 130u: goto L_08A9C904;
    case 131u: goto L_08A9C90C;
    case 132u: goto L_08A9C91C;
    case 133u: goto L_08A9C93C;
    case 134u: goto L_08A9C954;
    case 135u: goto L_08A9C968;
    case 136u: goto L_08A9C97C;
    case 137u: goto L_08A9C988;
    case 138u: goto L_08A9C994;
    case 139u: goto L_08A9C9A8;
    case 140u: goto L_08A9C9B0;
    case 141u: goto L_08A9C9C4;
    case 142u: goto L_08A9C9C8;
    case 143u: goto L_08A9C9DC;
    case 144u: goto L_08A9C9E0;
    case 145u: goto L_08A9C9F4;
    case 146u: goto L_08A9C9FC;
    case 147u: goto L_08A9CA14;
    case 148u: goto L_08A9CA34;
    case 149u: goto L_08A9CA48;
    case 150u: goto L_08A9CA6C;
    case 151u: goto L_08A9CA74;
    case 152u: goto L_08A9CA80;
    case 153u: goto L_08A9CA94;
    case 154u: goto L_08A9CAAC;
    case 155u: goto L_08A9CAC4;
    case 156u: goto L_08A9CAE0;
    case 157u: goto L_08A9CAE4;
    case 158u: goto L_08A9CB30;
    case 159u: goto L_08A9CB3C;
    case 160u: goto L_08A9CB5C;
    case 161u: goto L_08A9CB64;
    case 162u: goto L_08A9CB74;
    case 163u: goto L_08A9CB7C;
    case 164u: goto L_08A9CB8C;
    case 165u: goto L_08A9CB98;
    case 166u: goto L_08A9CBA4;
    case 167u: goto L_08A9CBBC;
    case 168u: goto L_08A9CBD0;
    case 169u: goto L_08A9CBD4;
    case 170u: goto L_08A9CC08;
    case 171u: goto L_08A9CC14;
    case 172u: goto L_08A9CC34;
    case 173u: goto L_08A9CC3C;
    case 174u: goto L_08A9CC44;
    case 175u: goto L_08A9CC4C;
    case 176u: goto L_08A9CC5C;
    case 177u: goto L_08A9CC68;
    case 178u: goto L_08A9CC7C;
    case 179u: goto L_08A9CC8C;
    case 180u: goto L_08A9CC90;
    case 181u: goto L_08A9CC9C;
    case 182u: goto L_08A9CCB0;
    case 183u: goto L_08A9CCBC;
    case 184u: goto L_08A9CCC0;
    case 185u: goto L_08A9CCE8;
    case 186u: goto L_08A9CCF4;
    case 187u: goto L_08A9CCFC;
    case 188u: goto L_08A9CD04;
    case 189u: goto L_08A9CD10;
    case 190u: goto L_08A9CD1C;
    case 191u: goto L_08A9CD40;
    case 192u: goto L_08A9CD4C;
    case 193u: goto L_08A9CD64;
    case 194u: goto L_08A9CD78;
    case 195u: goto L_08A9CD88;
    case 196u: goto L_08A9CD8C;
    case 197u: goto L_08A9CD98;
    case 198u: goto L_08A9CDA0;
    case 199u: goto L_08A9CDAC;
    case 200u: goto L_08A9CDB0;
    case 201u: goto L_08A9CDB8;
    case 202u: goto L_08A9CDC4;
    case 203u: goto L_08A9CDFC;
    case 204u: goto L_08A9CE04;
    case 205u: goto L_08A9CE14;
    case 206u: goto L_08A9CE34;
    case 207u: goto L_08A9CE4C;
    case 208u: goto L_08A9CE60;
    case 209u: goto L_08A9CE6C;
    case 210u: goto L_08A9CE80;
    case 211u: goto L_08A9CE90;
    case 212u: goto L_08A9CEB0;
    case 213u: goto L_08A9CEC8;
    case 214u: goto L_08A9CEE8;
    case 215u: goto L_08A9CEEC;
    case 216u: goto L_08A9CF34;
    case 217u: goto L_08A9D030;
    case 218u: goto L_08A9D03C;
    case 219u: goto L_08A9D050;
    case 220u: goto L_08A9D07C;
    case 221u: goto L_08A9D0A4;
    case 222u: goto L_08A9D0B8;
    case 223u: goto L_08A9D18C;
    case 224u: goto L_08A9D198;
    case 225u: goto L_08A9D1BC;
    case 226u: goto L_08A9D1C4;
    case 227u: goto L_08A9D1CC;
    case 228u: goto L_08A9D1D4;
    case 229u: goto L_08A9D1E4;
    case 230u: goto L_08A9D1F8;
    case 231u: goto L_08A9D200;
    case 232u: goto L_08A9D208;
    case 233u: goto L_08A9D2DC;
    case 234u: goto L_08A9D2E4;
    case 235u: goto L_08A9D2EC;
    case 236u: goto L_08A9D30C;
    case 237u: goto L_08A9D324;
    case 238u: goto L_08A9D340;
    case 239u: goto L_08A9D354;
    case 240u: goto L_08A9D374;
    case 241u: goto L_08A9D37C;
    case 242u: goto L_08A9D384;
    case 243u: goto L_08A9D3F8;
    case 244u: goto L_08A9D400;
    case 245u: goto L_08A9D40C;
    case 246u: goto L_08A9D414;
    case 247u: goto L_08A9D448;
    case 248u: goto L_08A9D464;
    case 249u: goto L_08A9D46C;
    case 250u: goto L_08A9D48C;
    case 251u: goto L_08A9D49C;
    case 252u: goto L_08A9D4B0;
    case 253u: goto L_08A9D4B8;
    case 254u: goto L_08A9D4C0;
    case 255u: goto L_08A9D4C4;
    case 256u: goto L_08A9D4D0;
    case 257u: goto L_08A9D4E8;
    case 258u: goto L_08A9D528;
    case 259u: goto L_08A9D538;
    case 260u: goto L_08A9D548;
    case 261u: goto L_08A9D550;
    case 262u: goto L_08A9D558;
    case 263u: goto L_08A9D568;
    case 264u: goto L_08A9D570;
    case 265u: goto L_08A9D580;
    case 266u: goto L_08A9D58C;
    case 267u: goto L_08A9D5A4;
    case 268u: goto L_08A9D5AC;
    case 269u: goto L_08A9D5B0;
    case 270u: goto L_08A9D5B8;
    case 271u: goto L_08A9D5E4;
    case 272u: goto L_08A9D600;
    case 273u: goto L_08A9D624;
    case 274u: goto L_08A9D644;
    case 275u: goto L_08A9D64C;
    case 276u: goto L_08A9D654;
    case 277u: goto L_08A9D660;
    case 278u: goto L_08A9D668;
    case 279u: goto L_08A9D670;
    case 280u: goto L_08A9D678;
    case 281u: goto L_08A9D680;
    case 282u: goto L_08A9D690;
    case 283u: goto L_08A9D6D8;
    case 284u: goto L_08A9D6E0;
    case 285u: goto L_08A9D6E8;
    case 286u: goto L_08A9D6F0;
    case 287u: goto L_08A9D6FC;
    case 288u: goto L_08A9D700;
    case 289u: goto L_08A9D734;
    case 290u: goto L_08A9D74C;
    case 291u: goto L_08A9D754;
    case 292u: goto L_08A9D770;
    case 293u: goto L_08A9D780;
    case 294u: goto L_08A9D7F0;
    case 295u: goto L_08A9D89C;
    case 296u: goto L_08A9D8A4;
    case 297u: goto L_08A9D8B8;
    case 298u: goto L_08A9D8D0;
    case 299u: goto L_08A9D90C;
    case 300u: goto L_08A9D954;
    case 301u: goto L_08A9D964;
    case 302u: goto L_08A9D970;
    case 303u: goto L_08A9D990;
    case 304u: goto L_08A9D9AC;
    case 305u: goto L_08A9D9C4;
    case 306u: goto L_08A9D9CC;
    case 307u: goto L_08A9D9D0;
    case 308u: goto L_08A9D9DC;
    case 309u: goto L_08A9D9E4;
    case 310u: goto L_08A9D9EC;
    case 311u: goto L_08A9DA24;
    case 312u: goto L_08A9DA2C;
    case 313u: goto L_08A9DA40;
    case 314u: goto L_08A9DA48;
    case 315u: goto L_08A9DA50;
    case 316u: goto L_08A9DA58;
    case 317u: goto L_08A9DA74;
    case 318u: goto L_08A9DAA8;
    case 319u: goto L_08A9DADC;
    case 320u: goto L_08A9DAEC;
    case 321u: goto L_08A9DB08;
    case 322u: goto L_08A9DB10;
    case 323u: goto L_08A9DB14;
    case 324u: goto L_08A9DB1C;
    case 325u: goto L_08A9DB24;
    case 326u: goto L_08A9DB2C;
    case 327u: goto L_08A9DB34;
    case 328u: goto L_08A9DB48;
    case 329u: goto L_08A9DB68;
    case 330u: goto L_08A9DB88;
    case 331u: goto L_08A9DB90;
    case 332u: goto L_08A9DB9C;
    case 333u: goto L_08A9DBA8;
    case 334u: goto L_08A9DBB0;
    case 335u: goto L_08A9DBB8;
    case 336u: goto L_08A9DBC0;
    case 337u: goto L_08A9DBC4;
    case 338u: goto L_08A9DBCC;
    case 339u: goto L_08A9DBD4;
    case 340u: goto L_08A9DBDC;
    case 341u: goto L_08A9DBF8;
    case 342u: goto L_08A9DC00;
    case 343u: goto L_08A9DC14;
    case 344u: goto L_08A9DC28;
    case 345u: goto L_08A9DC38;
    case 346u: goto L_08A9DC48;
    case 347u: goto L_08A9DC50;
    case 348u: goto L_08A9DC5C;
    case 349u: goto L_08A9DC6C;
    case 350u: goto L_08A9DC74;
    case 351u: goto L_08A9DC7C;
    case 352u: goto L_08A9DC90;
    case 353u: goto L_08A9DCA4;
    case 354u: goto L_08A9DCBC;
    case 355u: goto L_08A9DCD4;
    case 356u: goto L_08A9DCEC;
    case 357u: goto L_08A9DD3C;
    case 358u: goto L_08A9DD54;
    case 359u: goto L_08A9DD78;
    case 360u: goto L_08A9DD84;
    case 361u: goto L_08A9DD8C;
    case 362u: goto L_08A9DD90;
    case 363u: goto L_08A9DD9C;
    case 364u: goto L_08A9DDA4;
    case 365u: goto L_08A9DDAC;
    case 366u: goto L_08A9DDC4;
    case 367u: goto L_08A9DDD8;
    case 368u: goto L_08A9DDE8;
    case 369u: goto L_08A9DDF0;
    case 370u: goto L_08A9DDF8;
    case 371u: goto L_08A9DDFC;
    case 372u: goto L_08A9DE0C;
    case 373u: goto L_08A9DE18;
    case 374u: goto L_08A9DE20;
    case 375u: goto L_08A9DE28;
    case 376u: goto L_08A9DE30;
    case 377u: goto L_08A9DE44;
    case 378u: goto L_08A9DE5C;
    case 379u: goto L_08A9DE70;
    case 380u: goto L_08A9DE78;
    case 381u: goto L_08A9DE80;
    case 382u: goto L_08A9DE9C;
    case 383u: goto L_08A9DEA4;
    case 384u: goto L_08A9DEBC;
    case 385u: goto L_08A9DF28;
    case 386u: goto L_08A9DF34;
    case 387u: goto L_08A9DF3C;
    case 388u: goto L_08A9DF40;
    case 389u: goto L_08A9DF50;
    case 390u: goto L_08A9DF60;
    case 391u: goto L_08A9DF70;
    case 392u: goto L_08A9DF94;
    case 393u: goto L_08A9DFB8;
    case 394u: goto L_08A9DFC0;
    case 395u: goto L_08A9DFC8;
    case 396u: goto L_08A9DFD0;
    case 397u: goto L_08A9DFF0;
    case 398u: goto L_08A9DFF8;
    case 399u: goto L_08A9E000;
    case 400u: goto L_08A9E008;
    case 401u: goto L_08A9E010;
    case 402u: goto L_08A9E028;
    case 403u: goto L_08A9E06C;
    case 404u: goto L_08A9E078;
    case 405u: goto L_08A9E080;
    case 406u: goto L_08A9E088;
    case 407u: goto L_08A9E0A0;
    case 408u: goto L_08A9E0D8;
    case 409u: goto L_08A9E0F0;
    case 410u: goto L_08A9E114;
    case 411u: goto L_08A9E138;
    case 412u: goto L_08A9E140;
    case 413u: goto L_08A9E148;
    case 414u: goto L_08A9E150;
    case 415u: goto L_08A9E170;
    case 416u: goto L_08A9E178;
    case 417u: goto L_08A9E180;
    case 418u: goto L_08A9E188;
    case 419u: goto L_08A9E1A4;
    case 420u: goto L_08A9E1AC;
    case 421u: goto L_08A9E1DC;
    case 422u: goto L_08A9E1E8;
    case 423u: goto L_08A9E1F0;
    case 424u: goto L_08A9E20C;
    case 425u: goto L_08A9E214;
    case 426u: goto L_08A9E238;
    case 427u: goto L_08A9E250;
    case 428u: goto L_08A9E268;
    case 429u: goto L_08A9E288;
    case 430u: goto L_08A9E2C4;
    case 431u: goto L_08A9E2D8;
    case 432u: goto L_08A9E2E4;
    case 433u: goto L_08A9E31C;
    case 434u: goto L_08A9E344;
    case 435u: goto L_08A9E354;
    case 436u: goto L_08A9E35C;
    case 437u: goto L_08A9E36C;
    case 438u: goto L_08A9E38C;
    case 439u: goto L_08A9E3F4;
    case 440u: goto L_08A9E3FC;
    case 441u: goto L_08A9E404;
    case 442u: goto L_08A9E418;
    case 443u: goto L_08A9E42C;
    case 444u: goto L_08A9E458;
    case 445u: goto L_08A9E460;
    case 446u: goto L_08A9E468;
    case 447u: goto L_08A9E478;
    case 448u: goto L_08A9E488;
    case 449u: goto L_08A9E494;
    case 450u: goto L_08A9E498;
    case 451u: goto L_08A9E4A4;
    case 452u: goto L_08A9E4AC;
    case 453u: goto L_08A9E4C0;
    case 454u: goto L_08A9E4C8;
    case 455u: goto L_08A9E4E8;
    case 456u: goto L_08A9E4F0;
    case 457u: goto L_08A9E500;
    case 458u: goto L_08A9E510;
    case 459u: goto L_08A9E51C;
    case 460u: goto L_08A9E52C;
    case 461u: goto L_08A9E53C;
    case 462u: goto L_08A9E544;
    case 463u: goto L_08A9E554;
    case 464u: goto L_08A9E560;
    case 465u: goto L_08A9E568;
    case 466u: goto L_08A9E574;
    case 467u: goto L_08A9E580;
    case 468u: goto L_08A9E588;
    case 469u: goto L_08A9E590;
    case 470u: goto L_08A9E59C;
    case 471u: goto L_08A9E5A4;
    case 472u: goto L_08A9E5B0;
    case 473u: goto L_08A9E5C0;
    case 474u: goto L_08A9E5F0;
    case 475u: goto L_08A9E5FC;
    case 476u: goto L_08A9E604;
    case 477u: goto L_08A9E60C;
    case 478u: goto L_08A9E614;
    case 479u: goto L_08A9E61C;
    case 480u: goto L_08A9E624;
    case 481u: goto L_08A9E62C;
    case 482u: goto L_08A9E634;
    case 483u: goto L_08A9E63C;
    case 484u: goto L_08A9E644;
    case 485u: goto L_08A9E64C;
    case 486u: goto L_08A9E654;
    case 487u: goto L_08A9E65C;
    case 488u: goto L_08A9E664;
    case 489u: goto L_08A9E66C;
    case 490u: goto L_08A9E674;
    case 491u: goto L_08A9E67C;
    case 492u: goto L_08A9E684;
    case 493u: goto L_08A9E68C;
    case 494u: goto L_08A9E694;
    case 495u: goto L_08A9E69C;
    case 496u: goto L_08A9E6A4;
    case 497u: goto L_08A9E6AC;
    case 498u: goto L_08A9E6B4;
    case 499u: goto L_08A9E6BC;
    case 500u: goto L_08A9E6C4;
    case 501u: goto L_08A9E6CC;
    case 502u: goto L_08A9E6D4;
    case 503u: goto L_08A9E6DC;
    case 504u: goto L_08A9E6E4;
    case 505u: goto L_08A9E6E8;
    case 506u: goto L_08A9E6F0;
    case 507u: goto L_08A9E6FC;
    case 508u: goto L_08A9E704;
    case 509u: goto L_08A9E70C;
    case 510u: goto L_08A9E714;
    case 511u: goto L_08A9E71C;
    case 512u: goto L_08A9E724;
    case 513u: goto L_08A9E72C;
    case 514u: goto L_08A9E734;
    case 515u: goto L_08A9E73C;
    case 516u: goto L_08A9E744;
    case 517u: goto L_08A9E74C;
    case 518u: goto L_08A9E754;
    case 519u: goto L_08A9E75C;
    case 520u: goto L_08A9E764;
    case 521u: goto L_08A9E76C;
    case 522u: goto L_08A9E774;
    case 523u: goto L_08A9E77C;
    case 524u: goto L_08A9E784;
    case 525u: goto L_08A9E78C;
    case 526u: goto L_08A9E794;
    case 527u: goto L_08A9E79C;
    case 528u: goto L_08A9E7A4;
    case 529u: goto L_08A9E7AC;
    case 530u: goto L_08A9E7B4;
    case 531u: goto L_08A9E7BC;
    case 532u: goto L_08A9E7C4;
    case 533u: goto L_08A9E7CC;
    case 534u: goto L_08A9E7D0;
    case 535u: goto L_08A9E7D8;
    case 536u: goto L_08A9E7E0;
    case 537u: goto L_08A9E858;
    case 538u: goto L_08A9E864;
    case 539u: goto L_08A9E86C;
    case 540u: goto L_08A9E874;
    case 541u: goto L_08A9E87C;
    case 542u: goto L_08A9E884;
    case 543u: goto L_08A9E888;
    case 544u: goto L_08A9E898;
    case 545u: goto L_08A9E8A8;
    case 546u: goto L_08A9E8B4;
    case 547u: goto L_08A9E8BC;
    case 548u: goto L_08A9E8C4;
    case 549u: goto L_08A9E8C8;
    case 550u: goto L_08A9E8D0;
    case 551u: goto L_08A9E928;
    case 552u: goto L_08A9E934;
    case 553u: goto L_08A9E944;
    case 554u: goto L_08A9E950;
    case 555u: goto L_08A9E95C;
    case 556u: goto L_08A9E974;
    case 557u: goto L_08A9E97C;
    case 558u: goto L_08A9E984;
    case 559u: goto L_08A9E9B0;
    case 560u: goto L_08A9E9B4;
    case 561u: goto L_08A9E9D8;
    case 562u: goto L_08A9EA10;
    case 563u: goto L_08A9EA20;
    case 564u: goto L_08A9EA28;
    case 565u: goto L_08A9EA40;
    case 566u: goto L_08A9EA48;
    case 567u: goto L_08A9EA58;
    case 568u: goto L_08A9EA68;
    case 569u: goto L_08A9EA7C;
    case 570u: goto L_08A9EA84;
    case 571u: goto L_08A9EA8C;
    case 572u: goto L_08A9EA9C;
    case 573u: goto L_08A9EAB0;
    case 574u: goto L_08A9EAB8;
    case 575u: goto L_08A9EABC;
    case 576u: goto L_08A9EACC;
    case 577u: goto L_08A9EAE8;
    case 578u: goto L_08A9EAF4;
    case 579u: goto L_08A9EB0C;
    case 580u: goto L_08A9EB14;
    case 581u: goto L_08A9EB18;
    case 582u: goto L_08A9EB20;
    case 583u: goto L_08A9EB28;
    case 584u: goto L_08A9EB30;
    case 585u: goto L_08A9EB3C;
    case 586u: goto L_08A9EB40;
    case 587u: goto L_08A9EB54;
    case 588u: goto L_08A9EB64;
    case 589u: goto L_08A9EB70;
    case 590u: goto L_08A9EBB0;
    case 591u: goto L_08A9EBB8;
    case 592u: goto L_08A9EBC0;
    case 593u: goto L_08A9EBC8;
    case 594u: goto L_08A9EBCC;
    case 595u: goto L_08A9EBF4;
    case 596u: goto L_08A9EC08;
    case 597u: goto L_08A9EC10;
    case 598u: goto L_08A9EC28;
    case 599u: goto L_08A9EC40;
    case 600u: goto L_08A9EC58;
    case 601u: goto L_08A9EC70;
    case 602u: goto L_08A9EC88;
    case 603u: goto L_08A9ECA0;
    case 604u: goto L_08A9ECB8;
    case 605u: goto L_08A9ECD0;
    case 606u: goto L_08A9ECE8;
    case 607u: goto L_08A9ED00;
    case 608u: goto L_08A9ED18;
    case 609u: goto L_08A9ED30;
    case 610u: goto L_08A9ED48;
    case 611u: goto L_08A9ED60;
    case 612u: goto L_08A9ED78;
    case 613u: goto L_08A9ED90;
    case 614u: goto L_08A9EDA8;
    case 615u: goto L_08A9EDB0;
    case 616u: goto L_08A9EDBC;
    case 617u: goto L_08A9EDC4;
    case 618u: goto L_08A9EDCC;
    case 619u: goto L_08A9EDE4;
    case 620u: goto L_08A9EDFC;
    case 621u: goto L_08A9EE14;
    case 622u: goto L_08A9EE2C;
    case 623u: goto L_08A9EE44;
    case 624u: goto L_08A9EE5C;
    case 625u: goto L_08A9EE74;
    case 626u: goto L_08A9EE8C;
    case 627u: goto L_08A9EEA4;
    case 628u: goto L_08A9EEBC;
    case 629u: goto L_08A9EED4;
    case 630u: goto L_08A9EEEC;
    case 631u: goto L_08A9EF04;
    case 632u: goto L_08A9EF1C;
    case 633u: goto L_08A9EF34;
    case 634u: goto L_08A9EF4C;
    case 635u: goto L_08A9EF64;
    case 636u: goto L_08A9EF6C;
    case 637u: goto L_08A9EF78;
    case 638u: goto L_08A9EF84;
    case 639u: goto L_08A9EF8C;
    case 640u: goto L_08A9EFA4;
    case 641u: goto L_08A9EFAC;
    case 642u: goto L_08A9EFB4;
    case 643u: goto L_08A9EFC0;
    case 644u: goto L_08A9EFD0;
    case 645u: goto L_08A9EFDC;
    case 646u: goto L_08A9F01C;
    case 647u: goto L_08A9F034;
    case 648u: goto L_08A9F03C;
    case 649u: goto L_08A9F044;
    case 650u: goto L_08A9F058;
    case 651u: goto L_08A9F060;
    case 652u: goto L_08A9F06C;
    case 653u: goto L_08A9F074;
    case 654u: goto L_08A9F07C;
    case 655u: goto L_08A9F084;
    case 656u: goto L_08A9F08C;
    case 657u: goto L_08A9F090;
    case 658u: goto L_08A9F098;
    case 659u: goto L_08A9F0A4;
    case 660u: goto L_08A9F0AC;
    case 661u: goto L_08A9F0B4;
    case 662u: goto L_08A9F0B8;
    case 663u: goto L_08A9F0C0;
    case 664u: goto L_08A9F0C8;
    case 665u: goto L_08A9F128;
    case 666u: goto L_08A9F130;
    case 667u: goto L_08A9F138;
    case 668u: goto L_08A9F184;
    case 669u: goto L_08A9F1A0;
    case 670u: goto L_08A9F1A8;
    case 671u: goto L_08A9F1C8;
    case 672u: goto L_08A9F1D0;
    case 673u: goto L_08A9F1D8;
    case 674u: goto L_08A9F1E4;
    case 675u: goto L_08A9F1EC;
    case 676u: goto L_08A9F1FC;
    case 677u: goto L_08A9F204;
    case 678u: goto L_08A9F20C;
    case 679u: goto L_08A9F210;
    case 680u: goto L_08A9F21C;
    case 681u: goto L_08A9F228;
    case 682u: goto L_08A9F254;
    case 683u: goto L_08A9F268;
    case 684u: goto L_08A9F270;
    case 685u: goto L_08A9F280;
    case 686u: goto L_08A9F2A0;
    case 687u: goto L_08A9F2DC;
    case 688u: goto L_08A9F330;
    case 689u: goto L_08A9F338;
    case 690u: goto L_08A9F344;
    case 691u: goto L_08A9F358;
    case 692u: goto L_08A9F364;
    case 693u: goto L_08A9F380;
    case 694u: goto L_08A9F388;
    case 695u: goto L_08A9F3AC;
    case 696u: goto L_08A9F3B4;
    case 697u: goto L_08A9F3BC;
    case 698u: goto L_08A9F3C8;
    case 699u: goto L_08A9F3D4;
    case 700u: goto L_08A9F3E0;
    case 701u: goto L_08A9F3F4;
    case 702u: goto L_08A9F3FC;
    case 703u: goto L_08A9F404;
    case 704u: goto L_08A9F40C;
    case 705u: goto L_08A9F410;
    case 706u: goto L_08A9F418;
    case 707u: goto L_08A9F420;
    case 708u: goto L_08A9F424;
    case 709u: goto L_08A9F430;
    case 710u: goto L_08A9F444;
    case 711u: goto L_08A9F454;
    case 712u: goto L_08A9F464;
    case 713u: goto L_08A9F46C;
    case 714u: goto L_08A9F470;
    case 715u: goto L_08A9F4B0;
    case 716u: goto L_08A9F4CC;
    case 717u: goto L_08A9F4D4;
    case 718u: goto L_08A9F4DC;
    case 719u: goto L_08A9F4F4;
    case 720u: goto L_08A9F51C;
    case 721u: goto L_08A9F524;
    case 722u: goto L_08A9F528;
    case 723u: goto L_08A9F530;
    case 724u: goto L_08A9F53C;
    case 725u: goto L_08A9F544;
    case 726u: goto L_08A9F54C;
    case 727u: goto L_08A9F55C;
    case 728u: goto L_08A9F564;
    case 729u: goto L_08A9F57C;
    case 730u: goto L_08A9F598;
    case 731u: goto L_08A9F5A4;
    case 732u: goto L_08A9F5AC;
    case 733u: goto L_08A9F5B0;
    case 734u: goto L_08A9F5B8;
    case 735u: goto L_08A9F5C8;
    case 736u: goto L_08A9F5D4;
    case 737u: goto L_08A9F5DC;
    case 738u: goto L_08A9F5E4;
    case 739u: goto L_08A9F5EC;
    case 740u: goto L_08A9F61C;
    case 741u: goto L_08A9F62C;
    case 742u: goto L_08A9F638;
    case 743u: goto L_08A9F644;
    case 744u: goto L_08A9F65C;
    case 745u: goto L_08A9F664;
    case 746u: goto L_08A9F66C;
    case 747u: goto L_08A9F684;
    case 748u: goto L_08A9F68C;
    case 749u: goto L_08A9F694;
    case 750u: goto L_08A9F69C;
    case 751u: goto L_08A9F6A4;
    case 752u: goto L_08A9F6AC;
    case 753u: goto L_08A9F6B0;
    case 754u: goto L_08A9F6B8;
    case 755u: goto L_08A9F6CC;
    case 756u: goto L_08A9F6D4;
    case 757u: goto L_08A9F6DC;
    case 758u: goto L_08A9F6F4;
    case 759u: goto L_08A9F6FC;
    case 760u: goto L_08A9F708;
    case 761u: goto L_08A9F70C;
    case 762u: goto L_08A9F710;
    case 763u: goto L_08A9F71C;
    case 764u: goto L_08A9F724;
    case 765u: goto L_08A9F730;
    case 766u: goto L_08A9F748;
    case 767u: goto L_08A9F750;
    case 768u: goto L_08A9F758;
    case 769u: goto L_08A9F760;
    case 770u: goto L_08A9F76C;
    case 771u: goto L_08A9F788;
    case 772u: goto L_08A9F7A0;
    case 773u: goto L_08A9F7B0;
    case 774u: goto L_08A9F7B8;
    case 775u: goto L_08A9F7CC;
    case 776u: goto L_08A9F7E4;
    case 777u: goto L_08A9F7F4;
    case 778u: goto L_08A9F828;
    case 779u: goto L_08A9F834;
    case 780u: goto L_08A9F880;
    case 781u: goto L_08A9F890;
    case 782u: goto L_08A9F8A0;
    case 783u: goto L_08A9F8A8;
    case 784u: goto L_08A9F8BC;
    case 785u: goto L_08A9F8F0;
    case 786u: goto L_08A9F908;
    case 787u: goto L_08A9F910;
    case 788u: goto L_08A9F920;
    case 789u: goto L_08A9F928;
    case 790u: goto L_08A9F934;
    case 791u: goto L_08A9F93C;
    case 792u: goto L_08A9F950;
    case 793u: goto L_08A9F970;
    case 794u: goto L_08A9F978;
    case 795u: goto L_08A9F98C;
    case 796u: goto L_08A9F9C8;
    case 797u: goto L_08A9F9D8;
    case 798u: goto L_08A9F9E0;
    case 799u: goto L_08A9F9FC;
    case 800u: goto L_08A9FA10;
    case 801u: goto L_08A9FA18;
    case 802u: goto L_08A9FA20;
    case 803u: goto L_08A9FA2C;
    case 804u: goto L_08A9FA48;
    case 805u: goto L_08A9FA50;
    case 806u: goto L_08A9FA80;
    case 807u: goto L_08A9FA88;
    case 808u: goto L_08A9FA94;
    case 809u: goto L_08A9FAB0;
    case 810u: goto L_08A9FAB8;
    case 811u: goto L_08A9FAE8;
    case 812u: goto L_08A9FAF0;
    case 813u: goto L_08A9FAFC;
    case 814u: goto L_08A9FB18;
    case 815u: goto L_08A9FB20;
    case 816u: goto L_08A9FB50;
    case 817u: goto L_08A9FB58;
    case 818u: goto L_08A9FB88;
    case 819u: goto L_08A9FB90;
    case 820u: goto L_08A9FBA0;
    case 821u: goto L_08A9FBB4;
    case 822u: goto L_08A9FBCC;
    case 823u: goto L_08A9FBD4;
    case 824u: goto L_08A9FBDC;
    case 825u: goto L_08A9FBE4;
    case 826u: goto L_08A9FBEC;
    case 827u: goto L_08A9FC10;
    case 828u: goto L_08A9FC24;
    case 829u: goto L_08A9FC38;
    case 830u: goto L_08A9FC48;
    case 831u: goto L_08A9FC4C;
    case 832u: goto L_08A9FC54;
    case 833u: goto L_08A9FC64;
    case 834u: goto L_08A9FC68;
    case 835u: goto L_08A9FC88;
    case 836u: goto L_08A9FC94;
    case 837u: goto L_08A9FC9C;
    case 838u: goto L_08A9FCA4;
    case 839u: goto L_08A9FCBC;
    case 840u: goto L_08A9FCC4;
    case 841u: goto L_08A9FCCC;
    case 842u: goto L_08A9FCD4;
    case 843u: goto L_08A9FCE8;
    case 844u: goto L_08A9FD00;
    case 845u: goto L_08A9FD10;
    case 846u: goto L_08A9FD24;
    case 847u: goto L_08A9FD2C;
    case 848u: goto L_08A9FD34;
    case 849u: goto L_08A9FD38;
    case 850u: goto L_08A9FD3C;
    case 851u: goto L_08A9FD70;
    case 852u: goto L_08A9FD78;
    case 853u: goto L_08A9FD80;
    case 854u: goto L_08A9FDB4;
    case 855u: goto L_08A9FDD0;
    case 856u: goto L_08A9FDD4;
    case 857u: goto L_08A9FDE8;
    case 858u: goto L_08A9FDFC;
    case 859u: goto L_08A9FE0C;
    case 860u: goto L_08A9FE14;
    case 861u: goto L_08A9FE18;
    case 862u: goto L_08A9FE20;
    case 863u: goto L_08A9FE38;
    case 864u: goto L_08A9FE48;
    case 865u: goto L_08A9FE58;
    case 866u: goto L_08A9FE5C;
    case 867u: goto L_08A9FE68;
    case 868u: goto L_08A9FE70;
    case 869u: goto L_08A9FECC;
    case 870u: goto L_08A9FED8;
    case 871u: goto L_08A9FEE8;
    case 872u: goto L_08A9FEF8;
    case 873u: goto L_08A9FEFC;
    case 874u: goto L_08A9FF0C;
    case 875u: goto L_08A9FF1C;
    case 876u: goto L_08A9FF30;
    case 877u: goto L_08A9FF44;
    case 878u: goto L_08A9FF68;
    case 879u: goto L_08A9FF70;
    case 880u: goto L_08A9FF78;
    case 881u: goto L_08A9FF84;
    case 882u: goto L_08A9FF90;
    case 883u: goto L_08A9FF94;
    case 884u: goto L_08A9FFA4;
    case 885u: goto L_08A9FFAC;
    case 886u: goto L_08A9FFB4;
    case 887u: goto L_08A9FFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A9C000:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9C018;
      }
      goto L_08A9C010;
    }
L_08A9C010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C144;
      }
      goto L_08A9C018;
    }
L_08A9C018:
    ctx.gpr[31] = (0x08A9C020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 759u, 0x0891B6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9C020u) goto L_08A9C020;
    return;
L_08A9C020:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17040)));
        goto L_08A9C040;
    }
    goto L_08A9C028;
L_08A9C028:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17040)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A9C050;
      }
      goto L_08A9C040;
    }
L_08A9C040:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9C050;
L_08A9C050:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C144;
      }
      goto L_08A9C060;
    }
L_08A9C060:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17040)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9C078u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9C078u) goto L_08A9C078;
    return;
L_08A9C078:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C144;
      }
      goto L_08A9C08C;
    }
L_08A9C08C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C118;
      }
      goto L_08A9C0AC;
    }
L_08A9C0AC:
    ctx.gpr[31] = (0x08A9C0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 759u, 0x0891B6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9C0B4u) goto L_08A9C0B4;
    return;
L_08A9C0B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C0E0;
      }
      goto L_08A9C0BC;
    }
L_08A9C0BC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9C118;
      }
      goto L_08A9C0E0;
    }
L_08A9C0E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9C0F0u);
    ctx.gpr[5] = (ctx.gpr[5] >> 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9C0F0u) goto L_08A9C0F0;
    return;
L_08A9C0F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A9C10C;
      }
      goto L_08A9C0FC;
    }
L_08A9C0FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9C118;
      }
      goto L_08A9C10C;
    }
L_08A9C10C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A9C118;
L_08A9C118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16960));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9C144u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A9C144u) goto L_08A9C144;
    return;
L_08A9C144:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 999u, 0x08A9BF88u>(ctx, &aot_mem); return;
      }
      goto L_08A9C158;
    }
L_08A9C158:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9C1B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9C1FC;
      }
      goto L_08A9C1EC;
    }
L_08A9C1EC:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4024)));
      if (branch_taken) {
          goto L_08A9C208;
      }
      goto L_08A9C1FC;
    }
L_08A9C1FC:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4024)));
    goto L_08A9C208;
L_08A9C208:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] << 7u);
      if (branch_taken) {
          goto L_08A9C44C;
      }
      goto L_08A9C218;
    }
L_08A9C218:
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] << 4u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[19]);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[17]);
    goto L_08A9C24C;
L_08A9C24C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3984)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(73)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C278;
      }
      goto L_08A9C270;
    }
L_08A9C270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C438;
      }
      goto L_08A9C278;
    }
L_08A9C278:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[4] << 7u);
      if (branch_taken) {
          goto L_08A9C324;
      }
      goto L_08A9C29C;
    }
L_08A9C29C:
    ctx.gpr[11] = (0u - ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] << 4u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[4] << 4u);
    ctx.gpr[2] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[16] + ctx.gpr[10]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[8]);
    goto L_08A9C2C4;
L_08A9C2C4:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3984)));
    ctx.gpr[2] = (ctx.gpr[2] << 5u);
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(144));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A9C2F4;
      }
      goto L_08A9C2E8;
    }
L_08A9C2E8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_08A9C318;
      }
      goto L_08A9C2F4;
    }
L_08A9C2F4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9C310;
      }
      goto L_08A9C304;
    }
L_08A9C304:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_08A9C318;
      }
      goto L_08A9C310;
    }
L_08A9C310:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_08A9C324;
      }
      goto L_08A9C318;
    }
L_08A9C318:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A9C2C4;
      }
      goto L_08A9C324;
    }
L_08A9C324:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C438;
      }
      goto L_08A9C330;
    }
L_08A9C330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C370;
      }
      goto L_08A9C340;
    }
L_08A9C340:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A9C370;
      }
      goto L_08A9C34C;
    }
L_08A9C34C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A9C35Cu);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08A9C35Cu) goto L_08A9C35C;
    return;
L_08A9C35C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9C368u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A9C368u) goto L_08A9C368;
    return;
L_08A9C368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4024)));
      if (branch_taken) {
          goto L_08A9C438;
      }
      goto L_08A9C370;
    }
L_08A9C370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C438;
      }
      goto L_08A9C37C;
    }
L_08A9C37C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C414;
      }
      goto L_08A9C388;
    }
L_08A9C388:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[23];
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A9C3B8;
      }
      goto L_08A9C394;
    }
L_08A9C394:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A9C3B8;
      }
      goto L_08A9C3B0;
    }
L_08A9C3B0:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(80))))));
    goto L_08A9C3B8;
L_08A9C3B8:
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9C3F0;
      }
      goto L_08A9C3CC;
    }
L_08A9C3CC:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C3FC;
      }
      goto L_08A9C3E8;
    }
L_08A9C3E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C414;
      }
      goto L_08A9C3F0;
    }
L_08A9C3F0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4024)));
      if (branch_taken) {
          goto L_08A9C438;
      }
      goto L_08A9C3FC;
    }
L_08A9C3FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C414;
      }
      goto L_08A9C40C;
    }
L_08A9C40C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08A9C414;
L_08A9C414:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A9C428u);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08A9C428u) goto L_08A9C428;
    return;
L_08A9C428:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9C434u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A9C434u) goto L_08A9C434;
    return;
L_08A9C434:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4024)));
    goto L_08A9C438;
L_08A9C438:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A9C24C;
      }
      goto L_08A9C44C;
    }
L_08A9C44C:
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
L_08A9C47C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9C508;
      }
      goto L_08A9C4BC;
    }
L_08A9C4BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    goto L_08A9C4C0;
L_08A9C4C0:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_08A9C4C0;
    }
    goto L_08A9C508;
L_08A9C508:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CA34;
      }
      goto L_08A9C524;
    }
L_08A9C524:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    goto L_08A9C528;
L_08A9C528:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3984)));
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 5662u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9C580;
      }
      goto L_08A9C578;
    }
L_08A9C578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CA14;
      }
      goto L_08A9C580;
    }
L_08A9C580:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CA14;
      }
      goto L_08A9C594;
    }
L_08A9C594:
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4032));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9C5D8;
      }
      goto L_08A9C5B8;
    }
L_08A9C5B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9C5D8;
      }
      goto L_08A9C5C8;
    }
L_08A9C5C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9C5E0;
      }
      goto L_08A9C5D8;
    }
L_08A9C5D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C9FC;
      }
      goto L_08A9C5E0;
    }
L_08A9C5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C670;
      }
      goto L_08A9C5EC;
    }
L_08A9C5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C618;
      }
      goto L_08A9C5FC;
    }
L_08A9C5FC:
    ctx.gpr[4] = (ctx.gpr[20] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C610;
      }
      goto L_08A9C608;
    }
L_08A9C608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9C630;
      }
      goto L_08A9C610;
    }
L_08A9C610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9C630;
      }
      goto L_08A9C618;
    }
L_08A9C618:
    ctx.gpr[4] = (ctx.gpr[20] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C62C;
      }
      goto L_08A9C624;
    }
L_08A9C624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9C630;
      }
      goto L_08A9C62C;
    }
L_08A9C62C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A9C630;
L_08A9C630:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C670;
      }
      goto L_08A9C638;
    }
L_08A9C638:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A9C648u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 360u, 0x088B60A0u>(ctx, &aot_mem) && ctx.pc == 0x08A9C648u) goto L_08A9C648;
    return;
L_08A9C648:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C670;
      }
      goto L_08A9C650;
    }
L_08A9C650:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9C9FC;
      }
      goto L_08A9C670;
    }
L_08A9C670:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C69C;
      }
      goto L_08A9C690;
    }
L_08A9C690:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9C9FC;
      }
      goto L_08A9C69C;
    }
L_08A9C69C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C6CC;
      }
      goto L_08A9C6A8;
    }
L_08A9C6A8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A9C6B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 360u, 0x088B60A0u>(ctx, &aot_mem) && ctx.pc == 0x08A9C6B8u) goto L_08A9C6B8;
    return;
L_08A9C6B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C6CC;
      }
      goto L_08A9C6C0;
    }
L_08A9C6C0:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A9C9FC;
      }
      goto L_08A9C6CC;
    }
L_08A9C6CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A9C76C;
      }
      goto L_08A9C6D8;
    }
L_08A9C6D8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C704;
      }
      goto L_08A9C6E4;
    }
L_08A9C6E4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (0u | 63u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
        goto L_08A9C6F8;
    }
    goto L_08A9C6F8;
L_08A9C6F8:
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] << 1u);
      if (branch_taken) {
          goto L_08A9C708;
      }
      goto L_08A9C704;
    }
L_08A9C704:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    goto L_08A9C708;
L_08A9C708:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A9C720u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 357u, 0x088B6074u>(ctx, &aot_mem) && ctx.pc == 0x08A9C720u) goto L_08A9C720;
    return;
L_08A9C720:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(66)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A9C730u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 354u, 0x088B6044u>(ctx, &aot_mem) && ctx.pc == 0x08A9C730u) goto L_08A9C730;
    return;
L_08A9C730:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A9C740u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 328u, 0x088B5E94u>(ctx, &aot_mem) && ctx.pc == 0x08A9C740u) goto L_08A9C740;
    return;
L_08A9C740:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C74C;
      }
      goto L_08A9C748;
    }
L_08A9C748:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A9C74C;
L_08A9C74C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9C764u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9C764u) goto L_08A9C764;
    return;
L_08A9C764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C9F4;
      }
      goto L_08A9C76C;
    }
L_08A9C76C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A9C788u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 831u, 0x08A9AD24u>(ctx, &aot_mem) && ctx.pc == 0x08A9C788u) goto L_08A9C788;
    return;
L_08A9C788:
    ctx.gpr[31] = (0x08A9C790u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 759u, 0x0891B6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9C790u) goto L_08A9C790;
    return;
L_08A9C790:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C798;
      }
      goto L_08A9C798;
    }
L_08A9C798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A9C81C;
      }
      goto L_08A9C7A8;
    }
L_08A9C7A8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C7CC;
      }
      goto L_08A9C7B4;
    }
L_08A9C7B4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08A9C7C4;
    }
    goto L_08A9C7C4;
L_08A9C7C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C7DC;
      }
      goto L_08A9C7CC;
    }
L_08A9C7CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6000));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08A9C7DC;
    }
    goto L_08A9C7DC;
L_08A9C7DC:
    ctx.gpr[31] = (0x08A9C7E4u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 759u, 0x0891B6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9C7E4u) goto L_08A9C7E4;
    return;
L_08A9C7E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C808;
      }
      goto L_08A9C7EC;
    }
L_08A9C7EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A9C808;
L_08A9C808:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9C81Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 357u, 0x088B6074u>(ctx, &aot_mem) && ctx.pc == 0x08A9C81Cu) goto L_08A9C81C;
    return;
L_08A9C81C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9C868;
      }
      goto L_08A9C82C;
    }
L_08A9C82C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C850;
      }
      goto L_08A9C838;
    }
L_08A9C838:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A9C848;
    }
    goto L_08A9C848;
L_08A9C848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A9C864;
      }
      goto L_08A9C850;
    }
L_08A9C850:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A9C860;
    }
    goto L_08A9C860;
L_08A9C860:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08A9C864;
L_08A9C864:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9C868;
L_08A9C868:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C88C;
      }
      goto L_08A9C874;
    }
L_08A9C874:
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08A9C884;
    }
    goto L_08A9C884;
L_08A9C884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] << 1u);
      if (branch_taken) {
          goto L_08A9C88C;
      }
      goto L_08A9C88C;
    }
L_08A9C88C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C8C0;
      }
      goto L_08A9C89C;
    }
L_08A9C89C:
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    goto L_08A9C8A0;
L_08A9C8A0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(21918)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9C8B4;
      }
      goto L_08A9C8AC;
    }
L_08A9C8AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9C8C4;
      }
      goto L_08A9C8B4;
    }
L_08A9C8B4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A9C8A0;
      }
      goto L_08A9C8C0;
    }
L_08A9C8C0:
    ctx.gpr[5] = (0u | 0u);
    goto L_08A9C8C4;
L_08A9C8C4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C90C;
      }
      goto L_08A9C8CC;
    }
L_08A9C8CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[6] = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x08A9C904u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9C904u) goto L_08A9C904;
    return;
L_08A9C904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C954;
      }
      goto L_08A9C90C;
    }
L_08A9C90C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 127 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C93C;
      }
      goto L_08A9C91C;
    }
L_08A9C91C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[6] = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    goto L_08A9C93C;
L_08A9C93C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A9C954u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9C954u) goto L_08A9C954;
    return;
L_08A9C954:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9C968u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 931u, 0x08A9B6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9C968u) goto L_08A9C968;
    return;
L_08A9C968:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(66)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9C97Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 916u, 0x08A9B564u>(ctx, &aot_mem) && ctx.pc == 0x08A9C97Cu) goto L_08A9C97C;
    return;
L_08A9C97C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A9C9E0;
      }
      goto L_08A9C988;
    }
L_08A9C988:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C9B0;
      }
      goto L_08A9C994;
    }
L_08A9C994:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_08A9C9A8;
    }
    goto L_08A9C9A8;
L_08A9C9A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9C9C8;
      }
      goto L_08A9C9B0;
    }
L_08A9C9B0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-10));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_08A9C9C4;
    }
    goto L_08A9C9C4;
L_08A9C9C4:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08A9C9C8;
L_08A9C9C8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[19] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A9C9DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 354u, 0x088B6044u>(ctx, &aot_mem) && ctx.pc == 0x08A9C9DCu) goto L_08A9C9DC;
    return;
L_08A9C9DC:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_08A9C9E0;
L_08A9C9E0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[19] & 255u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A9C9F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 354u, 0x088B6044u>(ctx, &aot_mem) && ctx.pc == 0x08A9C9F4u) goto L_08A9C9F4;
    return;
L_08A9C9F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CA14;
      }
      goto L_08A9C9FC;
    }
L_08A9C9FC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9C594;
      }
      goto L_08A9CA14;
    }
L_08A9CA14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_08A9C528;
    }
    goto L_08A9CA34;
L_08A9CA34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CAC4;
      }
      goto L_08A9CA48;
    }
L_08A9CA48:
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4032));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u | 5662u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A9CA74;
      }
      goto L_08A9CA6C;
    }
L_08A9CA6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CAAC;
      }
      goto L_08A9CA74;
    }
L_08A9CA74:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CAAC;
      }
      goto L_08A9CA80;
    }
L_08A9CA80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A9CA94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A9CA94u) goto L_08A9CA94;
    return;
L_08A9CA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08A9CAAC;
L_08A9CAAC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CA48;
      }
      goto L_08A9CAC4;
    }
L_08A9CAC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
        goto L_08A9CEEC;
    }
    goto L_08A9CAE0;
L_08A9CAE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    goto L_08A9CAE4;
L_08A9CAE4:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3984)));
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CEC8;
      }
      goto L_08A9CB30;
    }
L_08A9CB30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(73)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CEC8;
      }
      goto L_08A9CB3C;
    }
L_08A9CB3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5960)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CB64;
      }
      goto L_08A9CB5C;
    }
L_08A9CB5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CEC8;
      }
      goto L_08A9CB64;
    }
L_08A9CB64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5662) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CB7C;
      }
      goto L_08A9CB74;
    }
L_08A9CB74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CEC8;
      }
      goto L_08A9CB7C;
    }
L_08A9CB7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CBBC;
      }
      goto L_08A9CB8C;
    }
L_08A9CB8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CBBC;
      }
      goto L_08A9CB98;
    }
L_08A9CB98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A9CBBC;
      }
      goto L_08A9CBA4;
    }
L_08A9CBA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A9CEC8;
      }
      goto L_08A9CBBC;
    }
L_08A9CBBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CEC8;
      }
      goto L_08A9CBD0;
    }
L_08A9CBD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    goto L_08A9CBD4;
L_08A9CBD4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[22] = (ctx.hi);
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4032));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CEB0;
      }
      goto L_08A9CC08;
    }
L_08A9CC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CC4C;
      }
      goto L_08A9CC14;
    }
L_08A9CC14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21944)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[23] = (ctx.lo);
    ctx.gpr[31] = (0x08A9CC34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 336u, 0x088B5EECu>(ctx, &aot_mem) && ctx.pc == 0x08A9CC34u) goto L_08A9CC34;
    return;
L_08A9CC34:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CC44;
      }
      goto L_08A9CC3C;
    }
L_08A9CC3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CEB0;
      }
      goto L_08A9CC44;
    }
L_08A9CC44:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A9CC4C;
L_08A9CC4C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9CC5Cu);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08A9CC5Cu) goto L_08A9CC5C;
    return;
L_08A9CC5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CC90;
      }
      goto L_08A9CC68;
    }
L_08A9CC68:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9CC7Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 931u, 0x08A9B6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9CC7Cu) goto L_08A9CC7C;
    return;
L_08A9CC7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9CC8Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 916u, 0x08A9B564u>(ctx, &aot_mem) && ctx.pc == 0x08A9CC8Cu) goto L_08A9CC8C;
    return;
L_08A9CC8C:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A9CC90;
L_08A9CC90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CCBC;
      }
      goto L_08A9CC9C;
    }
L_08A9CC9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (0u | 63u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
        goto L_08A9CCB0;
    }
    goto L_08A9CCB0;
L_08A9CCB0:
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] << 1u);
      if (branch_taken) {
          goto L_08A9CCC0;
      }
      goto L_08A9CCBC;
    }
L_08A9CCBC:
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    goto L_08A9CCC0;
L_08A9CCC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(81)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A9CCE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 295u, 0x088B5CD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9CCE8u) goto L_08A9CCE8;
    return;
L_08A9CCE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A9CD64;
      }
      goto L_08A9CCF4;
    }
L_08A9CCF4:
    ctx.gpr[31] = (0x08A9CCFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 759u, 0x0891B6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9CCFCu) goto L_08A9CCFC;
    return;
L_08A9CCFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CD64;
      }
      goto L_08A9CD04;
    }
L_08A9CD04:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A9CD1C;
      }
      goto L_08A9CD10;
    }
L_08A9CD10:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A9CD1C;
L_08A9CD1C:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08A9CD4C;
      }
      goto L_08A9CD40;
    }
L_08A9CD40:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9CD64;
      }
      goto L_08A9CD4C;
    }
L_08A9CD4C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[23] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (ctx.gpr[4] + ctx.gpr[23]);
    goto L_08A9CD64;
L_08A9CD64:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A9CD78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 357u, 0x088B6074u>(ctx, &aot_mem) && ctx.pc == 0x08A9CD78u) goto L_08A9CD78;
    return;
L_08A9CD78:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CDAC;
      }
      goto L_08A9CD88;
    }
L_08A9CD88:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[23]);
    goto L_08A9CD8C;
L_08A9CD8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21918)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9CDA0;
      }
      goto L_08A9CD98;
    }
L_08A9CD98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9CDB0;
      }
      goto L_08A9CDA0;
    }
L_08A9CDA0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_08A9CD8C;
      }
      goto L_08A9CDAC;
    }
L_08A9CDAC:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A9CDB0;
L_08A9CDB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CE04;
      }
      goto L_08A9CDB8;
    }
L_08A9CDB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CE04;
      }
      goto L_08A9CDC4;
    }
L_08A9CDC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[5] = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x08A9CDFCu);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9CDFCu) goto L_08A9CDFC;
    return;
L_08A9CDFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CE4C;
      }
      goto L_08A9CE04;
    }
L_08A9CE04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 127 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CE34;
      }
      goto L_08A9CE14;
    }
L_08A9CE14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21920)));
    ctx.gpr[5] = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (ctx.lo);
    goto L_08A9CE34;
L_08A9CE34:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[21] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A9CE4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9CE4Cu) goto L_08A9CE4C;
    return;
L_08A9CE4C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(66)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A9CE60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 354u, 0x088B6044u>(ctx, &aot_mem) && ctx.pc == 0x08A9CE60u) goto L_08A9CE60;
    return;
L_08A9CE60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9CE80;
      }
      goto L_08A9CE6C;
    }
L_08A9CE6C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(67)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A9CE80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 356u, 0x088B606Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9CE80u) goto L_08A9CE80;
    return;
L_08A9CE80:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A9CE90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 362u, 0x088B60D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9CE90u) goto L_08A9CE90;
    return;
L_08A9CE90:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A9CEC8;
      }
      goto L_08A9CEB0;
    }
L_08A9CEB0:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
        goto L_08A9CBD4;
    }
    goto L_08A9CEC8;
L_08A9CEC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_08A9CAE4;
    }
    goto L_08A9CEE8;
L_08A9CEE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    goto L_08A9CEEC;
L_08A9CEEC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9CF34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25740)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25736)));
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25744), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25764)));
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(25776)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25772)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25780), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(25788), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(25752), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(25748), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(25756), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(25760), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(25768), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[25] = (2229u << 16u);
    ctx.gpr[17] = (2233u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(10640));
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(25784), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9D030u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25792), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 662u, 0x08A9A248u>(ctx, &aot_mem) && ctx.pc == 0x08A9D030u) goto L_08A9D030;
    return;
L_08A9D030:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A9D03Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26076));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08A9D03Cu) goto L_08A9D03C;
    return;
L_08A9D03C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D050:
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
L_08A9D07C:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
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
L_08A9D0A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9D0B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19992));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9D0B8u) goto L_08A9D0B8;
    return;
L_08A9D0B8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5824), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5820), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5816), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5812), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5808), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5804), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5800), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5796), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5792), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5788), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5784), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5780), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5776), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5772), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6016), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5768), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5764), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5760), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020), 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5851), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5756), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26132), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A9D18Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19960));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9D18Cu) goto L_08A9D18C;
    return;
L_08A9D18C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D198:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9D1BCu);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    goto L_08A9D374;
L_08A9D1BC:
    ctx.gpr[31] = (0x08A9D1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 231u, 0x08AA0DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A9D1C4u) goto L_08A9D1C4;
    return;
L_08A9D1C4:
    ctx.gpr[31] = (0x08A9D1CCu);
    // nop
    goto L_08A9D90C;
L_08A9D1CC:
    ctx.gpr[31] = (0x08A9D1D4u);
    // nop
    goto L_08A9EF84;
L_08A9D1D4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-5851)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2230u << 16u);
        goto L_08A9D208;
    }
    goto L_08A9D1E4;
L_08A9D1E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5851), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-5851)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D354;
      }
      goto L_08A9D1F8;
    }
L_08A9D1F8:
    ctx.gpr[31] = (0x08A9D200u);
    // nop
    goto L_08A9D780;
L_08A9D200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D354;
      }
      goto L_08A9D208;
    }
L_08A9D208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5808)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5804)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5800)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5796)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5792)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5788)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5784)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5780)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5776)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5824)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5820)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-5768), ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5816)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5812)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-5764), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5772)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6016)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5760), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(936)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D354;
      }
      goto L_08A9D2DC;
    }
L_08A9D2DC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D354;
      }
      goto L_08A9D2E4;
    }
L_08A9D2E4:
    ctx.gpr[31] = (0x08A9D2ECu);
    // nop
    goto L_08A9EF8C;
L_08A9D2EC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A9D30Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A9EF8C;
L_08A9D30C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08A9D324u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08A9EF8C;
L_08A9D324:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9D340u);
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08A9EF8C;
L_08A9D340:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A9D354u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A9F0C8;
L_08A9D354:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9D37C;
      }
      goto L_08A9D37C;
    }
L_08A9D37C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1184));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1148), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1156), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1160), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1164), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1172), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1176), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1180), ctx.gpr[31]);
    ctx.gpr[6] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-464));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08A9D400;
      }
      goto L_08A9D3F8;
    }
L_08A9D3F8:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08A9D400;
L_08A9D400:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A9D46C;
      }
      goto L_08A9D40C;
    }
L_08A9D40C:
    ctx.gpr[31] = (0x08A9D414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D414u) goto L_08A9D414;
    return;
L_08A9D414:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9D448u);
    // nop
    goto L_08A9EF8C;
L_08A9D448:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9D46C;
      }
      goto L_08A9D464;
    }
L_08A9D464:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D700;
      }
      goto L_08A9D46C;
    }
L_08A9D46C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    ctx.gpr[31] = (0x08A9D48Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D48Cu) goto L_08A9D48C;
    return;
L_08A9D48C:
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D4B8;
      }
      goto L_08A9D49C;
    }
L_08A9D49C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[23] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A9D4C0;
      }
      goto L_08A9D4B0;
    }
L_08A9D4B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D4C4;
      }
      goto L_08A9D4B8;
    }
L_08A9D4B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D700;
      }
      goto L_08A9D4C0;
    }
L_08A9D4C0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A9D4C4;
L_08A9D4C4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A9D4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9D4D0u) goto L_08A9D4D0;
    return;
L_08A9D4D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26156)));
    ctx.gpr[31] = (0x08A9D4E8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26152)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A9D4E8u) goto L_08A9D4E8;
    return;
L_08A9D4E8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26164)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26160)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 66u);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[22] = (ctx.gpr[19] << 2u);
    goto L_08A9D528;
L_08A9D528:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A9D550;
      }
      goto L_08A9D538;
    }
L_08A9D538:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D558;
      }
      goto L_08A9D548;
    }
L_08A9D548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D568;
      }
      goto L_08A9D550;
    }
L_08A9D550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D700;
      }
      goto L_08A9D558;
    }
L_08A9D558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_08A9D568;
L_08A9D568:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D5B0;
      }
      goto L_08A9D570;
    }
L_08A9D570:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D58C;
      }
      goto L_08A9D580;
    }
L_08A9D580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9D58C;
L_08A9D58C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A9D5A4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9D5A4u) goto L_08A9D5A4;
    return;
L_08A9D5A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D5B0;
      }
      goto L_08A9D5AC;
    }
L_08A9D5AC:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A9D5B0;
L_08A9D5B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D528;
      }
      goto L_08A9D5B8;
    }
L_08A9D5B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A9D5E4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 118u, 0x08AA0754u>(ctx, &aot_mem) && ctx.pc == 0x08A9D5E4u) goto L_08A9D5E4;
    return;
L_08A9D5E4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9D600u);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 144u, 0x089B07D0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D600u) goto L_08A9D600;
    return;
L_08A9D600:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1348), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1348));
    ctx.gpr[31] = (0x08A9D624u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9D624u) goto L_08A9D624;
    return;
L_08A9D624:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A9D644u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 420u, 0x088A6CB0u>(ctx, &aot_mem) && ctx.pc == 0x08A9D644u) goto L_08A9D644;
    return;
L_08A9D644:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D690;
      }
      goto L_08A9D64C;
    }
L_08A9D64C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08A9D654;
L_08A9D654:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D680;
      }
      goto L_08A9D660;
    }
L_08A9D660:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A9D680;
      }
      goto L_08A9D668;
    }
L_08A9D668:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A9D680;
      }
      goto L_08A9D670;
    }
L_08A9D670:
    ctx.gpr[31] = (0x08A9D678u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A9D734;
L_08A9D678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D700;
      }
      goto L_08A9D680;
    }
L_08A9D680:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9D654;
      }
      goto L_08A9D690;
    }
L_08A9D690:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A9D6D8u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 325u, 0x088CE900u>(ctx, &aot_mem) && ctx.pc == 0x08A9D6D8u) goto L_08A9D6D8;
    return;
L_08A9D6D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D6F0;
      }
      goto L_08A9D6E0;
    }
L_08A9D6E0:
    ctx.gpr[31] = (0x08A9D6E8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A9D734;
L_08A9D6E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D700;
      }
      goto L_08A9D6F0;
    }
L_08A9D6F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A9D6FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925F24u>(ctx, &aot_mem) && ctx.pc == 0x08A9D6FCu) goto L_08A9D6FC;
    return;
L_08A9D6FC:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08A9D700;
L_08A9D700:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1140)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1144)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1160)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1164)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1172)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D734:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A9D74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A9D74Cu) goto L_08A9D74C;
    return;
L_08A9D74C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9D770;
      }
      goto L_08A9D754;
    }
L_08A9D754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A9D770u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9D770u) goto L_08A9D770;
    return;
L_08A9D770:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9D780:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A9D7F0;
L_08A9D7F0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5824)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5820)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-5768), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5808)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5804)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-5800)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-5796)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5792)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-5788)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5784)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-5780)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-5776)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-5764), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-5816)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5812)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-5772)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6016)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5760), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9D89Cu);
    // nop
    goto L_08A9EF8C;
L_08A9D89C:
    ctx.gpr[31] = (0x08A9D8A4u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08A9EF8C;
L_08A9D8A4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A9D8B8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A9F0C8;
L_08A9D8B8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9D7F0;
      }
      goto L_08A9D8D0;
    }
L_08A9D8D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08A9D90C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9DA74;
      }
      goto L_08A9D954;
    }
L_08A9D954:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A9D964u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 41u, 0x08B08398u>(ctx, &aot_mem) && ctx.pc == 0x08A9D964u) goto L_08A9D964;
    return;
L_08A9D964:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DA74;
      }
      goto L_08A9D970;
    }
L_08A9D970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (19224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 38528u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A9DA40;
      }
      goto L_08A9D990;
    }
L_08A9D990:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[19] = (ctx.lo);
    goto L_08A9D9AC;
L_08A9D9AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
        goto L_08A9D9CC;
    }
    goto L_08A9D9C4;
L_08A9D9C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9D9D0;
      }
      goto L_08A9D9CC;
    }
L_08A9D9CC:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    goto L_08A9D9D0;
L_08A9D9D0:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DA2C;
      }
      goto L_08A9D9DC;
    }
L_08A9D9DC:
    ctx.gpr[31] = (0x08A9D9E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 689u, 0x089A2DC8u>(ctx, &aot_mem) && ctx.pc == 0x08A9D9E4u) goto L_08A9D9E4;
    return;
L_08A9D9E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DA2C;
      }
      goto L_08A9D9EC;
    }
L_08A9D9EC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9DA2C;
      }
      goto L_08A9DA24;
    }
L_08A9DA24:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    goto L_08A9DA2C;
L_08A9DA2C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-3248));
      if (branch_taken) {
          goto L_08A9D9AC;
      }
      goto L_08A9DA40;
    }
L_08A9DA40:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DA74;
      }
      goto L_08A9DA48;
    }
L_08A9DA48:
    ctx.gpr[31] = (0x08A9DA50u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A9DA50u) goto L_08A9DA50;
    return;
L_08A9DA50:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DA74;
      }
      goto L_08A9DA58;
    }
L_08A9DA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A9DA74u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9DA74u) goto L_08A9DA74;
    return;
L_08A9DA74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9DAA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A9DB48;
      }
      goto L_08A9DADC;
    }
L_08A9DADC:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[16] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08A9DAEC;
L_08A9DAEC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A9DB10;
    }
    goto L_08A9DB08;
L_08A9DB08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DB14;
      }
      goto L_08A9DB10;
    }
L_08A9DB10:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[16]);
    goto L_08A9DB14;
L_08A9DB14:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DB34;
      }
      goto L_08A9DB1C;
    }
L_08A9DB1C:
    ctx.gpr[31] = (0x08A9DB24u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 244u, 0x0883D410u>(ctx, &aot_mem) && ctx.pc == 0x08A9DB24u) goto L_08A9DB24;
    return;
L_08A9DB24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DB34;
      }
      goto L_08A9DB2C;
    }
L_08A9DB2C:
    ctx.gpr[31] = (0x08A9DB34u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A9DD54;
L_08A9DB34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-544));
      if (branch_taken) {
          goto L_08A9DAEC;
      }
      goto L_08A9DB48;
    }
L_08A9DB48:
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
L_08A9DB68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A9DB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 396u, 0x08AA1BA4u>(ctx, &aot_mem) && ctx.pc == 0x08A9DB88u) goto L_08A9DB88;
    return;
L_08A9DB88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DBB0;
      }
      goto L_08A9DB90;
    }
L_08A9DB90:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A9DB9Cu);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08A9DB9Cu) goto L_08A9DB9C;
    return;
L_08A9DB9C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A9DBB8;
      }
      goto L_08A9DBA8;
    }
L_08A9DBA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DBC4;
      }
      goto L_08A9DBB0;
    }
L_08A9DBB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DD3C;
      }
      goto L_08A9DBB8;
    }
L_08A9DBB8:
    ctx.gpr[31] = (0x08A9DBC0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 201u, 0x0883D15Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DBC0u) goto L_08A9DBC0;
    return;
L_08A9DBC0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A9DBC4;
L_08A9DBC4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DD3C;
      }
      goto L_08A9DBCC;
    }
L_08A9DBCC:
    ctx.gpr[31] = (0x08A9DBD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A9DBD4u) goto L_08A9DBD4;
    return;
L_08A9DBD4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9DBF8;
      }
      goto L_08A9DBDC;
    }
L_08A9DBDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A9DBF8u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9DBF8u) goto L_08A9DBF8;
    return;
L_08A9DBF8:
    ctx.gpr[31] = (0x08A9DC00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9DC00u) goto L_08A9DC00;
    return;
L_08A9DC00:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DC28;
      }
      goto L_08A9DC14;
    }
L_08A9DC14:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9DC28;
L_08A9DC28:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
        goto L_08A9DC50;
    }
    goto L_08A9DC38;
L_08A9DC38:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 3u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
        goto L_08A9DC50;
    }
    goto L_08A9DC48;
L_08A9DC48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DC74;
      }
      goto L_08A9DC50;
    }
L_08A9DC50:
    ctx.gpr[6] = (ctx.gpr[6] & 8192u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DC6C;
      }
      goto L_08A9DC5C;
    }
L_08A9DC5C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A9DC74;
      }
      goto L_08A9DC6C;
    }
L_08A9DC6C:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A9DC74;
L_08A9DC74:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DCD4;
      }
      goto L_08A9DC7C;
    }
L_08A9DC7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DCA4;
      }
      goto L_08A9DC90;
    }
L_08A9DC90:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9DCA4;
L_08A9DCA4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DCD4;
      }
      goto L_08A9DCBC;
    }
L_08A9DCBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9DD3C;
      }
      goto L_08A9DCD4;
    }
L_08A9DCD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(346)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9DD3C;
      }
      goto L_08A9DCEC;
    }
L_08A9DCEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (47747u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9DD3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 145u, 0x08A0D328u>(ctx, &aot_mem) && ctx.pc == 0x08A9DD3Cu) goto L_08A9DD3C;
    return;
L_08A9DD3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9DD54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A9DD78u);
    ctx.gpr[4] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 119u, 0x08878900u>(ctx, &aot_mem) && ctx.pc == 0x08A9DD78u) goto L_08A9DD78;
    return;
L_08A9DD78:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A9DD90;
      }
      goto L_08A9DD84;
    }
L_08A9DD84:
    ctx.gpr[31] = (0x08A9DD8Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 459u, 0x08965EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A9DD8Cu) goto L_08A9DD8C;
    return;
L_08A9DD8C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A9DD90;
L_08A9DD90:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(336));
    ctx.gpr[31] = (0x08A9DD9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DD9Cu) goto L_08A9DD9C;
    return;
L_08A9DD9C:
    ctx.gpr[31] = (0x08A9DDA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A9DDA4u) goto L_08A9DDA4;
    return;
L_08A9DDA4:
    ctx.gpr[31] = (0x08A9DDACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08A9DDACu) goto L_08A9DDAC;
    return;
L_08A9DDAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DDD8;
      }
      goto L_08A9DDC4;
    }
L_08A9DDC4:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A9DDD8;
L_08A9DDD8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[8] = (0u | 3u);
      if (branch_taken) {
          goto L_08A9DDF8;
      }
      goto L_08A9DDE8;
    }
L_08A9DDE8:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A9DDFC;
      }
      goto L_08A9DDF0;
    }
L_08A9DDF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DE20;
      }
      goto L_08A9DDF8;
    }
L_08A9DDF8:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    goto L_08A9DDFC;
L_08A9DDFC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(54)));
    ctx.gpr[8] = (ctx.gpr[7] & 8192u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DE18;
      }
      goto L_08A9DE0C;
    }
L_08A9DE0C:
    ctx.gpr[7] = (ctx.gpr[7] & 16384u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A9DE20;
      }
      goto L_08A9DE18;
    }
L_08A9DE18:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A9DE20;
L_08A9DE20:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9DE70;
      }
      goto L_08A9DE28;
    }
L_08A9DE28:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DE44;
      }
      goto L_08A9DE30;
    }
L_08A9DE30:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9DE44;
L_08A9DE44:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DE70;
      }
      goto L_08A9DE5C;
    }
L_08A9DE5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A9DE70;
L_08A9DE70:
    ctx.gpr[31] = (0x08A9DE78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A9DE78u) goto L_08A9DE78;
    return;
L_08A9DE78:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DE9C;
      }
      goto L_08A9DE80;
    }
L_08A9DE80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A9DE9Cu);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9DE9Cu) goto L_08A9DE9C;
    return;
L_08A9DE9C:
    ctx.gpr[31] = (0x08A9DEA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9DEA4u) goto L_08A9DEA4;
    return;
L_08A9DEA4:
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
L_08A9DEBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A9DF28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 270u, 0x088C1A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9DF28u) goto L_08A9DF28;
    return;
L_08A9DF28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DF3C;
      }
      goto L_08A9DF34;
    }
L_08A9DF34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9DF40;
      }
      goto L_08A9DF3C;
    }
L_08A9DF3C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08A9DF40;
L_08A9DF40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9DF50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9DF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9DF60u) goto L_08A9DF60;
    return;
L_08A9DF60:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9DF70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9DFC0;
      }
      goto L_08A9DF94;
    }
L_08A9DF94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9DFF0;
      }
      goto L_08A9DFB8;
    }
L_08A9DFB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9DFD0;
      }
      goto L_08A9DFC0;
    }
L_08A9DFC0:
    ctx.gpr[31] = (0x08A9DFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 981u, 0x089C7FB4u>(ctx, &aot_mem) && ctx.pc == 0x08A9DFC8u) goto L_08A9DFC8;
    return;
L_08A9DFC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E0D8;
      }
      goto L_08A9DFD0;
    }
L_08A9DFD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6976)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9E080;
      }
      goto L_08A9DFF0;
    }
L_08A9DFF0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08A9DFF8;
L_08A9DFF8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9E078;
      }
      goto L_08A9E000;
    }
L_08A9E000:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E078;
      }
      goto L_08A9E008;
    }
L_08A9E008:
    ctx.gpr[31] = (0x08A9E010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9E010u) goto L_08A9E010;
    return;
L_08A9E010:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26172)));
    ctx.gpr[31] = (0x08A9E028u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26168)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A9E028u) goto L_08A9E028;
    return;
L_08A9E028:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-14480), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26124)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A9E06Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A9F058;
L_08A9E06C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9DFF8;
      }
      goto L_08A9E078;
    }
L_08A9E078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A9E0D8;
      }
      goto L_08A9E080;
    }
L_08A9E080:
    ctx.gpr[31] = (0x08A9E088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9E088u) goto L_08A9E088;
    return;
L_08A9E088:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26172)));
    ctx.gpr[31] = (0x08A9E0A0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26168)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A9E0A0u) goto L_08A9E0A0;
    return;
L_08A9E0A0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-14480), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26124)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9E0D8;
L_08A9E0D8:
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
L_08A9E0F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9E140;
      }
      goto L_08A9E114;
    }
L_08A9E114:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9E170;
      }
      goto L_08A9E138;
    }
L_08A9E138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9E150;
      }
      goto L_08A9E140;
    }
L_08A9E140:
    ctx.gpr[31] = (0x08A9E148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 981u, 0x089C7FB4u>(ctx, &aot_mem) && ctx.pc == 0x08A9E148u) goto L_08A9E148;
    return;
L_08A9E148:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E238;
      }
      goto L_08A9E150;
    }
L_08A9E150:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6976)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9E1F0;
      }
      goto L_08A9E170;
    }
L_08A9E170:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08A9E178;
L_08A9E178:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9E1E8;
      }
      goto L_08A9E180;
    }
L_08A9E180:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E1E8;
      }
      goto L_08A9E188;
    }
L_08A9E188:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14480)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14480), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E1AC;
      }
      goto L_08A9E1A4;
    }
L_08A9E1A4:
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14480), 0u);
    goto L_08A9E1AC;
L_08A9E1AC:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26124)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14480)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A9E1DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A9F058;
L_08A9E1DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E178;
      }
      goto L_08A9E1E8;
    }
L_08A9E1E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A9E238;
      }
      goto L_08A9E1F0;
    }
L_08A9E1F0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14480)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14480), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E214;
      }
      goto L_08A9E20C;
    }
L_08A9E20C:
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-14480), 0u);
    goto L_08A9E214;
L_08A9E214:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26124)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14480)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9E238;
L_08A9E238:
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
L_08A9E250:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9E268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9E268u) goto L_08A9E268;
    return;
L_08A9E268:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26180)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26176)));
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9E288u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A9E288u) goto L_08A9E288;
    return;
L_08A9E288:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E2C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x08A9E2D8u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 633u, 0x08AC3C28u>(ctx, &aot_mem) && ctx.pc == 0x08A9E2D8u) goto L_08A9E2D8;
    return;
L_08A9E2D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E2E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x08A9E31Cu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9E31Cu) goto L_08A9E31C;
    return;
L_08A9E31C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16042u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32506u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9E35C;
      }
      goto L_08A9E344;
    }
L_08A9E344:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9E354u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 515u, 0x08AA2650u>(ctx, &aot_mem) && ctx.pc == 0x08A9E354u) goto L_08A9E354;
    return;
L_08A9E354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E36C;
      }
      goto L_08A9E35C;
    }
L_08A9E35C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9E36Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 425u, 0x08AA1F38u>(ctx, &aot_mem) && ctx.pc == 0x08A9E36Cu) goto L_08A9E36C;
    return;
L_08A9E36C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08A9E38C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(26172)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(26168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[19] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    goto L_08A9E3F4;
L_08A9E3F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9E4A4;
      }
      goto L_08A9E3FC;
    }
L_08A9E3FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E4A4;
      }
      goto L_08A9E404;
    }
L_08A9E404:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26124)));
    ctx.gpr[31] = (0x08A9E418u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9E418u) goto L_08A9E418;
    return;
L_08A9E418:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A9E42Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A9E42Cu) goto L_08A9E42C;
    return;
L_08A9E42C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A9E498;
      }
      goto L_08A9E458;
    }
L_08A9E458:
    ctx.gpr[31] = (0x08A9E460u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9E5F0;
L_08A9E460:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E498;
      }
      goto L_08A9E468;
    }
L_08A9E468:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E488;
      }
      goto L_08A9E478;
    }
L_08A9E478:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9E488;
L_08A9E488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A9E498;
      }
      goto L_08A9E494;
    }
L_08A9E494:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08A9E498;
L_08A9E498:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A9E3F4;
      }
      goto L_08A9E4A4;
    }
L_08A9E4A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A9E4C0;
      }
      goto L_08A9E4AC;
    }
L_08A9E4AC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 5u);
    ctx.gpr[17] = (0u | 39u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E4C8;
      }
      goto L_08A9E4C0;
    }
L_08A9E4C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E5C0;
      }
      goto L_08A9E4C8;
    }
L_08A9E4C8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26124)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A9E4E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A9E6F0;
L_08A9E4E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E5B0;
      }
      goto L_08A9E4F0;
    }
L_08A9E4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E510;
      }
      goto L_08A9E500;
    }
L_08A9E500:
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A9E510;
L_08A9E510:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9E5B0;
      }
      goto L_08A9E51C;
    }
L_08A9E51C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E53C;
      }
      goto L_08A9E52C;
    }
L_08A9E52C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9E53C;
L_08A9E53C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E554;
      }
      goto L_08A9E544;
    }
L_08A9E544:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9E554;
L_08A9E554:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E5B0;
      }
      goto L_08A9E560;
    }
L_08A9E560:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E5B0;
      }
      goto L_08A9E568;
    }
L_08A9E568:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A9E580;
      }
      goto L_08A9E574;
    }
L_08A9E574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A9E590;
      }
      goto L_08A9E580;
    }
L_08A9E580:
    if (ctx.gpr[6] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
        goto L_08A9E59C;
    }
    goto L_08A9E588;
L_08A9E588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E5B0;
      }
      goto L_08A9E590;
    }
L_08A9E590:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E5C0;
      }
      goto L_08A9E59C;
    }
L_08A9E59C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A9E5B0;
      }
      goto L_08A9E5A4;
    }
L_08A9E5A4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E5C0;
      }
      goto L_08A9E5B0;
    }
L_08A9E5B0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9E4C8;
      }
      goto L_08A9E5C0;
    }
L_08A9E5C0:
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
L_08A9E5F0:
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E5FC;
    }
L_08A9E5FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E604;
    }
L_08A9E604:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E60C;
    }
L_08A9E60C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E614;
    }
L_08A9E614:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 14u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E61C;
    }
L_08A9E61C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 24u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E624;
    }
L_08A9E624:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 25u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E62C;
    }
L_08A9E62C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 28u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E634;
    }
L_08A9E634:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 29u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E63C;
    }
L_08A9E63C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 32u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E644;
    }
L_08A9E644:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 33u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E64C;
    }
L_08A9E64C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 36u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E654;
    }
L_08A9E654:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 37u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E65C;
    }
L_08A9E65C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 38u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E664;
    }
L_08A9E664:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 40u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E66C;
    }
L_08A9E66C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 41u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E674;
    }
L_08A9E674:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 42u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E67C;
    }
L_08A9E67C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 43u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E684;
    }
L_08A9E684:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 44u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E68C;
    }
L_08A9E68C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 48u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E694;
    }
L_08A9E694:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 50u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E69C;
    }
L_08A9E69C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 52u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E6A4;
    }
L_08A9E6A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 53u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E6AC;
    }
L_08A9E6AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E6B4;
    }
L_08A9E6B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 57u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E6BC;
    }
L_08A9E6BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E6C4;
    }
L_08A9E6C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 62u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E6CC;
    }
L_08A9E6CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 64u);
      if (branch_taken) {
          goto L_08A9E6DC;
      }
      goto L_08A9E6D4;
    }
L_08A9E6D4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9E6E4;
      }
      goto L_08A9E6DC;
    }
L_08A9E6DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9E6E8;
      }
      goto L_08A9E6E4;
    }
L_08A9E6E4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A9E6E8;
L_08A9E6E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E6F0:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E6FC;
    }
L_08A9E6FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E704;
    }
L_08A9E704:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E70C;
    }
L_08A9E70C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E714;
    }
L_08A9E714:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E71C;
    }
L_08A9E71C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 23u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E724;
    }
L_08A9E724:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 26u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E72C;
    }
L_08A9E72C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 27u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E734;
    }
L_08A9E734:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 30u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E73C;
    }
L_08A9E73C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E744;
    }
L_08A9E744:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 34u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E74C;
    }
L_08A9E74C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 35u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E754;
    }
L_08A9E754:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 39u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E75C;
    }
L_08A9E75C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 45u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E764;
    }
L_08A9E764:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E76C;
    }
L_08A9E76C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 47u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E774;
    }
L_08A9E774:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 49u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E77C;
    }
L_08A9E77C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 51u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E784;
    }
L_08A9E784:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 54u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E78C;
    }
L_08A9E78C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 56u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E794;
    }
L_08A9E794:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E79C;
    }
L_08A9E79C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 60u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E7A4;
    }
L_08A9E7A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 61u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E7AC;
    }
L_08A9E7AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 63u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E7B4;
    }
L_08A9E7B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 65u);
      if (branch_taken) {
          goto L_08A9E7C4;
      }
      goto L_08A9E7BC;
    }
L_08A9E7BC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9E7CC;
      }
      goto L_08A9E7C4;
    }
L_08A9E7C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9E7D0;
      }
      goto L_08A9E7CC;
    }
L_08A9E7CC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A9E7D0;
L_08A9E7D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E7D8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E7E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A9E858u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9E858u) goto L_08A9E858;
    return;
L_08A9E858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E87C;
      }
      goto L_08A9E864;
    }
L_08A9E864:
    ctx.gpr[31] = (0x08A9E86Cu);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(110)));
    goto L_08A9E898;
L_08A9E86C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E884;
      }
      goto L_08A9E874;
    }
L_08A9E874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E888;
      }
      goto L_08A9E87C;
    }
L_08A9E87C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E888;
      }
      goto L_08A9E884;
    }
L_08A9E884:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08A9E888;
L_08A9E888:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E898:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9E8BC;
      }
      goto L_08A9E8A8;
    }
L_08A9E8A8:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9E8C4;
      }
      goto L_08A9E8B4;
    }
L_08A9E8B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9E8C8;
      }
      goto L_08A9E8BC;
    }
L_08A9E8BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9E8C8;
      }
      goto L_08A9E8C4;
    }
L_08A9E8C4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A9E8C8;
L_08A9E8C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E8D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A9E9B0;
      }
      goto L_08A9E928;
    }
L_08A9E928:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_08A9E934;
L_08A9E934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A9E984;
      }
      goto L_08A9E944;
    }
L_08A9E944:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A9E950u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A9E950u) goto L_08A9E950;
    return;
L_08A9E950:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E984;
      }
      goto L_08A9E95C;
    }
L_08A9E95C:
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
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A9E974u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 130u, 0x08A34C48u>(ctx, &aot_mem) && ctx.pc == 0x08A9E974u) goto L_08A9E974;
    return;
L_08A9E974:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E984;
      }
      goto L_08A9E97C;
    }
L_08A9E97C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9E9B4;
      }
      goto L_08A9E984;
    }
L_08A9E984:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9E934;
      }
      goto L_08A9E9B0;
    }
L_08A9E9B0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A9E9B4;
L_08A9E9B4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9E9D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A9EA28;
      }
      goto L_08A9EA10;
    }
L_08A9EA10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16663)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9EA28;
      }
      goto L_08A9EA20;
    }
L_08A9EA20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9EBCC;
      }
      goto L_08A9EA28;
    }
L_08A9EA28:
    ctx.gpr[18] = (2276u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-27960)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-27960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A9EACC;
      }
      goto L_08A9EA40;
    }
L_08A9EA40:
    ctx.gpr[21] = (0u | 65535u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    goto L_08A9EA48;
L_08A9EA48:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08A9EA7C;
    }
    goto L_08A9EA58;
L_08A9EA58:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9EA68u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A9EA68u) goto L_08A9EA68;
    return;
L_08A9EA68:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08A9EA7C;
L_08A9EA7C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A9EABC;
      }
      goto L_08A9EA84;
    }
L_08A9EA84:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(182)));
        goto L_08A9EAB0;
    }
    goto L_08A9EA8C;
L_08A9EA8C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9EA9Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A9EA9Cu) goto L_08A9EA9C;
    return;
L_08A9EA9C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(182)));
    goto L_08A9EAB0;
L_08A9EAB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EABC;
      }
      goto L_08A9EAB8;
    }
L_08A9EAB8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A9EABC;
L_08A9EABC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9EA48;
      }
      goto L_08A9EACC;
    }
L_08A9EACC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A9EB54;
      }
      goto L_08A9EAE8;
    }
L_08A9EAE8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[21] = (ctx.lo);
    goto L_08A9EAF4;
L_08A9EAF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A9EB14;
    }
    goto L_08A9EB0C;
L_08A9EB0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9EB18;
      }
      goto L_08A9EB14;
    }
L_08A9EB14:
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[21]);
    goto L_08A9EB18;
L_08A9EB18:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EB40;
      }
      goto L_08A9EB20;
    }
L_08A9EB20:
    ctx.gpr[31] = (0x08A9EB28u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08A9EB28u) goto L_08A9EB28;
    return;
L_08A9EB28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EB40;
      }
      goto L_08A9EB30;
    }
L_08A9EB30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EB40;
      }
      goto L_08A9EB3C;
    }
L_08A9EB3C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A9EB40;
L_08A9EB40:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-3248));
      if (branch_taken) {
          goto L_08A9EAF4;
      }
      goto L_08A9EB54;
    }
L_08A9EB54:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EBC0;
      }
      goto L_08A9EB64;
    }
L_08A9EB64:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EBB8;
      }
      goto L_08A9EB70;
    }
L_08A9EB70:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (0u | 15u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EBC8;
      }
      goto L_08A9EBB0;
    }
L_08A9EBB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9EBCC;
      }
      goto L_08A9EBB8;
    }
L_08A9EBB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9EBCC;
      }
      goto L_08A9EBC0;
    }
L_08A9EBC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9EBCC;
      }
      goto L_08A9EBC8;
    }
L_08A9EBC8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A9EBCC;
L_08A9EBCC:
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
L_08A9EBF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(23) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9EDC4;
      }
      goto L_08A9EC08;
    }
L_08A9EC08:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EDB0;
      }
      goto L_08A9EC10;
    }
L_08A9EC10:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19776)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9EC28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5824)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5824), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EC40;
    }
L_08A9EC40:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5820)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5820), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EC58;
    }
L_08A9EC58:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5816)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5816), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EC70;
    }
L_08A9EC70:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5812)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5812), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EC88;
    }
L_08A9EC88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5808)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5808), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9ECA0;
    }
L_08A9ECA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5804)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5804), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9ECB8;
    }
L_08A9ECB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5800)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5800), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9ECD0;
    }
L_08A9ECD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5796)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5796), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9ECE8;
    }
L_08A9ECE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5792)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5792), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9ED00;
    }
L_08A9ED00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5788)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5788), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9ED18;
    }
L_08A9ED18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5784)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5784), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9ED30;
    }
L_08A9ED30:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5780)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5780), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9ED48;
    }
L_08A9ED48:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5776)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5776), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9ED60;
    }
L_08A9ED60:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5824)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5824), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9ED78;
    }
L_08A9ED78:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5820)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5820), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9ED90;
    }
L_08A9ED90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5772)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5772), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EDA8;
    }
L_08A9EDA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EDB0;
    }
L_08A9EDB0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A9EDBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19912));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 534u, 0x08AFA558u>(ctx, &aot_mem) && ctx.pc == 0x08A9EDBCu) goto L_08A9EDBC;
    return;
L_08A9EDBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EDC4;
    }
L_08A9EDC4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF6C;
      }
      goto L_08A9EDCC;
    }
L_08A9EDCC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19680)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9EDE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5824)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5824), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EDFC;
    }
L_08A9EDFC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5820)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5820), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EE14;
    }
L_08A9EE14:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5816)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5816), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EE2C;
    }
L_08A9EE2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5812)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5812), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EE44;
    }
L_08A9EE44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5808)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5808), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EE5C;
    }
L_08A9EE5C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5804)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5804), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EE74;
    }
L_08A9EE74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5800)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5800), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EE8C;
    }
L_08A9EE8C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5796)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5796), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EEA4;
    }
L_08A9EEA4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5792)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5792), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EEBC;
    }
L_08A9EEBC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5788)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5788), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EED4;
    }
L_08A9EED4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5784)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5784), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EEEC;
    }
L_08A9EEEC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5780)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5780), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EF04;
    }
L_08A9EF04:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5776)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5776), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EF1C;
    }
L_08A9EF1C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5824)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5824), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EF34;
    }
L_08A9EF34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5820)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5820), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EF4C;
    }
L_08A9EF4C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5772)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5772), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EF64;
    }
L_08A9EF64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9EF78;
      }
      goto L_08A9EF6C;
    }
L_08A9EF6C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A9EF78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19912));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 534u, 0x08AFA558u>(ctx, &aot_mem) && ctx.pc == 0x08A9EF78u) goto L_08A9EF78;
    return;
L_08A9EF78:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9EF84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9EF8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9EFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EFA4u) goto L_08A9EFA4;
    return;
L_08A9EFA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F03C;
      }
      goto L_08A9EFAC;
    }
L_08A9EFAC:
    ctx.gpr[31] = (0x08A9EFB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EFB4u) goto L_08A9EFB4;
    return;
L_08A9EFB4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A9EFC0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EFC0u) goto L_08A9EFC0;
    return;
L_08A9EFC0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A9EFD0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EFD0u) goto L_08A9EFD0;
    return;
L_08A9EFD0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A9EFDCu);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9EFDCu) goto L_08A9EFDC;
    return;
L_08A9EFDC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A9F01C;
    }
    goto L_08A9F01C;
L_08A9F01C:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A9F034;
    }
    goto L_08A9F034;
L_08A9F034:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9F044;
      }
      goto L_08A9F03C;
    }
L_08A9F03C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A9F044;
L_08A9F044:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F058:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F060:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_08A9F084;
      }
      goto L_08A9F06C;
    }
L_08A9F06C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_08A9F084;
      }
      goto L_08A9F074;
    }
L_08A9F074:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 47u);
      if (branch_taken) {
          goto L_08A9F084;
      }
      goto L_08A9F07C;
    }
L_08A9F07C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9F08C;
      }
      goto L_08A9F084;
    }
L_08A9F084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9F090;
      }
      goto L_08A9F08C;
    }
L_08A9F08C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A9F090;
L_08A9F090:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F098:
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 23u);
      if (branch_taken) {
          goto L_08A9F0AC;
      }
      goto L_08A9F0A4;
    }
L_08A9F0A4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9F0B4;
      }
      goto L_08A9F0AC;
    }
L_08A9F0AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9F0B8;
      }
      goto L_08A9F0B4;
    }
L_08A9F0B4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A9F0B8;
L_08A9F0B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F0C0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9F0C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[31]);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(27772)));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08A9F138;
      }
      goto L_08A9F128;
    }
L_08A9F128:
    ctx.gpr[31] = (0x08A9F130u);
    // nop
    goto L_08A9E9D8;
L_08A9F130:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F1D0;
      }
      goto L_08A9F138;
    }
L_08A9F138:
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A9F184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 195u, 0x089D58E0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F184u) goto L_08A9F184;
    return;
L_08A9F184:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x08A9F1A0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 390u, 0x088724BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9F1A0u) goto L_08A9F1A0;
    return;
L_08A9F1A0:
    ctx.gpr[31] = (0x08A9F1A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F1A8u) goto L_08A9F1A8;
    return;
L_08A9F1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[23] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08A9F1D8;
      }
      goto L_08A9F1C8;
    }
L_08A9F1C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F364;
      }
      goto L_08A9F1D0;
    }
L_08A9F1D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 36u, 0x08AA01A8u>(ctx, &aot_mem); return;
      }
      goto L_08A9F1D8;
    }
L_08A9F1D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F210;
      }
      goto L_08A9F1E4;
    }
L_08A9F1E4:
    ctx.gpr[31] = (0x08A9F1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9F1ECu) goto L_08A9F1EC;
    return;
L_08A9F1EC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F210;
      }
      goto L_08A9F1FC;
    }
L_08A9F1FC:
    ctx.gpr[31] = (0x08A9F204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9F204u) goto L_08A9F204;
    return;
L_08A9F204:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F210;
      }
      goto L_08A9F20C;
    }
L_08A9F20C:
    ctx.gpr[20] = (0u | 1u);
    goto L_08A9F210;
L_08A9F210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F228;
      }
      goto L_08A9F21C;
    }
L_08A9F21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2089)));
      if (branch_taken) {
          goto L_08A9F254;
      }
      goto L_08A9F228;
    }
L_08A9F228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2089)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A9F254;
L_08A9F254:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5816)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F270;
      }
      goto L_08A9F268;
    }
L_08A9F268:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08A9F364;
      }
      goto L_08A9F270;
    }
L_08A9F270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F330;
      }
      goto L_08A9F280;
    }
L_08A9F280:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2090)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17180)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F338;
      }
      goto L_08A9F2A0;
    }
L_08A9F2A0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17184)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(324)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17188)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9F338;
      }
      goto L_08A9F2DC;
    }
L_08A9F2DC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17184)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17180)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17172)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17164)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17160)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17132)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F338;
      }
      goto L_08A9F330;
    }
L_08A9F330:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08A9F364;
      }
      goto L_08A9F338;
    }
L_08A9F338:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[31] = (0x08A9F344u);
    // nop
    goto L_08A9EF8C;
L_08A9F344:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[31] = (0x08A9F358u);
    // nop
    goto L_08A9EF8C;
L_08A9F358:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_08A9F364;
L_08A9F364:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6976)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6976)));
        goto L_08A9F388;
    }
    goto L_08A9F380;
L_08A9F380:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
      if (branch_taken) {
          goto L_08A9F388;
      }
      goto L_08A9F388;
    }
L_08A9F388:
    ctx.fpr[12] = std::sqrt(ctx.fpr[24]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[20] + ctx.fpr[24];
    ctx.gpr[31] = (0x08A9F3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 30u, 0x089581F0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F3ACu) goto L_08A9F3AC;
    return;
L_08A9F3AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F410;
      }
      goto L_08A9F3B4;
    }
L_08A9F3B4:
    ctx.gpr[31] = (0x08A9F3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F3BCu) goto L_08A9F3BC;
    return;
L_08A9F3BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F410;
      }
      goto L_08A9F3C8;
    }
L_08A9F3C8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F410;
      }
      goto L_08A9F3D4;
    }
L_08A9F3D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F410;
      }
      goto L_08A9F3E0;
    }
L_08A9F3E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 151u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 166u);
      if (branch_taken) {
          goto L_08A9F40C;
      }
      goto L_08A9F3F4;
    }
L_08A9F3F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 181u);
      if (branch_taken) {
          goto L_08A9F40C;
      }
      goto L_08A9F3FC;
    }
L_08A9F3FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-967));
      if (branch_taken) {
          goto L_08A9F40C;
      }
      goto L_08A9F404;
    }
L_08A9F404:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9F410;
      }
      goto L_08A9F40C;
    }
L_08A9F40C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A9F410;
L_08A9F410:
    ctx.gpr[31] = (0x08A9F418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 78u, 0x089184E0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F418u) goto L_08A9F418;
    return;
L_08A9F418:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F424;
      }
      goto L_08A9F420;
    }
L_08A9F420:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A9F424;
L_08A9F424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F444;
      }
      goto L_08A9F430;
    }
L_08A9F430:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26140)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
      if (branch_taken) {
          goto L_08A9F454;
      }
      goto L_08A9F444;
    }
L_08A9F444:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26144)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    goto L_08A9F454;
L_08A9F454:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30828)));
    ctx.gpr[31] = (0x08A9F464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 78u, 0x089184E0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F464u) goto L_08A9F464;
    return;
L_08A9F464:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A9F470;
      }
      goto L_08A9F46C;
    }
L_08A9F46C:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A9F470;
L_08A9F470:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26128)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A9F4B0;
    }
    goto L_08A9F4B0;
L_08A9F4B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5760)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F4D4;
      }
      goto L_08A9F4CC;
    }
L_08A9F4CC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 35u, 0x08AA01A4u>(ctx, &aot_mem); return;
      }
      goto L_08A9F4D4;
    }
L_08A9F4D4:
    ctx.gpr[31] = (0x08A9F4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9F4DCu) goto L_08A9F4DC;
    return;
L_08A9F4DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26196)));
    ctx.gpr[31] = (0x08A9F4F4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26192)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A9F4F4u) goto L_08A9F4F4;
    return;
L_08A9F4F4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(27772)));
        goto L_08A9F528;
    }
    goto L_08A9F51C;
L_08A9F51C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F544;
      }
      goto L_08A9F524;
    }
L_08A9F524:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(27772)));
    goto L_08A9F528;
L_08A9F528:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F544;
      }
      goto L_08A9F530;
    }
L_08A9F530:
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[31] = (0x08A9F53Cu);
    // nop
    goto L_08A9DF50;
L_08A9F53C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A9F6F4;
      }
      goto L_08A9F544;
    }
L_08A9F544:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08A9F54C;
L_08A9F54C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(158)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F5B8;
      }
      goto L_08A9F55C;
    }
L_08A9F55C:
    ctx.gpr[31] = (0x08A9F564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9F564u) goto L_08A9F564;
    return;
L_08A9F564:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26180)));
    ctx.gpr[31] = (0x08A9F57Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26176)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A9F57Cu) goto L_08A9F57C;
    return;
L_08A9F57C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F5AC;
      }
      goto L_08A9F598;
    }
L_08A9F598:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(7));
    ctx.gpr[31] = (0x08A9F5A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A9E7D8;
L_08A9F5A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A9F5B0;
      }
      goto L_08A9F5AC;
    }
L_08A9F5AC:
    ctx.gpr[16] = (0u | 9u);
    goto L_08A9F5B0;
L_08A9F5B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F5C8;
      }
      goto L_08A9F5B8;
    }
L_08A9F5B8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A9F54C;
      }
      goto L_08A9F5C8;
    }
L_08A9F5C8:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9F5DC;
      }
      goto L_08A9F5D4;
    }
L_08A9F5D4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F6F4;
      }
      goto L_08A9F5DC;
    }
L_08A9F5DC:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F68C;
      }
      goto L_08A9F5E4;
    }
L_08A9F5E4:
    ctx.gpr[31] = (0x08A9F5ECu);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F5ECu) goto L_08A9F5EC;
    return;
L_08A9F5EC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9F68C;
      }
      goto L_08A9F61C;
    }
L_08A9F61C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(178)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A9F62Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_08A9E38C;
L_08A9F62C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A9F664;
      }
      goto L_08A9F638;
    }
L_08A9F638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A9F664;
      }
      goto L_08A9F644;
    }
L_08A9F644:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9F66C;
      }
      goto L_08A9F65C;
    }
L_08A9F65C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F684;
      }
      goto L_08A9F664;
    }
L_08A9F664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 36u, 0x08AA01A8u>(ctx, &aot_mem); return;
      }
      goto L_08A9F66C;
    }
L_08A9F66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9F684;
L_08A9F684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A9F6F4;
      }
      goto L_08A9F68C;
    }
L_08A9F68C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F6A4;
      }
      goto L_08A9F694;
    }
L_08A9F694:
    ctx.gpr[31] = (0x08A9F69Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7));
    goto L_08A9E2C4;
L_08A9F69C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A9F6B0;
      }
      goto L_08A9F6A4;
    }
L_08A9F6A4:
    ctx.gpr[31] = (0x08A9F6ACu);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(178)));
    goto L_08A9DF70;
L_08A9F6AC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08A9F6B0;
L_08A9F6B0:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A9F6D4;
      }
      goto L_08A9F6B8;
    }
L_08A9F6B8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9F6DC;
      }
      goto L_08A9F6CC;
    }
L_08A9F6CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A9F6F4;
      }
      goto L_08A9F6D4;
    }
L_08A9F6D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 36u, 0x08AA01A8u>(ctx, &aot_mem); return;
      }
      goto L_08A9F6DC;
    }
L_08A9F6DC:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    goto L_08A9F6F4;
L_08A9F6F4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A9F70C;
      }
      goto L_08A9F6FC;
    }
L_08A9F6FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26132)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) <= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[17]);
        goto L_08A9F710;
    }
    goto L_08A9F708;
L_08A9F708:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26132)));
    goto L_08A9F70C;
L_08A9F70C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[17]);
    goto L_08A9F710;
L_08A9F710:
    ctx.gpr[23] = (static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9F76C;
      }
      goto L_08A9F71C;
    }
L_08A9F71C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A9F76C;
      }
      goto L_08A9F724;
    }
L_08A9F724:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F758;
      }
      goto L_08A9F730;
    }
L_08A9F730:
    ctx.gpr[21] = (2228u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08A9F760;
      }
      goto L_08A9F748;
    }
L_08A9F748:
    ctx.gpr[31] = (0x08A9F750u);
    // nop
    goto L_08A9E250;
L_08A9F750:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9F788;
      }
      goto L_08A9F758;
    }
L_08A9F758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 36u, 0x08AA01A8u>(ctx, &aot_mem); return;
      }
      goto L_08A9F760;
    }
L_08A9F760:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9F788;
      }
      goto L_08A9F76C;
    }
L_08A9F76C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[21] = (2228u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    goto L_08A9F788;
L_08A9F788:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F7F4;
      }
      goto L_08A9F7A0;
    }
L_08A9F7A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F7F4;
      }
      goto L_08A9F7B0;
    }
L_08A9F7B0:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F7F4;
      }
      goto L_08A9F7B8;
    }
L_08A9F7B8:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.gpr[31] = (0x08A9F7CCu);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F7CCu) goto L_08A9F7CC;
    return;
L_08A9F7CC:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A9F7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9F7E4u) goto L_08A9F7E4;
    return;
L_08A9F7E4:
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[28];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[28] + ctx.fpr[13];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    goto L_08A9F7F4;
L_08A9F7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-26612)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9F828u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 167u, 0x08979544u>(ctx, &aot_mem) && ctx.pc == 0x08A9F828u) goto L_08A9F828;
    return;
L_08A9F828:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 35u, 0x08AA01A4u>(ctx, &aot_mem); return;
      }
      goto L_08A9F834;
    }
L_08A9F834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[16] = (ctx.gpr[16] & 15u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08A9F880;
    }
    goto L_08A9F880;
L_08A9F880:
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9F8A0;
      }
      goto L_08A9F890;
    }
L_08A9F890:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19852));
    ctx.gpr[31] = (0x08A9F8A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A9D050;
L_08A9F8A0:
    ctx.gpr[31] = (0x08A9F8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9F8A8u) goto L_08A9F8A8;
    return;
L_08A9F8A8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 35u, 0x08AA01A4u>(ctx, &aot_mem); return;
      }
      goto L_08A9F8BC;
    }
L_08A9F8BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A9F8F0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9F8F0u) goto L_08A9F8F0;
    return;
L_08A9F8F0:
    ctx.gpr[6] = (ctx.gpr[2] & 65535u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9F908u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 720u, 0x08977AB8u>(ctx, &aot_mem) && ctx.pc == 0x08A9F908u) goto L_08A9F908;
    return;
L_08A9F908:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F93C;
      }
      goto L_08A9F910;
    }
L_08A9F910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F93C;
      }
      goto L_08A9F920;
    }
L_08A9F920:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F93C;
      }
      goto L_08A9F928;
    }
L_08A9F928:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[31] = (0x08A9F934u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A9E2E4;
L_08A9F934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 35u, 0x08AA01A4u>(ctx, &aot_mem); return;
      }
      goto L_08A9F93C;
    }
L_08A9F93C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A9F978;
      }
      goto L_08A9F950;
    }
L_08A9F950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08A9F970u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 587u, 0x08AA2B98u>(ctx, &aot_mem) && ctx.pc == 0x08A9F970u) goto L_08A9F970;
    return;
L_08A9F970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 35u, 0x08AA01A4u>(ctx, &aot_mem); return;
      }
      goto L_08A9F978;
    }
L_08A9F978:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 35u, 0x08AA01A4u>(ctx, &aot_mem); return;
      }
      goto L_08A9F98C;
    }
L_08A9F98C:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[4]);
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (2269u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-464));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[4]);
    goto L_08A9F9C8;
L_08A9F9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9FB90;
      }
      goto L_08A9F9D8;
    }
L_08A9F9D8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FA20;
      }
      goto L_08A9F9E0;
    }
L_08A9F9E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FA18;
      }
      goto L_08A9F9FC;
    }
L_08A9F9FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FBDC;
      }
      goto L_08A9FA10;
    }
L_08A9FA10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A9FC88;
      }
      goto L_08A9FA18;
    }
L_08A9FA18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 36u, 0x08AA01A8u>(ctx, &aot_mem); return;
      }
      goto L_08A9FA20;
    }
L_08A9FA20:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9FA88;
      }
      goto L_08A9FA2C;
    }
L_08A9FA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FA80;
      }
      goto L_08A9FA48;
    }
L_08A9FA48:
    ctx.gpr[31] = (0x08A9FA50u);
    ctx.gpr[4] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FA50u) goto L_08A9FA50;
    return;
L_08A9FA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F9FC;
      }
      goto L_08A9FA80;
    }
L_08A9FA80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 36u, 0x08AA01A8u>(ctx, &aot_mem); return;
      }
      goto L_08A9FA88;
    }
L_08A9FA88:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9FAF0;
      }
      goto L_08A9FA94;
    }
L_08A9FA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FAE8;
      }
      goto L_08A9FAB0;
    }
L_08A9FAB0:
    ctx.gpr[31] = (0x08A9FAB8u);
    ctx.gpr[4] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FAB8u) goto L_08A9FAB8;
    return;
L_08A9FAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F9FC;
      }
      goto L_08A9FAE8;
    }
L_08A9FAE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 36u, 0x08AA01A8u>(ctx, &aot_mem); return;
      }
      goto L_08A9FAF0;
    }
L_08A9FAF0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9F9FC;
      }
      goto L_08A9FAFC;
    }
L_08A9FAFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FB88;
      }
      goto L_08A9FB18;
    }
L_08A9FB18:
    ctx.gpr[31] = (0x08A9FB20u);
    ctx.gpr[4] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FB20u) goto L_08A9FB20;
    return;
L_08A9FB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FB88;
      }
      goto L_08A9FB50;
    }
L_08A9FB50:
    ctx.gpr[31] = (0x08A9FB58u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9FB58u) goto L_08A9FB58;
    return;
L_08A9FB58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F9FC;
      }
      goto L_08A9FB88;
    }
L_08A9FB88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 36u, 0x08AA01A8u>(ctx, &aot_mem); return;
      }
      goto L_08A9FB90;
    }
L_08A9FB90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9FBB4;
      }
      goto L_08A9FBA0;
    }
L_08A9FBA0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9FBB4;
L_08A9FBB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A9FBCCu);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9FBCCu) goto L_08A9FBCC;
    return;
L_08A9FBCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9F9FC;
      }
      goto L_08A9FBD4;
    }
L_08A9FBD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 36u, 0x08AA01A8u>(ctx, &aot_mem); return;
      }
      goto L_08A9FBDC;
    }
L_08A9FBDC:
    ctx.gpr[31] = (0x08A9FBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9FBE4u) goto L_08A9FBE4;
    return;
L_08A9FBE4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A9FC88;
      }
      goto L_08A9FBEC;
    }
L_08A9FBEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A9FC10u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FC10u) goto L_08A9FC10;
    return;
L_08A9FC10:
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
    ctx.gpr[31] = (0x08A9FC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FC24u) goto L_08A9FC24;
    return;
L_08A9FC24:
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A9FC38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9FC38u) goto L_08A9FC38;
    return;
L_08A9FC38:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
      if (branch_taken) {
          goto L_08A9FC4C;
      }
      goto L_08A9FC48;
    }
L_08A9FC48:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    goto L_08A9FC4C;
L_08A9FC4C:
    ctx.gpr[31] = (0x08A9FC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9FC54u) goto L_08A9FC54;
    return;
L_08A9FC54:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FC68;
      }
      goto L_08A9FC64;
    }
L_08A9FC64:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    goto L_08A9FC68;
L_08A9FC68:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    goto L_08A9FC88;
L_08A9FC88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FCA4;
      }
      goto L_08A9FC94;
    }
L_08A9FC94:
    ctx.gpr[31] = (0x08A9FC9Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A9E8D0;
L_08A9FC9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FCCC;
      }
      goto L_08A9FCA4;
    }
L_08A9FCA4:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A9FCBCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 420u, 0x088A6CB0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FCBCu) goto L_08A9FCBC;
    return;
L_08A9FCBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FCD4;
      }
      goto L_08A9FCC4;
    }
L_08A9FCC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 36u, 0x08AA01A8u>(ctx, &aot_mem); return;
      }
      goto L_08A9FCCC;
    }
L_08A9FCCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 36u, 0x08AA01A8u>(ctx, &aot_mem); return;
      }
      goto L_08A9FCD4;
    }
L_08A9FCD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[23] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9FD3C;
      }
      goto L_08A9FCE8;
    }
L_08A9FCE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    ctx.gpr[31] = (0x08A9FD00u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FD00u) goto L_08A9FD00;
    return;
L_08A9FD00:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[30];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FD2C;
      }
      goto L_08A9FD10;
    }
L_08A9FD10:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_08A9FD34;
    }
    goto L_08A9FD24;
L_08A9FD24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9FD38;
      }
      goto L_08A9FD2C;
    }
L_08A9FD2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 36u, 0x08AA01A8u>(ctx, &aot_mem); return;
      }
      goto L_08A9FD34;
    }
L_08A9FD34:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A9FD38;
L_08A9FD38:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A9FD3C;
L_08A9FD3C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08A9FD78;
      }
      goto L_08A9FD70;
    }
L_08A9FD70:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A9FD78;
L_08A9FD78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FDD4;
      }
      goto L_08A9FD80;
    }
L_08A9FD80:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9FDB4u);
    // nop
    goto L_08A9EF8C;
L_08A9FDB4:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9FDD4;
      }
      goto L_08A9FDD0;
    }
L_08A9FDD0:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A9FDD4;
L_08A9FDD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9FDFC;
      }
      goto L_08A9FDE8;
    }
L_08A9FDE8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A9FDFC;
L_08A9FDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9FE18;
      }
      goto L_08A9FE0C;
    }
L_08A9FE0C:
    ctx.gpr[31] = (0x08A9FE14u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A9E7E0;
L_08A9FE14:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08A9FE18;
L_08A9FE18:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 33u, 0x08AA0188u>(ctx, &aot_mem); return;
      }
      goto L_08A9FE20;
    }
L_08A9FE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A9FE38u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 118u, 0x08AA0754u>(ctx, &aot_mem) && ctx.pc == 0x08A9FE38u) goto L_08A9FE38;
    return;
L_08A9FE38:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FE5C;
      }
      goto L_08A9FE48;
    }
L_08A9FE48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A9FE5C;
      }
      goto L_08A9FE58;
    }
L_08A9FE58:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2088), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A9FE5C;
L_08A9FE5C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A9FE68u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A9F058;
L_08A9FE68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FFA4;
      }
      goto L_08A9FE70;
    }
L_08A9FE70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A9FECCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9FECCu) goto L_08A9FECC;
    return;
L_08A9FECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FFA4;
      }
      goto L_08A9FED8;
    }
L_08A9FED8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(334)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9FEFC;
      }
      goto L_08A9FEE8;
    }
L_08A9FEE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(334)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9FFA4;
      }
      goto L_08A9FEF8;
    }
L_08A9FEF8:
    ctx.gpr[6] = (2230u << 16u);
    goto L_08A9FEFC;
L_08A9FEFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FFA4;
      }
      goto L_08A9FF0C;
    }
L_08A9FF0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9FFA4;
      }
      goto L_08A9FF1C;
    }
L_08A9FF1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A9FFA4;
      }
      goto L_08A9FF30;
    }
L_08A9FF30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6976)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9FFA4;
      }
      goto L_08A9FF44;
    }
L_08A9FF44:
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), 0u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9FF68u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(340));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 420u, 0x088A6CB0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FF68u) goto L_08A9FF68;
    return;
L_08A9FF68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FFA4;
      }
      goto L_08A9FF70;
    }
L_08A9FF70:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08A9FF78;
L_08A9FF78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9FF94;
      }
      goto L_08A9FF84;
    }
L_08A9FF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A9FF94;
      }
      goto L_08A9FF90;
    }
L_08A9FF90:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A9FF94;
L_08A9FF94:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9FF78;
      }
      goto L_08A9FFA4;
    }
L_08A9FFA4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 8u, 0x08AA0064u>(ctx, &aot_mem); return;
      }
      goto L_08A9FFAC;
    }
L_08A9FFAC:
    ctx.gpr[31] = (0x08A9FFB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9FFB4u) goto L_08A9FFB4;
    return;
L_08A9FFB4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A9FFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9FFE8u) goto L_08A9FFE8;
    return;
L_08A9FFE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26180)));
    ctx.gpr[31] = (0x08AA0000u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26176)));
    (void)rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0166(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0166_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_166(Runtime &runtime) {
    runtime.register_generated_unit(166u, 0x08A9C000u, 16384u, &recomp_unit_0166, &recomp_unit_0166_entry);
    runtime.register_function(0x08A9C000u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C010u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C018u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C020u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C028u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C040u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C050u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C060u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C078u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C08Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C0ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C0B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C0BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C0E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C0F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C0FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C10Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C118u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C144u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C158u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C1B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C1ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C1FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C208u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C218u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C24Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C270u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C278u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C29Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C2C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C2E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C2F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C304u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C310u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C318u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C324u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C330u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C340u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C34Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C35Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C368u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C370u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C37Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C388u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C394u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C3B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C3B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C3CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C3E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C3F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C3FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C40Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C414u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C428u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C434u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C438u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C44Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C47Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C4C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C508u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C524u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C528u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C578u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C580u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C594u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C5B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C5C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C5D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C5E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C5ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C5FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C608u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C610u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C618u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C624u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C62Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C630u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C638u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C648u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C650u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C670u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C690u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C69Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C6F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C704u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C708u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C720u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C730u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C740u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C748u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C74Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C764u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C76Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C788u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C790u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C798u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C7ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C808u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C81Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C82Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C838u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C848u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C850u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C860u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C864u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C868u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C874u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C884u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C88Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C89Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C8A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C8ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C8B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C8C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C8C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C8CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C904u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C90Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C91Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C93Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C954u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C968u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C97Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C988u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C994u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9C9FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CA94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAE0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CAE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CB98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CBA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CBBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CBD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CBD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC08u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CC9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCF4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CCFCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD04u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD1Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CD98u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CDA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CDACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CDB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CDB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CDC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CDFCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE04u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CE90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CEB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CEC8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CEE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CEECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9CF34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D030u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D03Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D050u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D07Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D0A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D0B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D18Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D198u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D1BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D1C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D1CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D1D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D1E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D1F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D200u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D208u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D2DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D2E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D2ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D30Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D324u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D340u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D354u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D374u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D37Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D384u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D3F8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D400u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D40Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D414u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D448u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D464u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D46Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D48Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D49Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D4B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D4B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D4C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D4C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D4D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D4E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D528u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D538u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D548u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D550u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D558u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D568u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D570u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D580u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D58Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D5A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D5ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D5B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D5B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D5E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D600u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D624u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D644u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D64Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D654u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D660u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D668u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D670u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D678u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D680u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D690u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D6D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D6E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D6E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D6F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D6FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D700u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D734u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D74Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D754u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D770u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D780u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D7F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D89Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D8A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D8B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D8D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D90Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D954u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D964u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D970u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D990u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9D9ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA50u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DA74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DAA8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DADCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DAECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB08u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB1Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DB9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBA8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBCCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBDCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DBF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC50u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DC90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DCECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD54u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DD9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDD8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DDFCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE70u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DE9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DEA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DEBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF50u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF70u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DF94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFC8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9DFF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E000u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E008u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E010u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E028u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E06Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E078u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E080u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E088u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E0F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E114u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E138u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E140u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E148u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E150u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E170u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E178u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E180u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E188u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E1F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E20Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E214u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E238u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E250u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E268u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E288u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E2E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E31Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E344u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E354u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E35Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E36Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E38Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E3F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E3FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E404u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E418u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E42Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E458u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E460u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E468u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E478u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E488u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E494u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E498u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E4F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E500u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E510u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E51Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E52Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E53Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E544u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E554u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E560u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E568u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E574u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E580u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E588u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E590u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E59Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E5FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E604u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E60Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E614u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E61Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E624u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E62Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E634u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E63Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E644u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E64Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E654u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E65Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E664u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E66Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E674u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E67Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E684u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E68Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E694u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E69Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6E8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E6FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E704u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E70Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E714u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E71Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E724u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E72Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E734u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E73Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E744u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E74Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E754u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E75Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E764u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E76Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E774u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E77Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E784u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E78Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E794u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E79Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E7E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E858u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E864u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E86Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E874u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E87Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E884u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E888u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E898u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E8A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E8B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E8BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E8C4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E8C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E8D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E928u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E934u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E944u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E950u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E95Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E974u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E97Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E984u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E9B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E9B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9E9D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA7Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EA9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EAB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EAB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EABCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EACCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EAE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EAF4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB54u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EB70u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBC8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBCCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EBF4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC08u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC28u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC40u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC70u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EC88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ECE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED60u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9ED90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDA8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDCCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EDFCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE74u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EE8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EEA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EEBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EED4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EEECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF04u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF1Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF6Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EF8Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFC0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9EFDCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F01Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F034u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F03Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F044u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F058u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F060u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F06Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F074u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F07Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F084u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F08Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F090u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F098u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0C0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F0C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F128u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F130u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F138u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F184u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1D0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F1FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F204u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F20Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F210u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F21Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F228u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F254u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F268u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F270u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F280u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F2A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F2DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F330u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F338u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F344u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F358u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F364u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F380u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F388u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3B4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F3FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F404u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F40Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F410u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F418u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F420u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F424u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F430u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F444u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F454u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F464u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F46Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F470u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F4F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F51Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F524u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F528u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F530u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F53Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F544u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F54Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F55Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F564u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F57Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F598u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F5ECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F61Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F62Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F638u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F644u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F65Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F664u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F66Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F684u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F68Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F694u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F69Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6A4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6ACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6D4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6DCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F6FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F708u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F70Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F710u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F71Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F724u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F730u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F748u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F750u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F758u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F760u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F76Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F788u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7B0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7B8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7CCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7E4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F7F4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F828u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F834u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F880u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F890u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8A0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8A8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8BCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F8F0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F908u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F910u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F920u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F928u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F934u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F93Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F950u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F970u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F978u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F98Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9C8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9D8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9E0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9F9FCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA50u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FA94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAB0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAB8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAF0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FAFCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB50u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FB90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBA0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBCCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBDCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBE4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FBECu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC4Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC54u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC64u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC88u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FC9Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCBCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCC4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCCCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FCE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD00u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD10u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD24u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD2Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD34u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD3Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD70u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FD80u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDD0u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDD4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FDFCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE14u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE18u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE20u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE38u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE48u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE58u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE5Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FE70u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FECCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FED8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FEE8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FEF8u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FEFCu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF0Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF1Cu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF30u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF44u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF68u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF70u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF78u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF84u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF90u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FF94u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFA4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFACu, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFB4u, &recomp_unit_0166, "recomp_unit_0166");
    runtime.register_function(0x08A9FFE8u, &recomp_unit_0166, "recomp_unit_0166");
}
} // namespace psprecomp
