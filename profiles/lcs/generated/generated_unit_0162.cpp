#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0162[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8, 9,
    0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 14, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27,
    0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 36, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0,
    56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 62, 0, 0, 0, 63, 64, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 70, 71, 0, 0, 72, 73,
    0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 83, 0, 0, 84, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0,
    90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0,
    0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 123, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 127, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131,
    0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0,
    140, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0,
    0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 178,
    0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 193, 0, 0, 0,
    0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0,
    211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 219, 0, 0, 220, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0,
    0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0,
    229, 0, 230, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 237, 0, 238, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 243, 0, 244, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 264, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 0,
    0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0,
    0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 309, 0, 310, 0, 311,
    0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    331, 0, 332, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 338, 0,
    0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0,
    0, 0, 355, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 363, 0, 0,
    0, 0, 364, 0, 365, 0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 0, 0, 370, 0, 371, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 374, 0,
    375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0,
    0, 0, 384, 0, 0, 0, 385, 0, 386, 0, 387, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 391, 0, 392, 0, 0, 393, 0, 394, 395, 0, 0,
    396, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 409, 410, 0, 411, 0,
    0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 421,
    0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430,
    0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0,
    0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0,
    443, 0, 0, 444, 0, 445, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 456,
    0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0,
    0, 0, 0, 463, 0, 464, 0, 0, 0, 465, 0, 0, 466, 467, 468, 0, 469, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472,
    0, 0, 0, 0, 473, 0, 474, 0, 475, 0, 0, 0, 476, 0, 477, 0, 478, 0, 0, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0,
    485, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 0, 490, 0, 0, 491, 0, 492,
    493, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0, 500, 501, 0, 502, 0, 503, 0, 504, 0,
    0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 509, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0,
    0, 0, 514, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 518, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0,
    0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 535, 0, 536, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541,
    0, 0, 542, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0,
    548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553,
    0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 557, 558, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0,
    0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0,
    571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 574, 0, 575, 0, 576, 0, 0, 0, 0, 577, 0, 578, 0, 579, 0, 580, 0, 0, 0, 581, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 583,
    0, 0, 0, 584, 585, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0,
    591, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 594, 0, 595, 0, 0, 596, 0, 597, 0, 0, 0, 598, 0, 0, 0, 599, 0,
    0, 0, 0, 600, 601, 602, 0, 603, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 609, 0, 610, 0, 0, 611, 0, 612, 0, 0, 613, 0,
    614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 618, 0, 619, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0, 0, 623, 0, 624, 0, 625, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0,
    628, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 634, 0, 0, 0, 635, 0, 0, 636, 0,
    637, 0, 638, 639, 0, 640, 0, 641, 0, 0, 0, 0, 642, 0, 0, 643, 0, 0, 644, 0, 645, 0, 646, 647, 0, 648, 0, 0, 0, 649, 0, 0,
    0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 652, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0,
    0, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0,
    660, 0, 661, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 665, 0, 0, 666, 0, 0, 667, 668, 0, 669, 670, 671, 0, 0, 672, 0, 0, 673, 0,
    0, 0, 674, 0, 0, 675, 0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 682, 0,
    0, 683, 0, 684, 0, 685, 0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 690, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 694, 0, 0, 695, 0, 0, 696, 0, 0, 697, 698, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0,
    702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 705, 0, 0, 706, 707, 0, 708, 0, 0, 0, 0,
    0, 709, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0, 713, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 718, 0, 0, 719, 0, 0, 720, 721, 0, 722, 0, 0, 0, 0, 0, 723, 0,
    0, 0, 724, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 728, 0, 0,
    729, 0, 730, 0, 731, 0, 732, 0, 733, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 741, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 746, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 751,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 753, 0, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0,
    0, 0, 756, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 759, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 0, 0, 0, 0, 0, 762, 0, 763,
    0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0,
    0, 770, 0, 0, 0, 771, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 776, 0, 777, 778, 0, 0, 0, 779, 0, 0, 0, 0,
    0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 782, 0, 783, 0, 0, 784, 0, 0, 0, 0, 785, 0, 786,
    0, 787, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 794,
    0, 0, 0, 795, 0, 0, 0, 796, 0, 797, 0, 798, 0, 799, 0, 800, 0, 801, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 805, 0, 806, 0, 807, 0, 808, 0, 809, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 814, 0, 815, 0, 816, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0,
    819, 0, 820, 0, 821, 0, 0, 822, 0, 0, 823, 0, 0, 824, 0, 0, 825, 0, 0, 0, 826, 0, 0, 827, 0, 828, 0, 0, 0, 0, 829, 0,
    830, 0, 0, 0, 831, 0, 0, 0, 832, 833, 0, 0, 0, 0, 834, 0, 0, 835, 0, 836, 0, 0, 0, 837, 0, 0, 838, 0, 839, 0, 0, 840,
};
void recomp_unit_0162_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A8C000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0162[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A8C000;
    case 2u: goto L_08A8C014;
    case 3u: goto L_08A8C02C;
    case 4u: goto L_08A8C034;
    case 5u: goto L_08A8C04C;
    case 6u: goto L_08A8C058;
    case 7u: goto L_08A8C070;
    case 8u: goto L_08A8C078;
    case 9u: goto L_08A8C07C;
    case 10u: goto L_08A8C094;
    case 11u: goto L_08A8C0A0;
    case 12u: goto L_08A8C0B4;
    case 13u: goto L_08A8C0BC;
    case 14u: goto L_08A8C0C4;
    case 15u: goto L_08A8C0C8;
    case 16u: goto L_08A8C0D4;
    case 17u: goto L_08A8C0E4;
    case 18u: goto L_08A8C0FC;
    case 19u: goto L_08A8C110;
    case 20u: goto L_08A8C118;
    case 21u: goto L_08A8C120;
    case 22u: goto L_08A8C128;
    case 23u: goto L_08A8C140;
    case 24u: goto L_08A8C14C;
    case 25u: goto L_08A8C164;
    case 26u: goto L_08A8C174;
    case 27u: goto L_08A8C17C;
    case 28u: goto L_08A8C188;
    case 29u: goto L_08A8C19C;
    case 30u: goto L_08A8C1A4;
    case 31u: goto L_08A8C1AC;
    case 32u: goto L_08A8C1B8;
    case 33u: goto L_08A8C1C0;
    case 34u: goto L_08A8C1E8;
    case 35u: goto L_08A8C1F4;
    case 36u: goto L_08A8C1F8;
    case 37u: goto L_08A8C200;
    case 38u: goto L_08A8C238;
    case 39u: goto L_08A8C248;
    case 40u: goto L_08A8C25C;
    case 41u: goto L_08A8C26C;
    case 42u: goto L_08A8C280;
    case 43u: goto L_08A8C294;
    case 44u: goto L_08A8C2AC;
    case 45u: goto L_08A8C35C;
    case 46u: goto L_08A8C374;
    case 47u: goto L_08A8C390;
    case 48u: goto L_08A8C3A0;
    case 49u: goto L_08A8C3A8;
    case 50u: goto L_08A8C400;
    case 51u: goto L_08A8C42C;
    case 52u: goto L_08A8C454;
    case 53u: goto L_08A8C468;
    case 54u: goto L_08A8C470;
    case 55u: goto L_08A8C478;
    case 56u: goto L_08A8C480;
    case 57u: goto L_08A8C488;
    case 58u: goto L_08A8C498;
    case 59u: goto L_08A8C4C4;
    case 60u: goto L_08A8C4D4;
    case 61u: goto L_08A8C4E0;
    case 62u: goto L_08A8C4E4;
    case 63u: goto L_08A8C4F4;
    case 64u: goto L_08A8C4F8;
    case 65u: goto L_08A8C504;
    case 66u: goto L_08A8C520;
    case 67u: goto L_08A8C530;
    case 68u: goto L_08A8C554;
    case 69u: goto L_08A8C560;
    case 70u: goto L_08A8C568;
    case 71u: goto L_08A8C56C;
    case 72u: goto L_08A8C578;
    case 73u: goto L_08A8C57C;
    case 74u: goto L_08A8C588;
    case 75u: goto L_08A8C594;
    case 76u: goto L_08A8C5C4;
    case 77u: goto L_08A8C60C;
    case 78u: goto L_08A8C614;
    case 79u: goto L_08A8C630;
    case 80u: goto L_08A8C64C;
    case 81u: goto L_08A8C65C;
    case 82u: goto L_08A8C684;
    case 83u: goto L_08A8C698;
    case 84u: goto L_08A8C6A4;
    case 85u: goto L_08A8C6A8;
    case 86u: goto L_08A8C6C0;
    case 87u: goto L_08A8C6DC;
    case 88u: goto L_08A8C6E8;
    case 89u: goto L_08A8C6F8;
    case 90u: goto L_08A8C700;
    case 91u: goto L_08A8C708;
    case 92u: goto L_08A8C710;
    case 93u: goto L_08A8C720;
    case 94u: goto L_08A8C73C;
    case 95u: goto L_08A8C750;
    case 96u: goto L_08A8C758;
    case 97u: goto L_08A8C760;
    case 98u: goto L_08A8C790;
    case 99u: goto L_08A8C794;
    case 100u: goto L_08A8C7A0;
    case 101u: goto L_08A8C7BC;
    case 102u: goto L_08A8C7C4;
    case 103u: goto L_08A8C7CC;
    case 104u: goto L_08A8C7E0;
    case 105u: goto L_08A8C7F4;
    case 106u: goto L_08A8C804;
    case 107u: goto L_08A8C824;
    case 108u: goto L_08A8C830;
    case 109u: goto L_08A8C878;
    case 110u: goto L_08A8C888;
    case 111u: goto L_08A8C8A8;
    case 112u: goto L_08A8C8B0;
    case 113u: goto L_08A8C8C4;
    case 114u: goto L_08A8C8DC;
    case 115u: goto L_08A8C918;
    case 116u: goto L_08A8C920;
    case 117u: goto L_08A8C948;
    case 118u: goto L_08A8C954;
    case 119u: goto L_08A8C98C;
    case 120u: goto L_08A8C9B0;
    case 121u: goto L_08A8C9C8;
    case 122u: goto L_08A8C9D0;
    case 123u: goto L_08A8CA04;
    case 124u: goto L_08A8CA0C;
    case 125u: goto L_08A8CA20;
    case 126u: goto L_08A8CA38;
    case 127u: goto L_08A8CA88;
    case 128u: goto L_08A8CA8C;
    case 129u: goto L_08A8CAB8;
    case 130u: goto L_08A8CAEC;
    case 131u: goto L_08A8CAFC;
    case 132u: goto L_08A8CB04;
    case 133u: goto L_08A8CB0C;
    case 134u: goto L_08A8CB14;
    case 135u: goto L_08A8CB28;
    case 136u: goto L_08A8CB5C;
    case 137u: goto L_08A8CB68;
    case 138u: goto L_08A8CB70;
    case 139u: goto L_08A8CB78;
    case 140u: goto L_08A8CB80;
    case 141u: goto L_08A8CB94;
    case 142u: goto L_08A8CB9C;
    case 143u: goto L_08A8CBA4;
    case 144u: goto L_08A8CBB4;
    case 145u: goto L_08A8CBBC;
    case 146u: goto L_08A8CBC4;
    case 147u: goto L_08A8CBCC;
    case 148u: goto L_08A8CBF8;
    case 149u: goto L_08A8CC04;
    case 150u: goto L_08A8CC20;
    case 151u: goto L_08A8CC34;
    case 152u: goto L_08A8CC3C;
    case 153u: goto L_08A8CC44;
    case 154u: goto L_08A8CC58;
    case 155u: goto L_08A8CC60;
    case 156u: goto L_08A8CC74;
    case 157u: goto L_08A8CC84;
    case 158u: goto L_08A8CC94;
    case 159u: goto L_08A8CCA4;
    case 160u: goto L_08A8CCB8;
    case 161u: goto L_08A8CCE4;
    case 162u: goto L_08A8CD04;
    case 163u: goto L_08A8CD10;
    case 164u: goto L_08A8CD18;
    case 165u: goto L_08A8CD20;
    case 166u: goto L_08A8CD28;
    case 167u: goto L_08A8CD38;
    case 168u: goto L_08A8CD4C;
    case 169u: goto L_08A8CD64;
    case 170u: goto L_08A8CD7C;
    case 171u: goto L_08A8CD9C;
    case 172u: goto L_08A8CDB4;
    case 173u: goto L_08A8CDC0;
    case 174u: goto L_08A8CDC8;
    case 175u: goto L_08A8CDD8;
    case 176u: goto L_08A8CDE0;
    case 177u: goto L_08A8CDF4;
    case 178u: goto L_08A8CDFC;
    case 179u: goto L_08A8CE08;
    case 180u: goto L_08A8CE1C;
    case 181u: goto L_08A8CE38;
    case 182u: goto L_08A8CE4C;
    case 183u: goto L_08A8CE54;
    case 184u: goto L_08A8CE5C;
    case 185u: goto L_08A8CE64;
    case 186u: goto L_08A8CE90;
    case 187u: goto L_08A8CE9C;
    case 188u: goto L_08A8CEB8;
    case 189u: goto L_08A8CECC;
    case 190u: goto L_08A8CED4;
    case 191u: goto L_08A8CEDC;
    case 192u: goto L_08A8CEE8;
    case 193u: goto L_08A8CEF0;
    case 194u: goto L_08A8CF08;
    case 195u: goto L_08A8CF24;
    case 196u: goto L_08A8CF3C;
    case 197u: goto L_08A8CF4C;
    case 198u: goto L_08A8CF54;
    case 199u: goto L_08A8CF64;
    case 200u: goto L_08A8CF80;
    case 201u: goto L_08A8CF8C;
    case 202u: goto L_08A8CF94;
    case 203u: goto L_08A8CFA0;
    case 204u: goto L_08A8CFB0;
    case 205u: goto L_08A8CFB8;
    case 206u: goto L_08A8CFC0;
    case 207u: goto L_08A8CFC8;
    case 208u: goto L_08A8CFE8;
    case 209u: goto L_08A8CFF0;
    case 210u: goto L_08A8CFF8;
    case 211u: goto L_08A8D000;
    case 212u: goto L_08A8D008;
    case 213u: goto L_08A8D010;
    case 214u: goto L_08A8D018;
    case 215u: goto L_08A8D020;
    case 216u: goto L_08A8D028;
    case 217u: goto L_08A8D030;
    case 218u: goto L_08A8D038;
    case 219u: goto L_08A8D03C;
    case 220u: goto L_08A8D048;
    case 221u: goto L_08A8D050;
    case 222u: goto L_08A8D064;
    case 223u: goto L_08A8D074;
    case 224u: goto L_08A8D084;
    case 225u: goto L_08A8D094;
    case 226u: goto L_08A8D0A8;
    case 227u: goto L_08A8D0D4;
    case 228u: goto L_08A8D0F4;
    case 229u: goto L_08A8D100;
    case 230u: goto L_08A8D108;
    case 231u: goto L_08A8D110;
    case 232u: goto L_08A8D118;
    case 233u: goto L_08A8D128;
    case 234u: goto L_08A8D13C;
    case 235u: goto L_08A8D154;
    case 236u: goto L_08A8D16C;
    case 237u: goto L_08A8D184;
    case 238u: goto L_08A8D18C;
    case 239u: goto L_08A8D194;
    case 240u: goto L_08A8D1A0;
    case 241u: goto L_08A8D1B0;
    case 242u: goto L_08A8D1B8;
    case 243u: goto L_08A8D1CC;
    case 244u: goto L_08A8D1D4;
    case 245u: goto L_08A8D1E0;
    case 246u: goto L_08A8D1F4;
    case 247u: goto L_08A8D210;
    case 248u: goto L_08A8D224;
    case 249u: goto L_08A8D22C;
    case 250u: goto L_08A8D234;
    case 251u: goto L_08A8D23C;
    case 252u: goto L_08A8D268;
    case 253u: goto L_08A8D274;
    case 254u: goto L_08A8D290;
    case 255u: goto L_08A8D2A4;
    case 256u: goto L_08A8D2AC;
    case 257u: goto L_08A8D2B4;
    case 258u: goto L_08A8D2CC;
    case 259u: goto L_08A8D2DC;
    case 260u: goto L_08A8D2F0;
    case 261u: goto L_08A8D31C;
    case 262u: goto L_08A8D33C;
    case 263u: goto L_08A8D348;
    case 264u: goto L_08A8D350;
    case 265u: goto L_08A8D358;
    case 266u: goto L_08A8D360;
    case 267u: goto L_08A8D370;
    case 268u: goto L_08A8D384;
    case 269u: goto L_08A8D39C;
    case 270u: goto L_08A8D3C4;
    case 271u: goto L_08A8D3CC;
    case 272u: goto L_08A8D3D8;
    case 273u: goto L_08A8D3E8;
    case 274u: goto L_08A8D3F0;
    case 275u: goto L_08A8D404;
    case 276u: goto L_08A8D40C;
    case 277u: goto L_08A8D418;
    case 278u: goto L_08A8D438;
    case 279u: goto L_08A8D44C;
    case 280u: goto L_08A8D454;
    case 281u: goto L_08A8D45C;
    case 282u: goto L_08A8D48C;
    case 283u: goto L_08A8D4A0;
    case 284u: goto L_08A8D4A8;
    case 285u: goto L_08A8D4B0;
    case 286u: goto L_08A8D4C0;
    case 287u: goto L_08A8D4C8;
    case 288u: goto L_08A8D4D0;
    case 289u: goto L_08A8D4F8;
    case 290u: goto L_08A8D534;
    case 291u: goto L_08A8D53C;
    case 292u: goto L_08A8D58C;
    case 293u: goto L_08A8D598;
    case 294u: goto L_08A8D5A8;
    case 295u: goto L_08A8D5B0;
    case 296u: goto L_08A8D5C4;
    case 297u: goto L_08A8D5CC;
    case 298u: goto L_08A8D5D4;
    case 299u: goto L_08A8D5E4;
    case 300u: goto L_08A8D60C;
    case 301u: goto L_08A8D614;
    case 302u: goto L_08A8D61C;
    case 303u: goto L_08A8D664;
    case 304u: goto L_08A8D6AC;
    case 305u: goto L_08A8D6B8;
    case 306u: goto L_08A8D6CC;
    case 307u: goto L_08A8D6D4;
    case 308u: goto L_08A8D6E4;
    case 309u: goto L_08A8D6EC;
    case 310u: goto L_08A8D6F4;
    case 311u: goto L_08A8D6FC;
    case 312u: goto L_08A8D704;
    case 313u: goto L_08A8D70C;
    case 314u: goto L_08A8D714;
    case 315u: goto L_08A8D71C;
    case 316u: goto L_08A8D724;
    case 317u: goto L_08A8D73C;
    case 318u: goto L_08A8D770;
    case 319u: goto L_08A8D778;
    case 320u: goto L_08A8D79C;
    case 321u: goto L_08A8D7A4;
    case 322u: goto L_08A8D7AC;
    case 323u: goto L_08A8D7B4;
    case 324u: goto L_08A8D7C0;
    case 325u: goto L_08A8D7C8;
    case 326u: goto L_08A8D7F0;
    case 327u: goto L_08A8D824;
    case 328u: goto L_08A8D82C;
    case 329u: goto L_08A8D834;
    case 330u: goto L_08A8D870;
    case 331u: goto L_08A8D880;
    case 332u: goto L_08A8D888;
    case 333u: goto L_08A8D88C;
    case 334u: goto L_08A8D8B4;
    case 335u: goto L_08A8D8C8;
    case 336u: goto L_08A8D8E4;
    case 337u: goto L_08A8D8F0;
    case 338u: goto L_08A8D8F8;
    case 339u: goto L_08A8D910;
    case 340u: goto L_08A8D918;
    case 341u: goto L_08A8D960;
    case 342u: goto L_08A8D9A8;
    case 343u: goto L_08A8D9B0;
    case 344u: goto L_08A8D9B8;
    case 345u: goto L_08A8D9C0;
    case 346u: goto L_08A8D9C8;
    case 347u: goto L_08A8D9D0;
    case 348u: goto L_08A8D9F0;
    case 349u: goto L_08A8DA20;
    case 350u: goto L_08A8DA38;
    case 351u: goto L_08A8DA40;
    case 352u: goto L_08A8DA60;
    case 353u: goto L_08A8DA6C;
    case 354u: goto L_08A8DA78;
    case 355u: goto L_08A8DA88;
    case 356u: goto L_08A8DA8C;
    case 357u: goto L_08A8DA94;
    case 358u: goto L_08A8DAE8;
    case 359u: goto L_08A8DAF0;
    case 360u: goto L_08A8DB24;
    case 361u: goto L_08A8DB5C;
    case 362u: goto L_08A8DB64;
    case 363u: goto L_08A8DB74;
    case 364u: goto L_08A8DB88;
    case 365u: goto L_08A8DB90;
    case 366u: goto L_08A8DB9C;
    case 367u: goto L_08A8DBA4;
    case 368u: goto L_08A8DBAC;
    case 369u: goto L_08A8DBB4;
    case 370u: goto L_08A8DBC4;
    case 371u: goto L_08A8DBCC;
    case 372u: goto L_08A8DBDC;
    case 373u: goto L_08A8DBE4;
    case 374u: goto L_08A8DBF8;
    case 375u: goto L_08A8DC00;
    case 376u: goto L_08A8DC18;
    case 377u: goto L_08A8DC28;
    case 378u: goto L_08A8DC30;
    case 379u: goto L_08A8DC40;
    case 380u: goto L_08A8DC48;
    case 381u: goto L_08A8DC58;
    case 382u: goto L_08A8DC68;
    case 383u: goto L_08A8DC78;
    case 384u: goto L_08A8DC88;
    case 385u: goto L_08A8DC98;
    case 386u: goto L_08A8DCA0;
    case 387u: goto L_08A8DCA8;
    case 388u: goto L_08A8DCB0;
    case 389u: goto L_08A8DCC0;
    case 390u: goto L_08A8DCC8;
    case 391u: goto L_08A8DCD4;
    case 392u: goto L_08A8DCDC;
    case 393u: goto L_08A8DCE8;
    case 394u: goto L_08A8DCF0;
    case 395u: goto L_08A8DCF4;
    case 396u: goto L_08A8DD00;
    case 397u: goto L_08A8DD08;
    case 398u: goto L_08A8DD10;
    case 399u: goto L_08A8DD30;
    case 400u: goto L_08A8DD38;
    case 401u: goto L_08A8DD48;
    case 402u: goto L_08A8DD50;
    case 403u: goto L_08A8DD58;
    case 404u: goto L_08A8DD90;
    case 405u: goto L_08A8DDA4;
    case 406u: goto L_08A8DDCC;
    case 407u: goto L_08A8DDD8;
    case 408u: goto L_08A8DDE4;
    case 409u: goto L_08A8DDEC;
    case 410u: goto L_08A8DDF0;
    case 411u: goto L_08A8DDF8;
    case 412u: goto L_08A8DE04;
    case 413u: goto L_08A8DE14;
    case 414u: goto L_08A8DE24;
    case 415u: goto L_08A8DE30;
    case 416u: goto L_08A8DE38;
    case 417u: goto L_08A8DE40;
    case 418u: goto L_08A8DE48;
    case 419u: goto L_08A8DE64;
    case 420u: goto L_08A8DE6C;
    case 421u: goto L_08A8DE7C;
    case 422u: goto L_08A8DE84;
    case 423u: goto L_08A8DE94;
    case 424u: goto L_08A8DEC0;
    case 425u: goto L_08A8DEEC;
    case 426u: goto L_08A8DEF4;
    case 427u: goto L_08A8DF40;
    case 428u: goto L_08A8DF4C;
    case 429u: goto L_08A8DF68;
    case 430u: goto L_08A8DF7C;
    case 431u: goto L_08A8DF8C;
    case 432u: goto L_08A8DF94;
    case 433u: goto L_08A8DFB0;
    case 434u: goto L_08A8DFE8;
    case 435u: goto L_08A8E00C;
    case 436u: goto L_08A8E020;
    case 437u: goto L_08A8E028;
    case 438u: goto L_08A8E038;
    case 439u: goto L_08A8E04C;
    case 440u: goto L_08A8E060;
    case 441u: goto L_08A8E068;
    case 442u: goto L_08A8E078;
    case 443u: goto L_08A8E080;
    case 444u: goto L_08A8E08C;
    case 445u: goto L_08A8E094;
    case 446u: goto L_08A8E0A0;
    case 447u: goto L_08A8E0A8;
    case 448u: goto L_08A8E0B0;
    case 449u: goto L_08A8E0E0;
    case 450u: goto L_08A8E114;
    case 451u: goto L_08A8E134;
    case 452u: goto L_08A8E228;
    case 453u: goto L_08A8E24C;
    case 454u: goto L_08A8E258;
    case 455u: goto L_08A8E274;
    case 456u: goto L_08A8E27C;
    case 457u: goto L_08A8E288;
    case 458u: goto L_08A8E328;
    case 459u: goto L_08A8E378;
    case 460u: goto L_08A8E3A4;
    case 461u: goto L_08A8E3E8;
    case 462u: goto L_08A8E3F8;
    case 463u: goto L_08A8E40C;
    case 464u: goto L_08A8E414;
    case 465u: goto L_08A8E424;
    case 466u: goto L_08A8E430;
    case 467u: goto L_08A8E434;
    case 468u: goto L_08A8E438;
    case 469u: goto L_08A8E440;
    case 470u: goto L_08A8E448;
    case 471u: goto L_08A8E454;
    case 472u: goto L_08A8E47C;
    case 473u: goto L_08A8E490;
    case 474u: goto L_08A8E498;
    case 475u: goto L_08A8E4A0;
    case 476u: goto L_08A8E4B0;
    case 477u: goto L_08A8E4B8;
    case 478u: goto L_08A8E4C0;
    case 479u: goto L_08A8E4D0;
    case 480u: goto L_08A8E4D8;
    case 481u: goto L_08A8E4E0;
    case 482u: goto L_08A8E4E8;
    case 483u: goto L_08A8E4F0;
    case 484u: goto L_08A8E4F8;
    case 485u: goto L_08A8E500;
    case 486u: goto L_08A8E518;
    case 487u: goto L_08A8E520;
    case 488u: goto L_08A8E554;
    case 489u: goto L_08A8E55C;
    case 490u: goto L_08A8E568;
    case 491u: goto L_08A8E574;
    case 492u: goto L_08A8E57C;
    case 493u: goto L_08A8E580;
    case 494u: goto L_08A8E588;
    case 495u: goto L_08A8E594;
    case 496u: goto L_08A8E5B0;
    case 497u: goto L_08A8E5BC;
    case 498u: goto L_08A8E5C8;
    case 499u: goto L_08A8E5D4;
    case 500u: goto L_08A8E5DC;
    case 501u: goto L_08A8E5E0;
    case 502u: goto L_08A8E5E8;
    case 503u: goto L_08A8E5F0;
    case 504u: goto L_08A8E5F8;
    case 505u: goto L_08A8E61C;
    case 506u: goto L_08A8E628;
    case 507u: goto L_08A8E634;
    case 508u: goto L_08A8E640;
    case 509u: goto L_08A8E648;
    case 510u: goto L_08A8E64C;
    case 511u: goto L_08A8E654;
    case 512u: goto L_08A8E65C;
    case 513u: goto L_08A8E678;
    case 514u: goto L_08A8E688;
    case 515u: goto L_08A8E698;
    case 516u: goto L_08A8E6A4;
    case 517u: goto L_08A8E6B4;
    case 518u: goto L_08A8E6BC;
    case 519u: goto L_08A8E6CC;
    case 520u: goto L_08A8E6D4;
    case 521u: goto L_08A8E6F8;
    case 522u: goto L_08A8E704;
    case 523u: goto L_08A8E720;
    case 524u: goto L_08A8E728;
    case 525u: goto L_08A8E760;
    case 526u: goto L_08A8E7C4;
    case 527u: goto L_08A8E7D0;
    case 528u: goto L_08A8E7F4;
    case 529u: goto L_08A8E820;
    case 530u: goto L_08A8E83C;
    case 531u: goto L_08A8E864;
    case 532u: goto L_08A8E89C;
    case 533u: goto L_08A8E8D4;
    case 534u: goto L_08A8E8DC;
    case 535u: goto L_08A8E8E8;
    case 536u: goto L_08A8E8F0;
    case 537u: goto L_08A8E918;
    case 538u: goto L_08A8E920;
    case 539u: goto L_08A8E938;
    case 540u: goto L_08A8E940;
    case 541u: goto L_08A8E97C;
    case 542u: goto L_08A8E988;
    case 543u: goto L_08A8E98C;
    case 544u: goto L_08A8E9B8;
    case 545u: goto L_08A8E9CC;
    case 546u: goto L_08A8E9D8;
    case 547u: goto L_08A8E9EC;
    case 548u: goto L_08A8EA00;
    case 549u: goto L_08A8EA10;
    case 550u: goto L_08A8EA20;
    case 551u: goto L_08A8EA2C;
    case 552u: goto L_08A8EA60;
    case 553u: goto L_08A8EA7C;
    case 554u: goto L_08A8EA90;
    case 555u: goto L_08A8EA9C;
    case 556u: goto L_08A8EAA8;
    case 557u: goto L_08A8EAB0;
    case 558u: goto L_08A8EAB4;
    case 559u: goto L_08A8EAB8;
    case 560u: goto L_08A8EAC4;
    case 561u: goto L_08A8EAF4;
    case 562u: goto L_08A8EB08;
    case 563u: goto L_08A8EB28;
    case 564u: goto L_08A8EC1C;
    case 565u: goto L_08A8EC38;
    case 566u: goto L_08A8EC4C;
    case 567u: goto L_08A8EC54;
    case 568u: goto L_08A8EC60;
    case 569u: goto L_08A8EC6C;
    case 570u: goto L_08A8EC78;
    case 571u: goto L_08A8EC80;
    case 572u: goto L_08A8EC94;
    case 573u: goto L_08A8ECD0;
    case 574u: goto L_08A8ED04;
    case 575u: goto L_08A8ED0C;
    case 576u: goto L_08A8ED14;
    case 577u: goto L_08A8ED28;
    case 578u: goto L_08A8ED30;
    case 579u: goto L_08A8ED38;
    case 580u: goto L_08A8ED40;
    case 581u: goto L_08A8ED50;
    case 582u: goto L_08A8ED5C;
    case 583u: goto L_08A8ED7C;
    case 584u: goto L_08A8ED8C;
    case 585u: goto L_08A8ED90;
    case 586u: goto L_08A8ED98;
    case 587u: goto L_08A8EDA0;
    case 588u: goto L_08A8EDD0;
    case 589u: goto L_08A8EDDC;
    case 590u: goto L_08A8EDF8;
    case 591u: goto L_08A8EE00;
    case 592u: goto L_08A8EE20;
    case 593u: goto L_08A8EE34;
    case 594u: goto L_08A8EE3C;
    case 595u: goto L_08A8EE44;
    case 596u: goto L_08A8EE50;
    case 597u: goto L_08A8EE58;
    case 598u: goto L_08A8EE68;
    case 599u: goto L_08A8EE78;
    case 600u: goto L_08A8EE8C;
    case 601u: goto L_08A8EE90;
    case 602u: goto L_08A8EE94;
    case 603u: goto L_08A8EE9C;
    case 604u: goto L_08A8EEA4;
    case 605u: goto L_08A8EEF4;
    case 606u: goto L_08A8EF24;
    case 607u: goto L_08A8EF30;
    case 608u: goto L_08A8EF40;
    case 609u: goto L_08A8EF50;
    case 610u: goto L_08A8EF58;
    case 611u: goto L_08A8EF64;
    case 612u: goto L_08A8EF6C;
    case 613u: goto L_08A8EF78;
    case 614u: goto L_08A8EF80;
    case 615u: goto L_08A8EF94;
    case 616u: goto L_08A8EFC4;
    case 617u: goto L_08A8EFD4;
    case 618u: goto L_08A8F004;
    case 619u: goto L_08A8F00C;
    case 620u: goto L_08A8F014;
    case 621u: goto L_08A8F020;
    case 622u: goto L_08A8F02C;
    case 623u: goto L_08A8F03C;
    case 624u: goto L_08A8F044;
    case 625u: goto L_08A8F04C;
    case 626u: goto L_08A8F054;
    case 627u: goto L_08A8F06C;
    case 628u: goto L_08A8F080;
    case 629u: goto L_08A8F094;
    case 630u: goto L_08A8F0A8;
    case 631u: goto L_08A8F0B0;
    case 632u: goto L_08A8F0C8;
    case 633u: goto L_08A8F0D4;
    case 634u: goto L_08A8F0DC;
    case 635u: goto L_08A8F0EC;
    case 636u: goto L_08A8F0F8;
    case 637u: goto L_08A8F100;
    case 638u: goto L_08A8F108;
    case 639u: goto L_08A8F10C;
    case 640u: goto L_08A8F114;
    case 641u: goto L_08A8F11C;
    case 642u: goto L_08A8F130;
    case 643u: goto L_08A8F13C;
    case 644u: goto L_08A8F148;
    case 645u: goto L_08A8F150;
    case 646u: goto L_08A8F158;
    case 647u: goto L_08A8F15C;
    case 648u: goto L_08A8F164;
    case 649u: goto L_08A8F174;
    case 650u: goto L_08A8F194;
    case 651u: goto L_08A8F1A0;
    case 652u: goto L_08A8F1AC;
    case 653u: goto L_08A8F1B8;
    case 654u: goto L_08A8F1F8;
    case 655u: goto L_08A8F218;
    case 656u: goto L_08A8F224;
    case 657u: goto L_08A8F24C;
    case 658u: goto L_08A8F270;
    case 659u: goto L_08A8F278;
    case 660u: goto L_08A8F280;
    case 661u: goto L_08A8F288;
    case 662u: goto L_08A8F290;
    case 663u: goto L_08A8F298;
    case 664u: goto L_08A8F2A8;
    case 665u: goto L_08A8F2B4;
    case 666u: goto L_08A8F2C0;
    case 667u: goto L_08A8F2CC;
    case 668u: goto L_08A8F2D0;
    case 669u: goto L_08A8F2D8;
    case 670u: goto L_08A8F2DC;
    case 671u: goto L_08A8F2E0;
    case 672u: goto L_08A8F2EC;
    case 673u: goto L_08A8F2F8;
    case 674u: goto L_08A8F308;
    case 675u: goto L_08A8F314;
    case 676u: goto L_08A8F31C;
    case 677u: goto L_08A8F32C;
    case 678u: goto L_08A8F33C;
    case 679u: goto L_08A8F34C;
    case 680u: goto L_08A8F35C;
    case 681u: goto L_08A8F36C;
    case 682u: goto L_08A8F378;
    case 683u: goto L_08A8F384;
    case 684u: goto L_08A8F38C;
    case 685u: goto L_08A8F394;
    case 686u: goto L_08A8F39C;
    case 687u: goto L_08A8F3AC;
    case 688u: goto L_08A8F3C4;
    case 689u: goto L_08A8F3D8;
    case 690u: goto L_08A8F3F8;
    case 691u: goto L_08A8F420;
    case 692u: goto L_08A8F434;
    case 693u: goto L_08A8F44C;
    case 694u: goto L_08A8F48C;
    case 695u: goto L_08A8F498;
    case 696u: goto L_08A8F4A4;
    case 697u: goto L_08A8F4B0;
    case 698u: goto L_08A8F4B4;
    case 699u: goto L_08A8F4BC;
    case 700u: goto L_08A8F4D0;
    case 701u: goto L_08A8F4F4;
    case 702u: goto L_08A8F500;
    case 703u: goto L_08A8F53C;
    case 704u: goto L_08A8F548;
    case 705u: goto L_08A8F554;
    case 706u: goto L_08A8F560;
    case 707u: goto L_08A8F564;
    case 708u: goto L_08A8F56C;
    case 709u: goto L_08A8F584;
    case 710u: goto L_08A8F598;
    case 711u: goto L_08A8F624;
    case 712u: goto L_08A8F62C;
    case 713u: goto L_08A8F63C;
    case 714u: goto L_08A8F644;
    case 715u: goto L_08A8F658;
    case 716u: goto L_08A8F674;
    case 717u: goto L_08A8F6B0;
    case 718u: goto L_08A8F6BC;
    case 719u: goto L_08A8F6C8;
    case 720u: goto L_08A8F6D4;
    case 721u: goto L_08A8F6D8;
    case 722u: goto L_08A8F6E0;
    case 723u: goto L_08A8F6F8;
    case 724u: goto L_08A8F708;
    case 725u: goto L_08A8F714;
    case 726u: goto L_08A8F734;
    case 727u: goto L_08A8F75C;
    case 728u: goto L_08A8F774;
    case 729u: goto L_08A8F780;
    case 730u: goto L_08A8F788;
    case 731u: goto L_08A8F790;
    case 732u: goto L_08A8F798;
    case 733u: goto L_08A8F7A0;
    case 734u: goto L_08A8F7BC;
    case 735u: goto L_08A8F7D0;
    case 736u: goto L_08A8F7E0;
    case 737u: goto L_08A8F824;
    case 738u: goto L_08A8F834;
    case 739u: goto L_08A8F850;
    case 740u: goto L_08A8F860;
    case 741u: goto L_08A8F86C;
    case 742u: goto L_08A8F8B0;
    case 743u: goto L_08A8F8C0;
    case 744u: goto L_08A8F8DC;
    case 745u: goto L_08A8F8EC;
    case 746u: goto L_08A8F8F8;
    case 747u: goto L_08A8F934;
    case 748u: goto L_08A8F944;
    case 749u: goto L_08A8F960;
    case 750u: goto L_08A8F970;
    case 751u: goto L_08A8F97C;
    case 752u: goto L_08A8F9B8;
    case 753u: goto L_08A8F9C8;
    case 754u: goto L_08A8F9D4;
    case 755u: goto L_08A8F9EC;
    case 756u: goto L_08A8FA08;
    case 757u: goto L_08A8FA10;
    case 758u: goto L_08A8FA2C;
    case 759u: goto L_08A8FA34;
    case 760u: goto L_08A8FA50;
    case 761u: goto L_08A8FA58;
    case 762u: goto L_08A8FA74;
    case 763u: goto L_08A8FA7C;
    case 764u: goto L_08A8FA98;
    case 765u: goto L_08A8FAA0;
    case 766u: goto L_08A8FABC;
    case 767u: goto L_08A8FAC4;
    case 768u: goto L_08A8FAE0;
    case 769u: goto L_08A8FAE8;
    case 770u: goto L_08A8FB04;
    case 771u: goto L_08A8FB14;
    case 772u: goto L_08A8FB20;
    case 773u: goto L_08A8FB5C;
    case 774u: goto L_08A8FB6C;
    case 775u: goto L_08A8FBC4;
    case 776u: goto L_08A8FBD0;
    case 777u: goto L_08A8FBD8;
    case 778u: goto L_08A8FBDC;
    case 779u: goto L_08A8FBEC;
    case 780u: goto L_08A8FC08;
    case 781u: goto L_08A8FC44;
    case 782u: goto L_08A8FC4C;
    case 783u: goto L_08A8FC54;
    case 784u: goto L_08A8FC60;
    case 785u: goto L_08A8FC74;
    case 786u: goto L_08A8FC7C;
    case 787u: goto L_08A8FC84;
    case 788u: goto L_08A8FC90;
    case 789u: goto L_08A8FCA0;
    case 790u: goto L_08A8FCB4;
    case 791u: goto L_08A8FCC8;
    case 792u: goto L_08A8FCD0;
    case 793u: goto L_08A8FCEC;
    case 794u: goto L_08A8FCFC;
    case 795u: goto L_08A8FD0C;
    case 796u: goto L_08A8FD1C;
    case 797u: goto L_08A8FD24;
    case 798u: goto L_08A8FD2C;
    case 799u: goto L_08A8FD34;
    case 800u: goto L_08A8FD3C;
    case 801u: goto L_08A8FD44;
    case 802u: goto L_08A8FD4C;
    case 803u: goto L_08A8FD70;
    case 804u: goto L_08A8FDA8;
    case 805u: goto L_08A8FDB0;
    case 806u: goto L_08A8FDB8;
    case 807u: goto L_08A8FDC0;
    case 808u: goto L_08A8FDC8;
    case 809u: goto L_08A8FDD0;
    case 810u: goto L_08A8FDF0;
    case 811u: goto L_08A8FE48;
    case 812u: goto L_08A8FE74;
    case 813u: goto L_08A8FEA0;
    case 814u: goto L_08A8FEBC;
    case 815u: goto L_08A8FEC4;
    case 816u: goto L_08A8FECC;
    case 817u: goto L_08A8FED4;
    case 818u: goto L_08A8FEF8;
    case 819u: goto L_08A8FF00;
    case 820u: goto L_08A8FF08;
    case 821u: goto L_08A8FF10;
    case 822u: goto L_08A8FF1C;
    case 823u: goto L_08A8FF28;
    case 824u: goto L_08A8FF34;
    case 825u: goto L_08A8FF40;
    case 826u: goto L_08A8FF50;
    case 827u: goto L_08A8FF5C;
    case 828u: goto L_08A8FF64;
    case 829u: goto L_08A8FF78;
    case 830u: goto L_08A8FF80;
    case 831u: goto L_08A8FF90;
    case 832u: goto L_08A8FFA0;
    case 833u: goto L_08A8FFA4;
    case 834u: goto L_08A8FFB8;
    case 835u: goto L_08A8FFC4;
    case 836u: goto L_08A8FFCC;
    case 837u: goto L_08A8FFDC;
    case 838u: goto L_08A8FFE8;
    case 839u: goto L_08A8FFF0;
    case 840u: goto L_08A8FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A8C000:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 665u, 0x08A8BFECu>(ctx, &aot_mem); return;
      }
      goto L_08A8C014;
    }
