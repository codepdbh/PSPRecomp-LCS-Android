#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0138[4081] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10,
    0, 0, 0, 11, 12, 0, 13, 0, 0, 0, 14, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 20, 0, 21, 0, 0, 0,
    22, 0, 0, 0, 23, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 32, 0, 33, 0, 0,
    34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42,
    0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0,
    53, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 70, 71, 0, 72, 0, 0, 73, 74, 0, 75, 0, 0, 76, 0, 77, 0, 78, 79, 0,
    80, 0, 0, 81, 0, 82, 83, 0, 84, 0, 0, 85, 0, 86, 87, 0, 88, 0, 0, 89, 0, 90, 91, 0, 92, 0, 0, 93, 0, 0, 94, 0,
    95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0,
    0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113,
    114, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0,
    128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137,
    0, 138, 0, 0, 139, 140, 0, 141, 0, 0, 142, 143, 0, 144, 0, 0, 145, 0, 146, 0, 147, 148, 0, 149, 0, 0, 150, 0, 151, 152, 0, 153,
    0, 0, 154, 0, 155, 156, 0, 157, 0, 0, 158, 0, 159, 160, 0, 161, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0,
    0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0,
    176, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 183, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0,
    0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0,
    0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 242, 0, 0,
    243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0,
    0, 248, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 254, 0, 0, 0, 0,
    255, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265,
    0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0,
    0, 278, 0, 0, 279, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 284, 0, 0, 285, 0, 286, 0, 0, 0, 0, 287, 0,
    288, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 293, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 310,
    0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0,
    0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325,
    0, 0, 326, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 0,
    0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 0, 0, 342, 0, 0, 0,
    343, 0, 344, 0, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 363, 0, 364, 0, 0, 0, 0, 365,
    0, 366, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 373, 0, 374, 0, 0, 375, 376, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0,
    0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0,
    392, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0, 404, 0, 0, 0, 405, 0, 0, 0,
    0, 0, 0, 406, 0, 407, 0, 0, 408, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 416,
    0, 0, 0, 417, 0, 418, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 422, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 428, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 433, 0, 434, 0, 0, 435, 0, 436, 0, 0, 437, 0, 438, 439, 0, 0, 440, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446,
    0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 457, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0,
    460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464,
    0, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0,
    0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477,
    0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0,
    0, 0, 0, 483, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 491, 0, 492, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 496, 497, 0, 0, 0, 0,
    498, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0,
    507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0,
    0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0,
    0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 525, 0, 526,
    0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0,
    0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537,
    0, 538, 0, 0, 539, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 552, 0, 0, 553, 0, 554, 555, 0, 0, 0, 556,
    0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 563, 0, 0, 564, 0, 0, 565, 0, 566, 567, 0, 0, 0, 0, 0, 568,
    0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579,
    0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 589, 0, 590, 0, 591,
    0, 0, 0, 592, 0, 0, 593, 0, 594, 595, 0, 596, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0,
    600, 0, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0,
    0, 611, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 624,
    0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 633, 0, 0, 0, 0, 0, 0,
    0, 0, 634, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    638, 0, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 645,
    0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 650, 0, 651, 652, 653, 0, 0, 0, 0, 0, 654, 0, 655, 0, 656,
    0, 0, 0, 657, 0, 0, 658, 0, 659, 660, 661, 0, 0, 0, 0, 0, 662, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0,
    0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 668, 0, 669, 0, 0, 0, 670, 0, 0, 671, 0, 672, 673, 674, 0, 0, 0, 0, 0, 675, 0, 676,
    0, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 680, 681, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0,
    686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 692, 0, 0, 0,
    693, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 0, 699, 0, 0, 0, 700, 0,
    0, 0, 701, 0, 702, 0, 703, 0, 704, 0, 0, 705, 0, 706, 0, 707, 0, 708, 0, 0, 0, 0, 709, 0, 710, 0, 0, 0, 0, 0, 0, 711,
    0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718,
    0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0,
    0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0,
    0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0,
    0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 739, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0,
    0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 749, 0, 750, 0, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 0, 0,
    754, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 757, 0, 758, 0, 759, 0, 760, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 764, 0,
    765, 0, 766, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 0, 771, 0, 0, 772, 0, 0, 773, 0, 0, 774, 0, 0,
    775, 0, 0, 776, 0, 0, 777, 0, 0, 778, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 0, 782, 0, 783, 0, 784, 0, 0, 785, 0, 0, 786,
    0, 0, 787, 0, 0, 788, 0, 0, 789, 0, 790, 0, 791, 0, 792, 0, 0, 793, 0, 0, 0, 0, 0, 794, 0, 795, 0, 796, 0, 797, 0, 0,
    0, 0, 0, 798, 0, 0, 799, 0, 800, 0, 801, 802, 0, 0, 0, 803, 0, 0, 804, 0, 805, 0, 806, 0, 0, 0, 0, 0, 0, 807, 0, 0,
    0, 808, 0, 0, 809, 0, 0, 810, 0, 0, 811, 0, 0, 812, 0, 0, 813, 0, 0, 814, 0, 0, 815, 0, 0, 816, 0, 817, 818, 0, 819, 0,
    0, 0, 0, 820, 0, 0, 0, 821, 0, 822, 0, 823, 0, 0, 0, 824, 0, 825, 0, 826, 0, 827, 0, 828, 0, 829, 0, 0, 830, 0, 0, 0,
    0, 0, 0, 0, 0, 831, 0, 0, 832, 0, 0, 0, 833, 0, 834, 0, 835, 0, 836, 0, 837, 0, 838, 0, 839, 0, 0, 0, 0, 0, 840, 0,
    0, 0, 0, 0, 841, 0, 842, 0, 0, 0, 843, 0, 844, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 0, 0,
    0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 850,
    0, 0, 0, 851, 0, 852, 853, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0,
    0, 0, 0, 857, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 0, 860, 0, 0, 861, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 864, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 867,
    0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 869, 0, 870, 0, 0, 0, 871, 0, 0, 872, 0, 873, 0, 0, 0, 0, 0, 0, 0, 874, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 875, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 877, 0, 878, 0, 0, 0, 0, 879, 0, 0, 0, 880, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 881,
};
void recomp_unit_0138_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A2C000u;
        entry_id = (entry_delta < 16324u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0138[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A2C000;
    case 2u: goto L_08A2C074;
    case 3u: goto L_08A2C09C;
    case 4u: goto L_08A2C0A8;
    case 5u: goto L_08A2C0D4;
    case 6u: goto L_08A2C0DC;
    case 7u: goto L_08A2C0E4;
    case 8u: goto L_08A2C0EC;
    case 9u: goto L_08A2C0F4;
    case 10u: goto L_08A2C0FC;
    case 11u: goto L_08A2C10C;
    case 12u: goto L_08A2C110;
    case 13u: goto L_08A2C118;
    case 14u: goto L_08A2C128;
    case 15u: goto L_08A2C12C;
    case 16u: goto L_08A2C134;
    case 17u: goto L_08A2C144;
    case 18u: goto L_08A2C154;
    case 19u: goto L_08A2C164;
    case 20u: goto L_08A2C168;
    case 21u: goto L_08A2C170;
    case 22u: goto L_08A2C180;
    case 23u: goto L_08A2C190;
    case 24u: goto L_08A2C194;
    case 25u: goto L_08A2C19C;
    case 26u: goto L_08A2C1AC;
    case 27u: goto L_08A2C1BC;
    case 28u: goto L_08A2C1C0;
    case 29u: goto L_08A2C1C8;
    case 30u: goto L_08A2C1D8;
    case 31u: goto L_08A2C1E8;
    case 32u: goto L_08A2C1EC;
    case 33u: goto L_08A2C1F4;
    case 34u: goto L_08A2C200;
    case 35u: goto L_08A2C214;
    case 36u: goto L_08A2C224;
    case 37u: goto L_08A2C22C;
    case 38u: goto L_08A2C23C;
    case 39u: goto L_08A2C248;
    case 40u: goto L_08A2C25C;
    case 41u: goto L_08A2C26C;
    case 42u: goto L_08A2C27C;
    case 43u: goto L_08A2C28C;
    case 44u: goto L_08A2C29C;
    case 45u: goto L_08A2C2B0;
    case 46u: goto L_08A2C2C0;
    case 47u: goto L_08A2C2DC;
    case 48u: goto L_08A2C2F4;
    case 49u: goto L_08A2C354;
    case 50u: goto L_08A2C360;
    case 51u: goto L_08A2C368;
    case 52u: goto L_08A2C378;
    case 53u: goto L_08A2C380;
    case 54u: goto L_08A2C390;
    case 55u: goto L_08A2C398;
    case 56u: goto L_08A2C3A0;
    case 57u: goto L_08A2C3AC;
    case 58u: goto L_08A2C3E4;
    case 59u: goto L_08A2C404;
    case 60u: goto L_08A2C418;
    case 61u: goto L_08A2C434;
    case 62u: goto L_08A2C44C;
    case 63u: goto L_08A2C450;
    case 64u: goto L_08A2C478;
    case 65u: goto L_08A2C488;
    case 66u: goto L_08A2C490;
    case 67u: goto L_08A2C498;
    case 68u: goto L_08A2C4A0;
    case 69u: goto L_08A2C4A8;
    case 70u: goto L_08A2C4B4;
    case 71u: goto L_08A2C4B8;
    case 72u: goto L_08A2C4C0;
    case 73u: goto L_08A2C4CC;
    case 74u: goto L_08A2C4D0;
    case 75u: goto L_08A2C4D8;
    case 76u: goto L_08A2C4E4;
    case 77u: goto L_08A2C4EC;
    case 78u: goto L_08A2C4F4;
    case 79u: goto L_08A2C4F8;
    case 80u: goto L_08A2C500;
    case 81u: goto L_08A2C50C;
    case 82u: goto L_08A2C514;
    case 83u: goto L_08A2C518;
    case 84u: goto L_08A2C520;
    case 85u: goto L_08A2C52C;
    case 86u: goto L_08A2C534;
    case 87u: goto L_08A2C538;
    case 88u: goto L_08A2C540;
    case 89u: goto L_08A2C54C;
    case 90u: goto L_08A2C554;
    case 91u: goto L_08A2C558;
    case 92u: goto L_08A2C560;
    case 93u: goto L_08A2C56C;
    case 94u: goto L_08A2C578;
    case 95u: goto L_08A2C580;
    case 96u: goto L_08A2C590;
    case 97u: goto L_08A2C59C;
    case 98u: goto L_08A2C5AC;
    case 99u: goto L_08A2C5B4;
    case 100u: goto L_08A2C5C4;
    case 101u: goto L_08A2C5D0;
    case 102u: goto L_08A2C5E0;
    case 103u: goto L_08A2C5F0;
    case 104u: goto L_08A2C5F8;
    case 105u: goto L_08A2C60C;
    case 106u: goto L_08A2C614;
    case 107u: goto L_08A2C624;
    case 108u: goto L_08A2C62C;
    case 109u: goto L_08A2C640;
    case 110u: goto L_08A2C650;
    case 111u: goto L_08A2C66C;
    case 112u: goto L_08A2C674;
    case 113u: goto L_08A2C67C;
    case 114u: goto L_08A2C680;
    case 115u: goto L_08A2C684;
    case 116u: goto L_08A2C6B0;
    case 117u: goto L_08A2C6C0;
    case 118u: goto L_08A2C6D4;
    case 119u: goto L_08A2C6F8;
    case 120u: goto L_08A2C718;
    case 121u: goto L_08A2C72C;
    case 122u: goto L_08A2C748;
    case 123u: goto L_08A2C758;
    case 124u: goto L_08A2C75C;
    case 125u: goto L_08A2C78C;
    case 126u: goto L_08A2C7EC;
    case 127u: goto L_08A2C7F8;
    case 128u: goto L_08A2C800;
    case 129u: goto L_08A2C810;
    case 130u: goto L_08A2C818;
    case 131u: goto L_08A2C844;
    case 132u: goto L_08A2C854;
    case 133u: goto L_08A2C85C;
    case 134u: goto L_08A2C864;
    case 135u: goto L_08A2C86C;
    case 136u: goto L_08A2C874;
    case 137u: goto L_08A2C87C;
    case 138u: goto L_08A2C884;
    case 139u: goto L_08A2C890;
    case 140u: goto L_08A2C894;
    case 141u: goto L_08A2C89C;
    case 142u: goto L_08A2C8A8;
    case 143u: goto L_08A2C8AC;
    case 144u: goto L_08A2C8B4;
    case 145u: goto L_08A2C8C0;
    case 146u: goto L_08A2C8C8;
    case 147u: goto L_08A2C8D0;
    case 148u: goto L_08A2C8D4;
    case 149u: goto L_08A2C8DC;
    case 150u: goto L_08A2C8E8;
    case 151u: goto L_08A2C8F0;
    case 152u: goto L_08A2C8F4;
    case 153u: goto L_08A2C8FC;
    case 154u: goto L_08A2C908;
    case 155u: goto L_08A2C910;
    case 156u: goto L_08A2C914;
    case 157u: goto L_08A2C91C;
    case 158u: goto L_08A2C928;
    case 159u: goto L_08A2C930;
    case 160u: goto L_08A2C934;
    case 161u: goto L_08A2C93C;
    case 162u: goto L_08A2C948;
    case 163u: goto L_08A2C954;
    case 164u: goto L_08A2C95C;
    case 165u: goto L_08A2C96C;
    case 166u: goto L_08A2C978;
    case 167u: goto L_08A2C988;
    case 168u: goto L_08A2C990;
    case 169u: goto L_08A2C9A0;
    case 170u: goto L_08A2C9AC;
    case 171u: goto L_08A2C9BC;
    case 172u: goto L_08A2C9CC;
    case 173u: goto L_08A2C9D4;
    case 174u: goto L_08A2C9E8;
    case 175u: goto L_08A2C9F0;
    case 176u: goto L_08A2CA00;
    case 177u: goto L_08A2CA08;
    case 178u: goto L_08A2CA1C;
    case 179u: goto L_08A2CA2C;
    case 180u: goto L_08A2CA48;
    case 181u: goto L_08A2CA50;
    case 182u: goto L_08A2CA58;
    case 183u: goto L_08A2CA5C;
    case 184u: goto L_08A2CA60;
    case 185u: goto L_08A2CA8C;
    case 186u: goto L_08A2CA9C;
    case 187u: goto L_08A2CAB0;
    case 188u: goto L_08A2CAD4;
    case 189u: goto L_08A2CAF4;
    case 190u: goto L_08A2CB08;
    case 191u: goto L_08A2CB24;
    case 192u: goto L_08A2CB34;
    case 193u: goto L_08A2CB38;
    case 194u: goto L_08A2CB68;
    case 195u: goto L_08A2CBD0;
    case 196u: goto L_08A2CBD8;
    case 197u: goto L_08A2CBF4;
    case 198u: goto L_08A2CC00;
    case 199u: goto L_08A2CC08;
    case 200u: goto L_08A2CC10;
    case 201u: goto L_08A2CC18;
    case 202u: goto L_08A2CC2C;
    case 203u: goto L_08A2CC34;
    case 204u: goto L_08A2CC3C;
    case 205u: goto L_08A2CC44;
    case 206u: goto L_08A2CC54;
    case 207u: goto L_08A2CC5C;
    case 208u: goto L_08A2CC70;
    case 209u: goto L_08A2CC78;
    case 210u: goto L_08A2CC8C;
    case 211u: goto L_08A2CC9C;
    case 212u: goto L_08A2CCA8;
    case 213u: goto L_08A2CCB0;
    case 214u: goto L_08A2CCB8;
    case 215u: goto L_08A2CCC0;
    case 216u: goto L_08A2CCC8;
    case 217u: goto L_08A2CCD4;
    case 218u: goto L_08A2CCE0;
    case 219u: goto L_08A2CD2C;
    case 220u: goto L_08A2CD3C;
    case 221u: goto L_08A2CD4C;
    case 222u: goto L_08A2CD58;
    case 223u: goto L_08A2CD64;
    case 224u: goto L_08A2CD6C;
    case 225u: goto L_08A2CD9C;
    case 226u: goto L_08A2CDAC;
    case 227u: goto L_08A2CDB8;
    case 228u: goto L_08A2CDC0;
    case 229u: goto L_08A2CDD4;
    case 230u: goto L_08A2CDE4;
    case 231u: goto L_08A2CDF0;
    case 232u: goto L_08A2CDF8;
    case 233u: goto L_08A2CE04;
    case 234u: goto L_08A2CE0C;
    case 235u: goto L_08A2CE20;
    case 236u: goto L_08A2CE28;
    case 237u: goto L_08A2CE30;
    case 238u: goto L_08A2CE40;
    case 239u: goto L_08A2CE50;
    case 240u: goto L_08A2CE58;
    case 241u: goto L_08A2CE6C;
    case 242u: goto L_08A2CE74;
    case 243u: goto L_08A2CE80;
    case 244u: goto L_08A2CE8C;
    case 245u: goto L_08A2CED8;
    case 246u: goto L_08A2CEE8;
    case 247u: goto L_08A2CEF8;
    case 248u: goto L_08A2CF04;
    case 249u: goto L_08A2CF10;
    case 250u: goto L_08A2CF18;
    case 251u: goto L_08A2CF48;
    case 252u: goto L_08A2CF58;
    case 253u: goto L_08A2CF64;
    case 254u: goto L_08A2CF6C;
    case 255u: goto L_08A2CF80;
    case 256u: goto L_08A2CF90;
    case 257u: goto L_08A2CF9C;
    case 258u: goto L_08A2CFA4;
    case 259u: goto L_08A2CFB0;
    case 260u: goto L_08A2CFB8;
    case 261u: goto L_08A2CFCC;
    case 262u: goto L_08A2CFD4;
    case 263u: goto L_08A2CFDC;
    case 264u: goto L_08A2CFEC;
    case 265u: goto L_08A2CFFC;
    case 266u: goto L_08A2D004;
    case 267u: goto L_08A2D018;
    case 268u: goto L_08A2D020;
    case 269u: goto L_08A2D02C;
    case 270u: goto L_08A2D038;
    case 271u: goto L_08A2D084;
    case 272u: goto L_08A2D094;
    case 273u: goto L_08A2D0A4;
    case 274u: goto L_08A2D0B0;
    case 275u: goto L_08A2D0BC;
    case 276u: goto L_08A2D0C4;
    case 277u: goto L_08A2D0F4;
    case 278u: goto L_08A2D104;
    case 279u: goto L_08A2D110;
    case 280u: goto L_08A2D118;
    case 281u: goto L_08A2D12C;
    case 282u: goto L_08A2D13C;
    case 283u: goto L_08A2D148;
    case 284u: goto L_08A2D150;
    case 285u: goto L_08A2D15C;
    case 286u: goto L_08A2D164;
    case 287u: goto L_08A2D178;
    case 288u: goto L_08A2D180;
    case 289u: goto L_08A2D188;
    case 290u: goto L_08A2D198;
    case 291u: goto L_08A2D1A8;
    case 292u: goto L_08A2D1B0;
    case 293u: goto L_08A2D1C4;
    case 294u: goto L_08A2D1CC;
    case 295u: goto L_08A2D1D8;
    case 296u: goto L_08A2D1E4;
    case 297u: goto L_08A2D230;
    case 298u: goto L_08A2D240;
    case 299u: goto L_08A2D250;
    case 300u: goto L_08A2D25C;
    case 301u: goto L_08A2D268;
    case 302u: goto L_08A2D270;
    case 303u: goto L_08A2D2A0;
    case 304u: goto L_08A2D2B0;
    case 305u: goto L_08A2D2BC;
    case 306u: goto L_08A2D2C4;
    case 307u: goto L_08A2D2D8;
    case 308u: goto L_08A2D2E8;
    case 309u: goto L_08A2D2F4;
    case 310u: goto L_08A2D2FC;
    case 311u: goto L_08A2D308;
    case 312u: goto L_08A2D310;
    case 313u: goto L_08A2D324;
    case 314u: goto L_08A2D32C;
    case 315u: goto L_08A2D334;
    case 316u: goto L_08A2D344;
    case 317u: goto L_08A2D354;
    case 318u: goto L_08A2D35C;
    case 319u: goto L_08A2D370;
    case 320u: goto L_08A2D378;
    case 321u: goto L_08A2D384;
    case 322u: goto L_08A2D390;
    case 323u: goto L_08A2D3DC;
    case 324u: goto L_08A2D3EC;
    case 325u: goto L_08A2D3FC;
    case 326u: goto L_08A2D408;
    case 327u: goto L_08A2D414;
    case 328u: goto L_08A2D41C;
    case 329u: goto L_08A2D44C;
    case 330u: goto L_08A2D45C;
    case 331u: goto L_08A2D468;
    case 332u: goto L_08A2D470;
    case 333u: goto L_08A2D484;
    case 334u: goto L_08A2D494;
    case 335u: goto L_08A2D4A0;
    case 336u: goto L_08A2D4A8;
    case 337u: goto L_08A2D4B4;
    case 338u: goto L_08A2D4BC;
    case 339u: goto L_08A2D4D0;
    case 340u: goto L_08A2D4D8;
    case 341u: goto L_08A2D4E0;
    case 342u: goto L_08A2D4F0;
    case 343u: goto L_08A2D500;
    case 344u: goto L_08A2D508;
    case 345u: goto L_08A2D51C;
    case 346u: goto L_08A2D524;
    case 347u: goto L_08A2D530;
    case 348u: goto L_08A2D53C;
    case 349u: goto L_08A2D588;
    case 350u: goto L_08A2D598;
    case 351u: goto L_08A2D5A8;
    case 352u: goto L_08A2D5B4;
    case 353u: goto L_08A2D5C0;
    case 354u: goto L_08A2D5C8;
    case 355u: goto L_08A2D5F8;
    case 356u: goto L_08A2D608;
    case 357u: goto L_08A2D614;
    case 358u: goto L_08A2D61C;
    case 359u: goto L_08A2D630;
    case 360u: goto L_08A2D640;
    case 361u: goto L_08A2D64C;
    case 362u: goto L_08A2D654;
    case 363u: goto L_08A2D660;
    case 364u: goto L_08A2D668;
    case 365u: goto L_08A2D67C;
    case 366u: goto L_08A2D684;
    case 367u: goto L_08A2D68C;
    case 368u: goto L_08A2D69C;
    case 369u: goto L_08A2D6AC;
    case 370u: goto L_08A2D6B4;
    case 371u: goto L_08A2D6C8;
    case 372u: goto L_08A2D6D0;
    case 373u: goto L_08A2D6D8;
    case 374u: goto L_08A2D6E0;
    case 375u: goto L_08A2D6EC;
    case 376u: goto L_08A2D6F0;
    case 377u: goto L_08A2D720;
    case 378u: goto L_08A2D7BC;
    case 379u: goto L_08A2D7C8;
    case 380u: goto L_08A2D7F4;
    case 381u: goto L_08A2D808;
    case 382u: goto L_08A2D814;
    case 383u: goto L_08A2D824;
    case 384u: goto L_08A2D82C;
    case 385u: goto L_08A2D838;
    case 386u: goto L_08A2D848;
    case 387u: goto L_08A2D850;
    case 388u: goto L_08A2D85C;
    case 389u: goto L_08A2D8C8;
    case 390u: goto L_08A2D8E8;
    case 391u: goto L_08A2D8F4;
    case 392u: goto L_08A2D900;
    case 393u: goto L_08A2D908;
    case 394u: goto L_08A2D914;
    case 395u: goto L_08A2D924;
    case 396u: goto L_08A2D934;
    case 397u: goto L_08A2D93C;
    case 398u: goto L_08A2D94C;
    case 399u: goto L_08A2D95C;
    case 400u: goto L_08A2D988;
    case 401u: goto L_08A2D9C4;
    case 402u: goto L_08A2D9D0;
    case 403u: goto L_08A2D9D8;
    case 404u: goto L_08A2D9E0;
    case 405u: goto L_08A2D9F0;
    case 406u: goto L_08A2DA0C;
    case 407u: goto L_08A2DA14;
    case 408u: goto L_08A2DA20;
    case 409u: goto L_08A2DA2C;
    case 410u: goto L_08A2DA34;
    case 411u: goto L_08A2DA3C;
    case 412u: goto L_08A2DA50;
    case 413u: goto L_08A2DA60;
    case 414u: goto L_08A2DA6C;
    case 415u: goto L_08A2DA74;
    case 416u: goto L_08A2DA7C;
    case 417u: goto L_08A2DA8C;
    case 418u: goto L_08A2DA94;
    case 419u: goto L_08A2DA9C;
    case 420u: goto L_08A2DAAC;
    case 421u: goto L_08A2DABC;
    case 422u: goto L_08A2DAC4;
    case 423u: goto L_08A2DAD0;
    case 424u: goto L_08A2DAD8;
    case 425u: goto L_08A2DB10;
    case 426u: goto L_08A2DB1C;
    case 427u: goto L_08A2DB2C;
    case 428u: goto L_08A2DB34;
    case 429u: goto L_08A2DB38;
    case 430u: goto L_08A2DB58;
    case 431u: goto L_08A2DB9C;
    case 432u: goto L_08A2DBA4;
    case 433u: goto L_08A2DBAC;
    case 434u: goto L_08A2DBB4;
    case 435u: goto L_08A2DBC0;
    case 436u: goto L_08A2DBC8;
    case 437u: goto L_08A2DBD4;
    case 438u: goto L_08A2DBDC;
    case 439u: goto L_08A2DBE0;
    case 440u: goto L_08A2DBEC;
    case 441u: goto L_08A2DC18;
    case 442u: goto L_08A2DCAC;
    case 443u: goto L_08A2DCBC;
    case 444u: goto L_08A2DCD4;
    case 445u: goto L_08A2DCE4;
    case 446u: goto L_08A2DCFC;
    case 447u: goto L_08A2DD10;
    case 448u: goto L_08A2DD38;
    case 449u: goto L_08A2DD44;
    case 450u: goto L_08A2DDC8;
    case 451u: goto L_08A2DDD4;
    case 452u: goto L_08A2DDD8;
    case 453u: goto L_08A2DE0C;
    case 454u: goto L_08A2DE20;
    case 455u: goto L_08A2DE40;
    case 456u: goto L_08A2DE4C;
    case 457u: goto L_08A2DE54;
    case 458u: goto L_08A2DE5C;
    case 459u: goto L_08A2DE64;
    case 460u: goto L_08A2DE80;
    case 461u: goto L_08A2DE94;
    case 462u: goto L_08A2DEB4;
    case 463u: goto L_08A2DEE4;
    case 464u: goto L_08A2DEFC;
    case 465u: goto L_08A2DF08;
    case 466u: goto L_08A2DF18;
    case 467u: goto L_08A2DF24;
    case 468u: goto L_08A2E078;
    case 469u: goto L_08A2E08C;
    case 470u: goto L_08A2E0A8;
    case 471u: goto L_08A2E0D4;
    case 472u: goto L_08A2E0E0;
    case 473u: goto L_08A2E0F4;
    case 474u: goto L_08A2E204;
    case 475u: goto L_08A2E218;
    case 476u: goto L_08A2E230;
    case 477u: goto L_08A2E27C;
    case 478u: goto L_08A2E288;
    case 479u: goto L_08A2E2AC;
    case 480u: goto L_08A2E2B8;
    case 481u: goto L_08A2E2BC;
    case 482u: goto L_08A2E2F8;
    case 483u: goto L_08A2E30C;
    case 484u: goto L_08A2E310;
    case 485u: goto L_08A2E330;
    case 486u: goto L_08A2E348;
    case 487u: goto L_08A2E34C;
    case 488u: goto L_08A2E35C;
    case 489u: goto L_08A2E390;
    case 490u: goto L_08A2E3A4;
    case 491u: goto L_08A2E3AC;
    case 492u: goto L_08A2E3B4;
    case 493u: goto L_08A2E3BC;
    case 494u: goto L_08A2E3C8;
    case 495u: goto L_08A2E3D4;
    case 496u: goto L_08A2E3E8;
    case 497u: goto L_08A2E3EC;
    case 498u: goto L_08A2E400;
    case 499u: goto L_08A2E408;
    case 500u: goto L_08A2E414;
    case 501u: goto L_08A2E420;
    case 502u: goto L_08A2E450;
    case 503u: goto L_08A2E498;
    case 504u: goto L_08A2E4A4;
    case 505u: goto L_08A2E4DC;
    case 506u: goto L_08A2E4F0;
    case 507u: goto L_08A2E500;
    case 508u: goto L_08A2E510;
    case 509u: goto L_08A2E520;
    case 510u: goto L_08A2E540;
    case 511u: goto L_08A2E550;
    case 512u: goto L_08A2E560;
    case 513u: goto L_08A2E570;
    case 514u: goto L_08A2E590;
    case 515u: goto L_08A2E59C;
    case 516u: goto L_08A2E5CC;
    case 517u: goto L_08A2E5DC;
    case 518u: goto L_08A2E5F8;
    case 519u: goto L_08A2E604;
    case 520u: goto L_08A2E614;
    case 521u: goto L_08A2E62C;
    case 522u: goto L_08A2E63C;
    case 523u: goto L_08A2E658;
    case 524u: goto L_08A2E664;
    case 525u: goto L_08A2E674;
    case 526u: goto L_08A2E67C;
    case 527u: goto L_08A2E68C;
    case 528u: goto L_08A2E69C;
    case 529u: goto L_08A2E6B8;
    case 530u: goto L_08A2E6C8;
    case 531u: goto L_08A2E6D4;
    case 532u: goto L_08A2E6E4;
    case 533u: goto L_08A2E6F8;
    case 534u: goto L_08A2E708;
    case 535u: goto L_08A2E740;
    case 536u: goto L_08A2E750;
    case 537u: goto L_08A2E77C;
    case 538u: goto L_08A2E784;
    case 539u: goto L_08A2E790;
    case 540u: goto L_08A2E7A0;
    case 541u: goto L_08A2E7AC;
    case 542u: goto L_08A2E7BC;
    case 543u: goto L_08A2E7C4;
    case 544u: goto L_08A2E7D8;
    case 545u: goto L_08A2E7E4;
    case 546u: goto L_08A2E80C;
    case 547u: goto L_08A2E814;
    case 548u: goto L_08A2E820;
    case 549u: goto L_08A2E830;
    case 550u: goto L_08A2E83C;
    case 551u: goto L_08A2E84C;
    case 552u: goto L_08A2E854;
    case 553u: goto L_08A2E860;
    case 554u: goto L_08A2E868;
    case 555u: goto L_08A2E86C;
    case 556u: goto L_08A2E87C;
    case 557u: goto L_08A2E89C;
    case 558u: goto L_08A2E964;
    case 559u: goto L_08A2E98C;
    case 560u: goto L_08A2E994;
    case 561u: goto L_08A2E9B0;
    case 562u: goto L_08A2E9B8;
    case 563u: goto L_08A2E9C0;
    case 564u: goto L_08A2E9CC;
    case 565u: goto L_08A2E9D8;
    case 566u: goto L_08A2E9E0;
    case 567u: goto L_08A2E9E4;
    case 568u: goto L_08A2E9FC;
    case 569u: goto L_08A2EA0C;
    case 570u: goto L_08A2EA24;
    case 571u: goto L_08A2EA3C;
    case 572u: goto L_08A2EA44;
    case 573u: goto L_08A2EA4C;
    case 574u: goto L_08A2EA54;
    case 575u: goto L_08A2EA5C;
    case 576u: goto L_08A2EA64;
    case 577u: goto L_08A2EA6C;
    case 578u: goto L_08A2EA74;
    case 579u: goto L_08A2EA7C;
    case 580u: goto L_08A2EA84;
    case 581u: goto L_08A2EA8C;
    case 582u: goto L_08A2EA94;
    case 583u: goto L_08A2EA9C;
    case 584u: goto L_08A2EAA4;
    case 585u: goto L_08A2EAA8;
    case 586u: goto L_08A2EAB4;
    case 587u: goto L_08A2EAD0;
    case 588u: goto L_08A2EAE4;
    case 589u: goto L_08A2EAEC;
    case 590u: goto L_08A2EAF4;
    case 591u: goto L_08A2EAFC;
    case 592u: goto L_08A2EB0C;
    case 593u: goto L_08A2EB18;
    case 594u: goto L_08A2EB20;
    case 595u: goto L_08A2EB24;
    case 596u: goto L_08A2EB2C;
    case 597u: goto L_08A2EB34;
    case 598u: goto L_08A2EB48;
    case 599u: goto L_08A2EB74;
    case 600u: goto L_08A2EB80;
    case 601u: goto L_08A2EB8C;
    case 602u: goto L_08A2EB98;
    case 603u: goto L_08A2EBA4;
    case 604u: goto L_08A2EBB0;
    case 605u: goto L_08A2EBBC;
    case 606u: goto L_08A2EBC8;
    case 607u: goto L_08A2EBD4;
    case 608u: goto L_08A2EBE0;
    case 609u: goto L_08A2EBEC;
    case 610u: goto L_08A2EBF8;
    case 611u: goto L_08A2EC04;
    case 612u: goto L_08A2EC10;
    case 613u: goto L_08A2EC18;
    case 614u: goto L_08A2EC3C;
    case 615u: goto L_08A2EC44;
    case 616u: goto L_08A2EC4C;
    case 617u: goto L_08A2EC84;
    case 618u: goto L_08A2EC94;
    case 619u: goto L_08A2ECC0;
    case 620u: goto L_08A2ECCC;
    case 621u: goto L_08A2ECD8;
    case 622u: goto L_08A2ECE4;
    case 623u: goto L_08A2ECF0;
    case 624u: goto L_08A2ECFC;
    case 625u: goto L_08A2ED08;
    case 626u: goto L_08A2ED14;
    case 627u: goto L_08A2ED20;
    case 628u: goto L_08A2ED2C;
    case 629u: goto L_08A2ED38;
    case 630u: goto L_08A2ED44;
    case 631u: goto L_08A2ED50;
    case 632u: goto L_08A2ED5C;
    case 633u: goto L_08A2ED64;
    case 634u: goto L_08A2ED88;
    case 635u: goto L_08A2ED90;
    case 636u: goto L_08A2ED98;
    case 637u: goto L_08A2EDC8;
    case 638u: goto L_08A2EE00;
    case 639u: goto L_08A2EE14;
    case 640u: goto L_08A2EE28;
    case 641u: goto L_08A2EE40;
    case 642u: goto L_08A2EE4C;
    case 643u: goto L_08A2EE58;
    case 644u: goto L_08A2EE74;
    case 645u: goto L_08A2EE7C;
    case 646u: goto L_08A2EE84;
    case 647u: goto L_08A2EE98;
    case 648u: goto L_08A2EEA8;
    case 649u: goto L_08A2EEB8;
    case 650u: goto L_08A2EEC4;
    case 651u: goto L_08A2EECC;
    case 652u: goto L_08A2EED0;
    case 653u: goto L_08A2EED4;
    case 654u: goto L_08A2EEEC;
    case 655u: goto L_08A2EEF4;
    case 656u: goto L_08A2EEFC;
    case 657u: goto L_08A2EF0C;
    case 658u: goto L_08A2EF18;
    case 659u: goto L_08A2EF20;
    case 660u: goto L_08A2EF24;
    case 661u: goto L_08A2EF28;
    case 662u: goto L_08A2EF40;
    case 663u: goto L_08A2EF4C;
    case 664u: goto L_08A2EF54;
    case 665u: goto L_08A2EF70;
    case 666u: goto L_08A2EF90;
    case 667u: goto L_08A2EFA0;
    case 668u: goto L_08A2EFA8;
    case 669u: goto L_08A2EFB0;
    case 670u: goto L_08A2EFC0;
    case 671u: goto L_08A2EFCC;
    case 672u: goto L_08A2EFD4;
    case 673u: goto L_08A2EFD8;
    case 674u: goto L_08A2EFDC;
    case 675u: goto L_08A2EFF4;
    case 676u: goto L_08A2EFFC;
    case 677u: goto L_08A2F008;
    case 678u: goto L_08A2F018;
    case 679u: goto L_08A2F024;
    case 680u: goto L_08A2F02C;
    case 681u: goto L_08A2F030;
    case 682u: goto L_08A2F034;
    case 683u: goto L_08A2F04C;
    case 684u: goto L_08A2F064;
    case 685u: goto L_08A2F078;
    case 686u: goto L_08A2F080;
    case 687u: goto L_08A2F094;
    case 688u: goto L_08A2F0AC;
    case 689u: goto L_08A2F0C4;
    case 690u: goto L_08A2F0D8;
    case 691u: goto L_08A2F0E0;
    case 692u: goto L_08A2F0F0;
    case 693u: goto L_08A2F100;
    case 694u: goto L_08A2F108;
    case 695u: goto L_08A2F11C;
    case 696u: goto L_08A2F140;
    case 697u: goto L_08A2F150;
    case 698u: goto L_08A2F158;
    case 699u: goto L_08A2F168;
    case 700u: goto L_08A2F178;
    case 701u: goto L_08A2F188;
    case 702u: goto L_08A2F190;
    case 703u: goto L_08A2F198;
    case 704u: goto L_08A2F1A0;
    case 705u: goto L_08A2F1AC;
    case 706u: goto L_08A2F1B4;
    case 707u: goto L_08A2F1BC;
    case 708u: goto L_08A2F1C4;
    case 709u: goto L_08A2F1D8;
    case 710u: goto L_08A2F1E0;
    case 711u: goto L_08A2F1FC;
    case 712u: goto L_08A2F210;
    case 713u: goto L_08A2F218;
    case 714u: goto L_08A2F234;
    case 715u: goto L_08A2F244;
    case 716u: goto L_08A2F25C;
    case 717u: goto L_08A2F288;
    case 718u: goto L_08A2F2FC;
    case 719u: goto L_08A2F318;
    case 720u: goto L_08A2F32C;
    case 721u: goto L_08A2F340;
    case 722u: goto L_08A2F354;
    case 723u: goto L_08A2F370;
    case 724u: goto L_08A2F38C;
    case 725u: goto L_08A2F3A0;
    case 726u: goto L_08A2F3B4;
    case 727u: goto L_08A2F3C8;
    case 728u: goto L_08A2F3F4;
    case 729u: goto L_08A2F410;
    case 730u: goto L_08A2F424;
    case 731u: goto L_08A2F438;
    case 732u: goto L_08A2F44C;
    case 733u: goto L_08A2F468;
    case 734u: goto L_08A2F484;
    case 735u: goto L_08A2F498;
    case 736u: goto L_08A2F4AC;
    case 737u: goto L_08A2F4C0;
    case 738u: goto L_08A2F510;
    case 739u: goto L_08A2F598;
    case 740u: goto L_08A2F5A0;
    case 741u: goto L_08A2F5A8;
    case 742u: goto L_08A2F618;
    case 743u: goto L_08A2F650;
    case 744u: goto L_08A2F678;
    case 745u: goto L_08A2F69C;
    case 746u: goto L_08A2F708;
    case 747u: goto L_08A2F71C;
    case 748u: goto L_08A2F730;
    case 749u: goto L_08A2F738;
    case 750u: goto L_08A2F740;
    case 751u: goto L_08A2F74C;
    case 752u: goto L_08A2F768;
    case 753u: goto L_08A2F770;
    case 754u: goto L_08A2F780;
    case 755u: goto L_08A2F788;
    case 756u: goto L_08A2F79C;
    case 757u: goto L_08A2F7AC;
    case 758u: goto L_08A2F7B4;
    case 759u: goto L_08A2F7BC;
    case 760u: goto L_08A2F7C4;
    case 761u: goto L_08A2F7CC;
    case 762u: goto L_08A2F7D8;
    case 763u: goto L_08A2F7F0;
    case 764u: goto L_08A2F7F8;
    case 765u: goto L_08A2F800;
    case 766u: goto L_08A2F808;
    case 767u: goto L_08A2F810;
    case 768u: goto L_08A2F820;
    case 769u: goto L_08A2F838;
    case 770u: goto L_08A2F844;
    case 771u: goto L_08A2F850;
    case 772u: goto L_08A2F85C;
    case 773u: goto L_08A2F868;
    case 774u: goto L_08A2F874;
    case 775u: goto L_08A2F880;
    case 776u: goto L_08A2F88C;
    case 777u: goto L_08A2F898;
    case 778u: goto L_08A2F8A4;
    case 779u: goto L_08A2F8B0;
    case 780u: goto L_08A2F8BC;
    case 781u: goto L_08A2F8C8;
    case 782u: goto L_08A2F8D4;
    case 783u: goto L_08A2F8DC;
    case 784u: goto L_08A2F8E4;
    case 785u: goto L_08A2F8F0;
    case 786u: goto L_08A2F8FC;
    case 787u: goto L_08A2F908;
    case 788u: goto L_08A2F914;
    case 789u: goto L_08A2F920;
    case 790u: goto L_08A2F928;
    case 791u: goto L_08A2F930;
    case 792u: goto L_08A2F938;
    case 793u: goto L_08A2F944;
    case 794u: goto L_08A2F95C;
    case 795u: goto L_08A2F964;
    case 796u: goto L_08A2F96C;
    case 797u: goto L_08A2F974;
    case 798u: goto L_08A2F98C;
    case 799u: goto L_08A2F998;
    case 800u: goto L_08A2F9A0;
    case 801u: goto L_08A2F9A8;
    case 802u: goto L_08A2F9AC;
    case 803u: goto L_08A2F9BC;
    case 804u: goto L_08A2F9C8;
    case 805u: goto L_08A2F9D0;
    case 806u: goto L_08A2F9D8;
    case 807u: goto L_08A2F9F4;
    case 808u: goto L_08A2FA04;
    case 809u: goto L_08A2FA10;
    case 810u: goto L_08A2FA1C;
    case 811u: goto L_08A2FA28;
    case 812u: goto L_08A2FA34;
    case 813u: goto L_08A2FA40;
    case 814u: goto L_08A2FA4C;
    case 815u: goto L_08A2FA58;
    case 816u: goto L_08A2FA64;
    case 817u: goto L_08A2FA6C;
    case 818u: goto L_08A2FA70;
    case 819u: goto L_08A2FA78;
    case 820u: goto L_08A2FA8C;
    case 821u: goto L_08A2FA9C;
    case 822u: goto L_08A2FAA4;
    case 823u: goto L_08A2FAAC;
    case 824u: goto L_08A2FABC;
    case 825u: goto L_08A2FAC4;
    case 826u: goto L_08A2FACC;
    case 827u: goto L_08A2FAD4;
    case 828u: goto L_08A2FADC;
    case 829u: goto L_08A2FAE4;
    case 830u: goto L_08A2FAF0;
    case 831u: goto L_08A2FB14;
    case 832u: goto L_08A2FB20;
    case 833u: goto L_08A2FB30;
    case 834u: goto L_08A2FB38;
    case 835u: goto L_08A2FB40;
    case 836u: goto L_08A2FB48;
    case 837u: goto L_08A2FB50;
    case 838u: goto L_08A2FB58;
    case 839u: goto L_08A2FB60;
    case 840u: goto L_08A2FB78;
    case 841u: goto L_08A2FB90;
    case 842u: goto L_08A2FB98;
    case 843u: goto L_08A2FBA8;
    case 844u: goto L_08A2FBB0;
    case 845u: goto L_08A2FBCC;
    case 846u: goto L_08A2FBF0;
    case 847u: goto L_08A2FC04;
    case 848u: goto L_08A2FC2C;
    case 849u: goto L_08A2FC64;
    case 850u: goto L_08A2FC7C;
    case 851u: goto L_08A2FC8C;
    case 852u: goto L_08A2FC94;
    case 853u: goto L_08A2FC98;
    case 854u: goto L_08A2FCB0;
    case 855u: goto L_08A2FCCC;
    case 856u: goto L_08A2FCF4;
    case 857u: goto L_08A2FD0C;
    case 858u: goto L_08A2FD18;
    case 859u: goto L_08A2FD50;
    case 860u: goto L_08A2FD68;
    case 861u: goto L_08A2FD74;
    case 862u: goto L_08A2FDAC;
    case 863u: goto L_08A2FDD8;
    case 864u: goto L_08A2FDE4;
    case 865u: goto L_08A2FE50;
    case 866u: goto L_08A2FE5C;
    case 867u: goto L_08A2FE7C;
    case 868u: goto L_08A2FEA0;
    case 869u: goto L_08A2FEA8;
    case 870u: goto L_08A2FEB0;
    case 871u: goto L_08A2FEC0;
    case 872u: goto L_08A2FECC;
    case 873u: goto L_08A2FED4;
    case 874u: goto L_08A2FEF4;
    case 875u: goto L_08A2FF1C;
    case 876u: goto L_08A2FF30;
    case 877u: goto L_08A2FF48;
    case 878u: goto L_08A2FF50;
    case 879u: goto L_08A2FF64;
    case 880u: goto L_08A2FF74;
    case 881u: goto L_08A2FFC0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A2C000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2C074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2C2C0;
      }
      goto L_08A2C09C;
    }
