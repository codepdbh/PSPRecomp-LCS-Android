#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0157[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4,
    0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 14,
    0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 27,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 32, 33, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61,
    0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 72,
    0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0,
    0, 83, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93,
    0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 104,
    0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 114, 0, 0,
    0, 115, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125,
    0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 136,
    0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0,
    0, 147, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 157,
    0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 168,
    0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0, 178, 0, 0,
    0, 179, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189,
    0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 0, 199, 0, 200,
    0, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0,
    0, 211, 0, 212, 0, 0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221,
    0, 222, 0, 0, 0, 223, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0,
    232, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240,
    0, 241, 0, 0, 0, 0, 242, 243, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 249, 0, 250, 0,
    0, 0, 0, 251, 0, 252, 0, 253, 0, 0, 254, 0, 0, 255, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 261, 0,
    262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 265, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 270, 0, 0, 271, 0,
    272, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 276, 0, 0, 0, 277, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 281, 0, 282, 0,
    0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 292, 0, 0, 0,
    293, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 297, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 302, 0, 0,
    303, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 313, 0,
    314, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 324, 0,
    0, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 329, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 333, 0, 0, 334,
    0, 0, 335, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 340, 0, 0, 0, 341, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344,
    345, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 350, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0,
    0, 355, 0, 0, 356, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0,
    0, 365, 366, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 370, 0, 0, 371, 0, 0, 372, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0,
    376, 0, 377, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 380, 0, 381, 0, 382, 0, 0, 383, 0, 0, 384, 0, 385, 0, 0, 386, 0, 0, 387,
    0, 0, 388, 0, 389, 0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396,
    0, 397, 0, 398, 0, 0, 399, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 406, 0, 407, 0, 408, 0, 0,
    409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 0, 415, 0, 416, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419,
    0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0,
    0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0,
    0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0,
    0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0,
    445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449,
    0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0,
    0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0,
    0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 504, 0, 505, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 509, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0,
    0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0,
    0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531,
    0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539,
    0, 540, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0,
    0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0,
    0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0,
    0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 571, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 588, 0, 589, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594,
    0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0,
    605, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612,
    0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0,
    0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0,
    621, 0, 622, 0, 0, 0, 623, 624, 0, 0, 0, 0, 625, 0, 626, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0,
    630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 640, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 0,
    643, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0,
    0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0,
    0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 663,
    0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 665, 666, 0, 0, 0, 0, 0, 0, 0, 0, 667, 668, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 671, 0, 672, 0, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 676, 0,
    0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 681, 0, 682, 0, 683, 0, 684, 685, 0, 0, 0, 686, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0,
    0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 699, 0,
    700, 0, 701, 0, 702, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0, 0,
    0, 708, 0, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0,
    0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0,
    0, 0, 0, 0, 721, 0, 0, 722, 0, 0, 723, 0, 0, 724, 0, 725, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0,
    0, 729, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 732, 0, 0, 0, 0, 0, 0, 733, 734, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0,
    736, 0, 0, 737, 0, 0, 738, 0, 0, 739, 0, 740, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 744, 0, 0, 745, 0,
    0, 746, 0, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 0,
    0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 0, 755, 756, 0, 0, 757, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 763, 0, 0, 0,
    0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0,
    769, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773,
};
void recomp_unit_0157_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A78000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0157[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A78000;
    case 2u: goto L_08A78040;
    case 3u: goto L_08A78070;
    case 4u: goto L_08A7807C;
    case 5u: goto L_08A78084;
    case 6u: goto L_08A7808C;
    case 7u: goto L_08A7809C;
    case 8u: goto L_08A780B0;
    case 9u: goto L_08A780BC;
    case 10u: goto L_08A780D0;
    case 11u: goto L_08A780D8;
    case 12u: goto L_08A780E0;
    case 13u: goto L_08A780F4;
    case 14u: goto L_08A780FC;
    case 15u: goto L_08A78104;
    case 16u: goto L_08A7810C;
    case 17u: goto L_08A7814C;
    case 18u: goto L_08A78188;
    case 19u: goto L_08A781C4;
    case 20u: goto L_08A78204;
    case 21u: goto L_08A7820C;
    case 22u: goto L_08A78220;
    case 23u: goto L_08A78230;
    case 24u: goto L_08A78268;
    case 25u: goto L_08A78270;
    case 26u: goto L_08A78278;
    case 27u: goto L_08A7827C;
    case 28u: goto L_08A78290;
    case 29u: goto L_08A782A8;
    case 30u: goto L_08A782D8;
    case 31u: goto L_08A782E0;
    case 32u: goto L_08A782EC;
    case 33u: goto L_08A782F0;
    case 34u: goto L_08A782FC;
    case 35u: goto L_08A78318;
    case 36u: goto L_08A78344;
    case 37u: goto L_08A78354;
    case 38u: goto L_08A7835C;
    case 39u: goto L_08A78364;
    case 40u: goto L_08A7836C;
    case 41u: goto L_08A7837C;
    case 42u: goto L_08A78394;
    case 43u: goto L_08A783A4;
    case 44u: goto L_08A783AC;
    case 45u: goto L_08A783B4;
    case 46u: goto L_08A783BC;
    case 47u: goto L_08A783C4;
    case 48u: goto L_08A783CC;
    case 49u: goto L_08A783DC;
    case 50u: goto L_08A783E4;
    case 51u: goto L_08A783F4;
    case 52u: goto L_08A7840C;
    case 53u: goto L_08A7841C;
    case 54u: goto L_08A78424;
    case 55u: goto L_08A78434;
    case 56u: goto L_08A7843C;
    case 57u: goto L_08A7844C;
    case 58u: goto L_08A78454;
    case 59u: goto L_08A78464;
    case 60u: goto L_08A7846C;
    case 61u: goto L_08A7847C;
    case 62u: goto L_08A78484;
    case 63u: goto L_08A78494;
    case 64u: goto L_08A7849C;
    case 65u: goto L_08A784AC;
    case 66u: goto L_08A784B4;
    case 67u: goto L_08A784C4;
    case 68u: goto L_08A784CC;
    case 69u: goto L_08A784DC;
    case 70u: goto L_08A784E4;
    case 71u: goto L_08A784F4;
    case 72u: goto L_08A784FC;
    case 73u: goto L_08A7850C;
    case 74u: goto L_08A78514;
    case 75u: goto L_08A78524;
    case 76u: goto L_08A7852C;
    case 77u: goto L_08A7853C;
    case 78u: goto L_08A78544;
    case 79u: goto L_08A78554;
    case 80u: goto L_08A7855C;
    case 81u: goto L_08A7856C;
    case 82u: goto L_08A78574;
    case 83u: goto L_08A78584;
    case 84u: goto L_08A7858C;
    case 85u: goto L_08A7859C;
    case 86u: goto L_08A785A4;
    case 87u: goto L_08A785B4;
    case 88u: goto L_08A785BC;
    case 89u: goto L_08A785CC;
    case 90u: goto L_08A785D4;
    case 91u: goto L_08A785E4;
    case 92u: goto L_08A785EC;
    case 93u: goto L_08A785FC;
    case 94u: goto L_08A78604;
    case 95u: goto L_08A78614;
    case 96u: goto L_08A7861C;
    case 97u: goto L_08A7862C;
    case 98u: goto L_08A78634;
    case 99u: goto L_08A78644;
    case 100u: goto L_08A7864C;
    case 101u: goto L_08A7865C;
    case 102u: goto L_08A78664;
    case 103u: goto L_08A78674;
    case 104u: goto L_08A7867C;
    case 105u: goto L_08A7868C;
    case 106u: goto L_08A78694;
    case 107u: goto L_08A786A4;
    case 108u: goto L_08A786AC;
    case 109u: goto L_08A786BC;
    case 110u: goto L_08A786C4;
    case 111u: goto L_08A786D4;
    case 112u: goto L_08A786DC;
    case 113u: goto L_08A786EC;
    case 114u: goto L_08A786F4;
    case 115u: goto L_08A78704;
    case 116u: goto L_08A7870C;
    case 117u: goto L_08A7871C;
    case 118u: goto L_08A78724;
    case 119u: goto L_08A78734;
    case 120u: goto L_08A7873C;
    case 121u: goto L_08A7874C;
    case 122u: goto L_08A78754;
    case 123u: goto L_08A78764;
    case 124u: goto L_08A7876C;
    case 125u: goto L_08A7877C;
    case 126u: goto L_08A78784;
    case 127u: goto L_08A78794;
    case 128u: goto L_08A7879C;
    case 129u: goto L_08A787AC;
    case 130u: goto L_08A787B4;
    case 131u: goto L_08A787C4;
    case 132u: goto L_08A787CC;
    case 133u: goto L_08A787DC;
    case 134u: goto L_08A787E4;
    case 135u: goto L_08A787F4;
    case 136u: goto L_08A787FC;
    case 137u: goto L_08A7880C;
    case 138u: goto L_08A78814;
    case 139u: goto L_08A78824;
    case 140u: goto L_08A7882C;
    case 141u: goto L_08A7883C;
    case 142u: goto L_08A78844;
    case 143u: goto L_08A78854;
    case 144u: goto L_08A7885C;
    case 145u: goto L_08A7886C;
    case 146u: goto L_08A78874;
    case 147u: goto L_08A78884;
    case 148u: goto L_08A7888C;
    case 149u: goto L_08A7889C;
    case 150u: goto L_08A788A4;
    case 151u: goto L_08A788B4;
    case 152u: goto L_08A788BC;
    case 153u: goto L_08A788CC;
    case 154u: goto L_08A788D4;
    case 155u: goto L_08A788E4;
    case 156u: goto L_08A788EC;
    case 157u: goto L_08A788FC;
    case 158u: goto L_08A78904;
    case 159u: goto L_08A78914;
    case 160u: goto L_08A7891C;
    case 161u: goto L_08A7892C;
    case 162u: goto L_08A78934;
    case 163u: goto L_08A78944;
    case 164u: goto L_08A7894C;
    case 165u: goto L_08A7895C;
    case 166u: goto L_08A78964;
    case 167u: goto L_08A78974;
    case 168u: goto L_08A7897C;
    case 169u: goto L_08A7898C;
    case 170u: goto L_08A78994;
    case 171u: goto L_08A789A4;
    case 172u: goto L_08A789AC;
    case 173u: goto L_08A789BC;
    case 174u: goto L_08A789C4;
    case 175u: goto L_08A789D4;
    case 176u: goto L_08A789DC;
    case 177u: goto L_08A789EC;
    case 178u: goto L_08A789F4;
    case 179u: goto L_08A78A04;
    case 180u: goto L_08A78A0C;
    case 181u: goto L_08A78A1C;
    case 182u: goto L_08A78A24;
    case 183u: goto L_08A78A34;
    case 184u: goto L_08A78A3C;
    case 185u: goto L_08A78A4C;
    case 186u: goto L_08A78A54;
    case 187u: goto L_08A78A64;
    case 188u: goto L_08A78A6C;
    case 189u: goto L_08A78A7C;
    case 190u: goto L_08A78A84;
    case 191u: goto L_08A78A94;
    case 192u: goto L_08A78A9C;
    case 193u: goto L_08A78AAC;
    case 194u: goto L_08A78AB4;
    case 195u: goto L_08A78AC4;
    case 196u: goto L_08A78ACC;
    case 197u: goto L_08A78ADC;
    case 198u: goto L_08A78AE4;
    case 199u: goto L_08A78AF4;
    case 200u: goto L_08A78AFC;
    case 201u: goto L_08A78B0C;
    case 202u: goto L_08A78B14;
    case 203u: goto L_08A78B24;
    case 204u: goto L_08A78B2C;
    case 205u: goto L_08A78B3C;
    case 206u: goto L_08A78B44;
    case 207u: goto L_08A78B54;
    case 208u: goto L_08A78B5C;
    case 209u: goto L_08A78B6C;
    case 210u: goto L_08A78B74;
    case 211u: goto L_08A78B84;
    case 212u: goto L_08A78B8C;
    case 213u: goto L_08A78B9C;
    case 214u: goto L_08A78BA4;
    case 215u: goto L_08A78BB4;
    case 216u: goto L_08A78BBC;
    case 217u: goto L_08A78BCC;
    case 218u: goto L_08A78BD4;
    case 219u: goto L_08A78BE4;
    case 220u: goto L_08A78BEC;
    case 221u: goto L_08A78BFC;
    case 222u: goto L_08A78C04;
    case 223u: goto L_08A78C14;
    case 224u: goto L_08A78C1C;
    case 225u: goto L_08A78C2C;
    case 226u: goto L_08A78C34;
    case 227u: goto L_08A78C44;
    case 228u: goto L_08A78C4C;
    case 229u: goto L_08A78C5C;
    case 230u: goto L_08A78C64;
    case 231u: goto L_08A78C78;
    case 232u: goto L_08A78C80;
    case 233u: goto L_08A78C90;
    case 234u: goto L_08A78C98;
    case 235u: goto L_08A78CB0;
    case 236u: goto L_08A78CC4;
    case 237u: goto L_08A78CD4;
    case 238u: goto L_08A78CEC;
    case 239u: goto L_08A78CF4;
    case 240u: goto L_08A78CFC;
    case 241u: goto L_08A78D04;
    case 242u: goto L_08A78D18;
    case 243u: goto L_08A78D1C;
    case 244u: goto L_08A78D24;
    case 245u: goto L_08A78D38;
    case 246u: goto L_08A78D40;
    case 247u: goto L_08A78D54;
    case 248u: goto L_08A78D5C;
    case 249u: goto L_08A78D70;
    case 250u: goto L_08A78D78;
    case 251u: goto L_08A78D8C;
    case 252u: goto L_08A78D94;
    case 253u: goto L_08A78D9C;
    case 254u: goto L_08A78DA8;
    case 255u: goto L_08A78DB4;
    case 256u: goto L_08A78DBC;
    case 257u: goto L_08A78DC8;
    case 258u: goto L_08A78DD4;
    case 259u: goto L_08A78DE0;
    case 260u: goto L_08A78DE8;
    case 261u: goto L_08A78DF8;
    case 262u: goto L_08A78E00;
    case 263u: goto L_08A78E10;
    case 264u: goto L_08A78E28;
    case 265u: goto L_08A78E2C;
    case 266u: goto L_08A78E34;
    case 267u: goto L_08A78E50;
    case 268u: goto L_08A78E58;
    case 269u: goto L_08A78E60;
    case 270u: goto L_08A78E6C;
    case 271u: goto L_08A78E78;
    case 272u: goto L_08A78E80;
    case 273u: goto L_08A78E8C;
    case 274u: goto L_08A78E98;
    case 275u: goto L_08A78EA4;
    case 276u: goto L_08A78EAC;
    case 277u: goto L_08A78EBC;
    case 278u: goto L_08A78EC4;
    case 279u: goto L_08A78ED4;
    case 280u: goto L_08A78EEC;
    case 281u: goto L_08A78EF0;
    case 282u: goto L_08A78EF8;
    case 283u: goto L_08A78F14;
    case 284u: goto L_08A78F1C;
    case 285u: goto L_08A78F24;
    case 286u: goto L_08A78F30;
    case 287u: goto L_08A78F3C;
    case 288u: goto L_08A78F44;
    case 289u: goto L_08A78F50;
    case 290u: goto L_08A78F5C;
    case 291u: goto L_08A78F68;
    case 292u: goto L_08A78F70;
    case 293u: goto L_08A78F80;
    case 294u: goto L_08A78F88;
    case 295u: goto L_08A78F98;
    case 296u: goto L_08A78FB0;
    case 297u: goto L_08A78FB4;
    case 298u: goto L_08A78FBC;
    case 299u: goto L_08A78FD8;
    case 300u: goto L_08A78FE0;
    case 301u: goto L_08A78FE8;
    case 302u: goto L_08A78FF4;
    case 303u: goto L_08A79000;
    case 304u: goto L_08A79008;
    case 305u: goto L_08A79014;
    case 306u: goto L_08A79020;
    case 307u: goto L_08A7902C;
    case 308u: goto L_08A79034;
    case 309u: goto L_08A79044;
    case 310u: goto L_08A7904C;
    case 311u: goto L_08A7905C;
    case 312u: goto L_08A79074;
    case 313u: goto L_08A79078;
    case 314u: goto L_08A79080;
    case 315u: goto L_08A7909C;
    case 316u: goto L_08A790A4;
    case 317u: goto L_08A790AC;
    case 318u: goto L_08A790B8;
    case 319u: goto L_08A790C4;
    case 320u: goto L_08A790CC;
    case 321u: goto L_08A790D8;
    case 322u: goto L_08A790E4;
    case 323u: goto L_08A790F0;
    case 324u: goto L_08A790F8;
    case 325u: goto L_08A79108;
    case 326u: goto L_08A79110;
    case 327u: goto L_08A79120;
    case 328u: goto L_08A79138;
    case 329u: goto L_08A7913C;
    case 330u: goto L_08A79144;
    case 331u: goto L_08A79160;
    case 332u: goto L_08A79168;
    case 333u: goto L_08A79170;
    case 334u: goto L_08A7917C;
    case 335u: goto L_08A79188;
    case 336u: goto L_08A79190;
    case 337u: goto L_08A7919C;
    case 338u: goto L_08A791A8;
    case 339u: goto L_08A791B4;
    case 340u: goto L_08A791BC;
    case 341u: goto L_08A791CC;
    case 342u: goto L_08A791D4;
    case 343u: goto L_08A791E4;
    case 344u: goto L_08A791FC;
    case 345u: goto L_08A79200;
    case 346u: goto L_08A79208;
    case 347u: goto L_08A79218;
    case 348u: goto L_08A79228;
    case 349u: goto L_08A79240;
    case 350u: goto L_08A79244;
    case 351u: goto L_08A7924C;
    case 352u: goto L_08A79268;
    case 353u: goto L_08A79270;
    case 354u: goto L_08A79278;
    case 355u: goto L_08A79284;
    case 356u: goto L_08A79290;
    case 357u: goto L_08A79298;
    case 358u: goto L_08A792A4;
    case 359u: goto L_08A792B0;
    case 360u: goto L_08A792BC;
    case 361u: goto L_08A792C4;
    case 362u: goto L_08A792D4;
    case 363u: goto L_08A792DC;
    case 364u: goto L_08A792EC;
    case 365u: goto L_08A79304;
    case 366u: goto L_08A79308;
    case 367u: goto L_08A79310;
    case 368u: goto L_08A7932C;
    case 369u: goto L_08A79334;
    case 370u: goto L_08A7933C;
    case 371u: goto L_08A79348;
    case 372u: goto L_08A79354;
    case 373u: goto L_08A7935C;
    case 374u: goto L_08A79368;
    case 375u: goto L_08A79374;
    case 376u: goto L_08A79380;
    case 377u: goto L_08A79388;
    case 378u: goto L_08A79398;
    case 379u: goto L_08A793A0;
    case 380u: goto L_08A793B4;
    case 381u: goto L_08A793BC;
    case 382u: goto L_08A793C4;
    case 383u: goto L_08A793D0;
    case 384u: goto L_08A793DC;
    case 385u: goto L_08A793E4;
    case 386u: goto L_08A793F0;
    case 387u: goto L_08A793FC;
    case 388u: goto L_08A79408;
    case 389u: goto L_08A79410;
    case 390u: goto L_08A79420;
    case 391u: goto L_08A79428;
    case 392u: goto L_08A79438;
    case 393u: goto L_08A79450;
    case 394u: goto L_08A79454;
    case 395u: goto L_08A7945C;
    case 396u: goto L_08A7947C;
    case 397u: goto L_08A79484;
    case 398u: goto L_08A7948C;
    case 399u: goto L_08A79498;
    case 400u: goto L_08A794A4;
    case 401u: goto L_08A794AC;
    case 402u: goto L_08A794B8;
    case 403u: goto L_08A794C4;
    case 404u: goto L_08A794D0;
    case 405u: goto L_08A794D8;
    case 406u: goto L_08A794E4;
    case 407u: goto L_08A794EC;
    case 408u: goto L_08A794F4;
    case 409u: goto L_08A79500;
    case 410u: goto L_08A79598;
    case 411u: goto L_08A795A0;
    case 412u: goto L_08A795A8;
    case 413u: goto L_08A795B0;
    case 414u: goto L_08A795B8;
    case 415u: goto L_08A795C4;
    case 416u: goto L_08A795CC;
    case 417u: goto L_08A795D4;
    case 418u: goto L_08A795E4;
    case 419u: goto L_08A795FC;
    case 420u: goto L_08A79618;
    case 421u: goto L_08A79634;
    case 422u: goto L_08A79650;
    case 423u: goto L_08A7966C;
    case 424u: goto L_08A79688;
    case 425u: goto L_08A796A4;
    case 426u: goto L_08A796BC;
    case 427u: goto L_08A796C8;
    case 428u: goto L_08A796DC;
    case 429u: goto L_08A796E8;
    case 430u: goto L_08A796F0;
    case 431u: goto L_08A79704;
    case 432u: goto L_08A79718;
    case 433u: goto L_08A79730;
    case 434u: goto L_08A79740;
    case 435u: goto L_08A79760;
    case 436u: goto L_08A79774;
    case 437u: goto L_08A797BC;
    case 438u: goto L_08A7986C;
    case 439u: goto L_08A79884;
    case 440u: goto L_08A79890;
    case 441u: goto L_08A7989C;
    case 442u: goto L_08A798B4;
    case 443u: goto L_08A798DC;
    case 444u: goto L_08A798F8;
    case 445u: goto L_08A79900;
    case 446u: goto L_08A79918;
    case 447u: goto L_08A79950;
    case 448u: goto L_08A79958;
    case 449u: goto L_08A7997C;
    case 450u: goto L_08A799A0;
    case 451u: goto L_08A799B8;
    case 452u: goto L_08A799DC;
    case 453u: goto L_08A799F8;
    case 454u: goto L_08A79A0C;
    case 455u: goto L_08A79A14;
    case 456u: goto L_08A79A2C;
    case 457u: goto L_08A79A3C;
    case 458u: goto L_08A79A6C;
    case 459u: goto L_08A79A78;
    case 460u: goto L_08A79AA0;
    case 461u: goto L_08A79AB0;
    case 462u: goto L_08A79B0C;
    case 463u: goto L_08A79B20;
    case 464u: goto L_08A79B68;
    case 465u: goto L_08A79B90;
    case 466u: goto L_08A79BA8;
    case 467u: goto L_08A79BB8;
    case 468u: goto L_08A79BC4;
    case 469u: goto L_08A79BF8;
    case 470u: goto L_08A79C1C;
    case 471u: goto L_08A79C24;
    case 472u: goto L_08A79C70;
    case 473u: goto L_08A79CBC;
    case 474u: goto L_08A79D08;
    case 475u: goto L_08A79D54;
    case 476u: goto L_08A79DA0;
    case 477u: goto L_08A79DEC;
    case 478u: goto L_08A79E38;
    case 479u: goto L_08A79E84;
    case 480u: goto L_08A79ED0;
    case 481u: goto L_08A79F1C;
    case 482u: goto L_08A79F68;
    case 483u: goto L_08A79FB4;
    case 484u: goto L_08A7A000;
    case 485u: goto L_08A7A04C;
    case 486u: goto L_08A7A0A4;
    case 487u: goto L_08A7A0F0;
    case 488u: goto L_08A7A13C;
    case 489u: goto L_08A7A188;
    case 490u: goto L_08A7A1D8;
    case 491u: goto L_08A7A224;
    case 492u: goto L_08A7A250;
    case 493u: goto L_08A7A290;
    case 494u: goto L_08A7A2BC;
    case 495u: goto L_08A7A2FC;
    case 496u: goto L_08A7A338;
    case 497u: goto L_08A7A34C;
    case 498u: goto L_08A7A38C;
    case 499u: goto L_08A7A3B8;
    case 500u: goto L_08A7A3CC;
    case 501u: goto L_08A7A40C;
    case 502u: goto L_08A7A438;
    case 503u: goto L_08A7A44C;
    case 504u: goto L_08A7A48C;
    case 505u: goto L_08A7A494;
    case 506u: goto L_08A7A4A0;
    case 507u: goto L_08A7A4B4;
    case 508u: goto L_08A7A4CC;
    case 509u: goto L_08A7A4D4;
    case 510u: goto L_08A7A4DC;
    case 511u: goto L_08A7A4F0;
    case 512u: goto L_08A7A504;
    case 513u: goto L_08A7A518;
    case 514u: goto L_08A7A528;
    case 515u: goto L_08A7A568;
    case 516u: goto L_08A7A5C4;
    case 517u: goto L_08A7A5D8;
    case 518u: goto L_08A7A610;
    case 519u: goto L_08A7A640;
    case 520u: goto L_08A7A668;
    case 521u: goto L_08A7A698;
    case 522u: goto L_08A7A6B8;
    case 523u: goto L_08A7A6E8;
    case 524u: goto L_08A7A708;
    case 525u: goto L_08A7A738;
    case 526u: goto L_08A7A760;
    case 527u: goto L_08A7A798;
    case 528u: goto L_08A7A7BC;
    case 529u: goto L_08A7A7CC;
    case 530u: goto L_08A7A7E8;
    case 531u: goto L_08A7A7FC;
    case 532u: goto L_08A7A804;
    case 533u: goto L_08A7A820;
    case 534u: goto L_08A7A834;
    case 535u: goto L_08A7A83C;
    case 536u: goto L_08A7A870;
    case 537u: goto L_08A7A89C;
    case 538u: goto L_08A7A8D0;
    case 539u: goto L_08A7A8FC;
    case 540u: goto L_08A7A904;
    case 541u: goto L_08A7A910;
    case 542u: goto L_08A7A924;
    case 543u: goto L_08A7A93C;
    case 544u: goto L_08A7A94C;
    case 545u: goto L_08A7A978;
    case 546u: goto L_08A7A990;
    case 547u: goto L_08A7A9BC;
    case 548u: goto L_08A7A9D4;
    case 549u: goto L_08A7AA0C;
    case 550u: goto L_08A7AA44;
    case 551u: goto L_08A7AA7C;
    case 552u: goto L_08A7AAB4;
    case 553u: goto L_08A7AACC;
    case 554u: goto L_08A7AAE4;
    case 555u: goto L_08A7AB0C;
    case 556u: goto L_08A7AB14;
    case 557u: goto L_08A7AB2C;
    case 558u: goto L_08A7AB44;
    case 559u: goto L_08A7AB6C;
    case 560u: goto L_08A7AB74;
    case 561u: goto L_08A7AB8C;
    case 562u: goto L_08A7ABA4;
    case 563u: goto L_08A7ABCC;
    case 564u: goto L_08A7ABD4;
    case 565u: goto L_08A7ABEC;
    case 566u: goto L_08A7AC04;
    case 567u: goto L_08A7AC2C;
    case 568u: goto L_08A7AC34;
    case 569u: goto L_08A7AC4C;
    case 570u: goto L_08A7AC64;
    case 571u: goto L_08A7AC8C;
    case 572u: goto L_08A7AC94;
    case 573u: goto L_08A7ACAC;
    case 574u: goto L_08A7ACC4;
    case 575u: goto L_08A7ACEC;
    case 576u: goto L_08A7ACF4;
    case 577u: goto L_08A7AD28;
    case 578u: goto L_08A7AD30;
    case 579u: goto L_08A7AD48;
    case 580u: goto L_08A7AD74;
    case 581u: goto L_08A7AD9C;
    case 582u: goto L_08A7ADCC;
    case 583u: goto L_08A7ADFC;
    case 584u: goto L_08A7AE2C;
    case 585u: goto L_08A7AE58;
    case 586u: goto L_08A7AE88;
    case 587u: goto L_08A7AEB8;
    case 588u: goto L_08A7AF0C;
    case 589u: goto L_08A7AF14;
    case 590u: goto L_08A7AF20;
    case 591u: goto L_08A7AF34;
    case 592u: goto L_08A7AF4C;
    case 593u: goto L_08A7AF5C;
    case 594u: goto L_08A7AF7C;
    case 595u: goto L_08A7AF98;
    case 596u: goto L_08A7B00C;
    case 597u: goto L_08A7B01C;
    case 598u: goto L_08A7B040;
    case 599u: goto L_08A7B058;
    case 600u: goto L_08A7B084;
    case 601u: goto L_08A7B09C;
    case 602u: goto L_08A7B0D0;
    case 603u: goto L_08A7B0E4;
    case 604u: goto L_08A7B0F0;
    case 605u: goto L_08A7B100;
    case 606u: goto L_08A7B108;
    case 607u: goto L_08A7B148;
    case 608u: goto L_08A7B15C;
    case 609u: goto L_08A7B164;
    case 610u: goto L_08A7B16C;
    case 611u: goto L_08A7B174;
    case 612u: goto L_08A7B17C;
    case 613u: goto L_08A7B194;
    case 614u: goto L_08A7B1F8;
    case 615u: goto L_08A7B21C;
    case 616u: goto L_08A7B230;
    case 617u: goto L_08A7B23C;
    case 618u: goto L_08A7B250;
    case 619u: goto L_08A7B25C;
    case 620u: goto L_08A7B274;
    case 621u: goto L_08A7B280;
    case 622u: goto L_08A7B288;
    case 623u: goto L_08A7B298;
    case 624u: goto L_08A7B29C;
    case 625u: goto L_08A7B2B0;
    case 626u: goto L_08A7B2B8;
    case 627u: goto L_08A7B2BC;
    case 628u: goto L_08A7B2CC;
    case 629u: goto L_08A7B2E8;
    case 630u: goto L_08A7B300;
    case 631u: goto L_08A7B330;
    case 632u: goto L_08A7B33C;
    case 633u: goto L_08A7B39C;
    case 634u: goto L_08A7B3AC;
    case 635u: goto L_08A7B3E4;
    case 636u: goto L_08A7B440;
    case 637u: goto L_08A7B494;
    case 638u: goto L_08A7B4B8;
    case 639u: goto L_08A7B4C4;
    case 640u: goto L_08A7B4D0;
    case 641u: goto L_08A7B4D8;
    case 642u: goto L_08A7B4F0;
    case 643u: goto L_08A7B500;
    case 644u: goto L_08A7B510;
    case 645u: goto L_08A7B524;
    case 646u: goto L_08A7B534;
    case 647u: goto L_08A7B544;
    case 648u: goto L_08A7B554;
    case 649u: goto L_08A7B564;
    case 650u: goto L_08A7B578;
    case 651u: goto L_08A7B588;
    case 652u: goto L_08A7B598;
    case 653u: goto L_08A7B5A8;
    case 654u: goto L_08A7B5B8;
    case 655u: goto L_08A7B5C8;
    case 656u: goto L_08A7B5E4;
    case 657u: goto L_08A7B5F8;
    case 658u: goto L_08A7B604;
    case 659u: goto L_08A7B618;
    case 660u: goto L_08A7B648;
    case 661u: goto L_08A7B650;
    case 662u: goto L_08A7B658;
    case 663u: goto L_08A7B67C;
    case 664u: goto L_08A7B69C;
    case 665u: goto L_08A7B6C0;
    case 666u: goto L_08A7B6C4;
    case 667u: goto L_08A7B6E8;
    case 668u: goto L_08A7B6EC;
    case 669u: goto L_08A7B714;
    case 670u: goto L_08A7B71C;
    case 671u: goto L_08A7B72C;
    case 672u: goto L_08A7B734;
    case 673u: goto L_08A7B744;
    case 674u: goto L_08A7B758;
    case 675u: goto L_08A7B768;
    case 676u: goto L_08A7B778;
    case 677u: goto L_08A7B788;
    case 678u: goto L_08A7B7AC;
    case 679u: goto L_08A7B7BC;
    case 680u: goto L_08A7B7CC;
    case 681u: goto L_08A7B80C;
    case 682u: goto L_08A7B814;
    case 683u: goto L_08A7B81C;
    case 684u: goto L_08A7B824;
    case 685u: goto L_08A7B828;
    case 686u: goto L_08A7B838;
    case 687u: goto L_08A7B83C;
    case 688u: goto L_08A7B864;
    case 689u: goto L_08A7B884;
    case 690u: goto L_08A7B8C8;
    case 691u: goto L_08A7B928;
    case 692u: goto L_08A7B95C;
    case 693u: goto L_08A7B998;
    case 694u: goto L_08A7B9A4;
    case 695u: goto L_08A7B9BC;
    case 696u: goto L_08A7B9C8;
    case 697u: goto L_08A7B9DC;
    case 698u: goto L_08A7B9EC;
    case 699u: goto L_08A7B9F8;
    case 700u: goto L_08A7BA00;
    case 701u: goto L_08A7BA08;
    case 702u: goto L_08A7BA10;
    case 703u: goto L_08A7BA24;
    case 704u: goto L_08A7BA30;
    case 705u: goto L_08A7BA44;
    case 706u: goto L_08A7BA58;
    case 707u: goto L_08A7BA6C;
    case 708u: goto L_08A7BA84;
    case 709u: goto L_08A7BA98;
    case 710u: goto L_08A7BAA8;
    case 711u: goto L_08A7BABC;
    case 712u: goto L_08A7BACC;
    case 713u: goto L_08A7BAE4;
    case 714u: goto L_08A7BAF8;
    case 715u: goto L_08A7BB08;
    case 716u: goto L_08A7BB20;
    case 717u: goto L_08A7BB34;
    case 718u: goto L_08A7BB48;
    case 719u: goto L_08A7BB5C;
    case 720u: goto L_08A7BB70;
    case 721u: goto L_08A7BB90;
    case 722u: goto L_08A7BB9C;
    case 723u: goto L_08A7BBA8;
    case 724u: goto L_08A7BBB4;
    case 725u: goto L_08A7BBBC;
    case 726u: goto L_08A7BBC4;
    case 727u: goto L_08A7BBDC;
    case 728u: goto L_08A7BBE8;
    case 729u: goto L_08A7BC04;
    case 730u: goto L_08A7BC0C;
    case 731u: goto L_08A7BC24;
    case 732u: goto L_08A7BC30;
    case 733u: goto L_08A7BC4C;
    case 734u: goto L_08A7BC50;
    case 735u: goto L_08A7BC74;
    case 736u: goto L_08A7BC80;
    case 737u: goto L_08A7BC8C;
    case 738u: goto L_08A7BC98;
    case 739u: goto L_08A7BCA4;
    case 740u: goto L_08A7BCAC;
    case 741u: goto L_08A7BCBC;
    case 742u: goto L_08A7BCD0;
    case 743u: goto L_08A7BCE4;
    case 744u: goto L_08A7BCEC;
    case 745u: goto L_08A7BCF8;
    case 746u: goto L_08A7BD04;
    case 747u: goto L_08A7BD14;
    case 748u: goto L_08A7BD20;
    case 749u: goto L_08A7BD34;
    case 750u: goto L_08A7BD44;
    case 751u: goto L_08A7BD58;
    case 752u: goto L_08A7BD70;
    case 753u: goto L_08A7BD90;
    case 754u: goto L_08A7BDAC;
    case 755u: goto L_08A7BDB8;
    case 756u: goto L_08A7BDBC;
    case 757u: goto L_08A7BDC8;
    case 758u: goto L_08A7BDD4;
    case 759u: goto L_08A7BDFC;
    case 760u: goto L_08A7BE2C;
    case 761u: goto L_08A7BE38;
    case 762u: goto L_08A7BE64;
    case 763u: goto L_08A7BE70;
    case 764u: goto L_08A7BE84;
    case 765u: goto L_08A7BE8C;
    case 766u: goto L_08A7BEC0;
    case 767u: goto L_08A7BEC8;
    case 768u: goto L_08A7BEF0;
    case 769u: goto L_08A7BF00;
    case 770u: goto L_08A7BF18;
    case 771u: goto L_08A7BF2C;
    case 772u: goto L_08A7BF64;
    case 773u: goto L_08A7BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A78000:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78040:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A78084;
      }
      goto L_08A78070;
    }