L_08A8C014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8C02Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8C02Cu) goto L_08A8C02C;
    return;
L_08A8C02C:
    ctx.gpr[31] = (0x08A8C034u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D564u>(ctx, &aot_mem) && ctx.pc == 0x08A8C034u) goto L_08A8C034;
    return;
L_08A8C034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8C04Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8C04Cu) goto L_08A8C04C;
    return;
L_08A8C04C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8C078;
      }
      goto L_08A8C058;
    }
L_08A8C058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8C070u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8C070u) goto L_08A8C070;
    return;
L_08A8C070:
    ctx.gpr[31] = (0x08A8C078u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 535u, 0x08A8B2D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8C078u) goto L_08A8C078;
    return;
L_08A8C078:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    goto L_08A8C07C;
L_08A8C07C:
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
L_08A8C094:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C0BC;
      }
      goto L_08A8C0A0;
    }
L_08A8C0A0:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[8] & 8u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08A8C0C4;
      }
      goto L_08A8C0B4;
    }
L_08A8C0B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C0C8;
      }
      goto L_08A8C0BC;
    }
L_08A8C0BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C120;
      }
      goto L_08A8C0C4;
    }
L_08A8C0C4:
    ctx.gpr[6] = (ctx.gpr[8] & 3u);
    goto L_08A8C0C8;