L_08A2C09C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A2C2B0;
      }
      goto L_08A2C0A8;
    }
L_08A2C0A8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1352), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1356), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 256u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2C1EC;
      }
      goto L_08A2C0D4;
    }
L_08A2C0D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2C118;
      }
      goto L_08A2C0DC;
    }
L_08A2C0DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2C134;
      }
      goto L_08A2C0E4;
    }
L_08A2C0E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2C170;
      }
      goto L_08A2C0EC;
    }
L_08A2C0EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2C19C;
      }
      goto L_08A2C0F4;
    }
L_08A2C0F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2C1C8;
      }
      goto L_08A2C0FC;
    }
L_08A2C0FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C110;
      }
      goto L_08A2C10C;
    }
L_08A2C10C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A2C110;
L_08A2C110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C1EC;
      }
      goto L_08A2C118;
    }
L_08A2C118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C12C;
      }
      goto L_08A2C128;
    }
L_08A2C128:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A2C12C;
L_08A2C12C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C1EC;
      }
      goto L_08A2C134;
    }
L_08A2C134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C164;
      }
      goto L_08A2C144;
    }
L_08A2C144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 52u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C164;
      }
      goto L_08A2C154;
    }
L_08A2C154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C168;
      }
      goto L_08A2C164;
    }