L_08A78070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7808C;
      }
      goto L_08A7807C;
    }
L_08A7807C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A780E0;
      }
      goto L_08A78084;
    }
L_08A78084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A782FC;
      }
      goto L_08A7808C;
    }
L_08A7808C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2004)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A780D8;
      }
      goto L_08A7809C;
    }
L_08A7809C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17236), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A780B0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A78318;
L_08A780B0:
    ctx.gpr[4] = (0u | 5662u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A780D0;
      }
      goto L_08A780BC;
    }
L_08A780BC:
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7820C;
      }
      goto L_08A780D0;
    }
L_08A780D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A782FC;
      }
      goto L_08A780D8;
    }
L_08A780D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A782FC;
      }
      goto L_08A780E0;
    }
L_08A780E0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17236), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 201u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 200u);
      if (branch_taken) {
          goto L_08A78188;
      }
      goto L_08A780F4;
    }
L_08A780F4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 115u);
      if (branch_taken) {
          goto L_08A7814C;
      }
      goto L_08A780FC;
    }
L_08A780FC:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 114u);
      if (branch_taken) {
          goto L_08A781C4;
      }
      goto L_08A78104;
    }
L_08A78104:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A78204;
      }
      goto L_08A7810C;
    }
L_08A7810C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (18460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17352u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3098));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7820C;
      }
      goto L_08A7814C;
    }