L_08A8C0C8:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A8C110;
      }
      goto L_08A8C0D4;
    }
L_08A8C0D4:
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(224)));
    goto L_08A8C0E4;
L_08A8C0E4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8C118;
      }
      goto L_08A8C0FC;
    }
L_08A8C0FC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8C0E4;
      }
      goto L_08A8C110;
    }
L_08A8C110:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C120;
      }
      goto L_08A8C118;
    }
L_08A8C118:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A8C120;
L_08A8C120:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C128:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_08A8C14C;
      }
      goto L_08A8C140;
    }
L_08A8C140:
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C164;
      }
      goto L_08A8C14C;
    }
L_08A8C14C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08A8C174;
      }
      goto L_08A8C164;
    }
L_08A8C164:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    goto L_08A8C174;
L_08A8C174:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C17C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C1A4;
      }
      goto L_08A8C188;
    }
L_08A8C188:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    ctx.gpr[7] = (ctx.gpr[8] & 3u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8C1AC;
      }
      goto L_08A8C19C;
    }
L_08A8C19C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08A8C1C0;
      }
      goto L_08A8C1A4;
    }
L_08A8C1A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C1F8;
      }
      goto L_08A8C1AC;
    }
L_08A8C1AC:
    ctx.gpr[8] = (ctx.gpr[8] & 8u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08A8C1C0;
      }
      goto L_08A8C1B8;
    }
L_08A8C1B8:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08A8C1C0;
L_08A8C1C0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8C1F4;
      }
      goto L_08A8C1E8;
    }
L_08A8C1E8:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8C1F8;
      }
      goto L_08A8C1F4;
    }
L_08A8C1F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A8C1F8;
L_08A8C1F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C200:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A8C238u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A8C238u) goto L_08A8C238;
    return;
L_08A8C238:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A8C248u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A8C248u) goto L_08A8C248;
    return;
L_08A8C248:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8C294;
      }
      goto L_08A8C25C;
    }
L_08A8C25C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A8C26Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 603u, 0x0886B354u>(ctx, &aot_mem) && ctx.pc == 0x08A8C26Cu) goto L_08A8C26C;
    return;
L_08A8C26C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A8C280u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 99u, 0x089C8834u>(ctx, &aot_mem) && ctx.pc == 0x08A8C280u) goto L_08A8C280;
    return;
L_08A8C280:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8C25C;
      }
      goto L_08A8C294;
    }
L_08A8C294:
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
L_08A8C2AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24356)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24352)));
    ctx.gpr[7] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[16] = (ctx.gpr[7] + static_cast<std::uint32_t>(26144));
    ctx.gpr[6] = (ctx.gpr[4] | 14571u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24380)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24360), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24364), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (15744u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[2] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8C35Cu);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24384), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 232u, 0x08A7D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8C35Cu) goto L_08A8C35C;
    return;
L_08A8C35C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13172));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A8C374u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24388));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08A8C374u) goto L_08A8C374;
    return;
L_08A8C374:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 36u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26208));
    ctx.gpr[31] = (0x08A8C390u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21080));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AEF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C390u) goto L_08A8C390;
    return;
L_08A8C390:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C3A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C3A8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(26224));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(26256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C400:
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
L_08A8C42C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5876), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5875), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7624), 0u);
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5860), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C454:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8C468u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B314u>(ctx, &aot_mem) && ctx.pc == 0x08A8C468u) goto L_08A8C468;
    return;
L_08A8C468:
    ctx.gpr[31] = (0x08A8C470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 628u, 0x08AB3850u>(ctx, &aot_mem) && ctx.pc == 0x08A8C470u) goto L_08A8C470;
    return;
L_08A8C470:
    ctx.gpr[31] = (0x08A8C478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 561u, 0x089C661Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C478u) goto L_08A8C478;
    return;
L_08A8C478:
    ctx.gpr[31] = (0x08A8C480u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 441u, 0x089C5D2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C480u) goto L_08A8C480;
    return;
L_08A8C480:
    ctx.gpr[31] = (0x08A8C488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 720u, 0x0891B328u>(ctx, &aot_mem) && ctx.pc == 0x08A8C488u) goto L_08A8C488;
    return;
L_08A8C488:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C498:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7767)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 60 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7768)));
      if (branch_taken) {
          goto L_08A8C4D4;
      }
      goto L_08A8C4C4;
    }
L_08A8C4C4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-60));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8C4C4;
      }
      goto L_08A8C4D4;
    }
L_08A8C4D4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8C4F8;
      }
      goto L_08A8C4E0;
    }
L_08A8C4E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7644)));
    goto L_08A8C4E4;
L_08A8C4E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8C4E4;
      }
      goto L_08A8C4F4;
    }
L_08A8C4F4:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7644), ctx.gpr[6]);
    goto L_08A8C4F8;
L_08A8C4F8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08A8C504u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 57u, 0x0883C3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C504u) goto L_08A8C504;
    return;
L_08A8C504:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[31] = (0x08A8C520u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 212u, 0x08A82188u>(ctx, &aot_mem) && ctx.pc == 0x08A8C520u) goto L_08A8C520;
    return;
L_08A8C520:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7767)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7768)));
      if (branch_taken) {
          goto L_08A8C560;
      }
      goto L_08A8C554;
    }
L_08A8C554:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8C554;
      }
      goto L_08A8C560;
    }
L_08A8C560:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[7] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8C57C;
      }
      goto L_08A8C568;
    }
L_08A8C568:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7644)));
    goto L_08A8C56C;
L_08A8C56C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8C56C;
      }
      goto L_08A8C578;
    }
L_08A8C578:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7644), ctx.gpr[6]);
    goto L_08A8C57C;
L_08A8C57C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08A8C588u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 57u, 0x0883C3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C588u) goto L_08A8C588;
    return;
L_08A8C588:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C594:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A8C5C4u);
    // nop
    goto L_08A8C630;
L_08A8C5C4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5875), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5872), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5868), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 166u);
    ctx.gpr[31] = (0x08A8C60Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A8C60Cu) goto L_08A8C60C;
    return;
L_08A8C60C:
    ctx.gpr[31] = (0x08A8C614u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08A8C614u) goto L_08A8C614;
    return;
L_08A8C614:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7624)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C6A8;
      }
      goto L_08A8C64C;
    }
L_08A8C64C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A8C684;
      }
      goto L_08A8C65C;
    }
L_08A8C65C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17184)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17184), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7624)));
    goto L_08A8C684;
L_08A8C684:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A8C698u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C698u) goto L_08A8C698;
    return;
L_08A8C698:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08A8C6A4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 20u, 0x08968154u>(ctx, &aot_mem) && ctx.pc == 0x08A8C6A4u) goto L_08A8C6A4;
    return;
L_08A8C6A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7624), 0u);
    goto L_08A8C6A8;
L_08A8C6A8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5875), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C6C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7624)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C7F4;
      }
      goto L_08A8C6DC;
    }
L_08A8C6DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C750;
      }
      goto L_08A8C6E8;
    }
L_08A8C6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[7] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 54u);
      if (branch_taken) {
          goto L_08A8C750;
      }
      goto L_08A8C6F8;
    }
L_08A8C6F8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 57u);
      if (branch_taken) {
          goto L_08A8C750;
      }
      goto L_08A8C700;
    }
L_08A8C700:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 32u);
      if (branch_taken) {
          goto L_08A8C750;
      }
      goto L_08A8C708;
    }
L_08A8C708:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A8C750;
      }
      goto L_08A8C710;
    }
L_08A8C710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8C750;
      }
      goto L_08A8C720;
    }