L_08A2C164:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A2C168;
L_08A2C168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C1EC;
      }
      goto L_08A2C170;
    }
L_08A2C170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C190;
      }
      goto L_08A2C180;
    }
L_08A2C180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C194;
      }
      goto L_08A2C190;
    }
L_08A2C190:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A2C194;
L_08A2C194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C1EC;
      }
      goto L_08A2C19C;
    }
L_08A2C19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C1BC;
      }
      goto L_08A2C1AC;
    }
L_08A2C1AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C1C0;
      }
      goto L_08A2C1BC;
    }
L_08A2C1BC:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A2C1C0;
L_08A2C1C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C1EC;
      }
      goto L_08A2C1C8;
    }
L_08A2C1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C1E8;
      }
      goto L_08A2C1D8;
    }
L_08A2C1D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C1EC;
      }
      goto L_08A2C1E8;
    }
L_08A2C1E8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A2C1EC;
L_08A2C1EC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C22C;
      }
      goto L_08A2C1F4;
    }
L_08A2C1F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2C200u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A2C200u) goto L_08A2C200;
    return;
L_08A2C200:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A2C214u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D2ECu>(ctx, &aot_mem) && ctx.pc == 0x08A2C214u) goto L_08A2C214;
    return;
L_08A2C214:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C224u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C224u) goto L_08A2C224;
    return;
L_08A2C224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C26C;
      }
      goto L_08A2C22C;
    }
L_08A2C22C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2C248;
      }
      goto L_08A2C23C;
    }
L_08A2C23C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C26C;
      }
      goto L_08A2C248;
    }
L_08A2C248:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A2C25Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D2ECu>(ctx, &aot_mem) && ctx.pc == 0x08A2C25Cu) goto L_08A2C25C;
    return;
L_08A2C25C:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C26Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C26Cu) goto L_08A2C26C;
    return;
L_08A2C26C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2C29C;
      }
      goto L_08A2C27C;
    }
L_08A2C27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2C29C;
      }
      goto L_08A2C28C;
    }
L_08A2C28C:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2C29Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A2C29Cu) goto L_08A2C29C;
    return;
L_08A2C29C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2C2DC;
      }
      goto L_08A2C2B0;
    }
L_08A2C2B0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2C09C;
      }
      goto L_08A2C2C0;
    }
L_08A2C2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2C2DCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C2DCu) goto L_08A2C2DC;
    return;
L_08A2C2DC:
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
L_08A2C2F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 2u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A2C378;
      }
      goto L_08A2C354;
    }
L_08A2C354:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A2C368;
      }
      goto L_08A2C360;
    }