L_08A7814C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 51u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2615));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7820C;
      }
      goto L_08A78188;
    }
L_08A78188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1480));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7820C;
      }
      goto L_08A781C4;
    }
L_08A781C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (18460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17352u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3069));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7820C;
      }
      goto L_08A78204;
    }
L_08A78204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A782FC;
      }
      goto L_08A7820C;
    }
L_08A7820C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A782FC;
      }
      goto L_08A78220;
    }
L_08A78220:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78230u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A78230u) goto L_08A78230;
    return;
L_08A78230:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A78268u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x08A78268u) goto L_08A78268;
    return;
L_08A78268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78278;
      }
      goto L_08A78270;
    }
L_08A78270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 127u);
      if (branch_taken) {
          goto L_08A7827C;
      }
      goto L_08A78278;
    }
L_08A78278:
    ctx.gpr[4] = (0u | 31u);
    goto L_08A7827C;
L_08A7827C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A78290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78290u) goto L_08A78290;
    return;
L_08A78290:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A782FC;
      }
      goto L_08A782A8;
    }
L_08A782A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 104 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 107 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A782EC;
      }
      goto L_08A782D8;
    }
L_08A782D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A782EC;
      }
      goto L_08A782E0;
    }
L_08A782E0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A782F0;
      }
      goto L_08A782EC;
    }
L_08A782EC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    goto L_08A782F0;
L_08A782F0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(17248));
    ctx.gpr[31] = (0x08A782FCu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 247u, 0x08A5DA00u>(ctx, &aot_mem) && ctx.pc == 0x08A782FCu) goto L_08A782FC;
    return;
L_08A782FC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 42u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A7836C;
      }
      goto L_08A78344;
    }
L_08A78344:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 104 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 107 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A78364;
      }
      goto L_08A78354;
    }
L_08A78354:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78364;
      }
      goto L_08A7835C;
    }
L_08A7835C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7836C;
      }
      goto L_08A78364;
    }
L_08A78364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7836C;
    }
L_08A7836C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1776)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A78394;
      }
      goto L_08A7837C;
    }
L_08A7837C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1776)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A783BC;
      }
      goto L_08A78394;
    }
L_08A78394:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 104 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 107 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A783B4;
      }
      goto L_08A783A4;
    }
L_08A783A4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A783B4;
      }
      goto L_08A783AC;
    }
L_08A783AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A783BC;
      }
      goto L_08A783B4;
    }
L_08A783B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A783BC;
    }
L_08A783BC:
    ctx.gpr[31] = (0x08A783C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08A783C4u) goto L_08A783C4;
    return;
L_08A783C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A783E4;
      }
      goto L_08A783CC;
    }
L_08A783CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A783DCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A78CB0;
L_08A783DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A783E4;
    }
L_08A783E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(130) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C80;
      }
      goto L_08A783F4;
    }
L_08A783F4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25560)));
    jump_target = ctx.gpr[1];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7840C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7841Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A78CB0;
L_08A7841C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78424;
    }
L_08A78424:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78434u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 207u, 0x08A611E8u>(ctx, &aot_mem) && ctx.pc == 0x08A78434u) goto L_08A78434;
    return;
L_08A78434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7843C;
    }
L_08A7843C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7844Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 245u, 0x08A6142Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7844Cu) goto L_08A7844C;
    return;
L_08A7844C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78454;
    }
L_08A78454:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78464u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 259u, 0x08A614F8u>(ctx, &aot_mem) && ctx.pc == 0x08A78464u) goto L_08A78464;
    return;
L_08A78464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7846C;
    }
L_08A7846C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7847Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 272u, 0x08A615BCu>(ctx, &aot_mem) && ctx.pc == 0x08A7847Cu) goto L_08A7847C;
    return;
L_08A7847C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78484;
    }
L_08A78484:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78494u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 274u, 0x08A615D8u>(ctx, &aot_mem) && ctx.pc == 0x08A78494u) goto L_08A78494;
    return;
L_08A78494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7849C;
    }
L_08A7849C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A784ACu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 287u, 0x08A61698u>(ctx, &aot_mem) && ctx.pc == 0x08A784ACu) goto L_08A784AC;
    return;
L_08A784AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A784B4;
    }
L_08A784B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A784C4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 170u, 0x08A60F48u>(ctx, &aot_mem) && ctx.pc == 0x08A784C4u) goto L_08A784C4;
    return;
L_08A784C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A784CC;
    }
L_08A784CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A784DCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 422u, 0x08A6201Cu>(ctx, &aot_mem) && ctx.pc == 0x08A784DCu) goto L_08A784DC;
    return;
L_08A784DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A784E4;
    }
L_08A784E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A784F4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 289u, 0x08A616B4u>(ctx, &aot_mem) && ctx.pc == 0x08A784F4u) goto L_08A784F4;
    return;
L_08A784F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A784FC;
    }
L_08A784FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7850Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 322u, 0x08A6190Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7850Cu) goto L_08A7850C;
    return;
L_08A7850C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78514;
    }
L_08A78514:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78524u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 353u, 0x08A61B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78524u) goto L_08A78524;
    return;
L_08A78524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7852C;
    }
L_08A7852C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7853Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 388u, 0x08A61DB4u>(ctx, &aot_mem) && ctx.pc == 0x08A7853Cu) goto L_08A7853C;
    return;
L_08A7853C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78544;
    }
L_08A78544:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78554u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 422u, 0x08A6201Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78554u) goto L_08A78554;
    return;
L_08A78554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7855C;
    }
L_08A7855C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7856Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 483u, 0x08A6246Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7856Cu) goto L_08A7856C;
    return;
L_08A7856C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78574;
    }
L_08A78574:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78584u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 483u, 0x08A6246Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78584u) goto L_08A78584;
    return;
L_08A78584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7858C;
    }
L_08A7858C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7859Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 516u, 0x08A626C4u>(ctx, &aot_mem) && ctx.pc == 0x08A7859Cu) goto L_08A7859C;
    return;
L_08A7859C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A785A4;
    }
L_08A785A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A785B4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 544u, 0x08A628C0u>(ctx, &aot_mem) && ctx.pc == 0x08A785B4u) goto L_08A785B4;
    return;
L_08A785B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A785BC;
    }
L_08A785BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A785CCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 576u, 0x08A62B04u>(ctx, &aot_mem) && ctx.pc == 0x08A785CCu) goto L_08A785CC;
    return;
L_08A785CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A785D4;
    }
L_08A785D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A785E4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 457u, 0x08A62294u>(ctx, &aot_mem) && ctx.pc == 0x08A785E4u) goto L_08A785E4;
    return;