L_08A8C720:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8C750;
      }
      goto L_08A8C73C;
    }
L_08A8C73C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C7F4;
      }
      goto L_08A8C750;
    }
L_08A8C750:
    ctx.gpr[31] = (0x08A8C758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8C758u) goto L_08A8C758;
    return;
L_08A8C758:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7624)));
      if (branch_taken) {
          goto L_08A8C794;
      }
      goto L_08A8C760;
    }
L_08A8C760:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8C790u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 452u, 0x089D7054u>(ctx, &aot_mem) && ctx.pc == 0x08A8C790u) goto L_08A8C790;
    return;
L_08A8C790:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7624)));
    goto L_08A8C794;
L_08A8C794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C7BC;
      }
      goto L_08A8C7A0;
    }
L_08A8C7A0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[5] = (0u | 18u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A8C7BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7624)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x08A8C7BCu) goto L_08A8C7BC;
    return;
L_08A8C7BC:
    ctx.gpr[31] = (0x08A8C7C4u);
    // nop
    goto L_08A8C630;
L_08A8C7C4:
    ctx.gpr[31] = (0x08A8C7CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A8C7CCu) goto L_08A8C7CC;
    return;
L_08A8C7CC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8C7E0u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8C7E0u) goto L_08A8C7E0;
    return;
L_08A8C7E0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A8C7F4;
L_08A8C7F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C804:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7624)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C8B0;
      }
      goto L_08A8C824;
    }
L_08A8C824:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A8C830u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C830u) goto L_08A8C830;
    return;
L_08A8C830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8C8B0;
      }
      goto L_08A8C878;
    }
L_08A8C878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C8A8;
      }
      goto L_08A8C888;
    }
L_08A8C888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[5] = (0u | 18u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A8C8A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7624)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x08A8C8A8u) goto L_08A8C8A8;
    return;
L_08A8C8A8:
    ctx.gpr[31] = (0x08A8C8B0u);
    // nop
    goto L_08A8C630;
L_08A8C8B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C8C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5860)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C918;
      }
      goto L_08A8C8DC;
    }
L_08A8C8DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5860)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(26320));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5860)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(26576));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5860), ctx.gpr[5]);
    goto L_08A8C918;
L_08A8C918:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C920:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26640));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5852), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C948:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5852), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C954:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-5852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CA8C;
      }
      goto L_08A8C98C;
    }
L_08A8C98C:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-5860)));
    ctx.gpr[5] = (18371u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 20467u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8CA20;
      }
      goto L_08A8C9B0;
    }
L_08A8C9B0:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26320));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_08A8C9C8;
L_08A8C9C8:
    ctx.gpr[31] = (0x08A8C9D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C9D0u) goto L_08A8C9D0;
    return;
L_08A8C9D0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
          goto L_08A8CA0C;
      }
      goto L_08A8CA04;
    }
L_08A8CA04:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    goto L_08A8CA0C;
L_08A8CA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-5860)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A8C9C8;
      }
      goto L_08A8CA20;
    }
L_08A8CA20:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8CA88;
      }
      goto L_08A8CA38;
    }
L_08A8CA38:
    ctx.gpr[4] = (ctx.gpr[21] << 4u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26320));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(26576));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26640));
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
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[31] = (0x08A8CA88u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5856)));
    goto L_08A8C594;
L_08A8CA88:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-5852), static_cast<std::uint8_t>(0u));
    goto L_08A8CA8C;
L_08A8CA8C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8CAB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(936)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CB04;
      }
      goto L_08A8CAEC;
    }
L_08A8CAEC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CB0C;
      }
      goto L_08A8CAFC;
    }
L_08A8CAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8D45C;
      }
      goto L_08A8CB04;
    }
L_08A8CB04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D4D0;
      }
      goto L_08A8CB0C;
    }
L_08A8CB0C:
    ctx.gpr[31] = (0x08A8CB14u);
    // nop
    goto L_08A8D9F0;
L_08A8CB14:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1133)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8D4D0;
      }
      goto L_08A8CB28;
    }
L_08A8CB28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[21] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(232)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D4D0;
      }
      goto L_08A8CB5C;
    }
L_08A8CB5C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A8CBCC;
      }
      goto L_08A8CB68;
    }
L_08A8CB68:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A8CE64;
      }
      goto L_08A8CB70;
    }
L_08A8CB70:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8D23C;
      }
      goto L_08A8CB78;
    }
L_08A8CB78:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A8D454;
      }
      goto L_08A8CB80;
    }
L_08A8CB80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (0u | 62u);
      if (branch_taken) {
          goto L_08A8CBA4;
      }
      goto L_08A8CB94;
    }
L_08A8CB94:
    ctx.gpr[31] = (0x08A8CB9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 272u, 0x0894528Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CB9Cu) goto L_08A8CB9C;
    return;
L_08A8CB9C:
    ctx.gpr[31] = (0x08A8CBA4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 419u, 0x089D6E20u>(ctx, &aot_mem) && ctx.pc == 0x08A8CBA4u) goto L_08A8CBA4;
    return;
L_08A8CBA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A8CBC4;
      }
      goto L_08A8CBB4;
    }
L_08A8CBB4:
    ctx.gpr[31] = (0x08A8CBBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 272u, 0x0894528Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CBBCu) goto L_08A8CBBC;
    return;
L_08A8CBBC:
    ctx.gpr[31] = (0x08A8CBC4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 434u, 0x089D6F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CBC4u) goto L_08A8CBC4;
    return;
L_08A8CBC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D4D0;
      }
      goto L_08A8CBCC;
    }
L_08A8CBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7852)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[17] < static_cast<std::uint32_t>(4096) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] < static_cast<std::uint32_t>(4608) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8CC34;
      }
      goto L_08A8CBF8;
    }
L_08A8CBF8:
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CC34;
      }
      goto L_08A8CC04;
    }
L_08A8CC04:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[31] = (0x08A8CC20u);
    ctx.gpr[7] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 386u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8CC20u) goto L_08A8CC20;
    return;
L_08A8CC20:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8CC34u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x08A8CC34u) goto L_08A8CC34;
    return;
L_08A8CC34:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8CDF4;
      }
      goto L_08A8CC3C;
    }
L_08A8CC3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CDF4;
      }
      goto L_08A8CC44;
    }
L_08A8CC44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(362)));
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(13216));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A8CC60;
      }
      goto L_08A8CC58;
    }
L_08A8CC58:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(362), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A8CC84;
      }
      goto L_08A8CC60;
    }
L_08A8CC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-100));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08A8CC74;
    }
    goto L_08A8CC74;
L_08A8CC74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8CC84u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 682u, 0x0899F844u>(ctx, &aot_mem) && ctx.pc == 0x08A8CC84u) goto L_08A8CC84;
    return;
L_08A8CC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CD10;
      }
      goto L_08A8CC94;
    }
L_08A8CC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CD10;
      }
      goto L_08A8CCA4;
    }
L_08A8CCA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8CD04;
      }
      goto L_08A8CCB8;
    }
L_08A8CCB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8CD10;
      }
      goto L_08A8CCE4;
    }
L_08A8CCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8CD10;
      }
      goto L_08A8CD04;
    }
L_08A8CD04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8CD10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 667u, 0x0889F3D8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD10u) goto L_08A8CD10;
    return;
L_08A8CD10:
    ctx.gpr[31] = (0x08A8CD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 495u, 0x08A923CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8CD18u) goto L_08A8CD18;
    return;
L_08A8CD18:
    ctx.gpr[31] = (0x08A8CD20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 271u, 0x088798E8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD20u) goto L_08A8CD20;
    return;
L_08A8CD20:
    ctx.gpr[31] = (0x08A8CD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 202u, 0x089ED4B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD28u) goto L_08A8CD28;
    return;
L_08A8CD28:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A8CD38u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8CD38u) goto L_08A8CD38;
    return;
L_08A8CD38:
    ctx.gpr[4] = (17786u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8CD4Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 156u, 0x088C8C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CD4Cu) goto L_08A8CD4C;
    return;
L_08A8CD4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8CD64u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 173u, 0x08A24E48u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD64u) goto L_08A8CD64;
    return;
L_08A8CD64:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5942), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5941), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8CD7Cu);
    ctx.gpr[4] = (0u | 720u);
    goto L_08A8C498;
L_08A8CD7C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6803), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A8CD9Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 116u, 0x08A88850u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD9Cu) goto L_08A8CD9C;
    return;
L_08A8CD9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A8CDB4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A8D4F8;
L_08A8CDB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8CDC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_08A8C454;
L_08A8CDC0:
    ctx.gpr[31] = (0x08A8CDC8u);
    // nop
    goto L_08A8C954;
L_08A8CDC8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A8CDD8u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 368u, 0x088E9FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A8CDD8u) goto L_08A8CDD8;
    return;
L_08A8CDD8:
    ctx.gpr[31] = (0x08A8CDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 655u, 0x0883B6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8CDE0u) goto L_08A8CDE0;
    return;
L_08A8CDE0:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-17136), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5851), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8CDF4;
L_08A8CDF4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CE5C;
      }
      goto L_08A8CDFC;
    }
L_08A8CDFC:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8CE08u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-7828)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A8CE08u) goto L_08A8CE08;
    return;
L_08A8CE08:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(0u));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-5944)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CE54;
      }
      goto L_08A8CE1C;
    }
L_08A8CE1C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[31] = (0x08A8CE38u);
    ctx.gpr[7] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 386u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8CE38u) goto L_08A8CE38;
    return;
L_08A8CE38:
    ctx.gpr[6] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8CE4Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x08A8CE4Cu) goto L_08A8CE4C;
    return;
L_08A8CE4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CE5C;
      }
      goto L_08A8CE54;
    }
L_08A8CE54:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-5944), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8CE5C;
L_08A8CE5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D4D0;
      }
      goto L_08A8CE64;
    }
L_08A8CE64:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7852)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[17] < static_cast<std::uint32_t>(4096) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[17] < static_cast<std::uint32_t>(4608) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8CECC;
      }
      goto L_08A8CE90;
    }
L_08A8CE90:
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CECC;
      }
      goto L_08A8CE9C;
    }
L_08A8CE9C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8CEB8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 386u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8CEB8u) goto L_08A8CEB8;
    return;
L_08A8CEB8:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8CECCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x08A8CECCu) goto L_08A8CECC;
    return;
L_08A8CECC:
    ctx.gpr[31] = (0x08A8CED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 30u, 0x089581F0u>(ctx, &aot_mem) && ctx.pc == 0x08A8CED4u) goto L_08A8CED4;
    return;
L_08A8CED4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CF94;
      }
      goto L_08A8CEDC;
    }
L_08A8CEDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(364)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CF94;
      }
      goto L_08A8CEE8;
    }
L_08A8CEE8:
    ctx.gpr[31] = (0x08A8CEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A8CEF0u) goto L_08A8CEF0;
    return;
L_08A8CEF0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24492)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24488)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8CF08u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A8CF08u) goto L_08A8CF08;
    return;
L_08A8CF08:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CF8C;
      }
      goto L_08A8CF24;
    }
L_08A8CF24:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(366)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(364), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_08A8CF54;
      }
      goto L_08A8CF3C;
    }
L_08A8CF3C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(366)));
    ctx.gpr[31] = (0x08A8CF4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21024));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A8CF4Cu) goto L_08A8CF4C;
    return;
L_08A8CF4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CF64;
      }
      goto L_08A8CF54;
    }
L_08A8CF54:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(366)));
    ctx.gpr[31] = (0x08A8CF64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21012));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A8CF64u) goto L_08A8CF64;
    return;
L_08A8CF64:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(366)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(366), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(366)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 29 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CF94;
      }
      goto L_08A8CF80;
    }
L_08A8CF80:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(366), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A8CF94;
      }
      goto L_08A8CF8C;
    }
L_08A8CF8C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(364), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8CF94;
L_08A8CF94:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(4001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CFB8;
      }
      goto L_08A8CFA0;
    }
L_08A8CFA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(364)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8CFB8;
      }
      goto L_08A8CFB0;
    }
L_08A8CFB0:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(364), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8CFB8;
L_08A8CFB8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8D1CC;
      }
      goto L_08A8CFC0;
    }
L_08A8CFC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D1CC;
      }
      goto L_08A8CFC8;
    }
L_08A8CFC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A8D010;
      }
      goto L_08A8CFE8;
    }
L_08A8CFE8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8D018;
      }
      goto L_08A8CFF0;
    }
L_08A8CFF0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A8D020;
      }
      goto L_08A8CFF8;
    }
L_08A8CFF8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A8D028;
      }
      goto L_08A8D000;
    }
L_08A8D000:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8D030;
      }
      goto L_08A8D008;
    }
L_08A8D008:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A8D038;
      }
      goto L_08A8D010;
    }
L_08A8D010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 100u);
      if (branch_taken) {
          goto L_08A8D03C;
      }
      goto L_08A8D018;
    }
L_08A8D018:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 200u);
      if (branch_taken) {
          goto L_08A8D03C;
      }
      goto L_08A8D020;
    }
L_08A8D020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 400u);
      if (branch_taken) {
          goto L_08A8D03C;
      }
      goto L_08A8D028;
    }
L_08A8D028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 600u);
      if (branch_taken) {
          goto L_08A8D03C;
      }
      goto L_08A8D030;
    }
L_08A8D030:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 900u);
      if (branch_taken) {
          goto L_08A8D03C;
      }
      goto L_08A8D038;
    }
L_08A8D038:
    ctx.gpr[4] = (0u | 1500u);
    goto L_08A8D03C;
L_08A8D03C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(361)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D050;
      }
      goto L_08A8D048;
    }
L_08A8D048:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(361), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A8D074;
      }
      goto L_08A8D050;
    }
L_08A8D050:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08A8D064;
    }
    goto L_08A8D064;
L_08A8D064:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8D074u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 682u, 0x0899F844u>(ctx, &aot_mem) && ctx.pc == 0x08A8D074u) goto L_08A8D074;
    return;
L_08A8D074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D100;
      }
      goto L_08A8D084;
    }
L_08A8D084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D100;
      }
      goto L_08A8D094;
    }
L_08A8D094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8D0F4;
      }
      goto L_08A8D0A8;
    }
L_08A8D0A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8D100;
      }
      goto L_08A8D0D4;
    }
L_08A8D0D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8D100;
      }
      goto L_08A8D0F4;
    }
L_08A8D0F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8D100u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 667u, 0x0889F3D8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D100u) goto L_08A8D100;
    return;
L_08A8D100:
    ctx.gpr[31] = (0x08A8D108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 495u, 0x08A923CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D108u) goto L_08A8D108;
    return;
L_08A8D108:
    ctx.gpr[31] = (0x08A8D110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 271u, 0x088798E8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D110u) goto L_08A8D110;
    return;
L_08A8D110:
    ctx.gpr[31] = (0x08A8D118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 202u, 0x089ED4B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D118u) goto L_08A8D118;
    return;
L_08A8D118:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A8D128u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8D128u) goto L_08A8D128;
    return;
L_08A8D128:
    ctx.gpr[4] = (17786u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8D13Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 156u, 0x088C8C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D13Cu) goto L_08A8D13C;
    return;
L_08A8D13C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8D154u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 208u, 0x08A25220u>(ctx, &aot_mem) && ctx.pc == 0x08A8D154u) goto L_08A8D154;
    return;
L_08A8D154:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5942), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5941), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8D16Cu);
    ctx.gpr[4] = (0u | 720u);
    goto L_08A8C498;
L_08A8D16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A8D184u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A8D4F8;
L_08A8D184:
    ctx.gpr[31] = (0x08A8D18Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 682u, 0x0899F844u>(ctx, &aot_mem) && ctx.pc == 0x08A8D18Cu) goto L_08A8D18C;
    return;
L_08A8D18C:
    ctx.gpr[31] = (0x08A8D194u);
    // nop
    goto L_08A8C954;
L_08A8D194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8D1A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_08A8C454;
L_08A8D1A0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A8D1B0u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 368u, 0x088E9FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D1B0u) goto L_08A8D1B0;
    return;
L_08A8D1B0:
    ctx.gpr[31] = (0x08A8D1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 655u, 0x0883B6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D1B8u) goto L_08A8D1B8;
    return;
L_08A8D1B8:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-17136), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5851), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8D1CC;
L_08A8D1CC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D234;
      }
      goto L_08A8D1D4;
    }
L_08A8D1D4:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8D1E0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-7828)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A8D1E0u) goto L_08A8D1E0;
    return;
L_08A8D1E0:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(0u));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-5943)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D22C;
      }
      goto L_08A8D1F4;
    }
L_08A8D1F4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8D210u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 386u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8D210u) goto L_08A8D210;
    return;
L_08A8D210:
    ctx.gpr[6] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8D224u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x08A8D224u) goto L_08A8D224;
    return;
L_08A8D224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D234;
      }
      goto L_08A8D22C;
    }
L_08A8D22C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-5943), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8D234;
L_08A8D234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D4D0;
      }
      goto L_08A8D23C;
    }