L_08A2C360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2C378;
      }
      goto L_08A2C368;
    }
L_08A2C368:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2C354;
      }
      goto L_08A2C378;
    }
L_08A2C378:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2C398;
      }
      goto L_08A2C380;
    }
L_08A2C380:
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A2C3A0;
      }
      goto L_08A2C390;
    }
L_08A2C390:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1352), 0u);
      if (branch_taken) {
          goto L_08A2C450;
      }
      goto L_08A2C398;
    }
L_08A2C398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2C75C;
      }
      goto L_08A2C3A0;
    }
L_08A2C3A0:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[16] = (ctx.gpr[17] << 2u);
    goto L_08A2C3AC;
L_08A2C3AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[23] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2C3E4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C3E4u) goto L_08A2C3E4;
    return;
L_08A2C3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2C404u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C404u) goto L_08A2C404;
    return;
L_08A2C404:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A2C418u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 324u, 0x08A29BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C418u) goto L_08A2C418;
    return;
L_08A2C418:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2C434u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 133u, 0x089A49D4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C434u) goto L_08A2C434;
    return;
L_08A2C434:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08A2C3AC;
      }
      goto L_08A2C44C;
    }
L_08A2C44C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1352), 0u);
    goto L_08A2C450;
L_08A2C450:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1356), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 256u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2C558;
      }
      goto L_08A2C478;
    }
L_08A2C478:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2C4C0;
      }
      goto L_08A2C488;
    }
L_08A2C488:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2C4D8;
      }
      goto L_08A2C490;
    }
L_08A2C490:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2C500;
      }
      goto L_08A2C498;
    }
L_08A2C498:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2C520;
      }
      goto L_08A2C4A0;
    }
L_08A2C4A0:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2C540;
      }
      goto L_08A2C4A8;
    }
L_08A2C4A8:
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C4B8;
      }
      goto L_08A2C4B4;
    }
L_08A2C4B4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C4B8;
L_08A2C4B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C558;
      }
      goto L_08A2C4C0;
    }
L_08A2C4C0:
    ctx.gpr[6] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C4D0;
      }
      goto L_08A2C4CC;
    }
L_08A2C4CC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C4D0;
L_08A2C4D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C558;
      }
      goto L_08A2C4D8;
    }
L_08A2C4D8:
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 52u);
      if (branch_taken) {
          goto L_08A2C4F4;
      }
      goto L_08A2C4E4;
    }
L_08A2C4E4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2C4F4;
      }
      goto L_08A2C4EC;
    }
L_08A2C4EC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C4F8;
      }
      goto L_08A2C4F4;
    }
L_08A2C4F4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C4F8;
L_08A2C4F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C558;
      }
      goto L_08A2C500;
    }
L_08A2C500:
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2C514;
      }
      goto L_08A2C50C;
    }
L_08A2C50C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C518;
      }
      goto L_08A2C514;
    }
L_08A2C514:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C518;
L_08A2C518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C558;
      }
      goto L_08A2C520;
    }
L_08A2C520:
    ctx.gpr[6] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 48u);
      if (branch_taken) {
          goto L_08A2C534;
      }
      goto L_08A2C52C;
    }
L_08A2C52C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C538;
      }
      goto L_08A2C534;
    }
L_08A2C534:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C538;
L_08A2C538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C558;
      }
      goto L_08A2C540;
    }
L_08A2C540:
    ctx.gpr[6] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 54u);
      if (branch_taken) {
          goto L_08A2C554;
      }
      goto L_08A2C54C;
    }
L_08A2C54C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C558;
      }
      goto L_08A2C554;
    }
L_08A2C554:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C558;
L_08A2C558:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C614;
      }
      goto L_08A2C560;
    }
L_08A2C560:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A2C56Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A2C56Cu) goto L_08A2C56C;
    return;
L_08A2C56C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A2C59C;
      }
      goto L_08A2C578;
    }
L_08A2C578:
    ctx.gpr[31] = (0x08A2C580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D2ECu>(ctx, &aot_mem) && ctx.pc == 0x08A2C580u) goto L_08A2C580;
    return;
L_08A2C580:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C590u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C590u) goto L_08A2C590;
    return;
L_08A2C590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A2C5F8;
      }
      goto L_08A2C59C;
    }
L_08A2C59C:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A2C5D0;
      }
      goto L_08A2C5AC;
    }
L_08A2C5AC:
    ctx.gpr[31] = (0x08A2C5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D2ECu>(ctx, &aot_mem) && ctx.pc == 0x08A2C5B4u) goto L_08A2C5B4;
    return;
L_08A2C5B4:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C5C4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C5C4u) goto L_08A2C5C4;
    return;
L_08A2C5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A2C5F8;
      }
      goto L_08A2C5D0;
    }
L_08A2C5D0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A2C5E0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D2ECu>(ctx, &aot_mem) && ctx.pc == 0x08A2C5E0u) goto L_08A2C5E0;
    return;
L_08A2C5E0:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C5F0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C5F0u) goto L_08A2C5F0;
    return;
L_08A2C5F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08A2C5F8;
L_08A2C5F8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A2C60Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C60Cu) goto L_08A2C60C;
    return;
L_08A2C60C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C650;
      }
      goto L_08A2C614;
    }
L_08A2C614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2C62C;
      }
      goto L_08A2C624;
    }
L_08A2C624:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C650;
      }
      goto L_08A2C62C;
    }
L_08A2C62C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A2C640u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D2ECu>(ctx, &aot_mem) && ctx.pc == 0x08A2C640u) goto L_08A2C640;
    return;
L_08A2C640:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C650u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C650u) goto L_08A2C650;
    return;
L_08A2C650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[30] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[5] == ctx.gpr[30]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
        goto L_08A2C684;
    }
    goto L_08A2C66C;
L_08A2C66C:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2C680;
      }
      goto L_08A2C674;
    }
L_08A2C674:
    ctx.gpr[31] = (0x08A2C67Cu);
    ctx.gpr[6] = (ctx.gpr[30] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A2C67Cu) goto L_08A2C67C;
    return;
L_08A2C67C:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_08A2C680;
L_08A2C680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    goto L_08A2C684;
L_08A2C684:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A2C758;
      }
      goto L_08A2C6B0;
    }
L_08A2C6B0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[18] = (0u | 0u);
    goto L_08A2C6C0;
L_08A2C6C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A2C6D4u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 308u, 0x08A29A80u>(ctx, &aot_mem) && ctx.pc == 0x08A2C6D4u) goto L_08A2C6D4;
    return;
L_08A2C6D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2C6F8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C6F8u) goto L_08A2C6F8;
    return;
L_08A2C6F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2C718u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C718u) goto L_08A2C718;
    return;
L_08A2C718:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A2C72Cu);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 324u, 0x08A29BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C72Cu) goto L_08A2C72C;
    return;
L_08A2C72C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A2C748u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 133u, 0x089A49D4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C748u) goto L_08A2C748;
    return;
L_08A2C748:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2C6C0;
      }
      goto L_08A2C758;
    }
L_08A2C758:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A2C75C;
L_08A2C75C:
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
L_08A2C78C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A2C810;
      }
      goto L_08A2C7EC;
    }
L_08A2C7EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A2C800;
      }
      goto L_08A2C7F8;
    }
L_08A2C7F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2C810;
      }
      goto L_08A2C800;
    }
L_08A2C800:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2C7EC;
      }
      goto L_08A2C810;
    }
L_08A2C810:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2C87C;
      }
      goto L_08A2C818;
    }
L_08A2C818:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1352), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1356), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 256u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2C934;
      }
      goto L_08A2C844;
    }
L_08A2C844:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2C89C;
      }
      goto L_08A2C854;
    }
L_08A2C854:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2C884;
      }
      goto L_08A2C85C;
    }
L_08A2C85C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2C8B4;
      }
      goto L_08A2C864;
    }
L_08A2C864:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2C8DC;
      }
      goto L_08A2C86C;
    }
L_08A2C86C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2C8FC;
      }
      goto L_08A2C874;
    }
L_08A2C874:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2C91C;
      }
      goto L_08A2C87C;
    }
L_08A2C87C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2CB38;
      }
      goto L_08A2C884;
    }
L_08A2C884:
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C894;
      }
      goto L_08A2C890;
    }
L_08A2C890:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C894;
L_08A2C894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C934;
      }
      goto L_08A2C89C;
    }
L_08A2C89C:
    ctx.gpr[6] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C8AC;
      }
      goto L_08A2C8A8;
    }
L_08A2C8A8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C8AC;
L_08A2C8AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C934;
      }
      goto L_08A2C8B4;
    }
L_08A2C8B4:
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 52u);
      if (branch_taken) {
          goto L_08A2C8D0;
      }
      goto L_08A2C8C0;
    }
L_08A2C8C0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2C8D0;
      }
      goto L_08A2C8C8;
    }
L_08A2C8C8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C8D4;
      }
      goto L_08A2C8D0;
    }
L_08A2C8D0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C8D4;
L_08A2C8D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C934;
      }
      goto L_08A2C8DC;
    }
L_08A2C8DC:
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2C8F0;
      }
      goto L_08A2C8E8;
    }
L_08A2C8E8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C8F4;
      }
      goto L_08A2C8F0;
    }
L_08A2C8F0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C8F4;
L_08A2C8F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C934;
      }
      goto L_08A2C8FC;
    }
L_08A2C8FC:
    ctx.gpr[6] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 48u);
      if (branch_taken) {
          goto L_08A2C910;
      }
      goto L_08A2C908;
    }
L_08A2C908:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C914;
      }
      goto L_08A2C910;
    }
L_08A2C910:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C914;
L_08A2C914:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C934;
      }
      goto L_08A2C91C;
    }
L_08A2C91C:
    ctx.gpr[6] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 54u);
      if (branch_taken) {
          goto L_08A2C930;
      }
      goto L_08A2C928;
    }
L_08A2C928:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C934;
      }
      goto L_08A2C930;
    }
L_08A2C930:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C934;
L_08A2C934:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C9F0;
      }
      goto L_08A2C93C;
    }
L_08A2C93C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2C948u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A2C948u) goto L_08A2C948;
    return;
L_08A2C948:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A2C978;
      }
      goto L_08A2C954;
    }
L_08A2C954:
    ctx.gpr[31] = (0x08A2C95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D2ECu>(ctx, &aot_mem) && ctx.pc == 0x08A2C95Cu) goto L_08A2C95C;
    return;
L_08A2C95C:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C96Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C96Cu) goto L_08A2C96C;
    return;
L_08A2C96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A2C9D4;
      }
      goto L_08A2C978;
    }
L_08A2C978:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A2C9AC;
      }
      goto L_08A2C988;
    }
L_08A2C988:
    ctx.gpr[31] = (0x08A2C990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D2ECu>(ctx, &aot_mem) && ctx.pc == 0x08A2C990u) goto L_08A2C990;
    return;
L_08A2C990:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C9A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C9A0u) goto L_08A2C9A0;
    return;
L_08A2C9A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A2C9D4;
      }
      goto L_08A2C9AC;
    }
L_08A2C9AC:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A2C9BCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D2ECu>(ctx, &aot_mem) && ctx.pc == 0x08A2C9BCu) goto L_08A2C9BC;
    return;
L_08A2C9BC:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C9CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C9CCu) goto L_08A2C9CC;
    return;
L_08A2C9CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08A2C9D4;
L_08A2C9D4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A2C9E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C9E8u) goto L_08A2C9E8;
    return;
L_08A2C9E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CA2C;
      }
      goto L_08A2C9F0;
    }
L_08A2C9F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2CA08;
      }
      goto L_08A2CA00;
    }
L_08A2CA00:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CA2C;
      }
      goto L_08A2CA08;
    }
L_08A2CA08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A2CA1Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 243u, 0x08A1D2ECu>(ctx, &aot_mem) && ctx.pc == 0x08A2CA1Cu) goto L_08A2CA1C;
    return;
L_08A2CA1C:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2CA2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2CA2Cu) goto L_08A2CA2C;
    return;
L_08A2CA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[5] == ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A2CA60;
    }
    goto L_08A2CA48;
L_08A2CA48:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2CA5C;
      }
      goto L_08A2CA50;
    }
L_08A2CA50:
    ctx.gpr[31] = (0x08A2CA58u);
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A2CA58u) goto L_08A2CA58;
    return;
L_08A2CA58:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A2CA5C;
L_08A2CA5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A2CA60;
L_08A2CA60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A2CB34;
      }
      goto L_08A2CA8C;
    }
L_08A2CA8C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[19] = (0u | 0u);
    goto L_08A2CA9C;
L_08A2CA9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08A2CAB0u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 308u, 0x08A29A80u>(ctx, &aot_mem) && ctx.pc == 0x08A2CAB0u) goto L_08A2CAB0;
    return;
L_08A2CAB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2CAD4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2CAD4u) goto L_08A2CAD4;
    return;
L_08A2CAD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2CAF4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2CAF4u) goto L_08A2CAF4;
    return;
L_08A2CAF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A2CB08u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 324u, 0x08A29BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A2CB08u) goto L_08A2CB08;
    return;
L_08A2CB08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A2CB24u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 133u, 0x089A49D4u>(ctx, &aot_mem) && ctx.pc == 0x08A2CB24u) goto L_08A2CB24;
    return;
L_08A2CB24:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2CA9C;
      }
      goto L_08A2CB34;
    }
L_08A2CB34:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A2CB38;
L_08A2CB38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CB68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A2CC54;
      }
      goto L_08A2CBD0;
    }
L_08A2CBD0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[17] = (0u | 0u);
    goto L_08A2CBD8;
L_08A2CBD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2CBF4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 678u, 0x08A2B0E4u>(ctx, &aot_mem) && ctx.pc == 0x08A2CBF4u) goto L_08A2CBF4;
    return;
L_08A2CBF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A2CC44;
      }
      goto L_08A2CC00;
    }
L_08A2CC00:
    ctx.gpr[31] = (0x08A2CC08u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 558u, 0x08927438u>(ctx, &aot_mem) && ctx.pc == 0x08A2CC08u) goto L_08A2CC08;
    return;
L_08A2CC08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CC44;
      }
      goto L_08A2CC10;
    }
L_08A2CC10:
    ctx.gpr[31] = (0x08A2CC18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 308u, 0x08A29A80u>(ctx, &aot_mem) && ctx.pc == 0x08A2CC18u) goto L_08A2CC18;
    return;
L_08A2CC18:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2CC2Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 682u, 0x08A2B1B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2CC2Cu) goto L_08A2CC2C;
    return;
L_08A2CC2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CC3C;
      }
      goto L_08A2CC34;
    }
L_08A2CC34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A2CC54;
      }
      goto L_08A2CC3C;
    }
L_08A2CC3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2D6F0;
      }
      goto L_08A2CC44;
    }
L_08A2CC44:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2CBD8;
      }
      goto L_08A2CC54;
    }
L_08A2CC54:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D6D8;
      }
      goto L_08A2CC5C;
    }
L_08A2CC5C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2CC70u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 682u, 0x08A2B1B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2CC70u) goto L_08A2CC70;
    return;
L_08A2CC70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D6D8;
      }
      goto L_08A2CC78;
    }
L_08A2CC78:
    ctx.gpr[16] = (2275u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2080));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2CC8Cu);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2CC8Cu) goto L_08A2CC8C;
    return;
L_08A2CC8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D6D0;
      }
      goto L_08A2CC9C;
    }
L_08A2CC9C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2CE74;
      }
      goto L_08A2CCA8;
    }
L_08A2CCA8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2D020;
      }
      goto L_08A2CCB0;
    }
L_08A2CCB0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D1CC;
      }
      goto L_08A2CCB8;
    }
L_08A2CCB8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2D378;
      }
      goto L_08A2CCC0;
    }
L_08A2CCC0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2D524;
      }
      goto L_08A2CCC8;
    }
L_08A2CCC8:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A2CCD4u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2CCD4u) goto L_08A2CCD4;
    return;
L_08A2CCD4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A2CD3C;
      }
      goto L_08A2CCE0;
    }
L_08A2CCE0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11252)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11248)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11244)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11240)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11236)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11232)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11228)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2CD2Cu);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11224)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 296u, 0x08A29904u>(ctx, &aot_mem) && ctx.pc == 0x08A2CD2Cu) goto L_08A2CD2C;
    return;
L_08A2CD2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15396));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08A2CD3C;
L_08A2CD3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2CD6C;
      }
      goto L_08A2CD4C;
    }