L_08A785E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A785EC;
    }
L_08A785EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A785FCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 609u, 0x08A62D58u>(ctx, &aot_mem) && ctx.pc == 0x08A785FCu) goto L_08A785FC;
    return;
L_08A785FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78604;
    }
L_08A78604:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78614u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 642u, 0x08A62FACu>(ctx, &aot_mem) && ctx.pc == 0x08A78614u) goto L_08A78614;
    return;
L_08A78614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7861C;
    }
L_08A7861C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7862Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 672u, 0x08A631CCu>(ctx, &aot_mem) && ctx.pc == 0x08A7862Cu) goto L_08A7862C;
    return;
L_08A7862C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78634;
    }
L_08A78634:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78644u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 701u, 0x08A633D8u>(ctx, &aot_mem) && ctx.pc == 0x08A78644u) goto L_08A78644;
    return;
L_08A78644:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7864C;
    }
L_08A7864C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7865Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 734u, 0x08A6362Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7865Cu) goto L_08A7865C;
    return;
L_08A7865C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78664;
    }
L_08A78664:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78674u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 764u, 0x08A6384Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78674u) goto L_08A78674;
    return;
L_08A78674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7867C;
    }
L_08A7867C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7868Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 82u, 0x08A6C594u>(ctx, &aot_mem) && ctx.pc == 0x08A7868Cu) goto L_08A7868C;
    return;
L_08A7868C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78694;
    }
L_08A78694:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A786A4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 794u, 0x08A63A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A786A4u) goto L_08A786A4;
    return;
L_08A786A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A786AC;
    }
L_08A786AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A786BCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 49u, 0x08A6C340u>(ctx, &aot_mem) && ctx.pc == 0x08A786BCu) goto L_08A786BC;
    return;
L_08A786BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A786C4;
    }
L_08A786C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A786D4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 826u, 0x08A63CB0u>(ctx, &aot_mem) && ctx.pc == 0x08A786D4u) goto L_08A786D4;
    return;
L_08A786D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A786DC;
    }
L_08A786DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A786ECu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 865u, 0x08A63F74u>(ctx, &aot_mem) && ctx.pc == 0x08A786ECu) goto L_08A786EC;
    return;
L_08A786EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A786F4;
    }
L_08A786F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78704u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 28u, 0x08A641DCu>(ctx, &aot_mem) && ctx.pc == 0x08A78704u) goto L_08A78704;
    return;
L_08A78704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7870C;
    }
L_08A7870C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7871Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 60u, 0x08A64420u>(ctx, &aot_mem) && ctx.pc == 0x08A7871Cu) goto L_08A7871C;
    return;
L_08A7871C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78724;
    }
L_08A78724:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78734u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 94u, 0x08A64688u>(ctx, &aot_mem) && ctx.pc == 0x08A78734u) goto L_08A78734;
    return;
L_08A78734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7873C;
    }
L_08A7873C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7874Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 127u, 0x08A648DCu>(ctx, &aot_mem) && ctx.pc == 0x08A7874Cu) goto L_08A7874C;
    return;
L_08A7874C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78754;
    }
L_08A78754:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78764u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 165u, 0x08A64B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78764u) goto L_08A78764;
    return;
L_08A78764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7876C;
    }
L_08A7876C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7877Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 165u, 0x08A64B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7877Cu) goto L_08A7877C;
    return;
L_08A7877C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78784;
    }
L_08A78784:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78794u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 199u, 0x08A64DF4u>(ctx, &aot_mem) && ctx.pc == 0x08A78794u) goto L_08A78794;
    return;
L_08A78794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7879C;
    }
L_08A7879C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A787ACu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 238u, 0x08A650B8u>(ctx, &aot_mem) && ctx.pc == 0x08A787ACu) goto L_08A787AC;
    return;
L_08A787AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A787B4;
    }
L_08A787B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A787C4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 273u, 0x08A6532Cu>(ctx, &aot_mem) && ctx.pc == 0x08A787C4u) goto L_08A787C4;
    return;
L_08A787C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A787CC;
    }
L_08A787CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A787DCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 303u, 0x08A6554Cu>(ctx, &aot_mem) && ctx.pc == 0x08A787DCu) goto L_08A787DC;
    return;
L_08A787DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A787E4;
    }
L_08A787E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A787F4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 333u, 0x08A6576Cu>(ctx, &aot_mem) && ctx.pc == 0x08A787F4u) goto L_08A787F4;
    return;
L_08A787F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A787FC;
    }
L_08A787FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7880Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 366u, 0x08A659C0u>(ctx, &aot_mem) && ctx.pc == 0x08A7880Cu) goto L_08A7880C;
    return;
L_08A7880C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78814;
    }
L_08A78814:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78824u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 400u, 0x08A65C28u>(ctx, &aot_mem) && ctx.pc == 0x08A78824u) goto L_08A78824;
    return;
L_08A78824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7882C;
    }
L_08A7882C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7883Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 431u, 0x08A65E58u>(ctx, &aot_mem) && ctx.pc == 0x08A7883Cu) goto L_08A7883C;
    return;
L_08A7883C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78844;
    }
L_08A78844:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78854u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 467u, 0x08A660E4u>(ctx, &aot_mem) && ctx.pc == 0x08A78854u) goto L_08A78854;
    return;
L_08A78854:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7885C;
    }
L_08A7885C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7886Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 502u, 0x08A6635Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7886Cu) goto L_08A7886C;
    return;
L_08A7886C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78874;
    }
L_08A78874:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78884u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 547u, 0x08A6668Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78884u) goto L_08A78884;
    return;
L_08A78884:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7888C;
    }
L_08A7888C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7889Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 581u, 0x08A668F4u>(ctx, &aot_mem) && ctx.pc == 0x08A7889Cu) goto L_08A7889C;
    return;
L_08A7889C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A788A4;
    }
L_08A788A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A788B4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 617u, 0x08A66B7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A788B4u) goto L_08A788B4;
    return;
L_08A788B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A788BC;
    }
L_08A788BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A788CCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 649u, 0x08A66DC0u>(ctx, &aot_mem) && ctx.pc == 0x08A788CCu) goto L_08A788CC;
    return;
L_08A788CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A788D4;
    }
L_08A788D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A788E4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 688u, 0x08A67080u>(ctx, &aot_mem) && ctx.pc == 0x08A788E4u) goto L_08A788E4;
    return;
L_08A788E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A788EC;
    }
L_08A788EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A788FCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 727u, 0x08A67340u>(ctx, &aot_mem) && ctx.pc == 0x08A788FCu) goto L_08A788FC;
    return;
L_08A788FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78904;
    }
L_08A78904:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78914u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 762u, 0x08A675B8u>(ctx, &aot_mem) && ctx.pc == 0x08A78914u) goto L_08A78914;
    return;
L_08A78914:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7891C;
    }
L_08A7891C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7892Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 793u, 0x08A677E8u>(ctx, &aot_mem) && ctx.pc == 0x08A7892Cu) goto L_08A7892C;
    return;
L_08A7892C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78934;
    }
L_08A78934:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78944u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 826u, 0x08A67A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78944u) goto L_08A78944;
    return;
L_08A78944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7894C;
    }
L_08A7894C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7895Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 863u, 0x08A67CDCu>(ctx, &aot_mem) && ctx.pc == 0x08A7895Cu) goto L_08A7895C;
    return;
L_08A7895C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78964;
    }
L_08A78964:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78974u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 892u, 0x08A67EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A78974u) goto L_08A78974;
    return;
L_08A78974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A7897C;
    }
L_08A7897C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7898Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 21u, 0x08A68164u>(ctx, &aot_mem) && ctx.pc == 0x08A7898Cu) goto L_08A7898C;
    return;
L_08A7898C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78994;
    }
L_08A78994:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A789A4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 52u, 0x08A68398u>(ctx, &aot_mem) && ctx.pc == 0x08A789A4u) goto L_08A789A4;
    return;
L_08A789A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A789AC;
    }
L_08A789AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A789BCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 89u, 0x08A68638u>(ctx, &aot_mem) && ctx.pc == 0x08A789BCu) goto L_08A789BC;
    return;
L_08A789BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A789C4;
    }
L_08A789C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A789D4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 124u, 0x08A688B0u>(ctx, &aot_mem) && ctx.pc == 0x08A789D4u) goto L_08A789D4;
    return;
L_08A789D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A789DC;
    }
L_08A789DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A789ECu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 158u, 0x08A68B18u>(ctx, &aot_mem) && ctx.pc == 0x08A789ECu) goto L_08A789EC;
    return;
L_08A789EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A789F4;
    }
L_08A789F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78A04u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 188u, 0x08A68D38u>(ctx, &aot_mem) && ctx.pc == 0x08A78A04u) goto L_08A78A04;
    return;
L_08A78A04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78A0C;
    }
L_08A78A0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78A1Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 219u, 0x08A68F68u>(ctx, &aot_mem) && ctx.pc == 0x08A78A1Cu) goto L_08A78A1C;
    return;
L_08A78A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78A24;
    }
L_08A78A24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78A34u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 889u, 0x08A6BEBCu>(ctx, &aot_mem) && ctx.pc == 0x08A78A34u) goto L_08A78A34;
    return;
L_08A78A34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78A3C;
    }
L_08A78A3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78A4Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 7u, 0x08A6C060u>(ctx, &aot_mem) && ctx.pc == 0x08A78A4Cu) goto L_08A78A4C;
    return;
L_08A78A4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78A54;
    }
L_08A78A54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78A64u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 246u, 0x08A69150u>(ctx, &aot_mem) && ctx.pc == 0x08A78A64u) goto L_08A78A64;
    return;
L_08A78A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78A6C;
    }
L_08A78A6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78A7Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 247u, 0x08A69158u>(ctx, &aot_mem) && ctx.pc == 0x08A78A7Cu) goto L_08A78A7C;
    return;
L_08A78A7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78A84;
    }
L_08A78A84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78A94u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 248u, 0x08A69160u>(ctx, &aot_mem) && ctx.pc == 0x08A78A94u) goto L_08A78A94;
    return;
L_08A78A94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78A9C;
    }
L_08A78A9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78AACu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 273u, 0x08A69328u>(ctx, &aot_mem) && ctx.pc == 0x08A78AACu) goto L_08A78AAC;
    return;
L_08A78AAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78AB4;
    }
L_08A78AB4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78AC4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 298u, 0x08A694F0u>(ctx, &aot_mem) && ctx.pc == 0x08A78AC4u) goto L_08A78AC4;
    return;
L_08A78AC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78ACC;
    }
L_08A78ACC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78ADCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 321u, 0x08A69694u>(ctx, &aot_mem) && ctx.pc == 0x08A78ADCu) goto L_08A78ADC;
    return;
L_08A78ADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78AE4;
    }
L_08A78AE4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78AF4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 346u, 0x08A6985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78AF4u) goto L_08A78AF4;
    return;
L_08A78AF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78AFC;
    }
L_08A78AFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78B0Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 371u, 0x08A69A24u>(ctx, &aot_mem) && ctx.pc == 0x08A78B0Cu) goto L_08A78B0C;
    return;
L_08A78B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78B14;
    }
L_08A78B14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78B24u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 396u, 0x08A69BECu>(ctx, &aot_mem) && ctx.pc == 0x08A78B24u) goto L_08A78B24;
    return;
L_08A78B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78B2C;
    }
L_08A78B2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78B3Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 421u, 0x08A69DB4u>(ctx, &aot_mem) && ctx.pc == 0x08A78B3Cu) goto L_08A78B3C;
    return;
L_08A78B3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78B44;
    }
L_08A78B44:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78B54u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 446u, 0x08A69F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78B54u) goto L_08A78B54;
    return;
L_08A78B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78B5C;
    }
L_08A78B5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78B6Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 471u, 0x08A6A144u>(ctx, &aot_mem) && ctx.pc == 0x08A78B6Cu) goto L_08A78B6C;
    return;
L_08A78B6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78B74;
    }
L_08A78B74:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78B84u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 496u, 0x08A6A30Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78B84u) goto L_08A78B84;
    return;
L_08A78B84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78B8C;
    }
L_08A78B8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78B9Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 521u, 0x08A6A4D4u>(ctx, &aot_mem) && ctx.pc == 0x08A78B9Cu) goto L_08A78B9C;
    return;
L_08A78B9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78BA4;
    }
L_08A78BA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78BB4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 546u, 0x08A6A69Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78BB4u) goto L_08A78BB4;
    return;
L_08A78BB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78BBC;
    }
L_08A78BBC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78BCCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 571u, 0x08A6A864u>(ctx, &aot_mem) && ctx.pc == 0x08A78BCCu) goto L_08A78BCC;
    return;
L_08A78BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78BD4;
    }
L_08A78BD4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78BE4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 596u, 0x08A6AA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78BE4u) goto L_08A78BE4;
    return;
L_08A78BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78BEC;
    }
L_08A78BEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78BFCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 621u, 0x08A6ABF4u>(ctx, &aot_mem) && ctx.pc == 0x08A78BFCu) goto L_08A78BFC;
    return;
L_08A78BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78C04;
    }
L_08A78C04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78C14u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 646u, 0x08A6ADBCu>(ctx, &aot_mem) && ctx.pc == 0x08A78C14u) goto L_08A78C14;
    return;
L_08A78C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78C1C;
    }
L_08A78C1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78C2Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 671u, 0x08A6AF84u>(ctx, &aot_mem) && ctx.pc == 0x08A78C2Cu) goto L_08A78C2C;
    return;
L_08A78C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78C34;
    }
L_08A78C34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78C44u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 30u, 0x08A6C204u>(ctx, &aot_mem) && ctx.pc == 0x08A78C44u) goto L_08A78C44;
    return;
L_08A78C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78C4C;
    }
L_08A78C4C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78C5Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 40u, 0x08A6C2B4u>(ctx, &aot_mem) && ctx.pc == 0x08A78C5Cu) goto L_08A78C5C;
    return;
L_08A78C5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78C64;
    }
L_08A78C64:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78C78u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 121u, 0x08A6C858u>(ctx, &aot_mem) && ctx.pc == 0x08A78C78u) goto L_08A78C78;
    return;
L_08A78C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78C80;
    }
L_08A78C80:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78C90u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A78C90u) goto L_08A78C90;
    return;
L_08A78C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78C98;
      }
      goto L_08A78C98;
    }
L_08A78C98:
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
L_08A78CB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
      if (branch_taken) {
          goto L_08A78CEC;
      }
      goto L_08A78CC4;
    }
L_08A78CC4:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-103));
    ctx.gpr[8] = (ctx.gpr[7] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A794EC;
      }
      goto L_08A78CD4;
    }