L_08A8D23C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7852)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[19] < static_cast<std::uint32_t>(4096) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(4608) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8D2A4;
      }
      goto L_08A8D268;
    }
L_08A8D268:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(2049) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D2A4;
      }
      goto L_08A8D274;
    }
L_08A8D274:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8D290u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 386u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8D290u) goto L_08A8D290;
    return;
L_08A8D290:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8D2A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x08A8D2A4u) goto L_08A8D2A4;
    return;
L_08A8D2A4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8D404;
      }
      goto L_08A8D2AC;
    }
L_08A8D2AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D404;
      }
      goto L_08A8D2B4;
    }
L_08A8D2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(13216));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A8D348;
      }
      goto L_08A8D2CC;
    }
L_08A8D2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D348;
      }
      goto L_08A8D2DC;
    }
L_08A8D2DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8D33C;
      }
      goto L_08A8D2F0;
    }
L_08A8D2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8D348;
      }
      goto L_08A8D31C;
    }
L_08A8D31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A8D348;
      }
      goto L_08A8D33C;
    }
L_08A8D33C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8D348u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 667u, 0x0889F3D8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D348u) goto L_08A8D348;
    return;
L_08A8D348:
    ctx.gpr[31] = (0x08A8D350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 495u, 0x08A923CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D350u) goto L_08A8D350;
    return;
L_08A8D350:
    ctx.gpr[31] = (0x08A8D358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 271u, 0x088798E8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D358u) goto L_08A8D358;
    return;
L_08A8D358:
    ctx.gpr[31] = (0x08A8D360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 202u, 0x089ED4B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D360u) goto L_08A8D360;
    return;
L_08A8D360:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A8D370u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8D370u) goto L_08A8D370;
    return;
L_08A8D370:
    ctx.gpr[4] = (17786u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8D384u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 156u, 0x088C8C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D384u) goto L_08A8D384;
    return;
L_08A8D384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8D39Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 208u, 0x08A25220u>(ctx, &aot_mem) && ctx.pc == 0x08A8D39Cu) goto L_08A8D39C;
    return;
L_08A8D39C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5942), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5941), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A8D3C4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A8D4F8;
L_08A8D3C4:
    ctx.gpr[31] = (0x08A8D3CCu);
    // nop
    goto L_08A8C948;
L_08A8D3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8D3D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_08A8C454;
L_08A8D3D8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A8D3E8u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 368u, 0x088E9FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D3E8u) goto L_08A8D3E8;
    return;
L_08A8D3E8:
    ctx.gpr[31] = (0x08A8D3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 655u, 0x0883B6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D3F0u) goto L_08A8D3F0;
    return;
L_08A8D3F0:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-17136), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5851), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A8D404;
L_08A8D404:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D44C;
      }
      goto L_08A8D40C;
    }
L_08A8D40C:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8D418u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-7828)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A8D418u) goto L_08A8D418;
    return;
L_08A8D418:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8D438u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 386u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8D438u) goto L_08A8D438;
    return;
L_08A8D438:
    ctx.gpr[6] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8D44Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x08A8D44Cu) goto L_08A8D44C;
    return;
L_08A8D44C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D4D0;
      }
      goto L_08A8D454;
    }
L_08A8D454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D4D0;
      }
      goto L_08A8D45C;
    }
L_08A8D45C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D4D0;
      }
      goto L_08A8D48C;
    }
L_08A8D48C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (0u | 62u);
      if (branch_taken) {
          goto L_08A8D4B0;
      }
      goto L_08A8D4A0;
    }
L_08A8D4A0:
    ctx.gpr[31] = (0x08A8D4A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 272u, 0x0894528Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D4A8u) goto L_08A8D4A8;
    return;
L_08A8D4A8:
    ctx.gpr[31] = (0x08A8D4B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 419u, 0x089D6E20u>(ctx, &aot_mem) && ctx.pc == 0x08A8D4B0u) goto L_08A8D4B0;
    return;
L_08A8D4B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A8D4D0;
      }
      goto L_08A8D4C0;
    }
L_08A8D4C0:
    ctx.gpr[31] = (0x08A8D4C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 272u, 0x0894528Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D4C8u) goto L_08A8D4C8;
    return;
L_08A8D4C8:
    ctx.gpr[31] = (0x08A8D4D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 434u, 0x089D6F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D4D0u) goto L_08A8D4D0;
    return;
L_08A8D4D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D4F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8D534u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21004));
    goto L_08A8C400;
L_08A8D534:
    ctx.gpr[31] = (0x08A8D53Cu);
    // nop
    goto L_08A8C630;
L_08A8D53C:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (8u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2992), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2993), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8D58Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 367u, 0x088E9FE0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D58Cu) goto L_08A8D58C;
    return;
L_08A8D58C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2994), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8D598u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 272u, 0x0894528Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D598u) goto L_08A8D598;
    return;
L_08A8D598:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A8D5B0;
      }
      goto L_08A8D5A8;
    }
L_08A8D5A8:
    ctx.gpr[31] = (0x08A8D5B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 545u, 0x0884E1D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D5B0u) goto L_08A8D5B0;
    return;
L_08A8D5B0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[31] = (0x08A8D5C4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 227u, 0x08ACCE60u>(ctx, &aot_mem) && ctx.pc == 0x08A8D5C4u) goto L_08A8D5C4;
    return;
L_08A8D5C4:
    ctx.gpr[31] = (0x08A8D5CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A24D8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D5CCu) goto L_08A8D5CC;
    return;
L_08A8D5CC:
    ctx.gpr[31] = (0x08A8D5D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 257u, 0x089451DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D5D4u) goto L_08A8D5D4;
    return;
L_08A8D5D4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A8D5E4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 261u, 0x089D9164u>(ctx, &aot_mem) && ctx.pc == 0x08A8D5E4u) goto L_08A8D5E4;
    return;
L_08A8D5E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(359)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8D60Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D60Cu) goto L_08A8D60C;
    return;
L_08A8D60C:
    ctx.gpr[31] = (0x08A8D614u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 496u, 0x089463A0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D614u) goto L_08A8D614;
    return;
L_08A8D614:
    ctx.gpr[31] = (0x08A8D61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 202u, 0x089ED4B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D61Cu) goto L_08A8D61C;
    return;
L_08A8D61C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8D664u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8D664u) goto L_08A8D664;
    return;
L_08A8D664:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A8D6ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8D6ACu) goto L_08A8D6AC;
    return;
L_08A8D6AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8D6B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6B8u) goto L_08A8D6B8;
    return;
L_08A8D6B8:
    ctx.gpr[4] = (17786u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8D6CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 156u, 0x088C8C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D6CCu) goto L_08A8D6CC;
    return;
L_08A8D6CC:
    ctx.gpr[31] = (0x08A8D6D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6D4u) goto L_08A8D6D4;
    return;
L_08A8D6D4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200), 0u);
    ctx.gpr[31] = (0x08A8D6E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 905u, 0x089CBD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D6E4u) goto L_08A8D6E4;
    return;
L_08A8D6E4:
    ctx.gpr[31] = (0x08A8D6ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 494u, 0x088EF0C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6ECu) goto L_08A8D6EC;
    return;
L_08A8D6EC:
    ctx.gpr[31] = (0x08A8D6F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 369u, 0x088EE5C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6F4u) goto L_08A8D6F4;
    return;
L_08A8D6F4:
    ctx.gpr[31] = (0x08A8D6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 655u, 0x0883B6C0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6FCu) goto L_08A8D6FC;
    return;
L_08A8D6FC:
    ctx.gpr[31] = (0x08A8D704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 55u, 0x0893C44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D704u) goto L_08A8D704;
    return;
L_08A8D704:
    ctx.gpr[31] = (0x08A8D70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 187u, 0x08844FA4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D70Cu) goto L_08A8D70C;
    return;
L_08A8D70C:
    ctx.gpr[31] = (0x08A8D714u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A8D714u) goto L_08A8D714;
    return;
L_08A8D714:
    ctx.gpr[31] = (0x08A8D71Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D71Cu) goto L_08A8D71C;
    return;
L_08A8D71C:
    ctx.gpr[31] = (0x08A8D724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 628u, 0x08AB3850u>(ctx, &aot_mem) && ctx.pc == 0x08A8D724u) goto L_08A8D724;
    return;
L_08A8D724:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20952));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(24476));
    ctx.gpr[31] = (0x08A8D73Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A8C400;
L_08A8D73C:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8D770u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 246u, 0x089A5174u>(ctx, &aot_mem) && ctx.pc == 0x08A8D770u) goto L_08A8D770;
    return;
L_08A8D770:
    ctx.gpr[31] = (0x08A8D778u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 604u, 0x089C68BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D778u) goto L_08A8D778;
    return;
L_08A8D778:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08A8D79Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 256u, 0x089A5210u>(ctx, &aot_mem) && ctx.pc == 0x08A8D79Cu) goto L_08A8D79C;
    return;
L_08A8D79C:
    ctx.gpr[31] = (0x08A8D7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 720u, 0x0891B328u>(ctx, &aot_mem) && ctx.pc == 0x08A8D7A4u) goto L_08A8D7A4;
    return;
L_08A8D7A4:
    ctx.gpr[31] = (0x08A8D7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 438u, 0x08986AACu>(ctx, &aot_mem) && ctx.pc == 0x08A8D7ACu) goto L_08A8D7AC;
    return;
L_08A8D7AC:
    ctx.gpr[31] = (0x08A8D7B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 467u, 0x088B6A78u>(ctx, &aot_mem) && ctx.pc == 0x08A8D7B4u) goto L_08A8D7B4;
    return;
L_08A8D7B4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A8D7C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 212u, 0x088BCCC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D7C0u) goto L_08A8D7C0;
    return;
L_08A8D7C0:
    ctx.gpr[31] = (0x08A8D7C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 95u, 0x089CC6ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8D7C8u) goto L_08A8D7C8;
    return;
L_08A8D7C8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D7F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8D82C;
      }
      goto L_08A8D824;
    }
L_08A8D824:
    ctx.gpr[31] = (0x08A8D82Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 707u, 0x0883B98Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D82Cu) goto L_08A8D82C;
    return;
L_08A8D82C:
    ctx.gpr[31] = (0x08A8D834u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 707u, 0x0883B98Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D834u) goto L_08A8D834;
    return;
L_08A8D834:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8D870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 272u, 0x0894528Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D870u) goto L_08A8D870;
    return;
L_08A8D870:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A8D88C;
      }
      goto L_08A8D880;
    }
L_08A8D880:
    ctx.gpr[31] = (0x08A8D888u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 545u, 0x0884E1D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D888u) goto L_08A8D888;
    return;
L_08A8D888:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1756), 0u);
    goto L_08A8D88C;
L_08A8D88C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8D8B4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 227u, 0x08ACCE60u>(ctx, &aot_mem) && ctx.pc == 0x08A8D8B4u) goto L_08A8D8B4;
    return;
L_08A8D8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8D8C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A24D8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D8C8u) goto L_08A8D8C8;
    return;
L_08A8D8C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8D8E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 257u, 0x089451DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D8E4u) goto L_08A8D8E4;
    return;
L_08A8D8E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8D8F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 261u, 0x089D9164u>(ctx, &aot_mem) && ctx.pc == 0x08A8D8F0u) goto L_08A8D8F0;
    return;
L_08A8D8F0:
    ctx.gpr[31] = (0x08A8D8F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 682u, 0x0899F844u>(ctx, &aot_mem) && ctx.pc == 0x08A8D8F8u) goto L_08A8D8F8;
    return;
L_08A8D8F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8D910u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D910u) goto L_08A8D910;
    return;
L_08A8D910:
    ctx.gpr[31] = (0x08A8D918u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 496u, 0x089463A0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D918u) goto L_08A8D918;
    return;
L_08A8D918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8D960u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8D960u) goto L_08A8D960;
    return;
L_08A8D960:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A8D9A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8D9A8u) goto L_08A8D9A8;
    return;
L_08A8D9A8:
    ctx.gpr[31] = (0x08A8D9B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x08A8D9B0u) goto L_08A8D9B0;
    return;
L_08A8D9B0:
    ctx.gpr[31] = (0x08A8D9B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A8D9B8u) goto L_08A8D9B8;
    return;
L_08A8D9B8:
    ctx.gpr[31] = (0x08A8D9C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D9C0u) goto L_08A8D9C0;
    return;
L_08A8D9C0:
    ctx.gpr[31] = (0x08A8D9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 438u, 0x08986AACu>(ctx, &aot_mem) && ctx.pc == 0x08A8D9C8u) goto L_08A8D9C8;
    return;
L_08A8D9C8:
    ctx.gpr[31] = (0x08A8D9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 271u, 0x088798E8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D9D0u) goto L_08A8D9D0;
    return;
L_08A8D9D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D9F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-5875)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E114;
      }
      goto L_08A8DA20;
    }
L_08A8DA20:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20912)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8DA38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E114;
      }
      goto L_08A8DA40;
    }
L_08A8DA40:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DB90;
      }
      goto L_08A8DA60;
    }
L_08A8DA60:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A8DA6Cu);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DA6Cu) goto L_08A8DA6C;
    return;
L_08A8DA6C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8DA8C;
      }
      goto L_08A8DA78;
    }
L_08A8DA78:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 166u);
    ctx.gpr[31] = (0x08A8DA88u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08A8DA88u) goto L_08A8DA88;
    return;
L_08A8DA88:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A8DA8C;
L_08A8DA8C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A8DBA4;
      }
      goto L_08A8DA94;
    }
L_08A8DA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(26288));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26288)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5872)));
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x08A8DAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8DAE8u) goto L_08A8DAE8;
    return;
L_08A8DAE8:
    ctx.gpr[31] = (0x08A8DAF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 154u, 0x08821154u>(ctx, &aot_mem) && ctx.pc == 0x08A8DAF0u) goto L_08A8DAF0;
    return;
L_08A8DAF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 48u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[5] = (0u | 11u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A8DB24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 755u, 0x0889F9A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DB24u) goto L_08A8DB24;
    return;
L_08A8DB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[18] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-17184)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-17184), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8DB5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x08A8DB5Cu) goto L_08A8DB5C;
    return;
L_08A8DB5C:
    ctx.gpr[31] = (0x08A8DB64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DB64u) goto L_08A8DB64;
    return;
L_08A8DB64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A8DB74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DB74u) goto L_08A8DB74;
    return;
L_08A8DB74:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A8DB88u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 11u, 0x089680B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DB88u) goto L_08A8DB88;
    return;
L_08A8DB88:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-5875), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08A8DBA4;
      }
      goto L_08A8DB90;
    }
L_08A8DB90:
    ctx.gpr[4] = (0u | 166u);
    ctx.gpr[31] = (0x08A8DB9Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A8DB9Cu) goto L_08A8DB9C;
    return;
L_08A8DB9C:
    ctx.gpr[31] = (0x08A8DBA4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08A8DBA4u) goto L_08A8DBA4;
    return;
L_08A8DBA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E114;
      }
      goto L_08A8DBAC;
    }
L_08A8DBAC:
    ctx.gpr[31] = (0x08A8DBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DBB4u) goto L_08A8DBB4;
    return;
L_08A8DBB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8DBDC;
      }
      goto L_08A8DBC4;
    }
L_08A8DBC4:
    ctx.gpr[31] = (0x08A8DBCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DBCCu) goto L_08A8DBCC;
    return;
L_08A8DBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8DC98;
      }
      goto L_08A8DBDC;
    }
L_08A8DBDC:
    ctx.gpr[31] = (0x08A8DBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DBE4u) goto L_08A8DBE4;
    return;
L_08A8DBE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(604)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7624)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8DC98;
      }
      goto L_08A8DBF8;
    }
L_08A8DBF8:
    ctx.gpr[31] = (0x08A8DC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC00u) goto L_08A8DC00;
    return;
L_08A8DC00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    ctx.gpr[31] = (0x08A8DC18u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC18u) goto L_08A8DC18;
    return;
L_08A8DC18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8DC28u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC28u) goto L_08A8DC28;
    return;
L_08A8DC28:
    ctx.gpr[31] = (0x08A8DC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC30u) goto L_08A8DC30;
    return;
L_08A8DC30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8DC98;
      }
      goto L_08A8DC40;
    }
L_08A8DC40:
    ctx.gpr[31] = (0x08A8DC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC48u) goto L_08A8DC48;
    return;
L_08A8DC48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(604)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7624)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8DC98;
      }
      goto L_08A8DC58;
    }
L_08A8DC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DC98;
      }
      goto L_08A8DC68;
    }
L_08A8DC68:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-5875), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A8DC78u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC78u) goto L_08A8DC78;
    return;
L_08A8DC78:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    ctx.gpr[31] = (0x08A8DC88u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC88u) goto L_08A8DC88;
    return;
L_08A8DC88:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A8DC98;
L_08A8DC98:
    ctx.gpr[31] = (0x08A8DCA0u);
    // nop
    goto L_08A8C6C0;
L_08A8DCA0:
    ctx.gpr[31] = (0x08A8DCA8u);
    // nop
    goto L_08A8C804;