L_08A2CD4C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2CD64;
      }
      goto L_08A2CD58;
    }
L_08A2CD58:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A2CD64;
L_08A2CD64:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2CE6C;
      }
      goto L_08A2CD6C;
    }
L_08A2CD6C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A2CDAC;
      }
      goto L_08A2CD9C;
    }
L_08A2CD9C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A2CDB8;
      }
      goto L_08A2CDAC;
    }
L_08A2CDAC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_08A2CDB8;
L_08A2CDB8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2CDF8;
      }
      goto L_08A2CDC0;
    }
L_08A2CDC0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2CDD4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08A2CDD4u) goto L_08A2CDD4;
    return;
L_08A2CDD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_08A2CDF8;
      }
      goto L_08A2CDE4;
    }
L_08A2CDE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2CDF0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08A2CDF0u) goto L_08A2CDF0;
    return;
L_08A2CDF0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    goto L_08A2CDF8;
L_08A2CDF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2CE0C;
      }
      goto L_08A2CE04;
    }
L_08A2CE04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A2CE28;
      }
      goto L_08A2CE0C;
    }
L_08A2CE0C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2CE20u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A2CE20u) goto L_08A2CE20;
    return;
L_08A2CE20:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08A2CE28;
L_08A2CE28:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2CE40;
      }
      goto L_08A2CE30;
    }
L_08A2CE30:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2CE30;
      }
      goto L_08A2CE40;
    }
L_08A2CE40:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CE58;
      }
      goto L_08A2CE50;
    }
L_08A2CE50:
    ctx.gpr[31] = (0x08A2CE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A2CE58u) goto L_08A2CE58;
    return;
L_08A2CE58:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A2CE6C;
L_08A2CE6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D6D0;
      }
      goto L_08A2CE74;
    }
L_08A2CE74:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A2CE80u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2CE80u) goto L_08A2CE80;
    return;
L_08A2CE80:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A2CEE8;
      }
      goto L_08A2CE8C;
    }
L_08A2CE8C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11220)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11216)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11212)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11208)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11204)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11200)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11196)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2CED8u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11192)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 296u, 0x08A29904u>(ctx, &aot_mem) && ctx.pc == 0x08A2CED8u) goto L_08A2CED8;
    return;
L_08A2CED8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15324));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08A2CEE8;
L_08A2CEE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2CF18;
      }
      goto L_08A2CEF8;
    }
L_08A2CEF8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2CF10;
      }
      goto L_08A2CF04;
    }
L_08A2CF04:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A2CF10;
L_08A2CF10:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2D018;
      }
      goto L_08A2CF18;
    }
L_08A2CF18:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A2CF58;
      }
      goto L_08A2CF48;
    }
L_08A2CF48:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A2CF64;
      }
      goto L_08A2CF58;
    }
L_08A2CF58:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_08A2CF64;
L_08A2CF64:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2CFA4;
      }
      goto L_08A2CF6C;
    }
L_08A2CF6C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2CF80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08A2CF80u) goto L_08A2CF80;
    return;
L_08A2CF80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_08A2CFA4;
      }
      goto L_08A2CF90;
    }
L_08A2CF90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2CF9Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08A2CF9Cu) goto L_08A2CF9C;
    return;
L_08A2CF9C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    goto L_08A2CFA4;
L_08A2CFA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2CFB8;
      }
      goto L_08A2CFB0;
    }
L_08A2CFB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08A2CFD4;
      }
      goto L_08A2CFB8;
    }
L_08A2CFB8:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2CFCCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A2CFCCu) goto L_08A2CFCC;
    return;
L_08A2CFCC:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_08A2CFD4;
L_08A2CFD4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2CFEC;
      }
      goto L_08A2CFDC;
    }
L_08A2CFDC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2CFDC;
      }
      goto L_08A2CFEC;
    }
L_08A2CFEC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D004;
      }
      goto L_08A2CFFC;
    }
L_08A2CFFC:
    ctx.gpr[31] = (0x08A2D004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A2D004u) goto L_08A2D004;
    return;
L_08A2D004:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A2D018;
L_08A2D018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D6D0;
      }
      goto L_08A2D020;
    }
L_08A2D020:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A2D02Cu);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D02Cu) goto L_08A2D02C;
    return;
L_08A2D02C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A2D094;
      }
      goto L_08A2D038;
    }
L_08A2D038:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11188)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11184)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11180)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11176)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11172)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11168)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11164)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2D084u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11160)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 296u, 0x08A29904u>(ctx, &aot_mem) && ctx.pc == 0x08A2D084u) goto L_08A2D084;
    return;
L_08A2D084:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15252));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08A2D094;
L_08A2D094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2D0C4;
      }
      goto L_08A2D0A4;
    }
L_08A2D0A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D0BC;
      }
      goto L_08A2D0B0;
    }
L_08A2D0B0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A2D0BC;
L_08A2D0BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2D1C4;
      }
      goto L_08A2D0C4;
    }
L_08A2D0C4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A2D104;
      }
      goto L_08A2D0F4;
    }
L_08A2D0F4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A2D110;
      }
      goto L_08A2D104;
    }
L_08A2D104:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_08A2D110;
L_08A2D110:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2D150;
      }
      goto L_08A2D118;
    }
L_08A2D118:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2D12Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08A2D12Cu) goto L_08A2D12C;
    return;
L_08A2D12C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_08A2D150;
      }
      goto L_08A2D13C;
    }
L_08A2D13C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2D148u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08A2D148u) goto L_08A2D148;
    return;
L_08A2D148:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    goto L_08A2D150;
L_08A2D150:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D164;
      }
      goto L_08A2D15C;
    }
L_08A2D15C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_08A2D180;
      }
      goto L_08A2D164;
    }
L_08A2D164:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2D178u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A2D178u) goto L_08A2D178;
    return;
L_08A2D178:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    goto L_08A2D180;
L_08A2D180:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D198;
      }
      goto L_08A2D188;
    }
L_08A2D188:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D188;
      }
      goto L_08A2D198;
    }
L_08A2D198:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D1B0;
      }
      goto L_08A2D1A8;
    }
L_08A2D1A8:
    ctx.gpr[31] = (0x08A2D1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A2D1B0u) goto L_08A2D1B0;
    return;
L_08A2D1B0:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A2D1C4;
L_08A2D1C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D6D0;
      }
      goto L_08A2D1CC;
    }
L_08A2D1CC:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A2D1D8u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D1D8u) goto L_08A2D1D8;
    return;
L_08A2D1D8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A2D240;
      }
      goto L_08A2D1E4;
    }
L_08A2D1E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11156)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11152)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11148)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11144)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11140)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11136)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11132)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2D230u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11128)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 296u, 0x08A29904u>(ctx, &aot_mem) && ctx.pc == 0x08A2D230u) goto L_08A2D230;
    return;
L_08A2D230:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15180));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08A2D240;
L_08A2D240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2D270;
      }
      goto L_08A2D250;
    }
L_08A2D250:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D268;
      }
      goto L_08A2D25C;
    }
L_08A2D25C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A2D268;
L_08A2D268:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2D370;
      }
      goto L_08A2D270;
    }
L_08A2D270:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A2D2B0;
      }
      goto L_08A2D2A0;
    }
L_08A2D2A0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A2D2BC;
      }
      goto L_08A2D2B0;
    }
L_08A2D2B0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_08A2D2BC;
L_08A2D2BC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2D2FC;
      }
      goto L_08A2D2C4;
    }
L_08A2D2C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2D2D8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08A2D2D8u) goto L_08A2D2D8;
    return;
L_08A2D2D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          goto L_08A2D2FC;
      }
      goto L_08A2D2E8;
    }
L_08A2D2E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2D2F4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08A2D2F4u) goto L_08A2D2F4;
    return;
L_08A2D2F4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    goto L_08A2D2FC;
L_08A2D2FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D310;
      }
      goto L_08A2D308;
    }
L_08A2D308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08A2D32C;
      }
      goto L_08A2D310;
    }
L_08A2D310:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2D324u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A2D324u) goto L_08A2D324;
    return;
L_08A2D324:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08A2D32C;
L_08A2D32C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D344;
      }
      goto L_08A2D334;
    }
L_08A2D334:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D334;
      }
      goto L_08A2D344;
    }
L_08A2D344:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D35C;
      }
      goto L_08A2D354;
    }
L_08A2D354:
    ctx.gpr[31] = (0x08A2D35Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A2D35Cu) goto L_08A2D35C;
    return;
L_08A2D35C:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A2D370;
L_08A2D370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D6D0;
      }
      goto L_08A2D378;
    }
L_08A2D378:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A2D384u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D384u) goto L_08A2D384;
    return;
L_08A2D384:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A2D3EC;
      }
      goto L_08A2D390;
    }
L_08A2D390:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11120)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11116)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11112)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11108)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11104)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11100)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11096)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2D3DCu);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11092)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 296u, 0x08A29904u>(ctx, &aot_mem) && ctx.pc == 0x08A2D3DCu) goto L_08A2D3DC;
    return;
L_08A2D3DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15108));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08A2D3EC;
L_08A2D3EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2D41C;
      }
      goto L_08A2D3FC;
    }
L_08A2D3FC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D414;
      }
      goto L_08A2D408;
    }
L_08A2D408:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A2D414;
L_08A2D414:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2D51C;
      }
      goto L_08A2D41C;
    }
L_08A2D41C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A2D45C;
      }
      goto L_08A2D44C;
    }
L_08A2D44C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A2D468;
      }
      goto L_08A2D45C;
    }
L_08A2D45C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_08A2D468;
L_08A2D468:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2D4A8;
      }
      goto L_08A2D470;
    }
L_08A2D470:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2D484u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08A2D484u) goto L_08A2D484;
    return;
L_08A2D484:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_08A2D4A8;
      }
      goto L_08A2D494;
    }
L_08A2D494:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2D4A0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08A2D4A0u) goto L_08A2D4A0;
    return;
L_08A2D4A0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    goto L_08A2D4A8;
L_08A2D4A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D4BC;
      }
      goto L_08A2D4B4;
    }
L_08A2D4B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_08A2D4D8;
      }
      goto L_08A2D4BC;
    }
L_08A2D4BC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2D4D0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A2D4D0u) goto L_08A2D4D0;
    return;
L_08A2D4D0:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_08A2D4D8;
L_08A2D4D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D4F0;
      }
      goto L_08A2D4E0;
    }
L_08A2D4E0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D4E0;
      }
      goto L_08A2D4F0;
    }
L_08A2D4F0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D508;
      }
      goto L_08A2D500;
    }
L_08A2D500:
    ctx.gpr[31] = (0x08A2D508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A2D508u) goto L_08A2D508;
    return;
L_08A2D508:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A2D51C;
L_08A2D51C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D6D0;
      }
      goto L_08A2D524;
    }
L_08A2D524:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A2D530u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D530u) goto L_08A2D530;
    return;
L_08A2D530:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A2D598;
      }
      goto L_08A2D53C;
    }
L_08A2D53C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11088)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11084)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11080)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11076)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11072)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11068)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11064)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2D588u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11060)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 296u, 0x08A29904u>(ctx, &aot_mem) && ctx.pc == 0x08A2D588u) goto L_08A2D588;
    return;
L_08A2D588:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15036));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08A2D598;
L_08A2D598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2D5C8;
      }
      goto L_08A2D5A8;
    }
L_08A2D5A8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D5C0;
      }
      goto L_08A2D5B4;
    }
L_08A2D5B4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A2D5C0;
L_08A2D5C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2D6C8;
      }
      goto L_08A2D5C8;
    }
L_08A2D5C8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A2D608;
      }
      goto L_08A2D5F8;
    }
L_08A2D5F8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A2D614;
      }
      goto L_08A2D608;
    }
L_08A2D608:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_08A2D614;
L_08A2D614:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2D654;
      }
      goto L_08A2D61C;
    }
L_08A2D61C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2D630u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08A2D630u) goto L_08A2D630;
    return;
L_08A2D630:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
      if (branch_taken) {
          goto L_08A2D654;
      }
      goto L_08A2D640;
    }
L_08A2D640:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2D64Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08A2D64Cu) goto L_08A2D64C;
    return;
L_08A2D64C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_08A2D654;
L_08A2D654:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D668;
      }
      goto L_08A2D660;
    }
L_08A2D660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_08A2D684;
      }
      goto L_08A2D668;
    }
L_08A2D668:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2D67Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08A2D67Cu) goto L_08A2D67C;
    return;
L_08A2D67C:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    goto L_08A2D684;
L_08A2D684:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D69C;
      }
      goto L_08A2D68C;
    }
L_08A2D68C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D68C;
      }
      goto L_08A2D69C;
    }
L_08A2D69C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D6B4;
      }
      goto L_08A2D6AC;
    }
L_08A2D6AC:
    ctx.gpr[31] = (0x08A2D6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08A2D6B4u) goto L_08A2D6B4;
    return;
L_08A2D6B4:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A2D6C8;
L_08A2D6C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D6D0;
      }
      goto L_08A2D6D0;
    }
L_08A2D6D0:
    ctx.gpr[31] = (0x08A2D6D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08A2D6D8u) goto L_08A2D6D8;
    return;
L_08A2D6D8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D6EC;
      }
      goto L_08A2D6E0;
    }
L_08A2D6E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x08A2D6ECu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 332u, 0x08A29C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2D6ECu) goto L_08A2D6EC;
    return;
L_08A2D6EC:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
    goto L_08A2D6F0;
L_08A2D6F0:
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
L_08A2D720:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11276)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11280)));
    ctx.gpr[3] = (2277u << 16u);
    ctx.gpr[12] = (ctx.gpr[3] + static_cast<std::uint32_t>(22840));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(22840), 0u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[7] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-11272), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-11264), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (16014u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-11268), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (2229u << 16u);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-11016));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-11260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2D7BCu);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-11256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08A2D7BCu) goto L_08A2D7BC;
    return;
L_08A2D7BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D7C8:
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
L_08A2D7F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2D808u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11000));
    goto L_08A2D85C;
L_08A2D808:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2D824u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B744u;
    return;
L_08A2D824:
    ctx.gpr[31] = (0x08A2D82Cu);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B0B744u;
    return;
L_08A2D82C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D838:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2D848u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B0B764u;
    return;
L_08A2D848:
    ctx.gpr[31] = (0x08A2D850u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B764u;
    return;
L_08A2D850:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D85C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[5] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A2D95C;
      }
      goto L_08A2D8C8;
    }
L_08A2D8C8:
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (0u | 75u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(3968));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3996));
    goto L_08A2D8E8;
L_08A2D8E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A2D908;
      }
      goto L_08A2D8F4;
    }
L_08A2D8F4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2D900u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08A2D7C8;
L_08A2D900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D94C;
      }
      goto L_08A2D908;
    }
L_08A2D908:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2D914u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A2D7C8;
L_08A2D914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A2D93C;
      }
      goto L_08A2D924;
    }
L_08A2D924:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2D934u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08A2D988;
L_08A2D934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D94C;
      }
      goto L_08A2D93C;
    }
L_08A2D93C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2D94Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A2D988;
L_08A2D94C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A2D8E8;
      }
      goto L_08A2D95C;
    }
L_08A2D95C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D988:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2D9C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4024));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 411u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A2D9C4u) goto L_08A2D9C4;
    return;
L_08A2D9C4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A2D9D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED5D8u>(ctx, &aot_mem) && ctx.pc == 0x08A2D9D0u) goto L_08A2D9D0;
    return;
L_08A2D9D0:
    ctx.gpr[31] = (0x08A2D9D8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 891u, 0x08AEF284u>(ctx, &aot_mem) && ctx.pc == 0x08A2D9D8u) goto L_08A2D9D8;
    return;
L_08A2D9D8:
    ctx.gpr[31] = (0x08A2D9E0u);
    // nop
    ctx.pc = 0x08B0B7BCu;
    return;
L_08A2D9E0:
    ctx.gpr[18] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-24288));
      if (branch_taken) {
          goto L_08A2DA50;
      }
      goto L_08A2D9F0;
    }
L_08A2D9F0:
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-10968));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 141u);
    ctx.gpr[31] = (0x08A2DA0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4060));
    goto L_08A2D7C8;
L_08A2DA0C:
    ctx.gpr[31] = (0x08A2DA14u);
    // nop
    ctx.pc = 0x08B0B7BCu;
    return;