L_08A78CD4:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25040)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78CEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A78CF4;
    }
L_08A78CF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A78CFC;
    }
L_08A78CFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A78D04;
    }
L_08A78D04:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u | 4797u);
    ctx.gpr[31] = (0x08A78D18u);
    ctx.gpr[8] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A78D18u) goto L_08A78D18;
    return;
L_08A78D18:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A78D1C;
L_08A78D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A78D24;
    }
L_08A78D24:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u | 4813u);
    ctx.gpr[31] = (0x08A78D38u);
    ctx.gpr[8] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A78D38u) goto L_08A78D38;
    return;
L_08A78D38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78D1C;
      }
      goto L_08A78D40;
    }
L_08A78D40:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u | 4785u);
    ctx.gpr[31] = (0x08A78D54u);
    ctx.gpr[8] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A78D54u) goto L_08A78D54;
    return;
L_08A78D54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78D1C;
      }
      goto L_08A78D5C;
    }
L_08A78D5C:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u | 4828u);
    ctx.gpr[31] = (0x08A78D70u);
    ctx.gpr[8] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A78D70u) goto L_08A78D70;
    return;
L_08A78D70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78D1C;
      }
      goto L_08A78D78;
    }
L_08A78D78:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A78DA8;
      }
      goto L_08A78D8C;
    }
L_08A78D8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A78DE0;
      }
      goto L_08A78D94;
    }
L_08A78D94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78D9C;
    }
L_08A78D9C:
    ctx.gpr[7] = (0u | 4482u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08A78DE8;
      }
      goto L_08A78DA8;
    }
L_08A78DA8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A78DD4;
      }
      goto L_08A78DB4;
    }
L_08A78DB4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DE0;
      }
      goto L_08A78DBC;
    }
L_08A78DBC:
    ctx.gpr[7] = (0u | 4482u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08A78DE8;
      }
      goto L_08A78DC8;
    }
L_08A78DC8:
    ctx.gpr[7] = (0u | 4835u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_08A78DE8;
      }
      goto L_08A78DD4;
    }
L_08A78DD4:
    ctx.gpr[7] = (0u | 4229u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 16u);
      if (branch_taken) {
          goto L_08A78DE8;
      }
      goto L_08A78DE0;
    }
L_08A78DE0:
    ctx.gpr[7] = (0u | 4482u);
    ctx.gpr[6] = (0u | 25u);
    goto L_08A78DE8;
L_08A78DE8:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A78DF8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A78DF8u) goto L_08A78DF8;
    return;
L_08A78DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78D1C;
      }
      goto L_08A78E00;
    }
L_08A78E00:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11481)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78E34;
      }
      goto L_08A78E10;
    }
L_08A78E10:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11481), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11481)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A78E2C;
      }
      goto L_08A78E28;
    }
L_08A78E28:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11481), static_cast<std::uint8_t>(0u));
    goto L_08A78E2C;
L_08A78E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A78E34;
    }
L_08A78E34:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11481), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A78E6C;
      }
      goto L_08A78E50;
    }
L_08A78E50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A78EA4;
      }
      goto L_08A78E58;
    }
L_08A78E58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A78E8C;
      }
      goto L_08A78E60;
    }
L_08A78E60:
    ctx.gpr[7] = (0u | 4506u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 20u);
      if (branch_taken) {
          goto L_08A78EAC;
      }
      goto L_08A78E6C;
    }
L_08A78E6C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A78E98;
      }
      goto L_08A78E78;
    }
L_08A78E78:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78EA4;
      }
      goto L_08A78E80;
    }
L_08A78E80:
    ctx.gpr[7] = (0u | 4506u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 20u);
      if (branch_taken) {
          goto L_08A78EAC;
      }
      goto L_08A78E8C;
    }
L_08A78E8C:
    ctx.gpr[7] = (0u | 4847u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08A78EAC;
      }
      goto L_08A78E98;
    }
L_08A78E98:
    ctx.gpr[7] = (0u | 4245u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08A78EAC;
      }
      goto L_08A78EA4;
    }
L_08A78EA4:
    ctx.gpr[7] = (0u | 4506u);
    ctx.gpr[6] = (0u | 20u);
    goto L_08A78EAC;
L_08A78EAC:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A78EBCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A78EBCu) goto L_08A78EBC;
    return;
L_08A78EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78D1C;
      }
      goto L_08A78EC4;
    }
L_08A78EC4:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11482)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78EF8;
      }
      goto L_08A78ED4;
    }
L_08A78ED4:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11482), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11482)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A78EF0;
      }
      goto L_08A78EEC;
    }
L_08A78EEC:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11482), static_cast<std::uint8_t>(0u));
    goto L_08A78EF0;
L_08A78EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A78EF8;
    }
L_08A78EF8:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11482), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A78F30;
      }
      goto L_08A78F14;
    }
L_08A78F14:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A78F68;
      }
      goto L_08A78F1C;
    }
L_08A78F1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A78F50;
      }
      goto L_08A78F24;
    }
L_08A78F24:
    ctx.gpr[7] = (0u | 4526u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 31u);
      if (branch_taken) {
          goto L_08A78F70;
      }
      goto L_08A78F30;
    }
L_08A78F30:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A78F5C;
      }
      goto L_08A78F3C;
    }
L_08A78F3C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78F68;
      }
      goto L_08A78F44;
    }
L_08A78F44:
    ctx.gpr[7] = (0u | 5009u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 17u);
      if (branch_taken) {
          goto L_08A78F70;
      }
      goto L_08A78F50;
    }
L_08A78F50:
    ctx.gpr[7] = (0u | 4872u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08A78F70;
      }
      goto L_08A78F5C;
    }
L_08A78F5C:
    ctx.gpr[7] = (0u | 4270u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 29u);
      if (branch_taken) {
          goto L_08A78F70;
      }
      goto L_08A78F68;
    }
L_08A78F68:
    ctx.gpr[7] = (0u | 4526u);
    ctx.gpr[6] = (0u | 31u);
    goto L_08A78F70;
L_08A78F70:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A78F80u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A78F80u) goto L_08A78F80;
    return;
L_08A78F80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78D1C;
      }
      goto L_08A78F88;
    }
L_08A78F88:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11483)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78FBC;
      }
      goto L_08A78F98;
    }
L_08A78F98:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11483), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11483)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A78FB4;
      }
      goto L_08A78FB0;
    }
L_08A78FB0:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11483), static_cast<std::uint8_t>(0u));
    goto L_08A78FB4;
L_08A78FB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A78FBC;
    }
L_08A78FBC:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11483), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A78FF4;
      }
      goto L_08A78FD8;
    }
L_08A78FD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A7902C;
      }
      goto L_08A78FE0;
    }
L_08A78FE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A79014;
      }
      goto L_08A78FE8;
    }
L_08A78FE8:
    ctx.gpr[7] = (0u | 4557u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 42u);
      if (branch_taken) {
          goto L_08A79034;
      }
      goto L_08A78FF4;
    }
L_08A78FF4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A79020;
      }
      goto L_08A79000;
    }
L_08A79000:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7902C;
      }
      goto L_08A79008;
    }
L_08A79008:
    ctx.gpr[7] = (0u | 5026u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 20u);
      if (branch_taken) {
          goto L_08A79034;
      }
      goto L_08A79014;
    }
L_08A79014:
    ctx.gpr[7] = (0u | 4897u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 18u);
      if (branch_taken) {
          goto L_08A79034;
      }
      goto L_08A79020;
    }
L_08A79020:
    ctx.gpr[7] = (0u | 4299u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 39u);
      if (branch_taken) {
          goto L_08A79034;
      }
      goto L_08A7902C;
    }
L_08A7902C:
    ctx.gpr[7] = (0u | 4557u);
    ctx.gpr[6] = (0u | 42u);
    goto L_08A79034;
L_08A79034:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A79044u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A79044u) goto L_08A79044;
    return;
L_08A79044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78D1C;
      }
      goto L_08A7904C;
    }
L_08A7904C:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11484)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79080;
      }
      goto L_08A7905C;
    }
L_08A7905C:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11484), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11484)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A79078;
      }
      goto L_08A79074;
    }
L_08A79074:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11484), static_cast<std::uint8_t>(0u));
    goto L_08A79078;
L_08A79078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A79080;
    }
L_08A79080:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11484), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A790B8;
      }
      goto L_08A7909C;
    }
L_08A7909C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A790F0;
      }
      goto L_08A790A4;
    }
L_08A790A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A790D8;
      }
      goto L_08A790AC;
    }
L_08A790AC:
    ctx.gpr[7] = (0u | 4599u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 23u);
      if (branch_taken) {
          goto L_08A790F8;
      }
      goto L_08A790B8;
    }
L_08A790B8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A790E4;
      }
      goto L_08A790C4;
    }
L_08A790C4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A790F0;
      }
      goto L_08A790CC;
    }
L_08A790CC:
    ctx.gpr[7] = (0u | 5046u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 17u);
      if (branch_taken) {
          goto L_08A790F8;
      }
      goto L_08A790D8;
    }
L_08A790D8:
    ctx.gpr[7] = (0u | 4915u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_08A790F8;
      }
      goto L_08A790E4;
    }
L_08A790E4:
    ctx.gpr[7] = (0u | 4338u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 16u);
      if (branch_taken) {
          goto L_08A790F8;
      }
      goto L_08A790F0;
    }
L_08A790F0:
    ctx.gpr[7] = (0u | 4599u);
    ctx.gpr[6] = (0u | 23u);
    goto L_08A790F8;
L_08A790F8:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A79108u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A79108u) goto L_08A79108;
    return;
L_08A79108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78D1C;
      }
      goto L_08A79110;
    }
L_08A79110:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11485)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79144;
      }
      goto L_08A79120;
    }
L_08A79120:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11485), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11485)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A7913C;
      }
      goto L_08A79138;
    }
L_08A79138:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11485), static_cast<std::uint8_t>(0u));
    goto L_08A7913C;
L_08A7913C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A79144;
    }
L_08A79144:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11485), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A7917C;
      }
      goto L_08A79160;
    }
L_08A79160:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A791B4;
      }
      goto L_08A79168;
    }
L_08A79168:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A7919C;
      }
      goto L_08A79170;
    }
L_08A79170:
    ctx.gpr[7] = (0u | 4622u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 39u);
      if (branch_taken) {
          goto L_08A791BC;
      }
      goto L_08A7917C;
    }
L_08A7917C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A791A8;
      }
      goto L_08A79188;
    }
L_08A79188:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A791B4;
      }
      goto L_08A79190;
    }
L_08A79190:
    ctx.gpr[7] = (0u | 5063u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_08A791BC;
      }
      goto L_08A7919C;
    }
L_08A7919C:
    ctx.gpr[7] = (0u | 4926u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08A791BC;
      }
      goto L_08A791A8;
    }
L_08A791A8:
    ctx.gpr[7] = (0u | 4354u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 33u);
      if (branch_taken) {
          goto L_08A791BC;
      }
      goto L_08A791B4;
    }
L_08A791B4:
    ctx.gpr[7] = (0u | 4622u);
    ctx.gpr[6] = (0u | 39u);
    goto L_08A791BC;
L_08A791BC:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A791CCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A791CCu) goto L_08A791CC;
    return;
L_08A791CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78D1C;
      }
      goto L_08A791D4;
    }
L_08A791D4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11486)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A79208;
      }
      goto L_08A791E4;
    }
L_08A791E4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11486), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11486)));
    ctx.gpr[7] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A79200;
      }
      goto L_08A791FC;
    }
L_08A791FC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11486), static_cast<std::uint8_t>(0u));
    goto L_08A79200;
L_08A79200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A79208;
    }
L_08A79208:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11486), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A79218;
    }
L_08A79218:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11487)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7924C;
      }
      goto L_08A79228;
    }
L_08A79228:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11487), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11487)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A79244;
      }
      goto L_08A79240;
    }
L_08A79240:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11487), static_cast<std::uint8_t>(0u));
    goto L_08A79244;
L_08A79244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A7924C;
    }
L_08A7924C:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11487), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A79284;
      }
      goto L_08A79268;
    }
L_08A79268:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A792BC;
      }
      goto L_08A79270;
    }
L_08A79270:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A792A4;
      }
      goto L_08A79278;
    }
L_08A79278:
    ctx.gpr[7] = (0u | 4677u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 18u);
      if (branch_taken) {
          goto L_08A792C4;
      }
      goto L_08A79284;
    }
L_08A79284:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A792B0;
      }
      goto L_08A79290;
    }
L_08A79290:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A792BC;
      }
      goto L_08A79298;
    }
L_08A79298:
    ctx.gpr[7] = (0u | 5090u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_08A792C4;
      }
      goto L_08A792A4;
    }
L_08A792A4:
    ctx.gpr[7] = (0u | 4399u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_08A792C4;
      }
      goto L_08A792B0;
    }
L_08A792B0:
    ctx.gpr[7] = (0u | 4399u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_08A792C4;
      }
      goto L_08A792BC;
    }
L_08A792BC:
    ctx.gpr[7] = (0u | 4677u);
    ctx.gpr[6] = (0u | 18u);
    goto L_08A792C4;
L_08A792C4:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A792D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A792D4u) goto L_08A792D4;
    return;
L_08A792D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78D1C;
      }
      goto L_08A792DC;
    }
L_08A792DC:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11488)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79310;
      }
      goto L_08A792EC;
    }
L_08A792EC:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11488), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11488)));
    ctx.gpr[7] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A79308;
      }
      goto L_08A79304;
    }
L_08A79304:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11488), static_cast<std::uint8_t>(0u));
    goto L_08A79308;
L_08A79308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A79310;
    }
L_08A79310:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11488), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A79348;
      }
      goto L_08A7932C;
    }
L_08A7932C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A79380;
      }
      goto L_08A79334;
    }
L_08A79334:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A79368;
      }
      goto L_08A7933C;
    }
L_08A7933C:
    ctx.gpr[7] = (0u | 4695u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 35u);
      if (branch_taken) {
          goto L_08A79388;
      }
      goto L_08A79348;
    }
L_08A79348:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A79374;
      }
      goto L_08A79354;
    }
L_08A79354:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79380;
      }
      goto L_08A7935C;
    }
L_08A7935C:
    ctx.gpr[7] = (0u | 5101u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 19u);
      if (branch_taken) {
          goto L_08A79388;
      }
      goto L_08A79368;
    }
L_08A79368:
    ctx.gpr[7] = (0u | 4960u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 18u);
      if (branch_taken) {
          goto L_08A79388;
      }
      goto L_08A79374;
    }
L_08A79374:
    ctx.gpr[7] = (0u | 4407u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 29u);
      if (branch_taken) {
          goto L_08A79388;
      }
      goto L_08A79380;
    }