L_08A8DCA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E114;
      }
      goto L_08A8DCB0;
    }
L_08A8DCB0:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[31] = (0x08A8DCC0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DCC0u) goto L_08A8DCC0;
    return;
L_08A8DCC0:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
        goto L_08A8DCF4;
    }
    goto L_08A8DCC8;
L_08A8DCC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[31] = (0x08A8DCD4u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DCD4u) goto L_08A8DCD4;
    return;
L_08A8DCD4:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
        goto L_08A8DCF4;
    }
    goto L_08A8DCDC;
L_08A8DCDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[31] = (0x08A8DCE8u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DCE8u) goto L_08A8DCE8;
    return;
L_08A8DCE8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8DE38;
      }
      goto L_08A8DCF0;
    }
L_08A8DCF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    goto L_08A8DCF4;
L_08A8DCF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DE38;
      }
      goto L_08A8DD00;
    }
L_08A8DD00:
    ctx.gpr[31] = (0x08A8DD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DD08u) goto L_08A8DD08;
    return;
L_08A8DD08:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
        goto L_08A8DD58;
    }
    goto L_08A8DD10;
L_08A8DD10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(616)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
        goto L_08A8DD58;
    }
    goto L_08A8DD30;
L_08A8DD30:
    ctx.gpr[31] = (0x08A8DD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DD38u) goto L_08A8DD38;
    return;
L_08A8DD38:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8DD48u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DD48u) goto L_08A8DD48;
    return;
L_08A8DD48:
    ctx.gpr[31] = (0x08A8DD50u);
    // nop
    goto L_08A8C6C0;
L_08A8DD50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DE40;
      }
      goto L_08A8DD58;
    }
L_08A8DD58:
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2500));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(400), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8DD90u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 386u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8DD90u) goto L_08A8DD90;
    return;
L_08A8DD90:
    ctx.gpr[6] = (16416u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A8DDA4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x08A8DDA4u) goto L_08A8DDA4;
    return;
L_08A8DDA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-5875), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-5864), ctx.gpr[4]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A8DDF8;
      }
      goto L_08A8DDCC;
    }
L_08A8DDCC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A8DDD8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DDD8u) goto L_08A8DDD8;
    return;
L_08A8DDD8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DDF0;
      }
      goto L_08A8DDE4;
    }
L_08A8DDE4:
    ctx.gpr[31] = (0x08A8DDECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A8DDECu) goto L_08A8DDEC;
    return;
L_08A8DDEC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A8DDF0;
L_08A8DDF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A8DDF8;
L_08A8DDF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A8DE04u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20920));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE04u) goto L_08A8DE04;
    return;
L_08A8DE04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 4500u);
    ctx.gpr[31] = (0x08A8DE14u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A48u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE14u) goto L_08A8DE14;
    return;
L_08A8DE14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A8DE24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DE24u) goto L_08A8DE24;
    return;
L_08A8DE24:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08A8DE30u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 20u, 0x08968154u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE30u) goto L_08A8DE30;
    return;
L_08A8DE30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DE40;
      }
      goto L_08A8DE38;
    }
L_08A8DE38:
    ctx.gpr[31] = (0x08A8DE40u);
    // nop
    goto L_08A8C6C0;
L_08A8DE40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E114;
      }
      goto L_08A8DE48;
    }
L_08A8DE48:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5864)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DF8C;
      }
      goto L_08A8DE64;
    }
L_08A8DE64:
    ctx.gpr[31] = (0x08A8DE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 755u, 0x0891B674u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE6Cu) goto L_08A8DE6C;
    return;
L_08A8DE6C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(26304));
    ctx.gpr[31] = (0x08A8DE7Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 348u, 0x089860B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE7Cu) goto L_08A8DE7C;
    return;
L_08A8DE7C:
    ctx.gpr[31] = (0x08A8DE84u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 604u, 0x089C68BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8DE84u) goto L_08A8DE84;
    return;
L_08A8DE84:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[31] = (0x08A8DE94u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE94u) goto L_08A8DE94;
    return;
L_08A8DE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A8DEC0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8DEC0u) goto L_08A8DEC0;
    return;
L_08A8DEC0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5868)));
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x08A8DEECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7624)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8DEECu) goto L_08A8DEEC;
    return;
L_08A8DEEC:
    ctx.gpr[31] = (0x08A8DEF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7624)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 154u, 0x08821154u>(ctx, &aot_mem) && ctx.pc == 0x08A8DEF4u) goto L_08A8DEF4;
    return;
L_08A8DEF4:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5864), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8DF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 281u, 0x088799D8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DF40u) goto L_08A8DF40;
    return;
L_08A8DF40:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08A8DF4Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 485u, 0x08986E30u>(ctx, &aot_mem) && ctx.pc == 0x08A8DF4Cu) goto L_08A8DF4C;
    return;
L_08A8DF4C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8DF68u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 386u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8DF68u) goto L_08A8DF68;
    return;
L_08A8DF68:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8DF7Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x08A8DF7Cu) goto L_08A8DF7C;
    return;
L_08A8DF7C:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-5875), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A8DF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 757u, 0x0891B698u>(ctx, &aot_mem) && ctx.pc == 0x08A8DF8Cu) goto L_08A8DF8C;
    return;
L_08A8DF8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E114;
      }
      goto L_08A8DF94;
    }
L_08A8DF94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5864)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8E060;
      }
      goto L_08A8DFB0;
    }
L_08A8DFB0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 0u);
        goto L_08A8DFE8;
    }
    goto L_08A8DFE8;
L_08A8DFE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8E00Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E00Cu) goto L_08A8E00C;
    return;
L_08A8E00C:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A8E020u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E020u) goto L_08A8E020;
    return;
L_08A8E020:
    ctx.gpr[31] = (0x08A8E028u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7624)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E028u) goto L_08A8E028;
    return;
L_08A8E028:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(604), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08A8E038u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-5875), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E038u) goto L_08A8E038;
    return;
L_08A8E038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8E04Cu);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E04Cu) goto L_08A8E04C;
    return;
L_08A8E04C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A8E060;
L_08A8E060:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E114;
      }
      goto L_08A8E068;
    }
L_08A8E068:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[31] = (0x08A8E078u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E078u) goto L_08A8E078;
    return;
L_08A8E078:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8E114;
      }
      goto L_08A8E080;
    }
L_08A8E080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[31] = (0x08A8E08Cu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E08Cu) goto L_08A8E08C;
    return;
L_08A8E08C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8E114;
      }
      goto L_08A8E094;
    }
L_08A8E094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[31] = (0x08A8E0A0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E0A0u) goto L_08A8E0A0;
    return;
L_08A8E0A0:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8E114;
      }
      goto L_08A8E0A8;
    }
L_08A8E0A8:
    ctx.gpr[31] = (0x08A8E0B0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A8E0B0u) goto L_08A8E0B0;
    return;
L_08A8E0B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[5] = (0u | 18u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A8E0E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7624)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x08A8E0E0u) goto L_08A8E0E0;
    return;
L_08A8E0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7624)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17184)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17184), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-7624), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-5875), static_cast<std::uint8_t>(0u));
    goto L_08A8E114;
L_08A8E114:
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
L_08A8E134:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24420)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24416)));
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24424), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24448)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[15] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[9] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(24452), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[25] = (2229u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24468)));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(24460), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(24432), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(24428), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(24436), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[24] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(24456), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[2] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24472), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5848), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5844), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8E24Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7836), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 230u, 0x08985898u>(ctx, &aot_mem) && ctx.pc == 0x08A8E24Cu) goto L_08A8E24C;
    return;
L_08A8E24C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E258:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8E274u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 295u, 0x08985D40u>(ctx, &aot_mem) && ctx.pc == 0x08A8E274u) goto L_08A8E274;
    return;
L_08A8E274:
    ctx.gpr[31] = (0x08A8E27Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08A8E27Cu) goto L_08A8E27C;
    return;
L_08A8E27C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E288:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24500)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24496)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24524)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24532));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24504), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(808), 0u);
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24512), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24508), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24516), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(24528), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E328:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8140));
    ctx.gpr[6] = (15395u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (15523u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31072));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E378:
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
L_08A8E3A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-5840)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A8E728;
      }
      goto L_08A8E3E8;
    }
L_08A8E3E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E728;
      }
      goto L_08A8E3F8;
    }
L_08A8E3F8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(27332), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A8E40Cu);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 514u, 0x08A96424u>(ctx, &aot_mem) && ctx.pc == 0x08A8E40Cu) goto L_08A8E40C;
    return;
L_08A8E40C:
    ctx.gpr[31] = (0x08A8E414u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A8E414u) goto L_08A8E414;
    return;
L_08A8E414:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8E434;
      }
      goto L_08A8E424;
    }
L_08A8E424:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A8E438;
      }
      goto L_08A8E430;
    }
L_08A8E430:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A8E434;
L_08A8E434:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08A8E438;
L_08A8E438:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E490;
      }
      goto L_08A8E440;
    }
L_08A8E440:
    ctx.gpr[31] = (0x08A8E448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 201u, 0x08A4CCF8u>(ctx, &aot_mem) && ctx.pc == 0x08A8E448u) goto L_08A8E448;
    return;
L_08A8E448:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[31] = (0x08A8E454u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A8E454u) goto L_08A8E454;
    return;
L_08A8E454:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25412)));
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-18488));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A8E4A0;
      }
      goto L_08A8E47C;
    }
L_08A8E47C:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25412), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A8E4B0;
      }
      goto L_08A8E490;
    }
L_08A8E490:
    ctx.gpr[31] = (0x08A8E498u);
    // nop
    goto L_08A8E9D8;
L_08A8E498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E728;
      }
      goto L_08A8E4A0;
    }
L_08A8E4A0:
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25412), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A8E4B0;
L_08A8E4B0:
    ctx.gpr[31] = (0x08A8E4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A8E4B8u) goto L_08A8E4B8;
    return;
L_08A8E4B8:
    ctx.gpr[31] = (0x08A8E4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E4C0u) goto L_08A8E4C0;
    return;
L_08A8E4C0:
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8E4D0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x08A8E4D0u) goto L_08A8E4D0;
    return;
L_08A8E4D0:
    ctx.gpr[31] = (0x08A8E4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E4D8u) goto L_08A8E4D8;
    return;
L_08A8E4D8:
    ctx.gpr[31] = (0x08A8E4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08A8E4E0u) goto L_08A8E4E0;
    return;
L_08A8E4E0:
    ctx.gpr[31] = (0x08A8E4E8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E4E8u) goto L_08A8E4E8;
    return;
L_08A8E4E8:
    ctx.gpr[31] = (0x08A8E4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E4F0u) goto L_08A8E4F0;
    return;
L_08A8E4F0:
    ctx.gpr[31] = (0x08A8E4F8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08A8E4F8u) goto L_08A8E4F8;
    return;
L_08A8E4F8:
    ctx.gpr[31] = (0x08A8E500u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E500u) goto L_08A8E500;
    return;
L_08A8E500:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A8E518u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E518u) goto L_08A8E518;
    return;
L_08A8E518:
    ctx.gpr[31] = (0x08A8E520u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8E520u) goto L_08A8E520;
    return;
L_08A8E520:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[4] = (16179u << 16u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(25416), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[30] = (2227u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-20880));
    goto L_08A8E554;
L_08A8E554:
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_08A8E588;
    }
    goto L_08A8E55C;
L_08A8E55C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A8E568u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E568u) goto L_08A8E568;
    return;
L_08A8E568:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E580;
      }
      goto L_08A8E574;
    }
L_08A8E574:
    ctx.gpr[31] = (0x08A8E57Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A8E57Cu) goto L_08A8E57C;
    return;
L_08A8E57C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A8E580;
L_08A8E580:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08A8E588;
L_08A8E588:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E6B4;
      }
      goto L_08A8E594;
    }
L_08A8E594:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(25416)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A8E5B0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A8E5B0u) goto L_08A8E5B0;
    return;
L_08A8E5B0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A8E5E8;
      }
      goto L_08A8E5BC;
    }
L_08A8E5BC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A8E5C8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E5C8u) goto L_08A8E5C8;
    return;
L_08A8E5C8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E5E0;
      }
      goto L_08A8E5D4;
    }
L_08A8E5D4:
    ctx.gpr[31] = (0x08A8E5DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A8E5DCu) goto L_08A8E5DC;
    return;
L_08A8E5DC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A8E5E0;
L_08A8E5E0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A8E5E8;
L_08A8E5E8:
    ctx.gpr[31] = (0x08A8E5F0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 430u, 0x08913C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E5F0u) goto L_08A8E5F0;
    return;
L_08A8E5F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E61C;
      }
      goto L_08A8E5F8;
    }
L_08A8E5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(25416)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(25416), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A8E61Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A8E61Cu) goto L_08A8E61C;
    return;
L_08A8E61C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A8E654;
      }
      goto L_08A8E628;
    }
L_08A8E628:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A8E634u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8E634u) goto L_08A8E634;
    return;
L_08A8E634:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E64C;
      }
      goto L_08A8E640;
    }
L_08A8E640:
    ctx.gpr[31] = (0x08A8E648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A8E648u) goto L_08A8E648;
    return;
L_08A8E648:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A8E64C;
L_08A8E64C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A8E654;
L_08A8E654:
    ctx.gpr[31] = (0x08A8E65Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E65Cu) goto L_08A8E65C;
    return;
L_08A8E65C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25412)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08A8E678u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A8E760;
L_08A8E678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
      if (branch_taken) {
          goto L_08A8E698;
      }
      goto L_08A8E688;
    }
L_08A8E688:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(14));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A8E6A4;
      }
      goto L_08A8E698;
    }
L_08A8E698:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08A8E6A4;
L_08A8E6A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8E554;
      }
      goto L_08A8E6B4;
    }
L_08A8E6B4:
    ctx.gpr[31] = (0x08A8E6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54DCCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E6BCu) goto L_08A8E6BC;
    return;
L_08A8E6BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E6D4;
      }
      goto L_08A8E6CC;
    }
L_08A8E6CC:
    ctx.gpr[31] = (0x08A8E6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 185u, 0x088ED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E6D4u) goto L_08A8E6D4;
    return;
L_08A8E6D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25412)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A8E704;
      }
      goto L_08A8E6F8;
    }
L_08A8E6F8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A8E704;
L_08A8E704:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (49440u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8E728;
      }
      goto L_08A8E720;
    }
L_08A8E720:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5840), static_cast<std::uint8_t>(0u));
    goto L_08A8E728;
L_08A8E728:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
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
L_08A8E760:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27344)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16672u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
      if (branch_taken) {
          goto L_08A8E7D0;
      }
      goto L_08A8E7C4;
    }
L_08A8E7C4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    goto L_08A8E7D0;
L_08A8E7D0:
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[4] = (49900u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08A8E988;
      }
      goto L_08A8E7F4;
    }
L_08A8E7F4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8E988;
      }
      goto L_08A8E820;
    }
L_08A8E820:
    ctx.gpr[4] = (49898u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8E864;
      }
      goto L_08A8E83C;
    }
L_08A8E83C:
    ctx.gpr[4] = (49898u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
      if (branch_taken) {
          goto L_08A8E8D4;
      }
      goto L_08A8E864;
    }
L_08A8E864:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A8E8D4;
      }
      goto L_08A8E89C;
    }
L_08A8E89C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_08A8E8D4;
L_08A8E8D4:
    ctx.gpr[31] = (0x08A8E8DCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08A8E8DCu) goto L_08A8E8DC;
    return;
L_08A8E8DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A8E8E8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08A8E8E8u) goto L_08A8E8E8;
    return;
L_08A8E8E8:
    ctx.gpr[31] = (0x08A8E8F0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E8F0u) goto L_08A8E8F0;
    return;
L_08A8E8F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[26]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x08A8E918u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E918u) goto L_08A8E918;
    return;
L_08A8E918:
    ctx.gpr[31] = (0x08A8E920u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08A8E920u) goto L_08A8E920;
    return;
L_08A8E920:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 220u);
    ctx.gpr[6] = (0u | 220u);
    ctx.gpr[7] = (0u | 220u);
    ctx.gpr[31] = (0x08A8E938u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E938u) goto L_08A8E938;
    return;
L_08A8E938:
    ctx.gpr[31] = (0x08A8E940u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08A8E940u) goto L_08A8E940;
    return;
L_08A8E940:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8E97Cu);
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E97Cu) goto L_08A8E97C;
    return;
L_08A8E97C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A8E98C;
      }
      goto L_08A8E988;
    }
L_08A8E988:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A8E98C;
L_08A8E98C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
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
L_08A8E9B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8E9CCu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(25416), ctx.gpr[4]);
    goto L_08A8EA2C;
L_08A8E9CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E9D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8E9ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20868));
    goto L_08A8E378;
L_08A8E9EC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5840), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EA00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-5840)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EA10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8EA20u);
    // nop
    goto L_08A8E9D8;