L_08A2DA14:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DA3C;
      }
      goto L_08A2DA20;
    }
L_08A2DA20:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A2DA2Cu);
    ctx.gpr[5] = (0u | 1000u);
    ctx.pc = 0x08B0B7B4u;
    return;
L_08A2DA2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2DA34;
      }
      goto L_08A2DA34;
    }
L_08A2DA34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DA0C;
      }
      goto L_08A2DA3C;
    }
L_08A2DA3C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 148u);
    ctx.gpr[31] = (0x08A2DA50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4096));
    goto L_08A2D7C8;
L_08A2DA50:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A2DA60u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 134u, 0x08A58AD0u>(ctx, &aot_mem) && ctx.pc == 0x08A2DA60u) goto L_08A2DA60;
    return;
L_08A2DA60:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2DA74;
      }
      goto L_08A2DA6C;
    }
L_08A2DA6C:
    ctx.gpr[31] = (0x08A2DA74u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0BBF4u;
    return;
L_08A2DA74:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2DA50;
      }
      goto L_08A2DA7C;
    }
L_08A2DA7C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A2DA8Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BC7Cu;
    return;
L_08A2DA8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A2DAD0;
      }
      goto L_08A2DA94;
    }
L_08A2DA94:
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4132));
    goto L_08A2DA9C;
L_08A2DA9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A2DAACu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BC7Cu;
    return;
L_08A2DAAC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A2DABCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08A2D7C8;
L_08A2DABC:
    ctx.gpr[31] = (0x08A2DAC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0BBF4u;
    return;
L_08A2DAC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2DA9C;
      }
      goto L_08A2DAD0;
    }
L_08A2DAD0:
    ctx.gpr[31] = (0x08A2DAD8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0BCCCu;
    return;
L_08A2DAD8:
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A2DB10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BC74u;
    return;
L_08A2DB10:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2DB34;
      }
      goto L_08A2DB1C;
    }
L_08A2DB1C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2DB2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4172));
    goto L_08A2D7C8;
L_08A2DB2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A2DB38;
      }
      goto L_08A2DB34;
    }
L_08A2DB34:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2DB38;
L_08A2DB38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DB58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2DB9Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BC84u;
    return;
L_08A2DB9C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08A2DBC8;
      }
      goto L_08A2DBA4;
    }
L_08A2DBA4:
    ctx.gpr[31] = (0x08A2DBACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BC54u;
    return;
L_08A2DBAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2DBDC;
      }
      goto L_08A2DBB4;
    }
L_08A2DBB4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A2DBC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4260));
    goto L_08A2D7C8;
L_08A2DBC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A2DBE0;
      }
      goto L_08A2DBC8;
    }
L_08A2DBC8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A2DBD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4224));
    goto L_08A2D7C8;
L_08A2DBD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A2DBE0;
      }
      goto L_08A2DBDC;
    }
L_08A2DBDC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2DBE0;
L_08A2DBE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DBEC:
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
L_08A2DC18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(11));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(23));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2DCBC;
      }
      goto L_08A2DCAC;
    }
L_08A2DCAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A2DCBC;
L_08A2DCBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2DCE4;
      }
      goto L_08A2DCD4;
    }
L_08A2DCD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A2DCE4;
L_08A2DCE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A2DD10;
    }
    goto L_08A2DCFC;
L_08A2DCFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A2DD10;
L_08A2DD10:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27))))));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[31] = (0x08A2DD38u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 594u, 0x08976A84u>(ctx, &aot_mem) && ctx.pc == 0x08A2DD38u) goto L_08A2DD38;
    return;
L_08A2DD38:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DD44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(11));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(15), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(18), ctx.gpr[1]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[1]);
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2DDD8;
      }
      goto L_08A2DDC8;
    }
L_08A2DDC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A2DDD4u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A2DDD4u) goto L_08A2DDD4;
    return;
L_08A2DDD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2DDD8;
L_08A2DDD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A2DE0Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A2DE0Cu) goto L_08A2DE0C;
    return;
L_08A2DE0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08A2DE94;
      }
      goto L_08A2DE20;
    }
L_08A2DE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DE80;
      }
      goto L_08A2DE40;
    }
L_08A2DE40:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08A2DE4Cu);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2DE4Cu) goto L_08A2DE4C;
    return;
L_08A2DE4C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2DE80;
      }
      goto L_08A2DE54;
    }
L_08A2DE54:
    ctx.gpr[31] = (0x08A2DE5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08A2DE5Cu) goto L_08A2DE5C;
    return;
L_08A2DE5C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DE80;
      }
      goto L_08A2DE64;
    }
L_08A2DE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2DE80u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2DE80u) goto L_08A2DE80;
    return;
L_08A2DE80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2DE20;
      }
      goto L_08A2DE94;
    }
L_08A2DE94:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DEB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2DEE4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08A2DEE4u) goto L_08A2DEE4;
    return;
L_08A2DEE4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A2DEFCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08A2DEFCu) goto L_08A2DEFC;
    return;
L_08A2DEFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2DF08u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2DF08u) goto L_08A2DF08;
    return;
L_08A2DF08:
    ctx.gpr[16] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A2DF18u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 216u, 0x08B00DFCu>(ctx, &aot_mem) && ctx.pc == 0x08A2DF18u) goto L_08A2DF18;
    return;
L_08A2DF18:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08A2DF24u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 216u, 0x08B00DFCu>(ctx, &aot_mem) && ctx.pc == 0x08A2DF24u) goto L_08A2DF24;
    return;
L_08A2DF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 28u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-5922)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(124))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(125))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(99));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(126))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(127))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(129))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(130))))));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(131))))));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(132))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(133))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(134))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(135))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(136))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(137))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(111));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(138))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(139))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(140))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(141))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(142))))));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(143))))));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(144))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(145))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(146))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(147))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(123))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(0u));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A2E078u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A2DC18;
L_08A2E078:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A2E08Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E08Cu) goto L_08A2E08C;
    return;
L_08A2E08C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E0A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E0D4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08A2E0D4u) goto L_08A2E0D4;
    return;
L_08A2E0D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2E0E0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08A2E0E0u) goto L_08A2E0E0;
    return;
L_08A2E0E0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2E0F4u);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 216u, 0x08B00DFCu>(ctx, &aot_mem) && ctx.pc == 0x08A2E0F4u) goto L_08A2E0F4;
    return;
L_08A2E0F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-5921)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(67));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(87))))));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(79), ctx.gpr[1]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(82), ctx.gpr[1]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A2E204u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A2DD44;
L_08A2E204:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A2E218u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E218u) goto L_08A2E218;
    return;
L_08A2E218:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E230:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[19]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E27Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08A2E27Cu) goto L_08A2E27C;
    return;
L_08A2E27C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2E288u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08A2E288u) goto L_08A2E288;
    return;
L_08A2E288:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08A2E2BC;
      }
      goto L_08A2E2AC;
    }
L_08A2E2AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A2E2B8u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A2E2B8u) goto L_08A2E2B8;
    return;
L_08A2E2B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2E2BC;
L_08A2E2BC:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A2E2F8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A2E2F8u) goto L_08A2E2F8;
    return;
L_08A2E2F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08A2E35C;
      }
      goto L_08A2E30C;
    }
L_08A2E30C:
    ctx.gpr[8] = (2u << 16u);
    goto L_08A2E310;
L_08A2E310:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (ctx.gpr[9] & 14u);
    ctx.gpr[9] = (ctx.gpr[9] ^ 4u);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E348;
      }
      goto L_08A2E330;
    }
L_08A2E330:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E34C;
      }
      goto L_08A2E348;
    }
L_08A2E348:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A2E34C;
L_08A2E34C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2E310;
      }
      goto L_08A2E35C;
    }
L_08A2E35C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08A2E390u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A2E390u) goto L_08A2E390;
    return;
L_08A2E390:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A2E400;
      }
      goto L_08A2E3A4;
    }
L_08A2E3A4:
    ctx.gpr[19] = (ctx.gpr[29] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(5992));
    goto L_08A2E3AC;
L_08A2E3AC:
    ctx.gpr[31] = (0x08A2E3B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    goto L_08A2F74C;
L_08A2E3B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E3EC;
      }
      goto L_08A2E3BC;
    }
L_08A2E3BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E3EC;
      }
      goto L_08A2E3C8;
    }
L_08A2E3C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E3EC;
      }
      goto L_08A2E3D4;
    }
L_08A2E3D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2E3EC;
      }
      goto L_08A2E3E8;
    }
L_08A2E3E8:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A2E3EC;
L_08A2E3EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2E3AC;
      }
      goto L_08A2E400;
    }
L_08A2E400:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E414;
      }
      goto L_08A2E408;
    }
L_08A2E408:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A2E414u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4500));
    goto L_08A2DBEC;
L_08A2E414:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2E420u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08A2E420u) goto L_08A2E420;
    return;
L_08A2E420:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E450:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A2E498u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08A2E498u) goto L_08A2E498;
    return;
L_08A2E498:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2E4A4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08A2E4A4u) goto L_08A2E4A4;
    return;
L_08A2E4A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-26612)));
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
    ctx.gpr[6] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A2E4DCu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 409u, 0x08975B18u>(ctx, &aot_mem) && ctx.pc == 0x08A2E4DCu) goto L_08A2E4DC;
    return;
L_08A2E4DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2E4F0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 704u, 0x089777A8u>(ctx, &aot_mem) && ctx.pc == 0x08A2E4F0u) goto L_08A2E4F0;
    return;
L_08A2E4F0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(4548));
    ctx.gpr[31] = (0x08A2E500u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A2E500u) goto L_08A2E500;
    return;
L_08A2E500:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A2E510u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A2E510u) goto L_08A2E510;
    return;
L_08A2E510:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A2E520u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A2E520u) goto L_08A2E520;
    return;
L_08A2E520:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A2E540u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    goto L_08A2DBEC;
L_08A2E540:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(4596));
    ctx.gpr[31] = (0x08A2E550u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A2E550u) goto L_08A2E550;
    return;
L_08A2E550:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A2E560u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A2E560u) goto L_08A2E560;
    return;
L_08A2E560:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A2E570u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A2E570u) goto L_08A2E570;
    return;
L_08A2E570:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A2E590u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    goto L_08A2DBEC;
L_08A2E590:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2E59Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 700u, 0x089BF64Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E59Cu) goto L_08A2E59C;
    return;
L_08A2E59C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E5CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E5DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08A2E5DCu) goto L_08A2E5DC;
    return;
L_08A2E5DC:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08A2E604;
    }
    goto L_08A2E5F8;
L_08A2E5F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A2E614;
      }
      goto L_08A2E604;
    }
L_08A2E604:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A2E614;
L_08A2E614:
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17140), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E62C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E63Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08A2E63Cu) goto L_08A2E63C;
    return;
L_08A2E63C:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08A2E664;
    }
    goto L_08A2E658;
L_08A2E658:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A2E674;
      }
      goto L_08A2E664;
    }
L_08A2E664:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A2E674;
L_08A2E674:
    ctx.gpr[31] = (0x08A2E67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 455u, 0x089EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A2E67Cu) goto L_08A2E67C;
    return;
L_08A2E67C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E68C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E69Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E69Cu) goto L_08A2E69C;
    return;
L_08A2E69C:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16663), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E6B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E6C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E6C8u) goto L_08A2E6C8;
    return;
L_08A2E6C8:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (0x08A2E6D4u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 456u, 0x089EE7B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2E6D4u) goto L_08A2E6D4;
    return;
L_08A2E6D4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E6E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E6F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24800));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 677u, 0x0884EE14u>(ctx, &aot_mem) && ctx.pc == 0x08A2E6F8u) goto L_08A2E6F8;
    return;
L_08A2E6F8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E740u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-5922))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2E740u) goto L_08A2E740;
    return;
L_08A2E740:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A2E77C;
      }
      goto L_08A2E750;
    }
L_08A2E750:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9192));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A2E77C;
L_08A2E77C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A2E790;
      }
      goto L_08A2E784;
    }
L_08A2E784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A2E790;
L_08A2E790:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2E7A0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x08A2E7A0u) goto L_08A2E7A0;
    return;
L_08A2E7A0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E7C4;
      }
      goto L_08A2E7AC;
    }
L_08A2E7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2E7C4;
      }
      goto L_08A2E7BC;
    }
L_08A2E7BC:
    ctx.gpr[31] = (0x08A2E7C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08A2E7C4u) goto L_08A2E7C4;
    return;
L_08A2E7C4:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08A2E7D8u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-5921))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2E7D8u) goto L_08A2E7D8;
    return;
L_08A2E7D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A2E80C;
      }
      goto L_08A2E7E4;
    }
L_08A2E7E4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8892));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A2E80C;
L_08A2E80C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A2E820;
      }
      goto L_08A2E814;
    }
L_08A2E814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A2E820;
L_08A2E820:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2E830u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x08A2E830u) goto L_08A2E830;
    return;
L_08A2E830:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E854;
      }
      goto L_08A2E83C;
    }
L_08A2E83C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2E854;
      }
      goto L_08A2E84C;
    }
L_08A2E84C:
    ctx.gpr[31] = (0x08A2E854u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08A2E854u) goto L_08A2E854;
    return;
L_08A2E854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A2E86C;
      }
      goto L_08A2E860;
    }
L_08A2E860:
    ctx.gpr[31] = (0x08A2E868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2E868u) goto L_08A2E868;
    return;
L_08A2E868:
    ctx.gpr[5] = (2229u << 16u);
    goto L_08A2E86C;
L_08A2E86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A2E87Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10924));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 787u, 0x0883BFF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2E87Cu) goto L_08A2E87C;
    return;
L_08A2E87C:
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
L_08A2E89C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10948)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-10952)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[10] = (2232u << 16u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[11] = (2226u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(6264));
    ctx.gpr[2] = (2226u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 46u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-5922), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-5922)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-10944), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[9] = (0u | 47u);
    ctx.gpr[6] = (ctx.gpr[11] + static_cast<std::uint32_t>(4644));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-5921), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-5921)));
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(4656));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-10936), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-10940), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-10932), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-10928), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E964:
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
L_08A2E98C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E994:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E9B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 131u, 0x0890CB34u>(ctx, &aot_mem) && ctx.pc == 0x08A2E9B0u) goto L_08A2E9B0;
    return;
L_08A2E9B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E9E4;
      }
      goto L_08A2E9B8;
    }
L_08A2E9B8:
    ctx.gpr[31] = (0x08A2E9C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 186u, 0x0890D018u>(ctx, &aot_mem) && ctx.pc == 0x08A2E9C0u) goto L_08A2E9C0;
    return;
L_08A2E9C0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E9E4;
      }
      goto L_08A2E9CC;
    }
L_08A2E9CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E9E0;
      }
      goto L_08A2E9D8;
    }
L_08A2E9D8:
    ctx.gpr[31] = (0x08A2E9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 181u, 0x0890CFD0u>(ctx, &aot_mem) && ctx.pc == 0x08A2E9E0u) goto L_08A2E9E0;
    return;
L_08A2E9E0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A2E9E4;
L_08A2E9E4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E9FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EA3C;
      }
      goto L_08A2EA0C;
    }
L_08A2EA0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EAA4;
      }
      goto L_08A2EA24;
    }
L_08A2EA24:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(4688)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EA3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2EAA8;
      }
      goto L_08A2EA44;
    }
L_08A2EA44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2EAA8;
      }
      goto L_08A2EA4C;
    }
L_08A2EA4C:
    ctx.gpr[31] = (0x08A2EA54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 99u, 0x08AB8658u>(ctx, &aot_mem) && ctx.pc == 0x08A2EA54u) goto L_08A2EA54;
    return;
L_08A2EA54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EAA8;
      }
      goto L_08A2EA5C;
    }
L_08A2EA5C:
    ctx.gpr[31] = (0x08A2EA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 490u, 0x0889E7B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2EA64u) goto L_08A2EA64;
    return;
L_08A2EA64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EAA8;
      }
      goto L_08A2EA6C;
    }
L_08A2EA6C:
    ctx.gpr[31] = (0x08A2EA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 142u, 0x0899D2FCu>(ctx, &aot_mem) && ctx.pc == 0x08A2EA74u) goto L_08A2EA74;
    return;
L_08A2EA74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EAA8;
      }
      goto L_08A2EA7C;
    }
L_08A2EA7C:
    ctx.gpr[31] = (0x08A2EA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 176u, 0x0883CEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A2EA84u) goto L_08A2EA84;
    return;