L_08A79380:
    ctx.gpr[7] = (0u | 4695u);
    ctx.gpr[6] = (0u | 35u);
    goto L_08A79388;
L_08A79388:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A79398u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A79398u) goto L_08A79398;
    return;
L_08A79398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78D1C;
      }
      goto L_08A793A0;
    }
L_08A793A0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A793D0;
      }
      goto L_08A793B4;
    }
L_08A793B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A79408;
      }
      goto L_08A793BC;
    }
L_08A793BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A793FC;
      }
      goto L_08A793C4;
    }
L_08A793C4:
    ctx.gpr[7] = (0u | 4730u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_08A79410;
      }
      goto L_08A793D0;
    }
L_08A793D0:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A793F0;
      }
      goto L_08A793DC;
    }
L_08A793DC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79408;
      }
      goto L_08A793E4;
    }
L_08A793E4:
    ctx.gpr[7] = (0u | 5120u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_08A79410;
      }
      goto L_08A793F0;
    }
L_08A793F0:
    ctx.gpr[7] = (0u | 4436u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_08A79410;
      }
      goto L_08A793FC;
    }
L_08A793FC:
    ctx.gpr[7] = (0u | 4436u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_08A79410;
      }
      goto L_08A79408;
    }
L_08A79408:
    ctx.gpr[7] = (0u | 4730u);
    ctx.gpr[6] = (0u | 10u);
    goto L_08A79410;
L_08A79410:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A79420u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A79420u) goto L_08A79420;
    return;
L_08A79420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78D1C;
      }
      goto L_08A79428;
    }
L_08A79428:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11489)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7945C;
      }
      goto L_08A79438;
    }
L_08A79438:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11489), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11489)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A79454;
      }
      goto L_08A79450;
    }
L_08A79450:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11489), static_cast<std::uint8_t>(0u));
    goto L_08A79454;
L_08A79454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A794F4;
      }
      goto L_08A7945C;
    }
L_08A7945C:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11489), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A79498;
      }
      goto L_08A7947C;
    }
L_08A7947C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A794D0;
      }
      goto L_08A79484;
    }
L_08A79484:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A794C4;
      }
      goto L_08A7948C;
    }
L_08A7948C:
    ctx.gpr[2] = (0u | 4741u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 30u);
      if (branch_taken) {
          goto L_08A794D8;
      }
      goto L_08A79498;
    }
L_08A79498:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A794B8;
      }
      goto L_08A794A4;
    }
L_08A794A4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A794D0;
      }
      goto L_08A794AC;
    }
L_08A794AC:
    ctx.gpr[2] = (0u | 5130u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 26u);
      if (branch_taken) {
          goto L_08A794D8;
      }
      goto L_08A794B8;
    }
L_08A794B8:
    ctx.gpr[2] = (0u | 4446u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 36u);
      if (branch_taken) {
          goto L_08A794D8;
      }
      goto L_08A794C4;
    }
L_08A794C4:
    ctx.gpr[2] = (0u | 4978u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 31u);
      if (branch_taken) {
          goto L_08A794D8;
      }
      goto L_08A794D0;
    }
L_08A794D0:
    ctx.gpr[2] = (0u | 4730u);
    ctx.gpr[7] = (0u | 30u);
    goto L_08A794D8;
L_08A794D8:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A794E4u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 164u, 0x08A60EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A794E4u) goto L_08A794E4;
    return;
L_08A794E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78D1C;
      }
      goto L_08A794EC;
    }
L_08A794EC:
    ctx.gpr[31] = (0x08A794F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A794F4u) goto L_08A794F4;
    return;
L_08A794F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (18204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18095u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51200u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.gpr[21] = (2233u << 16u);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[30] = (0u | 166u);
    ctx.gpr[23] = (0u | 6u);
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(10640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    goto L_08A79598;
L_08A79598:
    ctx.gpr[31] = (0x08A795A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 365u, 0x08A466DCu>(ctx, &aot_mem) && ctx.pc == 0x08A795A0u) goto L_08A795A0;
    return;
L_08A795A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A795B0;
      }
      goto L_08A795A8;
    }
L_08A795A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79760;
      }
      goto L_08A795B0;
    }
L_08A795B0:
    ctx.gpr[31] = (0x08A795B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 363u, 0x08A46694u>(ctx, &aot_mem) && ctx.pc == 0x08A795B8u) goto L_08A795B8;
    return;
L_08A795B8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A79760;
      }
      goto L_08A795C4;
    }
L_08A795C4:
    ctx.gpr[31] = (0x08A795CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 364u, 0x08A466B8u>(ctx, &aot_mem) && ctx.pc == 0x08A795CCu) goto L_08A795CC;
    return;
L_08A795CC:
    ctx.gpr[31] = (0x08A795D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 366u, 0x08A46700u>(ctx, &aot_mem) && ctx.pc == 0x08A795D4u) goto L_08A795D4;
    return;
L_08A795D4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A796A4;
      }
      goto L_08A795E4;
    }
L_08A795E4:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24856)));
    jump_target = ctx.gpr[1];
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A795FC:
    ctx.gpr[4] = (0u | 167u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A79618u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A79618u) goto L_08A79618;
    return;
L_08A79618:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(19000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 127u);
      if (branch_taken) {
          goto L_08A796E8;
      }
      goto L_08A79634;
    }
L_08A79634:
    ctx.gpr[4] = (0u | 266u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A79650u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A79650u) goto L_08A79650;
    return;
L_08A79650:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(12347));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 127u);
      if (branch_taken) {
          goto L_08A796E8;
      }
      goto L_08A7966C;
    }
L_08A7966C:
    ctx.gpr[4] = (0u | 168u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A79688u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A79688u) goto L_08A79688;
    return;
L_08A79688:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(19000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 127u);
      if (branch_taken) {
          goto L_08A796E8;
      }
      goto L_08A796A4;
    }
L_08A796A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A796BCu);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A796BCu) goto L_08A796BC;
    return;
L_08A796BC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(19500));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[23];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A796DC;
      }
      goto L_08A796C8;
    }
L_08A796C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A796DC;
L_08A796DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 127u);
    goto L_08A796E8;
L_08A796E8:
    ctx.gpr[31] = (0x08A796F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 367u, 0x08A46724u>(ctx, &aot_mem) && ctx.pc == 0x08A796F0u) goto L_08A796F0;
    return;
L_08A796F0:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A79704u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 304u, 0x08A6D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A79704u) goto L_08A79704;
    return;
L_08A79704:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A79760;
      }
      goto L_08A79718;
    }
L_08A79718:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A79730u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A79730u) goto L_08A79730;
    return;
L_08A79730:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A79760;
      }
      goto L_08A79740;
    }
L_08A79740:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A79760u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A79760u) goto L_08A79760;
    return;
L_08A79760:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79598;
      }
      goto L_08A79774;
    }
L_08A79774:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A797BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17864u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (17056u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24800));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (16840u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (2233u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10640));
    ctx.gpr[22] = (2233u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[23] = (0u | 71u);
    ctx.gpr[21] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-25200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    goto L_08A7986C;
L_08A7986C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (ctx.gpr[18] << 6u);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79B0C;
      }
      goto L_08A79884;
    }
L_08A79884:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79B0C;
      }
      goto L_08A79890;
    }
L_08A79890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A798DC;
      }
      goto L_08A7989C;
    }
L_08A7989C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A798B4u);
    ctx.gpr[5] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A798B4u) goto L_08A798B4;
    return;
L_08A798B4:
    ctx.gpr[4] = (ctx.gpr[2] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 80u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A799DC;
      }
      goto L_08A798DC;
    }
L_08A798DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08A79950;
      }
      goto L_08A798F8;
    }
L_08A798F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A799A0;
      }
      goto L_08A79900;
    }
L_08A79900:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A79918u);
    ctx.gpr[5] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A79918u) goto L_08A79918;
    return;
L_08A79918:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 100u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[4] >> 8u);
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A799DC;
      }
      goto L_08A79950;
    }
L_08A79950:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A799A0;
      }
      goto L_08A79958;
    }
L_08A79958:
    ctx.gpr[4] = (0u | 239u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17436u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 239u);
    ctx.gpr[31] = (0x08A7997Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7997Cu) goto L_08A7997C;
    return;
L_08A7997C:
    ctx.gpr[4] = (ctx.gpr[2] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[17] = (0u | 60u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A799DC;
      }
      goto L_08A799A0;
    }
L_08A799A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A799B8u);
    ctx.gpr[5] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A799B8u) goto L_08A799B8;
    return;
L_08A799B8:
    ctx.gpr[4] = (ctx.gpr[2] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 80u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A799DC;
L_08A799DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A799F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 304u, 0x08A6D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A799F8u) goto L_08A799F8;
    return;
L_08A799F8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[30] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A79A6C;
      }
      goto L_08A79A0C;
    }
L_08A79A0C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79A6C;
      }
      goto L_08A79A14;
    }
L_08A79A14:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A79A2Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A79A2Cu) goto L_08A79A2C;
    return;
L_08A79A2C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A79A6C;
      }
      goto L_08A79A3C;
    }
L_08A79A3C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A79A6Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A79A6Cu) goto L_08A79A6C;
    return;
L_08A79A6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79B0C;
      }
      goto L_08A79A78;
    }
L_08A79A78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A79AA0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A79AA0u) goto L_08A79AA0;
    return;
L_08A79AA0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 211u);
      if (branch_taken) {
          goto L_08A79B0C;
      }
      goto L_08A79AB0;
    }
L_08A79AB0:
    ctx.gpr[6] = (ctx.gpr[18] << 4u);
    ctx.gpr[7] = (ctx.gpr[18] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (0u | 19591u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19591));
    ctx.gpr[5] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A79B0Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A79B0Cu) goto L_08A79B0C;
    return;
L_08A79B0C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7986C;
      }
      goto L_08A79B20;
    }
L_08A79B20:
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
L_08A79B68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(88) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A8FC;
      }
      goto L_08A79B90;
    }
L_08A79B90:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24808)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79BA8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 35u);
    ctx.gpr[31] = (0x08A79BB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A79BB8u) goto L_08A79BB8;
    return;
L_08A79BB8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (17530u << 16u);
      if (branch_taken) {
          goto L_08A79C1C;
      }
      goto L_08A79BC4;
    }
L_08A79BC4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5598u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 35u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9216u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 35u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A79BF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A79BF8u) goto L_08A79BF8;
    return;
L_08A79BF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A79C1C;
    }
L_08A79C1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A978;
      }
      goto L_08A79C24;
    }
L_08A79C24:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A79C70;
    }
L_08A79C70:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A79CBC;
    }
L_08A79CBC:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A79D08;
    }
L_08A79D08:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A79D54;
    }
L_08A79D54:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 155u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A79DA0;
    }
L_08A79DA0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 156u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A79DEC;
    }
L_08A79DEC:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 157u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A79E38;
    }
L_08A79E38:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 158u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A79E84;
    }
L_08A79E84:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A79ED0;
    }
L_08A79ED0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 157u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A79F1C;
    }
L_08A79F1C:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 160u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A79F68;
    }
L_08A79F68:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 161u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A79FB4;
    }
L_08A79FB4:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 162u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A000;
    }
L_08A7A000:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A04C;
    }
L_08A7A04C:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 14000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 90u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (17864u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A0A4;
    }
L_08A7A0A4:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A0F0;
    }
L_08A7A0F0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 241u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A13C;
    }
L_08A7A13C:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 272u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A188;
    }
L_08A7A188:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 100u);
    ctx.gpr[4] = (17817u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A1D8;
    }
L_08A7A1D8:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 185u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A224;
    }
L_08A7A224:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17761u << 16u);
    ctx.gpr[4] = (0u | 312u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7A250u);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A250u) goto L_08A7A250;
    return;
L_08A7A250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(18600));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A290;
    }
L_08A7A290:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17761u << 16u);
    ctx.gpr[4] = (0u | 35u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7A2BCu);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A2BCu) goto L_08A7A2BC;
    return;
L_08A7A2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(18600));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A2FC;
    }
L_08A7A2FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17761u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(103));
    ctx.gpr[31] = (0x08A7A338u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A338u) goto L_08A7A338;
    return;
L_08A7A338:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x08A7A34Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A34Cu) goto L_08A7A34C;
    return;
L_08A7A34C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 30u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(70));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A38C;
    }
L_08A7A38C:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 300u);
    ctx.gpr[4] = (17761u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A7A3B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A3B8u) goto L_08A7A3B8;
    return;
L_08A7A3B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x08A7A3CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A3CCu) goto L_08A7A3CC;
    return;
L_08A7A3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 30u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A40C;
    }
L_08A7A40C:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[4] = (17761u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A7A438u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A438u) goto L_08A7A438;
    return;
L_08A7A438:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x08A7A44Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A44Cu) goto L_08A7A44C;
    return;
L_08A7A44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 30u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A48C;
    }
L_08A7A48C:
    ctx.gpr[31] = (0x08A7A494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A7A494u) goto L_08A7A494;
    return;
L_08A7A494:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A4DC;
      }
      goto L_08A7A4A0;
    }
L_08A7A4A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A7A4DC;
      }
      goto L_08A7A4B4;
    }
L_08A7A4B4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24456)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A4CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A504;
      }
      goto L_08A7A4D4;
    }
L_08A7A4D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A978;
      }
      goto L_08A7A4DC;
    }
L_08A7A4DC:
    ctx.gpr[4] = (0u | 29u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7A4F0u);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A4F0u) goto L_08A7A4F0;
    return;
L_08A7A4F0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A528;
      }
      goto L_08A7A504;
    }
L_08A7A504:
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7A518u);
    ctx.gpr[5] = (0u | 600u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A518u) goto L_08A7A518;
    return;
L_08A7A518:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10600));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_08A7A528;
L_08A7A528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 7u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A568;
    }
L_08A7A568:
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11490)));
    ctx.gpr[4] = (0u | 5u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31));
    ctx.gpr[31] = (0x08A7A5C4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A5C4u) goto L_08A7A5C4;
    return;
L_08A7A5C4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A7A5D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A5D8u) goto L_08A7A5D8;
    return;
L_08A7A5D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(90));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A610;
    }
L_08A7A610:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 236u);
    ctx.gpr[4] = (0u | 236u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17864u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7A640u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A640u) goto L_08A7A640;
    return;
L_08A7A640:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 80u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A668;
    }
L_08A7A668:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 191u);
    ctx.gpr[4] = (0u | 191u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7A698u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A698u) goto L_08A7A698;
    return;
L_08A7A698:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u | 70u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A6B8;
    }
L_08A7A6B8:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 191u);
    ctx.gpr[4] = (0u | 191u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7A6E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A6E8u) goto L_08A7A6E8;
    return;