L_08A8EA20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EA2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25416)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8EA60u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A8E378;
L_08A8EA60:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(25416)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A8EA7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20820));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A8EA7Cu) goto L_08A8EA7C;
    return;
L_08A8EA7C:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[16] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18488));
      if (branch_taken) {
          goto L_08A8EAB8;
      }
      goto L_08A8EA90;
    }
L_08A8EA90:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08A8EA9Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8EA9Cu) goto L_08A8EA9C;
    return;
L_08A8EA9C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EAB4;
      }
      goto L_08A8EAA8;
    }
L_08A8EAA8:
    ctx.gpr[31] = (0x08A8EAB0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A8EAB0u) goto L_08A8EAB0;
    return;
L_08A8EAB0:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_08A8EAB4;
L_08A8EAB4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    goto L_08A8EAB8;
L_08A8EAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A8EAC4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 479u, 0x08913F90u>(ctx, &aot_mem) && ctx.pc == 0x08A8EAC4u) goto L_08A8EAC4;
    return;
L_08A8EAC4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5840), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5836), ctx.gpr[4]);
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25412), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A8EAF4;
L_08A8EAF4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 1000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8EAF4;
      }
      goto L_08A8EB08;
    }
L_08A8EB08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EB28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25356)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25352)));
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25360), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25380)));
    ctx.gpr[3] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(25392)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25388)));
    ctx.gpr[24] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(25396), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(25404), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(25368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(25364), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(25372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(25384), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[25] = (2229u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(25400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25408), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EC1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A8EC80;
      }
      goto L_08A8EC38;
    }
L_08A8EC38:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13076));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8EC4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 161u, 0x08A90928u>(ctx, &aot_mem) && ctx.pc == 0x08A8EC4Cu) goto L_08A8EC4C;
    return;
L_08A8EC4C:
    ctx.gpr[31] = (0x08A8EC54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2108)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 217u, 0x08841AC4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EC54u) goto L_08A8EC54;
    return;
L_08A8EC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2108)));
    ctx.gpr[31] = (0x08A8EC60u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 190u, 0x08841820u>(ctx, &aot_mem) && ctx.pc == 0x08A8EC60u) goto L_08A8EC60;
    return;
L_08A8EC60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8EC6Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 358u, 0x089A6320u>(ctx, &aot_mem) && ctx.pc == 0x08A8EC6Cu) goto L_08A8EC6C;
    return;
L_08A8EC6C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EC80;
      }
      goto L_08A8EC78;
    }
L_08A8EC78:
    ctx.gpr[31] = (0x08A8EC80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 242u, 0x0899D9B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8EC80u) goto L_08A8EC80;
    return;
L_08A8EC80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EC94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2104)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8ED30;
      }
      goto L_08A8ECD0;
    }
L_08A8ECD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2064));
      if (branch_taken) {
          goto L_08A8EDF8;
      }
      goto L_08A8ED04;
    }
L_08A8ED04:
    ctx.gpr[31] = (0x08A8ED0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A8ED0Cu) goto L_08A8ED0C;
    return;
L_08A8ED0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EDF8;
      }
      goto L_08A8ED14;
    }
L_08A8ED14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ED40;
      }
      goto L_08A8ED28;
    }
L_08A8ED28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ED38;
      }
      goto L_08A8ED30;
    }
L_08A8ED30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EE00;
      }
      goto L_08A8ED38;
    }
L_08A8ED38:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EDF8;
      }
      goto L_08A8ED40;
    }
L_08A8ED40:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A8ED8C;
      }
      goto L_08A8ED50;
    }
L_08A8ED50:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ED7C;
      }
      goto L_08A8ED5C;
    }
L_08A8ED5C:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(816), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
      if (branch_taken) {
          goto L_08A8ED90;
      }
      goto L_08A8ED7C;
    }
L_08A8ED7C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8ED50;
      }
      goto L_08A8ED8C;
    }
L_08A8ED8C:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    goto L_08A8ED90;
L_08A8ED90:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EE00;
      }
      goto L_08A8ED98;
    }
L_08A8ED98:
    ctx.gpr[31] = (0x08A8EDA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8EDA0u) goto L_08A8EDA0;
    return;
L_08A8EDA0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8EDD0u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A8EDD0u) goto L_08A8EDD0;
    return;
L_08A8EDD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8EDDCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 530u, 0x08886B78u>(ctx, &aot_mem) && ctx.pc == 0x08A8EDDCu) goto L_08A8EDDC;
    return;
L_08A8EDDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8192u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(0u));
    goto L_08A8EDF8;
L_08A8EDF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EE00;
      }
      goto L_08A8EE00;
    }
L_08A8EE00:
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
L_08A8EE20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8EE34u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EE34u) goto L_08A8EE34;
    return;
L_08A8EE34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EF24;
      }
      goto L_08A8EE3C;
    }
L_08A8EE3C:
    ctx.gpr[31] = (0x08A8EE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EE44u) goto L_08A8EE44;
    return;
L_08A8EE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EF24;
      }
      goto L_08A8EE50;
    }
L_08A8EE50:
    ctx.gpr[31] = (0x08A8EE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EE58u) goto L_08A8EE58;
    return;
L_08A8EE58:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8EE90;
      }
      goto L_08A8EE68;
    }
L_08A8EE68:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    ctx.gpr[7] = (0u | 65535u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A8EE94;
    }
    goto L_08A8EE78;
L_08A8EE78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 80u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A8EE94;
      }
      goto L_08A8EE8C;
    }
L_08A8EE8C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A8EE90;
L_08A8EE90:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A8EE94;
L_08A8EE94:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EF24;
      }
      goto L_08A8EE9C;
    }
L_08A8EE9C:
    ctx.gpr[31] = (0x08A8EEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EEA4u) goto L_08A8EEA4;
    return;
L_08A8EEA4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8EF24;
      }
      goto L_08A8EEF4;
    }
L_08A8EEF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8EF24u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 206u, 0x08944E10u>(ctx, &aot_mem) && ctx.pc == 0x08A8EF24u) goto L_08A8EF24;
    return;
L_08A8EF24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EFC4;
      }
      goto L_08A8EF30;
    }
L_08A8EF30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8EF50;
      }
      goto L_08A8EF40;
    }
L_08A8EF40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8EFC4;
      }
      goto L_08A8EF50;
    }
L_08A8EF50:
    ctx.gpr[31] = (0x08A8EF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8EF58u) goto L_08A8EF58;
    return;
L_08A8EF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EFC4;
      }
      goto L_08A8EF64;
    }
L_08A8EF64:
    ctx.gpr[31] = (0x08A8EF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8EF6Cu) goto L_08A8EF6C;
    return;
L_08A8EF6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EFC4;
      }
      goto L_08A8EF78;
    }
L_08A8EF78:
    ctx.gpr[31] = (0x08A8EF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8EF80u) goto L_08A8EF80;
    return;
L_08A8EF80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A8EFC4;
      }
      goto L_08A8EF94;
    }
L_08A8EF94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8EFC4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 206u, 0x08944E10u>(ctx, &aot_mem) && ctx.pc == 0x08A8EFC4u) goto L_08A8EFC4;
    return;
L_08A8EFC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EFD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8F004u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F004u) goto L_08A8F004;
    return;
L_08A8F004:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F044;
      }
      goto L_08A8F00C;
    }
L_08A8F00C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F044;
      }
      goto L_08A8F014;
    }
L_08A8F014:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8F020u);
    ctx.gpr[5] = (0u | 109u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F020u) goto L_08A8F020;
    return;
L_08A8F020:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F02Cu);
    ctx.gpr[5] = (0u | 110u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F02Cu) goto L_08A8F02C;
    return;
L_08A8F02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F054;
      }
      goto L_08A8F03C;
    }
L_08A8F03C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 56u);
      if (branch_taken) {
          goto L_08A8F04C;
      }
      goto L_08A8F044;
    }
L_08A8F044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F224;
      }
      goto L_08A8F04C;
    }
L_08A8F04C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F0B0;
      }
      goto L_08A8F054;
    }
L_08A8F054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F0A8;
      }
      goto L_08A8F06C;
    }
L_08A8F06C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[31] = (0x08A8F080u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F080u) goto L_08A8F080;
    return;
L_08A8F080:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2997), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2928), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2928));
    ctx.gpr[31] = (0x08A8F094u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F094u) goto L_08A8F094;
    return;
L_08A8F094:
    ctx.gpr[19] = (0u | 11u);
    ctx.gpr[20] = (0u | 49u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-9));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
      if (branch_taken) {
          goto L_08A8F130;
      }
      goto L_08A8F0A8;
    }
L_08A8F0A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F224;
      }
      goto L_08A8F0B0;
    }
L_08A8F0B0:
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[19] = (0u | 11u);
    ctx.gpr[20] = (0u | 49u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-9));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
      if (branch_taken) {
          goto L_08A8F130;
      }
      goto L_08A8F0C8;
    }
L_08A8F0C8:
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 62u);
      if (branch_taken) {
          goto L_08A8F130;
      }
      goto L_08A8F0D4;
    }
L_08A8F0D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A8F130;
      }
      goto L_08A8F0DC;
    }
L_08A8F0DC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(848), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A8F114;
      }
      goto L_08A8F0EC;
    }
L_08A8F0EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F10C;
      }
      goto L_08A8F0F8;
    }
L_08A8F0F8:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A8F10C;
    }
    goto L_08A8F100;
L_08A8F100:
    ctx.gpr[31] = (0x08A8F108u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A8F108u) goto L_08A8F108;
    return;
L_08A8F108:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A8F10C;
L_08A8F10C:
    ctx.gpr[31] = (0x08A8F114u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F114u) goto L_08A8F114;
    return;
L_08A8F114:
    ctx.gpr[31] = (0x08A8F11Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F11Cu) goto L_08A8F11C;
    return;
L_08A8F11C:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2997), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2928), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2928));
    ctx.gpr[31] = (0x08A8F130u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F130u) goto L_08A8F130;
    return;
L_08A8F130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A8F164;
      }
      goto L_08A8F13C;
    }
L_08A8F13C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F15C;
      }
      goto L_08A8F148;
    }
L_08A8F148:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A8F15C;
    }
    goto L_08A8F150;
L_08A8F150:
    ctx.gpr[31] = (0x08A8F158u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A8F158u) goto L_08A8F158;
    return;
L_08A8F158:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A8F15C;
L_08A8F15C:
    ctx.gpr[31] = (0x08A8F164u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F164u) goto L_08A8F164;
    return;
L_08A8F164:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F174u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F174u) goto L_08A8F174;
    return;
L_08A8F174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8F194u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F194u) goto L_08A8F194;
    return;
L_08A8F194:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F1A0u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F1A0u) goto L_08A8F1A0;
    return;
L_08A8F1A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08A8F1F8;
    }
    goto L_08A8F1AC;
L_08A8F1AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08A8F1F8;
    }
    goto L_08A8F1B8;
L_08A8F1B8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(541), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(542), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 208u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_08A8F1F8;
L_08A8F1F8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F224;
      }
      goto L_08A8F218;
    }
L_08A8F218:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F224u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F224u) goto L_08A8F224;
    return;
L_08A8F224:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F24C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1328)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(748), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8F288;
      }
      goto L_08A8F270;
    }
L_08A8F270:
    ctx.gpr[31] = (0x08A8F278u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 368u, 0x0899E2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F278u) goto L_08A8F278;
    return;
L_08A8F278:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F298;
      }
      goto L_08A8F280;
    }
L_08A8F280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F2E0;
      }
      goto L_08A8F288;
    }
L_08A8F288:
    ctx.gpr[31] = (0x08A8F290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 161u, 0x08A90928u>(ctx, &aot_mem) && ctx.pc == 0x08A8F290u) goto L_08A8F290;
    return;
L_08A8F290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F434;
      }
      goto L_08A8F298;
    }
L_08A8F298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 62u);
      if (branch_taken) {
          goto L_08A8F2DC;
      }
      goto L_08A8F2A8;
    }
L_08A8F2A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F2D0;
      }
      goto L_08A8F2B4;
    }
L_08A8F2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A8F2D0;
    }
    goto L_08A8F2C0;
L_08A8F2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08A8F2CCu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A8F2CCu) goto L_08A8F2CC;
    return;
L_08A8F2CC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A8F2D0;
L_08A8F2D0:
    ctx.gpr[31] = (0x08A8F2D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F2D8u) goto L_08A8F2D8;
    return;
L_08A8F2D8:
    ctx.gpr[4] = (0u | 62u);
    goto L_08A8F2DC;
L_08A8F2DC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    goto L_08A8F2E0;
L_08A8F2E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F314;
      }
      goto L_08A8F2EC;
    }
L_08A8F2EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F314;
      }
      goto L_08A8F2F8;
    }
L_08A8F2F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F314;
      }
      goto L_08A8F308;
    }
L_08A8F308:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F314u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 201u, 0x0888D060u>(ctx, &aot_mem) && ctx.pc == 0x08A8F314u) goto L_08A8F314;
    return;
L_08A8F314:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F38C;
      }
      goto L_08A8F31C;
    }
L_08A8F31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F36C;
      }
      goto L_08A8F32C;
    }
L_08A8F32C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F36C;
      }
      goto L_08A8F33C;
    }
L_08A8F33C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F36C;
      }
      goto L_08A8F34C;
    }
L_08A8F34C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F36C;
      }
      goto L_08A8F35C;
    }
L_08A8F35C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8F38C;
      }
      goto L_08A8F36C;
    }
L_08A8F36C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A8F378u);
    ctx.gpr[5] = (0u | 151u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08A8F378u) goto L_08A8F378;
    return;
L_08A8F378:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A8F3AC;
      }
      goto L_08A8F384;
    }
L_08A8F384:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A8F39C;
      }
      goto L_08A8F38C;
    }
L_08A8F38C:
    ctx.gpr[31] = (0x08A8F394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 161u, 0x08A90928u>(ctx, &aot_mem) && ctx.pc == 0x08A8F394u) goto L_08A8F394;
    return;
L_08A8F394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F434;
      }
      goto L_08A8F39C;
    }
L_08A8F39C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8F3C4;
      }
      goto L_08A8F3AC;
    }
L_08A8F3AC:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A8F3C4u);
    ctx.gpr[6] = (0u | 151u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x08A8F3C4u) goto L_08A8F3C4;
    return;
L_08A8F3C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A8F3D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 38u, 0x08AA8314u>(ctx, &aot_mem) && ctx.pc == 0x08A8F3D8u) goto L_08A8F3D8;
    return;
L_08A8F3D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x08A8F3F8u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F3F8u) goto L_08A8F3F8;
    return;
L_08A8F3F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A8F420u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A8F420u) goto L_08A8F420;
    return;
L_08A8F420:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A8F434u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A8F434u) goto L_08A8F434;
    return;
L_08A8F434:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F44C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (0u | 11u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8F4BC;
      }
      goto L_08A8F48C;
    }
L_08A8F48C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F4B4;
      }
      goto L_08A8F498;
    }
L_08A8F498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A8F4B4;
    }
    goto L_08A8F4A4;
L_08A8F4A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08A8F4B0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A8F4B0u) goto L_08A8F4B0;
    return;
L_08A8F4B0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A8F4B4;
L_08A8F4B4:
    ctx.gpr[31] = (0x08A8F4BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F4BCu) goto L_08A8F4BC;
    return;
L_08A8F4BC:
    ctx.gpr[4] = (0u | 39u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A8F4D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 431u, 0x088A6D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F4D0u) goto L_08A8F4D0;
    return;
L_08A8F4D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8F500;
      }
      goto L_08A8F4F4;
    }
L_08A8F4F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2092)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F598;
      }
      goto L_08A8F500;
    }
L_08A8F500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A8F56C;
      }
      goto L_08A8F53C;
    }
L_08A8F53C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F564;
      }
      goto L_08A8F548;
    }
L_08A8F548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A8F564;
    }
    goto L_08A8F554;
L_08A8F554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08A8F560u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A8F560u) goto L_08A8F560;
    return;
L_08A8F560:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A8F564;
L_08A8F564:
    ctx.gpr[31] = (0x08A8F56Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F56Cu) goto L_08A8F56C;
    return;
L_08A8F56C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2084), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8F584u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 175u, 0x089A0C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F584u) goto L_08A8F584;
    return;
L_08A8F584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8F714;
      }
      goto L_08A8F598;
    }
L_08A8F598:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2080)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15172u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48373u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A8F624u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F624u) goto L_08A8F624;
    return;
L_08A8F624:
    ctx.gpr[31] = (0x08A8F62Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 517u, 0x08A068E8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F62Cu) goto L_08A8F62C;
    return;
L_08A8F62C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2096)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2080)));
    ctx.gpr[31] = (0x08A8F63Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 151u, 0x089F91F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F63Cu) goto L_08A8F63C;
    return;
L_08A8F63C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F674;
      }
      goto L_08A8F644;
    }
L_08A8F644:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8F674;
      }
      goto L_08A8F658;
    }
L_08A8F658:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08A8F708;
      }
      goto L_08A8F674;
    }
L_08A8F674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A8F6E0;
      }
      goto L_08A8F6B0;
    }