L_08A2EA84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EAA8;
      }
      goto L_08A2EA8C;
    }
L_08A2EA8C:
    ctx.gpr[31] = (0x08A2EA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 58u, 0x08878458u>(ctx, &aot_mem) && ctx.pc == 0x08A2EA94u) goto L_08A2EA94;
    return;
L_08A2EA94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EAA8;
      }
      goto L_08A2EA9C;
    }
L_08A2EA9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2EAA8;
      }
      goto L_08A2EAA4;
    }
L_08A2EAA4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2EAA8;
L_08A2EAA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EAB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2EB34;
      }
      goto L_08A2EAD0;
    }
L_08A2EAD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14964));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2EAE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A2F11C;
L_08A2EAE4:
    ctx.gpr[31] = (0x08A2EAECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 707u, 0x0883B98Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2EAECu) goto L_08A2EAEC;
    return;
L_08A2EAEC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A2EB24;
      }
      goto L_08A2EAF4;
    }
L_08A2EAF4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A2EB24;
      }
      goto L_08A2EAFC;
    }
L_08A2EAFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A2EB24;
      }
      goto L_08A2EB0C;
    }
L_08A2EB0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A2EB24;
    }
    goto L_08A2EB18;
L_08A2EB18:
    ctx.gpr[31] = (0x08A2EB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A2EB20u) goto L_08A2EB20;
    return;
L_08A2EB20:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A2EB24;
L_08A2EB24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EB34;
      }
      goto L_08A2EB2C;
    }
L_08A2EB2C:
    ctx.gpr[31] = (0x08A2EB34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08A2EB34u) goto L_08A2EB34;
    return;
L_08A2EB34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EB48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A2EC10;
      }
      goto L_08A2EB74;
    }
L_08A2EB74:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EC10;
      }
      goto L_08A2EB80;
    }
L_08A2EB80:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EC10;
      }
      goto L_08A2EB8C;
    }
L_08A2EB8C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EC10;
      }
      goto L_08A2EB98;
    }
L_08A2EB98:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EC10;
      }
      goto L_08A2EBA4;
    }
L_08A2EBA4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EC10;
      }
      goto L_08A2EBB0;
    }
L_08A2EBB0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(46)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EC10;
      }
      goto L_08A2EBBC;
    }
L_08A2EBBC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EC10;
      }
      goto L_08A2EBC8;
    }
L_08A2EBC8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EC10;
      }
      goto L_08A2EBD4;
    }
L_08A2EBD4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EC10;
      }
      goto L_08A2EBE0;
    }
L_08A2EBE0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EC10;
      }
      goto L_08A2EBEC;
    }
L_08A2EBEC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EC10;
      }
      goto L_08A2EBF8;
    }
L_08A2EBF8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EC10;
      }
      goto L_08A2EC04;
    }
L_08A2EC04:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2EC18;
      }
      goto L_08A2EC10;
    }
L_08A2EC10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2EC18;
      }
      goto L_08A2EC18;
    }
L_08A2EC18:
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2EC44;
      }
      goto L_08A2EC3C;
    }
L_08A2EC3C:
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08A2EC44;
L_08A2EC44:
    ctx.gpr[31] = (0x08A2EC4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A2F820;
L_08A2EC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 15u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A2EC84u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2EC84u) goto L_08A2EC84;
    return;
L_08A2EC84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EC94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ECC0;
    }
L_08A2ECC0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ECCC;
    }
L_08A2ECCC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ECD8;
    }
L_08A2ECD8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ECE4;
    }
L_08A2ECE4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ECF0;
    }
L_08A2ECF0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ECFC;
    }
L_08A2ECFC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(46)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ED08;
    }
L_08A2ED08:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ED14;
    }
L_08A2ED14:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ED20;
    }
L_08A2ED20:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ED2C;
    }
L_08A2ED2C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ED38;
    }
L_08A2ED38:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ED44;
    }
L_08A2ED44:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ED50;
    }
L_08A2ED50:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2ED64;
      }
      goto L_08A2ED5C;
    }
L_08A2ED5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2ED64;
      }
      goto L_08A2ED64;
    }
L_08A2ED64:
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2ED90;
      }
      goto L_08A2ED88;
    }
L_08A2ED88:
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08A2ED90;
L_08A2ED90:
    ctx.gpr[31] = (0x08A2ED98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A2F820;
L_08A2ED98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 15u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EDC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08A2EE14;
      }
      goto L_08A2EE00;
    }
L_08A2EE00:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A2EE14;
L_08A2EE14:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(2080));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A2EE28u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 165u, 0x088E8D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2EE28u) goto L_08A2EE28;
    return;
L_08A2EE28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A2EE40u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2EE40u) goto L_08A2EE40;
    return;
L_08A2EE40:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A2EE4Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 166u, 0x088E8D74u>(ctx, &aot_mem) && ctx.pc == 0x08A2EE4Cu) goto L_08A2EE4C;
    return;
L_08A2EE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EE7C;
      }
      goto L_08A2EE58;
    }
L_08A2EE58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EE84;
      }
      goto L_08A2EE74;
    }
L_08A2EE74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EE98;
      }
      goto L_08A2EE7C;
    }
L_08A2EE7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EF54;
      }
      goto L_08A2EE84;
    }
L_08A2EE84:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10716)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10716), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08A2EE98;
L_08A2EE98:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2EEF4;
      }
      goto L_08A2EEA8;
    }
L_08A2EEA8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08A2EED0;
      }
      goto L_08A2EEB8;
    }
L_08A2EEB8:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
        goto L_08A2EED4;
    }
    goto L_08A2EEC4;
L_08A2EEC4:
    ctx.gpr[31] = (0x08A2EECCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A2EECCu) goto L_08A2EECC;
    return;
L_08A2EECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_08A2EED0;
L_08A2EED0:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A2EED4;
L_08A2EED4:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2EEECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2EEECu) goto L_08A2EEEC;
    return;
L_08A2EEEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EF40;
      }
      goto L_08A2EEF4;
    }
L_08A2EEF4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A2EF40;
      }
      goto L_08A2EEFC;
    }
L_08A2EEFC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08A2EF24;
      }
      goto L_08A2EF0C;
    }
L_08A2EF0C:
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
        goto L_08A2EF28;
    }
    goto L_08A2EF18;
L_08A2EF18:
    ctx.gpr[31] = (0x08A2EF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A2EF20u) goto L_08A2EF20;
    return;
L_08A2EF20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_08A2EF24;
L_08A2EF24:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A2EF28;
L_08A2EF28:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2EF40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2EF40u) goto L_08A2EF40;
    return;
L_08A2EF40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08A2EF4Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2E98C;
L_08A2EF4C:
    ctx.gpr[31] = (0x08A2EF54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 235u, 0x08A7D460u>(ctx, &aot_mem) && ctx.pc == 0x08A2EF54u) goto L_08A2EF54;
    return;
L_08A2EF54:
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
L_08A2EF70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2EFA8;
      }
      goto L_08A2EF90;
    }
L_08A2EF90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2EFB0;
      }
      goto L_08A2EFA0;
    }
L_08A2EFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EFFC;
      }
      goto L_08A2EFA8;
    }
L_08A2EFA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F080;
      }
      goto L_08A2EFB0;
    }
L_08A2EFB0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08A2EFD8;
      }
      goto L_08A2EFC0;
    }
L_08A2EFC0:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
        goto L_08A2EFDC;
    }
    goto L_08A2EFCC;
L_08A2EFCC:
    ctx.gpr[31] = (0x08A2EFD4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A2EFD4u) goto L_08A2EFD4;
    return;
L_08A2EFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_08A2EFD8;
L_08A2EFD8:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_08A2EFDC;
L_08A2EFDC:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2EFF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2EFF4u) goto L_08A2EFF4;
    return;
L_08A2EFF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F04C;
      }
      goto L_08A2EFFC;
    }
L_08A2EFFC:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2F04C;
      }
      goto L_08A2F008;
    }
L_08A2F008:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08A2F030;
      }
      goto L_08A2F018;
    }
L_08A2F018:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
        goto L_08A2F034;
    }
    goto L_08A2F024;
L_08A2F024:
    ctx.gpr[31] = (0x08A2F02Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A2F02Cu) goto L_08A2F02C;
    return;
L_08A2F02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_08A2F030;
L_08A2F030:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_08A2F034;
L_08A2F034:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2F04Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F04Cu) goto L_08A2F04C;
    return;
L_08A2F04C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F078;
      }
      goto L_08A2F064;
    }
L_08A2F064:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A2F078;
L_08A2F078:
    ctx.gpr[31] = (0x08A2F080u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 235u, 0x08A7D460u>(ctx, &aot_mem) && ctx.pc == 0x08A2F080u) goto L_08A2F080;
    return;
L_08A2F080:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F094:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2F0E0;
      }
      goto L_08A2F0AC;
    }
L_08A2F0AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F0D8;
      }
      goto L_08A2F0C4;
    }
L_08A2F0C4:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A2F0D8;
L_08A2F0D8:
    ctx.gpr[31] = (0x08A2F0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 237u, 0x08A7D484u>(ctx, &aot_mem) && ctx.pc == 0x08A2F0E0u) goto L_08A2F0E0;
    return;
L_08A2F0E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F108;
      }
      goto L_08A2F0F0;
    }
L_08A2F0F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F108;
      }
      goto L_08A2F100;
    }
L_08A2F100:
    ctx.gpr[31] = (0x08A2F108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A2F108u) goto L_08A2F108;
    return;
L_08A2F108:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F11C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F158;
      }
      goto L_08A2F140;
    }
L_08A2F140:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F158;
      }
      goto L_08A2F150;
    }
L_08A2F150:
    ctx.gpr[31] = (0x08A2F158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A2F158u) goto L_08A2F158;
    return;
L_08A2F158:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F244;
      }
      goto L_08A2F168;
    }
L_08A2F168:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2F1A0;
      }
      goto L_08A2F178;
    }
L_08A2F178:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2F188u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 95u, 0x089C87E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F188u) goto L_08A2F188;
    return;
L_08A2F188:
    ctx.gpr[31] = (0x08A2F190u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 178u, 0x08AC8E78u>(ctx, &aot_mem) && ctx.pc == 0x08A2F190u) goto L_08A2F190;
    return;
L_08A2F190:
    ctx.gpr[31] = (0x08A2F198u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 155u, 0x08A5D294u>(ctx, &aot_mem) && ctx.pc == 0x08A2F198u) goto L_08A2F198;
    return;
L_08A2F198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F1E0;
      }
      goto L_08A2F1A0;
    }
L_08A2F1A0:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2F1E0;
      }
      goto L_08A2F1AC;
    }
L_08A2F1AC:
    ctx.gpr[31] = (0x08A2F1B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 97u, 0x089C8810u>(ctx, &aot_mem) && ctx.pc == 0x08A2F1B4u) goto L_08A2F1B4;
    return;
L_08A2F1B4:
    ctx.gpr[31] = (0x08A2F1BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 226u, 0x08A4CED8u>(ctx, &aot_mem) && ctx.pc == 0x08A2F1BCu) goto L_08A2F1BC;
    return;
L_08A2F1BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F1D8;
      }
      goto L_08A2F1C4;
    }
L_08A2F1C4:
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A2F1D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5740));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08A2F1D8u) goto L_08A2F1D8;
    return;
L_08A2F1D8:
    ctx.gpr[31] = (0x08A2F1E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 195u, 0x08AA4F70u>(ctx, &aot_mem) && ctx.pc == 0x08A2F1E0u) goto L_08A2F1E0;
    return;
L_08A2F1E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F210;
      }
      goto L_08A2F1FC;
    }
L_08A2F1FC:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A2F210;
L_08A2F210:
    ctx.gpr[31] = (0x08A2F218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 237u, 0x08A7D484u>(ctx, &aot_mem) && ctx.pc == 0x08A2F218u) goto L_08A2F218;
    return;
L_08A2F218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F244;
      }
      goto L_08A2F234;
    }
L_08A2F234:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10716)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10716), ctx.gpr[5]);
    goto L_08A2F244;
L_08A2F244:
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
L_08A2F25C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2F288u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 132u, 0x089FD348u>(ctx, &aot_mem) && ctx.pc == 0x08A2F288u) goto L_08A2F288;
    return;
L_08A2F288:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A2F2FCu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 637u, 0x088B7E18u>(ctx, &aot_mem) && ctx.pc == 0x08A2F2FCu) goto L_08A2F2FC;
    return;
L_08A2F2FC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F318;
    }
    goto L_08A2F318;
L_08A2F318:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F32C;
    }
    goto L_08A2F32C;
L_08A2F32C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F340;
    }
    goto L_08A2F340;
L_08A2F340:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F354;
    }
    goto L_08A2F354;
L_08A2F354:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A2F370u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 637u, 0x088B7E18u>(ctx, &aot_mem) && ctx.pc == 0x08A2F370u) goto L_08A2F370;
    return;
L_08A2F370:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F38C;
    }
    goto L_08A2F38C;
L_08A2F38C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F3A0;
    }
    goto L_08A2F3A0;
L_08A2F3A0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F3B4;
    }
    goto L_08A2F3B4;
L_08A2F3B4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F3C8;
    }
    goto L_08A2F3C8;
L_08A2F3C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A2F3F4u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 637u, 0x088B7E18u>(ctx, &aot_mem) && ctx.pc == 0x08A2F3F4u) goto L_08A2F3F4;
    return;
L_08A2F3F4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F410;
    }
    goto L_08A2F410;
L_08A2F410:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F424;
    }
    goto L_08A2F424;
L_08A2F424:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F438;
    }
    goto L_08A2F438;
L_08A2F438:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F44C;
    }
    goto L_08A2F44C;
L_08A2F44C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A2F468u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 637u, 0x088B7E18u>(ctx, &aot_mem) && ctx.pc == 0x08A2F468u) goto L_08A2F468;
    return;
L_08A2F468:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F484;
    }
    goto L_08A2F484;
L_08A2F484:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F498;
    }
    goto L_08A2F498;
L_08A2F498:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F4AC;
    }
    goto L_08A2F4AC;
L_08A2F4AC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F4C0;
    }
    goto L_08A2F4C0;
L_08A2F4C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F510:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 4u);
      ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_target_raw);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 5u, vfpu_side); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 40u, 4u);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 13u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<5u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<4u, 5u, 5u, 3u>();
    ctx.execute_vfpu_vcmp_ct<4u, 100u, 1u, 7u>();
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08A2F5A0;
      }
      goto L_08A2F598;
    }
L_08A2F598:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    goto L_08A2F5A0;
L_08A2F5A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F5A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2F618u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2E964;
L_08A2F618:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2F650u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2F650u) goto L_08A2F650;
    return;
L_08A2F650:
    ctx.gpr[4] = (0u | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08A2F678;
    }
    goto L_08A2F678;
L_08A2F678:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
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
L_08A2F69C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-464));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 4u);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 13u, vfpu_side); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 12u, 4u, 3u>();
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<131u>());
    ctx.gpr[2] = (ctx.gpr[4] & 32u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F730;
      }
      goto L_08A2F71C;
    }
L_08A2F71C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F738;
      }
      goto L_08A2F730;
    }
L_08A2F730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F740;
      }
      goto L_08A2F738;
    }
L_08A2F738:
    ctx.gpr[31] = (0x08A2F740u);
    // nop
    goto L_08A2F69C;
L_08A2F740:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F74C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 12u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F770;
      }
      goto L_08A2F768;
    }
L_08A2F768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F780;
      }
      goto L_08A2F770;
    }
L_08A2F770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A2F780;
L_08A2F780:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F7BC;
      }
      goto L_08A2F79C;
    }
L_08A2F79C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A2F7C4;
      }
      goto L_08A2F7AC;
    }
L_08A2F7AC:
    ctx.gpr[31] = (0x08A2F7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 115u, 0x08A5CFD0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F7B4u) goto L_08A2F7B4;
    return;
L_08A2F7B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F7CC;
      }
      goto L_08A2F7BC;
    }
L_08A2F7BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F7CC;
      }
      goto L_08A2F7C4;
    }
L_08A2F7C4:
    ctx.gpr[31] = (0x08A2F7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 115u, 0x08A5CFD0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F7CCu) goto L_08A2F7CC;
    return;
L_08A2F7CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F7D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2F7F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 226u, 0x08A4CED8u>(ctx, &aot_mem) && ctx.pc == 0x08A2F7F0u) goto L_08A2F7F0;
    return;