L_08A7A6E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A708;
    }
L_08A7A708:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 186u);
    ctx.gpr[4] = (0u | 186u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7A738u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A738u) goto L_08A7A738;
    return;
L_08A7A738:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (0u | 70u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A760;
    }
L_08A7A760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (16988u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[5] = (17725u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(187));
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7A798u);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A798u) goto L_08A7A798;
    return;
L_08A7A798:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(19000));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7A7BCu);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A7BCu) goto L_08A7A7BC;
    return;
L_08A7A7BC:
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(25));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A7CC;
    }
L_08A7A7CC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A7A7E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 304u, 0x08A6D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A7A7E8u) goto L_08A7A7E8;
    return;
L_08A7A7E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A7A7FCu);
    ctx.gpr[6] = (0u | 200u);
    goto L_08A78040;
L_08A7A7FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A978;
      }
      goto L_08A7A804;
    }
L_08A7A804:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A7A820u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 304u, 0x08A6D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A7A820u) goto L_08A7A820;
    return;
L_08A7A820:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08A7A834u);
    ctx.gpr[6] = (0u | 201u);
    goto L_08A78040;
L_08A7A834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A978;
      }
      goto L_08A7A83C;
    }
L_08A7A83C:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 10600u);
    ctx.gpr[4] = (0u | 116u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A7A870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A870u) goto L_08A7A870;
    return;
L_08A7A870:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A89C;
    }
L_08A7A89C:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 22000u);
    ctx.gpr[4] = (0u | 109u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (17864u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A7A8D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A8D0u) goto L_08A7A8D0;
    return;
L_08A7A8D0:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7A904;
      }
      goto L_08A7A8FC;
    }
L_08A7A8FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A978;
      }
      goto L_08A7A904;
    }
L_08A7A904:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A7A910u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 304u, 0x08A6D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A7A910u) goto L_08A7A910;
    return;
L_08A7A910:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7A978;
      }
      goto L_08A7A924;
    }
L_08A7A924:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7A93Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A93Cu) goto L_08A7A93C;
    return;
L_08A7A93C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A7A978;
      }
      goto L_08A7A94C;
    }
L_08A7A94C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11490)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11490), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A7A978u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A7A978u) goto L_08A7A978;
    return;
L_08A7A978:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A990:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(52) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AF0C;
      }
      goto L_08A7A9BC;
    }
L_08A7A9BC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24328)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A9D4:
    ctx.gpr[4] = (0u | 5609u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 42u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 5609u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A7AD28;
      }
      goto L_08A7AA0C;
    }
L_08A7AA0C:
    ctx.gpr[4] = (0u | 5610u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 43u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 5610u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A7AD28;
      }
      goto L_08A7AA44;
    }
L_08A7AA44:
    ctx.gpr[4] = (0u | 5611u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 44u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 5611u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A7AD28;
      }
      goto L_08A7AA7C;
    }
L_08A7AA7C:
    ctx.gpr[4] = (0u | 5612u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 45u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 5612u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A7AD28;
      }
      goto L_08A7AAB4;
    }
L_08A7AAB4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7AB0C;
      }
      goto L_08A7AACC;
    }
L_08A7AACC:
    ctx.gpr[5] = (0u | 5613u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 46u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A7AAE4u);
    ctx.gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 558u, 0x088BACB0u>(ctx, &aot_mem) && ctx.pc == 0x08A7AAE4u) goto L_08A7AAE4;
    return;
L_08A7AAE4:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A7AD28;
      }
      goto L_08A7AB0C;
    }
L_08A7AB0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AF7C;
      }
      goto L_08A7AB14;
    }
L_08A7AB14:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7AB6C;
      }
      goto L_08A7AB2C;
    }
L_08A7AB2C:
    ctx.gpr[5] = (0u | 5614u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A7AB44u);
    ctx.gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 558u, 0x088BACB0u>(ctx, &aot_mem) && ctx.pc == 0x08A7AB44u) goto L_08A7AB44;
    return;
L_08A7AB44:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A7AD28;
      }
      goto L_08A7AB6C;
    }
L_08A7AB6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AF7C;
      }
      goto L_08A7AB74;
    }
L_08A7AB74:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7ABCC;
      }
      goto L_08A7AB8C;
    }
L_08A7AB8C:
    ctx.gpr[5] = (0u | 5615u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A7ABA4u);
    ctx.gpr[5] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 558u, 0x088BACB0u>(ctx, &aot_mem) && ctx.pc == 0x08A7ABA4u) goto L_08A7ABA4;
    return;
L_08A7ABA4:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A7AD28;
      }
      goto L_08A7ABCC;
    }
L_08A7ABCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AF7C;
      }
      goto L_08A7ABD4;
    }
L_08A7ABD4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7AC2C;
      }
      goto L_08A7ABEC;
    }
L_08A7ABEC:
    ctx.gpr[5] = (0u | 5616u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A7AC04u);
    ctx.gpr[5] = (0u | 43u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 570u, 0x088BAD74u>(ctx, &aot_mem) && ctx.pc == 0x08A7AC04u) goto L_08A7AC04;
    return;
L_08A7AC04:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A7AD28;
      }
      goto L_08A7AC2C;
    }
L_08A7AC2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AF7C;
      }
      goto L_08A7AC34;
    }
L_08A7AC34:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7AC8C;
      }
      goto L_08A7AC4C;
    }
L_08A7AC4C:
    ctx.gpr[5] = (0u | 5617u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A7AC64u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 570u, 0x088BAD74u>(ctx, &aot_mem) && ctx.pc == 0x08A7AC64u) goto L_08A7AC64;
    return;
L_08A7AC64:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A7AD28;
      }
      goto L_08A7AC8C;
    }
L_08A7AC8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AF7C;
      }
      goto L_08A7AC94;
    }
L_08A7AC94:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7ACEC;
      }
      goto L_08A7ACAC;
    }
L_08A7ACAC:
    ctx.gpr[5] = (0u | 5618u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 51u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A7ACC4u);
    ctx.gpr[5] = (0u | 45u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 570u, 0x088BAD74u>(ctx, &aot_mem) && ctx.pc == 0x08A7ACC4u) goto L_08A7ACC4;
    return;
L_08A7ACC4:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A7AD28;
      }
      goto L_08A7ACEC;
    }
L_08A7ACEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AF7C;
      }
      goto L_08A7ACF4;
    }
L_08A7ACF4:
    ctx.gpr[4] = (0u | 5619u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 52u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 5619u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    goto L_08A7AD28;
L_08A7AD28:
    ctx.gpr[31] = (0x08A7AD30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7AD30u) goto L_08A7AD30;
    return;
L_08A7AD30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7AF7C;
      }
      goto L_08A7AD48;
    }
L_08A7AD48:
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 5608u);
    ctx.gpr[4] = (0u | 5608u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 41u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7AD74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7AD74u) goto L_08A7AD74;
    return;
L_08A7AD74:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7AF7C;
      }
      goto L_08A7AD9C;
    }
L_08A7AD9C:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 5607u);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17864u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7ADCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7ADCCu) goto L_08A7ADCC;
    return;
L_08A7ADCC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 90u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A7AF14;
      }
      goto L_08A7ADFC;
    }
L_08A7ADFC:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 183u);
    ctx.gpr[4] = (0u | 183u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17864u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7AE2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7AE2Cu) goto L_08A7AE2C;
    return;
L_08A7AE2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A7AF14;
      }
      goto L_08A7AE58;
    }
L_08A7AE58:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 290u);
    ctx.gpr[4] = (0u | 290u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7AE88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7AE88u) goto L_08A7AE88;
    return;
L_08A7AE88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A7AF14;
      }
      goto L_08A7AEB8;
    }
L_08A7AEB8:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20812u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17864u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 30u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A7AF14;
      }
      goto L_08A7AF0C;
    }
L_08A7AF0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AF7C;
      }
      goto L_08A7AF14;
    }
L_08A7AF14:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A7AF20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 304u, 0x08A6D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A7AF20u) goto L_08A7AF20;
    return;
L_08A7AF20:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7AF7C;
      }
      goto L_08A7AF34;
    }
L_08A7AF34:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7AF4Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7AF4Cu) goto L_08A7AF4C;
    return;
L_08A7AF4C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7AF7C;
      }
      goto L_08A7AF5C;
    }
L_08A7AF5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A7AF7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A7AF7Cu) goto L_08A7AF7C;
    return;
L_08A7AF7C:
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
L_08A7AF98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5988)));
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13216));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A7B148;
      }
      goto L_08A7B00C;
    }
L_08A7B00C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (0u | 183u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7B148;
      }
      goto L_08A7B01C;
    }
L_08A7B01C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.gpr[22] = (2233u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(10640));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A7B084;
      }
      goto L_08A7B040;
    }
L_08A7B040:
    ctx.gpr[4] = (0u | 167u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7B058u);
    ctx.gpr[5] = (0u | 700u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7B058u) goto L_08A7B058;
    return;
L_08A7B058:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5972)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(3500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(65));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7B0D0;
      }
      goto L_08A7B084;
    }
L_08A7B084:
    ctx.gpr[4] = (0u | 166u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7B09Cu);
    ctx.gpr[5] = (0u | 700u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7B09Cu) goto L_08A7B09C;
    return;
L_08A7B09C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(3500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A7B0D0;
L_08A7B0D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(348)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B0F0;
      }
      goto L_08A7B0E4;
    }
L_08A7B0E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A7B0F0;
L_08A7B0F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11491)));
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11491)));
        goto L_08A7B108;
    }
    goto L_08A7B100;
L_08A7B100:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11491), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11491)));
    goto L_08A7B108;
L_08A7B108:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11491), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A7B148u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A7B148u) goto L_08A7B148;
    return;
L_08A7B148:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7808)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B1F8;
      }
      goto L_08A7B15C;
    }
L_08A7B15C:
    ctx.gpr[31] = (0x08A7B164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 421u, 0x08ACA8D4u>(ctx, &aot_mem) && ctx.pc == 0x08A7B164u) goto L_08A7B164;
    return;
L_08A7B164:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B17C;
      }
      goto L_08A7B16C;
    }
L_08A7B16C:
    ctx.gpr[31] = (0x08A7B174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 425u, 0x08ACA8FCu>(ctx, &aot_mem) && ctx.pc == 0x08A7B174u) goto L_08A7B174;
    return;
L_08A7B174:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B1F8;
      }
      goto L_08A7B17C;
    }
L_08A7B17C:
    ctx.gpr[4] = (0u | 258u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 258u);
    ctx.gpr[31] = (0x08A7B194u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7B194u) goto L_08A7B194;
    return;
L_08A7B194:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[7] = (0u | 63u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(10640));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A7B1F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A7B1F8u) goto L_08A7B1F8;
    return;
L_08A7B1F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A7B21Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 378u, 0x0886235Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7B21Cu) goto L_08A7B21C;
    return;
L_08A7B21C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B23C;
      }
      goto L_08A7B230;
    }
L_08A7B230:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A7B23C;
L_08A7B23C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B25C;
      }
      goto L_08A7B250;
    }
L_08A7B250:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A7B25C;
L_08A7B25C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B280;
      }
      goto L_08A7B274;
    }
L_08A7B274:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08A7B288;
      }
      goto L_08A7B280;
    }
L_08A7B280:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A7B288;
L_08A7B288:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B29C;
      }
      goto L_08A7B298;
    }
L_08A7B298:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A7B29C;
L_08A7B29C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7688)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B2B8;
      }
      goto L_08A7B2B0;
    }
L_08A7B2B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B2BC;
      }
      goto L_08A7B2B8;
    }
L_08A7B2B8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7688)));
    goto L_08A7B2BC;
L_08A7B2BC:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A7B3AC;
      }
      goto L_08A7B2CC;
    }
L_08A7B2CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3544)));
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B3AC;
      }
      goto L_08A7B2E8;
    }
L_08A7B2E8:
    ctx.gpr[4] = (0u | 232u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 232u);
    ctx.gpr[31] = (0x08A7B300u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7B300u) goto L_08A7B300;
    return;
L_08A7B300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3544)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    ctx.gpr[5] = (ctx.hi);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A7B33C;
      }
      goto L_08A7B330;
    }
L_08A7B330:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A7B33C;
L_08A7B33C:
    ctx.gpr[5] = (16948u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[5] = (0u | 5u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 63u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A7B39Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A7B39Cu) goto L_08A7B39C;
    return;
L_08A7B39C:
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3544), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A7B3AC;
L_08A7B3AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B3E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6720)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7B884;
      }
      goto L_08A7B440;
    }
L_08A7B440:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11856));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (17864u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 109u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 32u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(10640));
    ctx.gpr[19] = (2229u << 16u);
    goto L_08A7B494;
L_08A7B494:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[17] << 8u);
    ctx.gpr[5] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A7B864;
      }
      goto L_08A7B4B8;
    }
L_08A7B4B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B4F0;
      }
      goto L_08A7B4C4;
    }
L_08A7B4C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B4D8;
      }
      goto L_08A7B4D0;
    }
L_08A7B4D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B864;
      }
      goto L_08A7B4D8;
    }
L_08A7B4D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B500;
      }
      goto L_08A7B4F0;
    }
L_08A7B4F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    goto L_08A7B500;
L_08A7B500:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A7B510u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 304u, 0x08A6D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A7B510u) goto L_08A7B510;
    return;
L_08A7B510:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A7B6C4;
    }
    goto L_08A7B524;
L_08A7B524:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7B554;
      }
      goto L_08A7B534;
    }
L_08A7B534:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7B554;
      }
      goto L_08A7B544;
    }
L_08A7B544:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (0u | 6u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A7B6C4;
    }
    goto L_08A7B554;
L_08A7B554:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A7B564u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A7B564u) goto L_08A7B564;
    return;
L_08A7B564:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7B578u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7B578u) goto L_08A7B578;
    return;
L_08A7B578:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08A7B6C0;
      }
      goto L_08A7B588;
    }
L_08A7B588:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A7B67C;
      }
      goto L_08A7B598;
    }
L_08A7B598:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A7B658;
      }
      goto L_08A7B5A8;
    }
L_08A7B5A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B650;
      }
      goto L_08A7B5B8;
    }
L_08A7B5B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A7B5E4;
    }
    goto L_08A7B5C8;
L_08A7B5C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[4] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(103));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7B5F8;
      }
      goto L_08A7B5E4;
    }
L_08A7B5E4:
    ctx.gpr[4] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(108));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A7B5F8;
L_08A7B5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A7B604u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7B604u) goto L_08A7B604;
    return;
L_08A7B604:
    ctx.gpr[17] = (ctx.gpr[2] >> 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x08A7B618u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7B618u) goto L_08A7B618;
    return;