L_08A8F6B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F6D8;
      }
      goto L_08A8F6BC;
    }
L_08A8F6BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08A8F6D8;
    }
    goto L_08A8F6C8;
L_08A8F6C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08A8F6D4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08A8F6D4u) goto L_08A8F6D4;
    return;
L_08A8F6D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08A8F6D8;
L_08A8F6D8:
    ctx.gpr[31] = (0x08A8F6E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F6E0u) goto L_08A8F6E0;
    return;
L_08A8F6E0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2084), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8F6F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 175u, 0x089A0C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F6F8u) goto L_08A8F6F8;
    return;
L_08A8F6F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08A8F708;
L_08A8F708:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F714u);
    ctx.gpr[5] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F714u) goto L_08A8F714;
    return;
L_08A8F714:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F734:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8F75Cu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 329u, 0x089A5680u>(ctx, &aot_mem) && ctx.pc == 0x08A8F75Cu) goto L_08A8F75C;
    return;
L_08A8F75C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13076));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2084), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A8FB6C;
      }
      goto L_08A8F774;
    }
L_08A8F774:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A8F8C0;
      }
      goto L_08A8F780;
    }
L_08A8F780:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A8F834;
      }
      goto L_08A8F788;
    }
L_08A8F788:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8F834;
      }
      goto L_08A8F790;
    }
L_08A8F790:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A8F944;
      }
      goto L_08A8F798;
    }
L_08A8F798:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A8F9C8;
      }
      goto L_08A8F7A0;
    }
L_08A8F7A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8F7BCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F7BCu) goto L_08A8F7BC;
    return;
L_08A8F7BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[31] = (0x08A8F7D0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F7D0u) goto L_08A8F7D0;
    return;
L_08A8F7D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08A8F7E0u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 634u, 0x0899F50Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F7E0u) goto L_08A8F7E0;
    return;
L_08A8F7E0:
    ctx.gpr[4] = (0u | 60u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(0u));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16288u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 208u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1721), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A8F824;
    }
    goto L_08A8F824;
L_08A8F824:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A8FB6C;
      }
      goto L_08A8F834;
    }
L_08A8F834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8F850u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F850u) goto L_08A8F850;
    return;
L_08A8F850:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[31] = (0x08A8F860u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 634u, 0x0899F50Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F860u) goto L_08A8F860;
    return;
L_08A8F860:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F86Cu);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F86Cu) goto L_08A8F86C;
    return;
L_08A8F86C:
    ctx.gpr[4] = (0u | 68u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 32u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17096u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1721), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A8F8B0;
    }
    goto L_08A8F8B0;
L_08A8F8B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A8FB6C;
      }
      goto L_08A8F8C0;
    }
L_08A8F8C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8F8DCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F8DCu) goto L_08A8F8DC;
    return;
L_08A8F8DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x08A8F8ECu);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 634u, 0x0899F50Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F8ECu) goto L_08A8F8EC;
    return;
L_08A8F8EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F8F8u);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F8F8u) goto L_08A8F8F8;
    return;
L_08A8F8F8:
    ctx.gpr[4] = (0u | 76u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 176u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1721), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A8F934;
    }
    goto L_08A8F934;
L_08A8F934:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A8FB6C;
      }
      goto L_08A8F944;
    }
L_08A8F944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8F960u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F960u) goto L_08A8F960;
    return;
L_08A8F960:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x08A8F970u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 634u, 0x0899F50Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F970u) goto L_08A8F970;
    return;
L_08A8F970:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8F97Cu);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F97Cu) goto L_08A8F97C;
    return;
L_08A8F97C:
    ctx.gpr[4] = (0u | 84u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 32u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1721), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A8F9B8;
    }
    goto L_08A8F9B8;
L_08A8F9B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A8FB6C;
      }
      goto L_08A8F9C8;
    }
L_08A8F9C8:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FB04;
      }
      goto L_08A8F9D4;
    }
L_08A8F9D4:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20792)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 97u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FA08u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FA08u) goto L_08A8FA08;
    return;
L_08A8FA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FB04;
      }
      goto L_08A8FA10;
    }
L_08A8FA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FA2Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FA2Cu) goto L_08A8FA2C;
    return;
L_08A8FA2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FB04;
      }
      goto L_08A8FA34;
    }
L_08A8FA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FA50u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FA50u) goto L_08A8FA50;
    return;
L_08A8FA50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FB04;
      }
      goto L_08A8FA58;
    }
L_08A8FA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FA74u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FA74u) goto L_08A8FA74;
    return;
L_08A8FA74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FB04;
      }
      goto L_08A8FA7C;
    }
L_08A8FA7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 101u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FA98u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FA98u) goto L_08A8FA98;
    return;
L_08A8FA98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FB04;
      }
      goto L_08A8FAA0;
    }
L_08A8FAA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 102u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FABCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FABCu) goto L_08A8FABC;
    return;
L_08A8FABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FB04;
      }
      goto L_08A8FAC4;
    }
L_08A8FAC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 103u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FAE0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FAE0u) goto L_08A8FAE0;
    return;
L_08A8FAE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FB04;
      }
      goto L_08A8FAE8;
    }
L_08A8FAE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 104u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A8FB04u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FB04u) goto L_08A8FB04;
    return;
L_08A8FB04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[31] = (0x08A8FB14u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 634u, 0x0899F50Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FB14u) goto L_08A8FB14;
    return;
L_08A8FB14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8FB20u);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A8FB20u) goto L_08A8FB20;
    return;
L_08A8FB20:
    ctx.gpr[4] = (0u | 76u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 176u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1721), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A8FB5C;
    }
    goto L_08A8FB5C;
L_08A8FB5C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A8FB6C;
      }
      goto L_08A8FB6C;
    }
L_08A8FB6C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2074), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2075), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2077), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2078), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2116), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2064), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2088), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2092), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2100), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2104), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2112), 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A8FBC4u);
    ctx.gpr[4] = (0u | 576u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8FBC4u) goto L_08A8FBC4;
    return;
L_08A8FBC4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FBDC;
      }
      goto L_08A8FBD0;
    }
L_08A8FBD0:
    ctx.gpr[31] = (0x08A8FBD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 189u, 0x08841814u>(ctx, &aot_mem) && ctx.pc == 0x08A8FBD8u) goto L_08A8FBD8;
    return;
L_08A8FBD8:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A8FBDC;
L_08A8FBDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2108), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8FBECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 505u, 0x0899ED08u>(ctx, &aot_mem) && ctx.pc == 0x08A8FBECu) goto L_08A8FBEC;
    return;
L_08A8FBEC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08A8FC08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2084)));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A8FC4C;
      }
      goto L_08A8FC44;
    }
L_08A8FC44:
    ctx.gpr[31] = (0x08A8FC4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8F44C;
L_08A8FC4C:
    ctx.gpr[31] = (0x08A8FC54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 300u, 0x089B1038u>(ctx, &aot_mem) && ctx.pc == 0x08A8FC54u) goto L_08A8FC54;
    return;
L_08A8FC54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2088)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FC84;
      }
      goto L_08A8FC60;
    }
L_08A8FC60:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29200)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8FC7C;
      }
      goto L_08A8FC74;
    }
L_08A8FC74:
    ctx.gpr[31] = (0x08A8FC7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 447u, 0x08A91E38u>(ctx, &aot_mem) && ctx.pc == 0x08A8FC7Cu) goto L_08A8FC7C;
    return;
L_08A8FC7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 160u, 0x08A908F8u>(ctx, &aot_mem); return;
      }
      goto L_08A8FC84;
    }
L_08A8FC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FCD0;
      }
      goto L_08A8FC90;
    }
L_08A8FC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FCD0;
      }
      goto L_08A8FCA0;
    }
L_08A8FCA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(572)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8FCD0;
      }
      goto L_08A8FCB4;
    }
L_08A8FCB4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29200)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8FCD0;
      }
      goto L_08A8FCC8;
    }
L_08A8FCC8:
    ctx.gpr[31] = (0x08A8FCD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 243u, 0x08841C34u>(ctx, &aot_mem) && ctx.pc == 0x08A8FCD0u) goto L_08A8FCD0;
    return;
L_08A8FCD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FD44;
      }
      goto L_08A8FCEC;
    }
L_08A8FCEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A8FD34;
      }
      goto L_08A8FCFC;
    }
L_08A8FCFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[18] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A8FD2C;
      }
      goto L_08A8FD0C;
    }
L_08A8FD0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8FD4C;
      }
      goto L_08A8FD1C;
    }
L_08A8FD1C:
    ctx.gpr[31] = (0x08A8FD24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8F24C;
L_08A8FD24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 160u, 0x08A908F8u>(ctx, &aot_mem); return;
      }
      goto L_08A8FD2C;
    }
L_08A8FD2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 160u, 0x08A908F8u>(ctx, &aot_mem); return;
      }
      goto L_08A8FD34;
    }
L_08A8FD34:
    ctx.gpr[31] = (0x08A8FD3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 161u, 0x08A90928u>(ctx, &aot_mem) && ctx.pc == 0x08A8FD3Cu) goto L_08A8FD3C;
    return;
L_08A8FD3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 160u, 0x08A908F8u>(ctx, &aot_mem); return;
      }
      goto L_08A8FD44;
    }
L_08A8FD44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 160u, 0x08A908F8u>(ctx, &aot_mem); return;
      }
      goto L_08A8FD4C;
    }
L_08A8FD4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08A8FD70u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 327u, 0x08855A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FD70u) goto L_08A8FD70;
    return;
L_08A8FD70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[22] = (0u | 62u);
      if (branch_taken) {
          goto L_08A8FDB0;
      }
      goto L_08A8FDA8;
    }
L_08A8FDA8:
    ctx.gpr[31] = (0x08A8FDB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 436u, 0x0899E69Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FDB0u) goto L_08A8FDB0;
    return;
L_08A8FDB0:
    ctx.gpr[31] = (0x08A8FDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8FDB8u) goto L_08A8FDB8;
    return;
L_08A8FDB8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
        goto L_08A8FDD0;
    }
    goto L_08A8FDC0;
L_08A8FDC0:
    ctx.gpr[31] = (0x08A8FDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8FDC8u) goto L_08A8FDC8;
    return;
L_08A8FDC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A8FDF0;
      }
      goto L_08A8FDD0;
    }
L_08A8FDD0:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_08A8FDF0;
L_08A8FDF0:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2068), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A8FEA0;
      }
      goto L_08A8FE48;
    }
L_08A8FE48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A8FEA0;
      }
      goto L_08A8FE74;
    }
L_08A8FE74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A8FF08;
      }
      goto L_08A8FEA0;
    }
L_08A8FEA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
        goto L_08A8FED4;
    }
    goto L_08A8FEBC;
L_08A8FEBC:
    ctx.gpr[31] = (0x08A8FEC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A8FEC4u) goto L_08A8FEC4;
    return;
L_08A8FEC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FF00;
      }
      goto L_08A8FECC;
    }
L_08A8FECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FF08;
      }
      goto L_08A8FED4;
    }
L_08A8FED4:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A8FEF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A8EFD4;
L_08A8FEF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 160u, 0x08A908F8u>(ctx, &aot_mem); return;
      }
      goto L_08A8FF00;
    }
L_08A8FF00:
    ctx.gpr[31] = (0x08A8FF08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08A8FF08u) goto L_08A8FF08;
    return;
L_08A8FF08:
    ctx.gpr[31] = (0x08A8FF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8FF10u) goto L_08A8FF10;
    return;
L_08A8FF10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 8u, 0x08A90094u>(ctx, &aot_mem); return;
      }
      goto L_08A8FF1C;
    }
L_08A8FF1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 8u, 0x08A90094u>(ctx, &aot_mem); return;
      }
      goto L_08A8FF28;
    }
L_08A8FF28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 8u, 0x08A90094u>(ctx, &aot_mem); return;
      }
      goto L_08A8FF34;
    }
L_08A8FF34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 8u, 0x08A90094u>(ctx, &aot_mem); return;
      }
      goto L_08A8FF40;
    }
L_08A8FF40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(2088)));
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A8FF64;
      }
      goto L_08A8FF50;
    }
L_08A8FF50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8FF5Cu);
    ctx.gpr[5] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FF5Cu) goto L_08A8FF5C;
    return;
L_08A8FF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 8u, 0x08A90094u>(ctx, &aot_mem); return;
      }
      goto L_08A8FF64;
    }
L_08A8FF64:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8FFB8;
      }
      goto L_08A8FF78;
    }
L_08A8FF78:
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08A8FF80;
L_08A8FF80:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A8FFA4;
      }
      goto L_08A8FF90;
    }
L_08A8FF90:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A8FFA4;
      }
      goto L_08A8FFA0;
    }
L_08A8FFA0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A8FFA4;
L_08A8FFA4:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8FF80;
      }
      goto L_08A8FFB8;
    }
L_08A8FFB8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FFF0;
      }
      goto L_08A8FFC4;
    }
L_08A8FFC4:
    ctx.gpr[31] = (0x08A8FFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A8FFCCu) goto L_08A8FFCC;
    return;
L_08A8FFCC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 8u, 0x08A90094u>(ctx, &aot_mem); return;
      }
      goto L_08A8FFDC;
    }
L_08A8FFDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8FFE8u);
    ctx.gpr[5] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FFE8u) goto L_08A8FFE8;
    return;
L_08A8FFE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 8u, 0x08A90094u>(ctx, &aot_mem); return;
      }
      goto L_08A8FFF0;
    }
L_08A8FFF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8FFFCu);
    ctx.gpr[5] = (0u | 135u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FFFCu) goto L_08A8FFFC;
    return;
L_08A8FFFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1336)));
    ctx.pc = 0x08A90000u; return;
}

void recomp_unit_0162(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0162_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_162(Runtime &runtime) {
    runtime.register_generated_unit(162u, 0x08A8C000u, 16384u, &recomp_unit_0162, &recomp_unit_0162_entry);
    runtime.register_function(0x08A8C000u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C014u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C02Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C034u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C04Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C058u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C070u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C078u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C07Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C094u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C110u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C118u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C120u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C128u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C140u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C14Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C164u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C174u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C17Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C188u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C19Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C200u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C238u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C248u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C25Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C26Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C280u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C294u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C35Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C374u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C390u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C400u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C42Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C454u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C468u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C470u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C478u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C480u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C488u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C498u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C504u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C520u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C530u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C554u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C560u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C568u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C56Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C578u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C57Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C588u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C594u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C60Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C614u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C630u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C64Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C65Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C684u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C698u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C700u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C708u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C710u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C720u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C73Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C750u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C758u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C760u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C790u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C794u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C804u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C824u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C830u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C878u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C888u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C918u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C920u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C948u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C954u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C98Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBCCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CECCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CED4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D000u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D008u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D010u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D018u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D020u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D028u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D030u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D038u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D03Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D048u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D050u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D064u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D074u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D084u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D094u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D100u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D108u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D110u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D118u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D128u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D13Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D154u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D16Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D184u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D18Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D194u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D210u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D224u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D22Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D234u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D23Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D268u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D274u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D290u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D31Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D33Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D348u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D350u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D358u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D360u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D370u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D384u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D39Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D404u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D40Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D418u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D438u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D44Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D454u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D45Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D48Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D534u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D53Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D58Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D598u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D60Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D614u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D61Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D664u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D704u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D70Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D714u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D71Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D724u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D73Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D770u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D778u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D79Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D824u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D82Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D834u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D870u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D880u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D888u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D88Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D910u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D918u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D960u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBCCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDCCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E00Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E020u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E028u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E038u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E04Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E060u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E068u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E078u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E080u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E08Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E094u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E114u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E134u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E228u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E24Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E258u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E274u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E27Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E288u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E328u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E378u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E40Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E414u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E424u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E430u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E434u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E438u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E440u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E448u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E454u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E47Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E490u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E498u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E500u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E518u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E520u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E554u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E55Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E568u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E574u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E57Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E580u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E588u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E594u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E61Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E628u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E634u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E640u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E648u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E64Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E654u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E65Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E678u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E688u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E698u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E704u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E720u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E728u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E760u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E820u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E83Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E864u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E89Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E918u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E920u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E938u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E940u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E97Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E988u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E98Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F004u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F00Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F014u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F020u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F02Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F03Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F044u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F04Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F054u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F06Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F080u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F094u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F100u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F108u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F10Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F114u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F11Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F130u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F13Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F148u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F150u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F158u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F15Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F164u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F174u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F194u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F218u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F224u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F24Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F270u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F278u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F280u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F288u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F290u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F298u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F308u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F314u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F31Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F32Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F33Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F34Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F35Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F36Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F378u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F384u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F38Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F394u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F39Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F420u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F434u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F44Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F48Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F498u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F500u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F53Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F548u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F554u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F560u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F564u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F56Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F584u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F598u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F624u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F62Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F63Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F644u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F658u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F674u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F708u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F714u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F734u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F75Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F774u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F780u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F788u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F790u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F798u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F824u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F834u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F850u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F860u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F86Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F934u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F944u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F960u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F970u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F97Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FABCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FECCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FED4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFCCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFFCu, &recomp_unit_0162, "recomp_unit_0162");
}
} // namespace psprecomp