L_08A2F7F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F800;
      }
      goto L_08A2F7F8;
    }
L_08A2F7F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F810;
      }
      goto L_08A2F800;
    }
L_08A2F800:
    ctx.gpr[31] = (0x08A2F808u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F808u) goto L_08A2F808;
    return;
L_08A2F808:
    ctx.gpr[31] = (0x08A2F810u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 194u, 0x0890D2A4u>(ctx, &aot_mem) && ctx.pc == 0x08A2F810u) goto L_08A2F810;
    return;
L_08A2F810:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F820:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F8D4;
      }
      goto L_08A2F838;
    }
L_08A2F838:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F8D4;
      }
      goto L_08A2F844;
    }
L_08A2F844:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F8D4;
      }
      goto L_08A2F850;
    }
L_08A2F850:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F8D4;
      }
      goto L_08A2F85C;
    }
L_08A2F85C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F8D4;
      }
      goto L_08A2F868;
    }
L_08A2F868:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F8D4;
      }
      goto L_08A2F874;
    }
L_08A2F874:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(46)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F8D4;
      }
      goto L_08A2F880;
    }
L_08A2F880:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F8D4;
      }
      goto L_08A2F88C;
    }
L_08A2F88C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F8D4;
      }
      goto L_08A2F898;
    }
L_08A2F898:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F8D4;
      }
      goto L_08A2F8A4;
    }
L_08A2F8A4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F8D4;
      }
      goto L_08A2F8B0;
    }
L_08A2F8B0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F8D4;
      }
      goto L_08A2F8BC;
    }
L_08A2F8BC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F8D4;
      }
      goto L_08A2F8C8;
    }
L_08A2F8C8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F8DC;
      }
      goto L_08A2F8D4;
    }
L_08A2F8D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2F8DC;
      }
      goto L_08A2F8DC;
    }
L_08A2F8DC:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F96C;
      }
      goto L_08A2F8E4;
    }
L_08A2F8E4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F964;
      }
      goto L_08A2F8F0;
    }
L_08A2F8F0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(122)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F964;
      }
      goto L_08A2F8FC;
    }
L_08A2F8FC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F964;
      }
      goto L_08A2F908;
    }
L_08A2F908:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(206)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F964;
      }
      goto L_08A2F914;
    }
L_08A2F914:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 273u);
      if (branch_taken) {
          goto L_08A2F964;
      }
      goto L_08A2F920;
    }
L_08A2F920:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 270u);
      if (branch_taken) {
          goto L_08A2F964;
      }
      goto L_08A2F928;
    }
L_08A2F928:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 272u);
      if (branch_taken) {
          goto L_08A2F964;
      }
      goto L_08A2F930;
    }
L_08A2F930:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F964;
      }
      goto L_08A2F938;
    }
L_08A2F938:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F964;
      }
      goto L_08A2F944;
    }
L_08A2F944:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F974;
      }
      goto L_08A2F95C;
    }
L_08A2F95C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A2F98C;
      }
      goto L_08A2F964;
    }
L_08A2F964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2FA70;
      }
      goto L_08A2F96C;
    }
L_08A2F96C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2FA70;
      }
      goto L_08A2F974;
    }
L_08A2F974:
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_08A2F98C;
L_08A2F98C:
    ctx.gpr[9] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[9] = (0u | 3u);
      if (branch_taken) {
          goto L_08A2F9A8;
      }
      goto L_08A2F998;
    }
L_08A2F998:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A2F9AC;
      }
      goto L_08A2F9A0;
    }
L_08A2F9A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F9D0;
      }
      goto L_08A2F9A8;
    }
L_08A2F9A8:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    goto L_08A2F9AC;
L_08A2F9AC:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(54)));
    ctx.gpr[9] = (ctx.gpr[8] & 8192u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F9C8;
      }
      goto L_08A2F9BC;
    }
L_08A2F9BC:
    ctx.gpr[8] = (ctx.gpr[8] & 16384u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08A2F9D0;
      }
      goto L_08A2F9C8;
    }
L_08A2F9C8:
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08A2F9D0;
L_08A2F9D0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F964;
      }
      goto L_08A2F9D8;
    }
L_08A2F9D8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 8u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FA04;
      }
      goto L_08A2F9F4;
    }
L_08A2F9F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F964;
      }
      goto L_08A2FA04;
    }
L_08A2FA04:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FA64;
      }
      goto L_08A2FA10;
    }
L_08A2FA10:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FA64;
      }
      goto L_08A2FA1C;
    }
L_08A2FA1C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FA64;
      }
      goto L_08A2FA28;
    }
L_08A2FA28:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FA64;
      }
      goto L_08A2FA34;
    }
L_08A2FA34:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FA64;
      }
      goto L_08A2FA40;
    }
L_08A2FA40:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FA64;
      }
      goto L_08A2FA4C;
    }
L_08A2FA4C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FA64;
      }
      goto L_08A2FA58;
    }
L_08A2FA58:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FA6C;
      }
      goto L_08A2FA64;
    }
L_08A2FA64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2FA70;
      }
      goto L_08A2FA6C;
    }
L_08A2FA6C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2FA70;
L_08A2FA70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FA78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FAA4;
      }
      goto L_08A2FA8C;
    }
L_08A2FA8C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2FAAC;
      }
      goto L_08A2FA9C;
    }
L_08A2FA9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FADC;
      }
      goto L_08A2FAA4;
    }
L_08A2FAA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FAE4;
      }
      goto L_08A2FAAC;
    }
L_08A2FAAC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2FACC;
      }
      goto L_08A2FABC;
    }
L_08A2FABC:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A2FAC4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2FAC4u) goto L_08A2FAC4;
    return;
L_08A2FAC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FAD4;
      }
      goto L_08A2FACC;
    }
L_08A2FACC:
    ctx.gpr[31] = (0x08A2FAD4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08A2FAD4u) goto L_08A2FAD4;
    return;
L_08A2FAD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FAE4;
      }
      goto L_08A2FADC;
    }
L_08A2FADC:
    ctx.gpr[31] = (0x08A2FAE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 211u, 0x08AA5094u>(ctx, &aot_mem) && ctx.pc == 0x08A2FAE4u) goto L_08A2FAE4;
    return;
L_08A2FAE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FAF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2FB58;
      }
      goto L_08A2FB14;
    }
L_08A2FB14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FB50;
      }
      goto L_08A2FB20;
    }
L_08A2FB20:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2FB48;
      }
      goto L_08A2FB30;
    }
L_08A2FB30:
    ctx.gpr[31] = (0x08A2FB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 339u, 0x089722CCu>(ctx, &aot_mem) && ctx.pc == 0x08A2FB38u) goto L_08A2FB38;
    return;
L_08A2FB38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FB60;
      }
      goto L_08A2FB40;
    }
L_08A2FB40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FBF0;
      }
      goto L_08A2FB48;
    }
L_08A2FB48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FBF0;
      }
      goto L_08A2FB50;
    }
L_08A2FB50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FBF0;
      }
      goto L_08A2FB58;
    }
L_08A2FB58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FBF0;
      }
      goto L_08A2FB60;
    }
L_08A2FB60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (16968u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A2FB98;
      }
      goto L_08A2FB78;
    }
L_08A2FB78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7840)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[31] = (0x08A2FB90u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 251u, 0x08971BACu>(ctx, &aot_mem) && ctx.pc == 0x08A2FB90u) goto L_08A2FB90;
    return;
L_08A2FB90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FBF0;
      }
      goto L_08A2FB98;
    }
L_08A2FB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FBCC;
      }
      goto L_08A2FBA8;
    }
L_08A2FBA8:
    ctx.gpr[31] = (0x08A2FBB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A2F69C;
L_08A2FBB0:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08A2FBCC;
L_08A2FBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08A2FBF0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 251u, 0x08971BACu>(ctx, &aot_mem) && ctx.pc == 0x08A2FBF0u) goto L_08A2FBF0;
    return;
L_08A2FBF0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FC04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FC2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6920)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-6888)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2FED4;
      }
      goto L_08A2FC64;
    }
L_08A2FC64:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A2FC94;
      }
      goto L_08A2FC7C;
    }
L_08A2FC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
        goto L_08A2FC98;
    }
    goto L_08A2FC8C;
L_08A2FC8C:
    ctx.gpr[31] = (0x08A2FC94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A2FC94u) goto L_08A2FC94;
    return;
L_08A2FC94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    goto L_08A2FC98;
L_08A2FC98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2FCB0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FCB0u) goto L_08A2FCB0;
    return;
L_08A2FCB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2FDAC;
      }
      goto L_08A2FCCC;
    }
L_08A2FCCC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2FD50;
      }
      goto L_08A2FCF4;
    }
L_08A2FCF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 4095u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A2FD18;
      }
      goto L_08A2FD0C;
    }
L_08A2FD0C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A2FD18;
L_08A2FD18:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48035u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A2FE50;
      }
      goto L_08A2FD50;
    }
L_08A2FD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 4095u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A2FD74;
      }
      goto L_08A2FD68;
    }
L_08A2FD68:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A2FD74;
L_08A2FD74:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48131u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A2FE50;
      }
      goto L_08A2FDAC;
    }
L_08A2FDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[17] = (ctx.gpr[4] >> 12u);
    ctx.gpr[17] = (ctx.gpr[17] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 4095u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A2FDE4;
      }
      goto L_08A2FDD8;
    }
L_08A2FDD8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A2FDE4;
L_08A2FDE4:
    ctx.gpr[4] = (14720u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10780));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (48245u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7688)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A2FE50;
L_08A2FE50:
    ctx.gpr[4] = (0u & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FE7C;
      }
      goto L_08A2FE5C;
    }
L_08A2FE5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[4] = (48527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A2FE7C;
L_08A2FE7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A2FEA0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 378u, 0x0886235Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FEA0u) goto L_08A2FEA0;
    return;
L_08A2FEA0:
    ctx.gpr[31] = (0x08A2FEA8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2FEA8u) goto L_08A2FEA8;
    return;
L_08A2FEA8:
    ctx.gpr[31] = (0x08A2FEB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A2F788;
L_08A2FEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FED4;
      }
      goto L_08A2FEC0;
    }
L_08A2FEC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FED4;
      }
      goto L_08A2FECC;
    }
L_08A2FECC:
    ctx.gpr[31] = (0x08A2FED4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A2FED4u) goto L_08A2FED4;
    return;
L_08A2FED4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FEF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2FF30;
      }
      goto L_08A2FF1C;
    }
L_08A2FF1C:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A2FF30;
L_08A2FF30:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FF64;
      }
      goto L_08A2FF48;
    }
L_08A2FF48:
    ctx.gpr[31] = (0x08A2FF50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 709u, 0x08806E98u>(ctx, &aot_mem) && ctx.pc == 0x08A2FF50u) goto L_08A2FF50;
    return;
L_08A2FF50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A2FF64;
L_08A2FF64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FF74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
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
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A2FFC0u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2FFC0u) goto L_08A2FFC0;
    return;
L_08A2FFC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[12] / ctx.fpr[13];
    ctx.pc = 0x08A30000u; return;
}

void recomp_unit_0138(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0138_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_138(Runtime &runtime) {
    runtime.register_generated_unit(138u, 0x08A2C000u, 16384u, &recomp_unit_0138, &recomp_unit_0138_entry);
    runtime.register_function(0x08A2C000u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C074u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C09Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C0A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C0D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C0DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C0E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C0ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C0F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C0FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C10Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C110u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C118u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C128u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C12Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C134u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C144u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C154u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C164u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C168u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C170u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C180u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C190u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C194u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C19Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C200u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C214u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C224u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C22Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C23Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C248u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C25Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C26Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C27Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C28Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C29Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C354u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C360u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C368u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C378u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C380u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C390u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C398u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C3A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C3ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C3E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C404u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C418u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C434u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C44Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C450u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C478u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C488u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C490u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C498u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C500u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C50Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C514u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C518u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C520u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C52Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C534u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C538u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C540u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C54Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C554u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C558u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C560u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C56Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C578u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C580u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C590u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C59Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C60Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C614u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C624u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C62Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C640u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C650u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C66Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C674u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C67Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C680u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C684u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C718u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C72Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C748u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C758u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C75Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C78Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C7ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C7F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C800u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C810u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C818u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C844u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C854u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C85Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C864u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C86Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C874u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C87Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C884u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C890u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C894u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C89Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C908u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C910u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C914u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C91Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C928u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C930u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C934u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C93Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C948u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C954u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C95Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C96Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C978u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C988u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C990u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA08u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA1Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB08u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CBD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CBD8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CBF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC08u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC10u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC3Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC44u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC70u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCE0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD3Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDF0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDF8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE80u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CED8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CEE8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CEF8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF10u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF80u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF90u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CFA4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CFB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CFB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CFCCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CFD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CFDCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CFECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CFFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D004u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D018u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D020u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D02Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D038u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D084u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D094u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D104u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D110u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D118u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D12Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D13Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D148u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D150u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D15Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D164u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D178u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D180u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D188u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D198u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D230u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D240u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D250u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D25Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D268u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D270u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D308u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D310u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D324u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D32Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D334u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D344u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D354u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D35Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D370u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D378u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D384u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D390u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D408u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D414u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D41Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D44Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D45Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D468u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D470u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D484u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D494u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D500u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D508u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D51Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D524u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D530u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D53Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D588u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D598u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D608u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D614u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D61Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D630u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D640u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D64Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D654u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D660u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D668u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D67Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D684u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D68Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D69Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D720u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D808u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D814u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D824u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D82Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D838u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D848u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D850u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D85Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D8C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D8E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D8F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D900u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D908u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D914u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D924u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D934u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D93Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D94Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D95Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D988u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA3Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA94u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DAACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DABCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DAC4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DAD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DAD8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB10u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB1Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBA4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBB4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBDCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBE0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCBCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DD10u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DD38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DD44u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DDC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DDD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DDD8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE80u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE94u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DEB4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DEE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DEFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF08u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E078u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E08Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E0A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E0D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E0E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E0F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E204u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E218u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E230u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E27Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E288u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E2ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E2B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E2BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E2F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E30Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E310u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E330u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E348u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E34Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E35Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E390u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E400u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E408u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E414u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E420u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E450u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E498u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E500u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E510u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E520u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E540u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E550u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E560u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E570u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E590u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E59Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E5CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E5DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E5F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E604u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E614u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E62Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E63Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E658u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E664u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E674u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E67Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E68Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E69Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E6B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E6C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E6D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E6E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E6F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E708u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E740u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E750u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E77Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E784u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E790u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E80Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E814u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E820u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E830u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E83Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E84Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E854u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E860u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E868u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E86Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E87Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E89Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E964u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E98Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E994u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E9B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E9B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E9C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E9CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E9D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E9E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E9E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E9FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA3Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA44u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA84u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA94u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAA4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAB4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB80u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBA4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBBCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBE0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBF8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC10u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC3Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC44u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC84u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC94u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECCCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECD8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECF0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED08u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED44u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED88u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED90u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EDC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE84u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EEA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EEB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EEC4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EECCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EED0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EED4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EEECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EEF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EEFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF70u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF90u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFA0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFCCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFD8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFDCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F008u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F018u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F024u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F02Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F030u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F034u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F04Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F064u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F078u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F080u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F094u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F100u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F108u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F11Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F140u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F150u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F158u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F168u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F178u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F188u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F190u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F198u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F1A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F1ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F1B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F1BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F1C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F1D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F1E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F1FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F210u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F218u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F234u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F244u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F25Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F288u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F2FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F318u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F32Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F340u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F354u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F370u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F38Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F3A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F3B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F3C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F3F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F410u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F424u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F438u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F44Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F468u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F484u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F498u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F4ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F4C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F510u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F598u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F5A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F5A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F618u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F650u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F678u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F69Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F708u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F71Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F730u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F738u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F740u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F74Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F768u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F770u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F780u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F788u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F79Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F800u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F808u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F810u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F820u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F838u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F844u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F850u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F85Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F868u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F874u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F880u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F88Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F898u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F908u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F914u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F920u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F928u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F930u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F938u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F944u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F95Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F964u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F96Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F974u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F98Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F998u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA10u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA1Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA70u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FAA4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FAACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FABCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FAC4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FACCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FAD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FADCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FAE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FAF0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB90u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FBA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FBB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FBCCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FBF0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC94u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FCB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FCCCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FCF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FD0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FD18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FD50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FD68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FD74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FDACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FDD8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FDE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FEA0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FEA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FEB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FEC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FECCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FED4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FEF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF1Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FFC0u, &recomp_unit_0138, "recomp_unit_0138");
}
} // namespace psprecomp