L_08A7B618:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11492)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11492), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11492)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08A7B69C;
      }
      goto L_08A7B648;
    }
L_08A7B648:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11492), static_cast<std::uint8_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_08A7B69C;
      }
      goto L_08A7B650;
    }
L_08A7B650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A7B6C4;
      }
      goto L_08A7B658;
    }
L_08A7B658:
    ctx.gpr[5] = (0u | 173u);
    ctx.gpr[6] = (0u | 6543u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7B69C;
      }
      goto L_08A7B67C;
    }
L_08A7B67C:
    ctx.gpr[5] = (0u | 183u);
    ctx.gpr[6] = (0u | 13961u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    goto L_08A7B69C;
L_08A7B69C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A7B6C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A7B6C0u) goto L_08A7B6C0;
    return;
L_08A7B6C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A7B6C4;
L_08A7B6C4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B864;
      }
      goto L_08A7B6E8;
    }
L_08A7B6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A7B6EC;
L_08A7B6EC:
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 74 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 76 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7B81C;
      }
      goto L_08A7B714;
    }
L_08A7B714:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B81C;
      }
      goto L_08A7B71C;
    }
L_08A7B71C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B734;
      }
      goto L_08A7B72C;
    }
L_08A7B72C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A7B83C;
      }
      goto L_08A7B734;
    }
L_08A7B734:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A7B744u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A7B744u) goto L_08A7B744;
    return;
L_08A7B744:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7B758u);
    ctx.gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7B758u) goto L_08A7B758;
    return;
L_08A7B758:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7B814;
      }
      goto L_08A7B768;
    }
L_08A7B768:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 13u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A7B788;
    }
    goto L_08A7B778;
L_08A7B778:
    ctx.gpr[4] = (0u | 6735u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7B7CC;
      }
      goto L_08A7B788;
    }
L_08A7B788:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (0u | 75u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7B7BC;
      }
      goto L_08A7B7AC;
    }
L_08A7B7AC:
    ctx.gpr[4] = (0u | 22000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7B7CC;
      }
      goto L_08A7B7BC;
    }
L_08A7B7BC:
    ctx.gpr[4] = (0u | 115u);
    ctx.gpr[5] = (0u | 18000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A7B7CC;
L_08A7B7CC:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11492)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11492), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11492)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B824;
      }
      goto L_08A7B80C;
    }
L_08A7B80C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B828;
      }
      goto L_08A7B814;
    }
L_08A7B814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A7B83C;
      }
      goto L_08A7B81C;
    }
L_08A7B81C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A7B83C;
      }
      goto L_08A7B824;
    }
L_08A7B824:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11492), static_cast<std::uint8_t>(ctx.gpr[30]));
    goto L_08A7B828;
L_08A7B828:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A7B838u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A7B838u) goto L_08A7B838;
    return;
L_08A7B838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A7B83C;
L_08A7B83C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A7B6EC;
    }
    goto L_08A7B864;
L_08A7B864:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6720)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7B494;
      }
      goto L_08A7B884;
    }
L_08A7B884:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B8C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5988)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A7BF2C;
      }
      goto L_08A7B928;
    }
L_08A7B928:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[30] = (0u | 1u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(10640));
    ctx.gpr[21] = (2229u << 16u);
    goto L_08A7B95C;
L_08A7B95C:
    ctx.gpr[22] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    ctx.gpr[3] = (0u | 221u);
    ctx.gpr[12] = (0u | 308u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[13] = (0u | 234u);
      if (branch_taken) {
          goto L_08A7BBB4;
      }
      goto L_08A7B998;
    }
L_08A7B998:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 206 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-59));
      if (branch_taken) {
          goto L_08A7BBB4;
      }
      goto L_08A7B9A4;
    }
L_08A7B9A4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24120)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B9BC:
    ctx.gpr[4] = (0u | 202u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7B9C8;
    }
L_08A7B9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(11504)));
      if (branch_taken) {
          goto L_08A7B9EC;
      }
      goto L_08A7B9DC;
    }
L_08A7B9DC:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(258) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7B9F8;
      }
      goto L_08A7B9EC;
    }
L_08A7B9EC:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(258) ? 1u : 0u);
    goto L_08A7B9F8;
L_08A7B9F8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BA08;
      }
      goto L_08A7BA00;
    }
L_08A7BA00:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A7BA08;
L_08A7BA08:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(11504), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BA10;
    }
L_08A7BA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BA24;
    }
L_08A7BA24:
    ctx.gpr[4] = (0u | 254u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BA30;
    }
L_08A7BA30:
    ctx.gpr[4] = (0u | 205u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BA44;
    }
L_08A7BA44:
    ctx.gpr[4] = (0u | 194u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BA58;
    }
L_08A7BA58:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[13]);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BA6C;
    }
L_08A7BA6C:
    ctx.gpr[4] = (0u | 295u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(912), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BA84;
    }
L_08A7BA84:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[12]);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BA98;
    }
L_08A7BA98:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BAA8;
    }
L_08A7BAA8:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[13]);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BABC;
    }
L_08A7BABC:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BACC;
    }
L_08A7BACC:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[12]);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BAE4;
    }
L_08A7BAE4:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[12]);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BAF8;
    }
L_08A7BAF8:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BB08;
    }
L_08A7BB08:
    ctx.gpr[4] = (0u | 13u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BB20;
    }
L_08A7BB20:
    ctx.gpr[4] = (0u | 5522u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BB34;
    }
L_08A7BB34:
    ctx.gpr[4] = (0u | 5518u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BB48;
    }
L_08A7BB48:
    ctx.gpr[4] = (0u | 5515u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BB5C;
    }
L_08A7BB5C:
    ctx.gpr[4] = (0u | 5516u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BB70;
    }
L_08A7BB70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[4] = (0u | 3u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5519));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BB90;
    }
L_08A7BB90:
    ctx.gpr[4] = (0u | 164u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BB9C;
    }
L_08A7BB9C:
    ctx.gpr[4] = (0u | 165u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BBA8;
    }
L_08A7BBA8:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BBBC;
      }
      goto L_08A7BBB4;
    }
L_08A7BBB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BF18;
      }
      goto L_08A7BBBC;
    }
L_08A7BBBC:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BC04;
      }
      goto L_08A7BBC4;
    }
L_08A7BBC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11496)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BBE8;
      }
      goto L_08A7BBDC;
    }
L_08A7BBDC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(11496), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BC4C;
      }
      goto L_08A7BBE8;
    }
L_08A7BBE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5988)));
      if (branch_taken) {
          goto L_08A7BF18;
      }
      goto L_08A7BC04;
    }
L_08A7BC04:
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A7BC50;
    }
    goto L_08A7BC0C;
L_08A7BC0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11500)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BC30;
      }
      goto L_08A7BC24;
    }
L_08A7BC24:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(11500), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BC4C;
      }
      goto L_08A7BC30;
    }
L_08A7BC30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5988)));
      if (branch_taken) {
          goto L_08A7BF18;
      }
      goto L_08A7BC4C;
    }
L_08A7BC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A7BC50;
L_08A7BC50:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (0u | 176u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08A7BC80;
      }
      goto L_08A7BC74;
    }
L_08A7BC74:
    ctx.gpr[4] = (0u | 28509u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BD44;
      }
      goto L_08A7BC80;
    }
L_08A7BC80:
    ctx.gpr[5] = (0u | 177u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7BC98;
      }
      goto L_08A7BC8C;
    }
L_08A7BC8C:
    ctx.gpr[4] = (0u | 32000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BD44;
      }
      goto L_08A7BC98;
    }
L_08A7BC98:
    ctx.gpr[5] = (0u | 184u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 185u);
      if (branch_taken) {
          goto L_08A7BCAC;
      }
      goto L_08A7BCA4;
    }
L_08A7BCA4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7BCE4;
      }
      goto L_08A7BCAC;
    }
L_08A7BCAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A7BCBCu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7BCBCu) goto L_08A7BCBC;
    return;
L_08A7BCBC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[23] >> 5u);
    ctx.gpr[31] = (0x08A7BCD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7BCD0u) goto L_08A7BCD0;
    return;
L_08A7BCD0:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A7BD44;
      }
      goto L_08A7BCE4;
    }
L_08A7BCE4:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BCF8;
      }
      goto L_08A7BCEC;
    }
L_08A7BCEC:
    ctx.gpr[4] = (0u | 5382u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BD44;
      }
      goto L_08A7BCF8;
    }
L_08A7BCF8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A7BD04u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7BD04u) goto L_08A7BD04;
    return;
L_08A7BD04:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(255) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7BD44;
      }
      goto L_08A7BD14;
    }
L_08A7BD14:
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(258) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BD44;
      }
      goto L_08A7BD20;
    }
L_08A7BD20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7BD34u);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7BD34u) goto L_08A7BD34;
    return;
L_08A7BD34:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A7BD44;
L_08A7BD44:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 202u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A7BD90;
      }
      goto L_08A7BD58;
    }
L_08A7BD58:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7688)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7BD90;
      }
      goto L_08A7BD70;
    }
L_08A7BD70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A7BD90;
L_08A7BD90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11493)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11493), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_08A7BDB8;
      }
      goto L_08A7BDAC;
    }
L_08A7BDAC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7BDBC;
      }
      goto L_08A7BDB8;
    }
L_08A7BDB8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08A7BDBC;
L_08A7BDBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_08A7BDD4;
      }
      goto L_08A7BDC8;
    }
L_08A7BDC8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A7BE70;
      }
      goto L_08A7BDD4;
    }
L_08A7BDD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (0u | 184u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7BE2C;
      }
      goto L_08A7BDFC;
    }
L_08A7BDFC:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (0u | 20u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7BE70;
      }
      goto L_08A7BE2C;
    }
L_08A7BE2C:
    ctx.gpr[5] = (0u | 185u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
      if (branch_taken) {
          goto L_08A7BE64;
      }
      goto L_08A7BE38;
    }
L_08A7BE38:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (0u | 107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7BE70;
      }
      goto L_08A7BE64;
    }
L_08A7BE64:
    ctx.gpr[4] = (0u | 63u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A7BE70;
L_08A7BE70:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A7BE84u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A7BE84u) goto L_08A7BE84;
    return;
L_08A7BE84:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08A7BEC0;
      }
      goto L_08A7BE8C;
    }
L_08A7BE8C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11493)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11493), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(98)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A7BEC0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A7BEC0u) goto L_08A7BEC0;
    return;
L_08A7BEC0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A7BF00;
      }
      goto L_08A7BEC8;
    }
L_08A7BEC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11493)));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11493), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A7BEF0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7BEF0u) goto L_08A7BEF0;
    return;
L_08A7BEF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A7BF00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A7BF00u) goto L_08A7BF00;
    return;
L_08A7BF00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5988)));
    goto L_08A7BF18;
L_08A7BF18:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B95C;
      }
      goto L_08A7BF2C;
    }
L_08A7BF2C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_08A7BF64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16512u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[30] = (2233u << 16u);
    ctx.gpr[4] = (16928u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 3u);
    ctx.gpr[22] = (0u | 7u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-3144));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(10640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    goto L_08A7BFFC;
L_08A7BFFC:
    ctx.gpr[31] = (0x08A7C004u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 99u, 0x088347F8u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0157(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0157_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_157(Runtime &runtime) {
    runtime.register_generated_unit(157u, 0x08A78000u, 16384u, &recomp_unit_0157, &recomp_unit_0157_entry);
    runtime.register_function(0x08A78000u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78040u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78070u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7807Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78084u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7808Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7809Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78104u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7810Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7814Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78188u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78204u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7820Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78220u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78230u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78268u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78270u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78278u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7827Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78290u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78318u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78344u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78354u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7835Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78364u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7836Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7837Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78394u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7840Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7841Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78424u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78434u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7843Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7844Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78454u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78464u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7846Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7847Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78484u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78494u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7849Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7850Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78514u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78524u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7852Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7853Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78544u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78554u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7855Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7856Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78574u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78584u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7858Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7859Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78604u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78614u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7861Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7862Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78634u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78644u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7864Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7865Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78664u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78674u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7867Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7868Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78694u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78704u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7870Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7871Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78724u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78734u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7873Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7874Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78754u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78764u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7876Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7877Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78784u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78794u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7879Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7880Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78814u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78824u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7882Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7883Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78844u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78854u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7885Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7886Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78874u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78884u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7888Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7889Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78904u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78914u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7891Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7892Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78934u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78944u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7894Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7895Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78964u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78974u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7897Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7898Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78994u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78ACCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78ADCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DE0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DF8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E00u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E10u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E50u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78ED4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EF0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EF8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F50u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FE0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79000u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79008u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79014u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79020u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7902Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79034u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79044u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7904Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7905Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79074u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79078u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79080u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7909Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79108u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79110u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79120u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79138u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7913Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79144u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79160u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79168u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79170u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7917Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79188u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79190u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7919Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79200u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79208u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79218u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79228u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79240u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79244u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7924Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79268u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79270u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79278u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79284u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79290u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79298u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79304u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79308u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79310u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7932Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79334u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7933Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79348u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79354u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7935Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79368u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79374u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79380u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79388u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79398u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79408u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79410u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79420u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79428u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79438u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79450u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79454u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7945Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7947Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79484u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7948Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79498u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79500u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79598u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79618u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79634u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79650u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7966Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79688u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79704u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79718u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79730u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79740u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79760u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79774u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7986Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79884u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79890u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7989Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A798B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A798DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A798F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79900u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79918u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79950u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79958u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7997Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79AA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79AB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B20u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BF8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79ED0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A000u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A04Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A13Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A188u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A224u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A250u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A290u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A338u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A34Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A38Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A40Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A438u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A44Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A48Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A494u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A504u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A518u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A528u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A568u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A610u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A640u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A668u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A698u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A708u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A738u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A760u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A798u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A804u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A820u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A834u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A83Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A870u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A89Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A904u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A910u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A924u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A93Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A94Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A978u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A990u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AACCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF20u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B00Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B01Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B040u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B058u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B084u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B09Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B100u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B108u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B148u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B15Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B164u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B16Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B174u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B17Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B194u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B1F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B21Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B230u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B23Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B250u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B25Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B274u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B280u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B288u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B298u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B29Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B300u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B330u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B33Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B39Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B440u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B494u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B500u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B510u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B524u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B534u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B544u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B554u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B564u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B578u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B588u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B598u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B604u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B618u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B648u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B650u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B658u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B67Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B69Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B714u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B71Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B72Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B734u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B744u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B758u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B768u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B778u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B788u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B80Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B814u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B81Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B824u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B828u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B838u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B83Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B864u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B884u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B928u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B95Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B998u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA00u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA10u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BABCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BACCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAF8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB20u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC50u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCD0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCF8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD20u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEF0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF00u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFFCu, &recomp_unit_0157, "recomp_unit_0157");
}
} // namespace psprecomp
