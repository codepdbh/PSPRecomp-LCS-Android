#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0013[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 7,
    0, 0, 0, 0, 0, 8, 0, 0, 9, 10, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 0,
    23, 0, 24, 0, 0, 25, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 30, 0, 31, 0, 32, 33, 0, 34, 0, 35, 0, 0, 0, 36,
    0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 49, 0, 50, 51, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 55, 0, 0, 0, 56, 57, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 81,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88,
    0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0,
    108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 139, 140, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0,
    145, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 152, 153, 0, 154, 0, 0, 155, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 161, 0, 162, 0, 163, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 176, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 182, 0, 0, 183, 0,
    184, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 0, 194, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 229,
    0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0,
    0, 0, 0, 0, 237, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 244, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 0, 250, 0, 251, 0, 252, 0, 0, 253, 0, 254, 0, 255,
    0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 0, 261, 0,
    0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 275, 0,
    0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0,
    282, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 0, 289, 0, 290, 291, 0, 0, 292, 0, 0, 293, 0, 0,
    0, 294, 0, 295, 0, 0, 296, 0, 297, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0,
    0, 305, 0, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0,
    314, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320,
    0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 331, 0, 0, 0, 332,
    0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 345,
    0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0,
    0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 362, 0,
    363, 0, 364, 0, 365, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0,
    0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0,
    0, 382, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 389, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 394, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 0, 0,
    0, 399, 0, 400, 0, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0,
    0, 408, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 0, 0, 412, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 418, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 421, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 433,
    0, 434, 0, 435, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 0,
    444, 0, 445, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 452, 0, 0, 453, 0, 454, 455, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 458,
    0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0,
    0, 0, 466, 0, 467, 0, 468, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 474, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 479, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0,
    0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0,
    0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 495, 0, 496, 0, 0, 0, 497, 0, 498, 0, 499, 0, 500, 0,
    0, 0, 501, 0, 502, 0, 503, 0, 0, 504, 505, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 511,
    512, 0, 513, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0,
    0, 520, 0, 521, 522, 0, 523, 524, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0,
    528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 533, 534, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 540,
    0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0,
    0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 549, 0, 0, 0, 0,
    0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0,
    0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 572, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 575,
    0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 578, 0, 579, 580, 0, 581, 582, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 586, 587, 0, 588, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 594, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0,
    597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 608, 0, 0, 0, 0, 0, 0, 609, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0,
    0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 623, 0, 0, 0, 624,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0,
    0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 636, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 642,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0,
    644, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 647, 0, 648, 649,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 0,
    0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662,
    0, 663, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 668, 669, 0, 670, 0,
    671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0, 676, 677, 0, 678, 0,
    679, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 684, 685, 0, 686, 0, 687, 0, 0, 0,
    0, 688, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 692, 0, 693, 0, 0, 694, 0, 0, 695, 0, 696, 0,
    697, 0, 0, 0, 698, 0, 0, 0, 0, 0, 699, 0, 700, 0, 0, 701, 0, 702, 0, 0, 703, 0, 0, 0, 704, 0, 705, 0, 0, 0, 0, 0,
    706, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 710, 0, 711, 0, 0, 0, 712, 713, 0, 0, 714, 715, 0, 716, 0, 0, 0,
    0, 717, 0, 0, 0, 718, 0, 0, 0, 719, 0, 720, 0, 0, 721, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 725, 0, 726, 0, 727,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 729, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 735, 0,
    0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 739, 0, 740, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 744,
    0, 0, 745, 0, 746, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    751, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 754, 0, 755, 0, 0, 756, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0,
    758, 0, 0, 0, 0, 0, 0, 759, 760, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0, 763, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    765, 0, 766, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0,
    0, 772, 0, 0, 773, 0, 0, 774, 0, 0, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0,
    0, 0, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0, 0, 782, 0, 783, 0, 0, 784, 0, 0, 0, 0, 785, 0, 786, 0, 0, 787,
};
void recomp_unit_0013_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08838004u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0013[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08838004;
    case 2u: goto L_08838028;
    case 3u: goto L_0883803C;
    case 4u: goto L_08838058;
    case 5u: goto L_0883806C;
    case 6u: goto L_08838078;
    case 7u: goto L_08838080;
    case 8u: goto L_08838098;
    case 9u: goto L_088380A4;
    case 10u: goto L_088380A8;
    case 11u: goto L_088380B0;
    case 12u: goto L_088380B8;
    case 13u: goto L_088380CC;
    case 14u: goto L_088380F8;
    case 15u: goto L_08838104;
    case 16u: goto L_08838128;
    case 17u: goto L_08838138;
    case 18u: goto L_08838154;
    case 19u: goto L_0883815C;
    case 20u: goto L_08838168;
    case 21u: goto L_08838170;
    case 22u: goto L_08838178;
    case 23u: goto L_08838184;
    case 24u: goto L_0883818C;
    case 25u: goto L_08838198;
    case 26u: goto L_088381A0;
    case 27u: goto L_088381AC;
    case 28u: goto L_088381B8;
    case 29u: goto L_088381C4;
    case 30u: goto L_088381CC;
    case 31u: goto L_088381D4;
    case 32u: goto L_088381DC;
    case 33u: goto L_088381E0;
    case 34u: goto L_088381E8;
    case 35u: goto L_088381F0;
    case 36u: goto L_08838200;
    case 37u: goto L_08838208;
    case 38u: goto L_0883822C;
    case 39u: goto L_08838234;
    case 40u: goto L_0883823C;
    case 41u: goto L_08838288;
    case 42u: goto L_08838298;
    case 43u: goto L_088382B0;
    case 44u: goto L_088382B4;
    case 45u: goto L_088382C4;
    case 46u: goto L_088382D4;
    case 47u: goto L_088382DC;
    case 48u: goto L_088382E4;
    case 49u: goto L_088382F0;
    case 50u: goto L_088382F8;
    case 51u: goto L_088382FC;
    case 52u: goto L_08838304;
    case 53u: goto L_08838334;
    case 54u: goto L_08838354;
    case 55u: goto L_08838358;
    case 56u: goto L_08838368;
    case 57u: goto L_0883836C;
    case 58u: goto L_08838374;
    case 59u: goto L_088383B8;
    case 60u: goto L_088383D4;
    case 61u: goto L_088383DC;
    case 62u: goto L_088383E4;
    case 63u: goto L_088383EC;
    case 64u: goto L_088383F4;
    case 65u: goto L_088383FC;
    case 66u: goto L_08838408;
    case 67u: goto L_08838434;
    case 68u: goto L_08838444;
    case 69u: goto L_0883844C;
    case 70u: goto L_08838460;
    case 71u: goto L_088384AC;
    case 72u: goto L_088384B8;
    case 73u: goto L_088384C0;
    case 74u: goto L_088384F0;
    case 75u: goto L_08838540;
    case 76u: goto L_08838548;
    case 77u: goto L_08838550;
    case 78u: goto L_08838554;
    case 79u: goto L_08838560;
    case 80u: goto L_0883856C;
    case 81u: goto L_08838580;
    case 82u: goto L_088385B4;
    case 83u: goto L_088385BC;
    case 84u: goto L_088385CC;
    case 85u: goto L_088385D4;
    case 86u: goto L_088385E0;
    case 87u: goto L_088385F4;
    case 88u: goto L_08838600;
    case 89u: goto L_08838608;
    case 90u: goto L_08838618;
    case 91u: goto L_08838634;
    case 92u: goto L_08838640;
    case 93u: goto L_08838648;
    case 94u: goto L_08838658;
    case 95u: goto L_08838660;
    case 96u: goto L_0883866C;
    case 97u: goto L_0883867C;
    case 98u: goto L_08838688;
    case 99u: goto L_088386A8;
    case 100u: goto L_088386AC;
    case 101u: goto L_088386B4;
    case 102u: goto L_088386BC;
    case 103u: goto L_088386C4;
    case 104u: goto L_088386CC;
    case 105u: goto L_088386D4;
    case 106u: goto L_088386DC;
    case 107u: goto L_088386F8;
    case 108u: goto L_08838704;
    case 109u: goto L_0883871C;
    case 110u: goto L_08838724;
    case 111u: goto L_08838744;
    case 112u: goto L_08838748;
    case 113u: goto L_08838778;
    case 114u: goto L_08838794;
    case 115u: goto L_0883879C;
    case 116u: goto L_088387A4;
    case 117u: goto L_088387AC;
    case 118u: goto L_088387B4;
    case 119u: goto L_088387E0;
    case 120u: goto L_088387F0;
    case 121u: goto L_08838804;
    case 122u: goto L_08838818;
    case 123u: goto L_08838828;
    case 124u: goto L_08838834;
    case 125u: goto L_0883883C;
    case 126u: goto L_08838850;
    case 127u: goto L_0883887C;
    case 128u: goto L_0883889C;
    case 129u: goto L_088388AC;
    case 130u: goto L_088388BC;
    case 131u: goto L_088388C8;
    case 132u: goto L_088388E4;
    case 133u: goto L_0883890C;
    case 134u: goto L_08838914;
    case 135u: goto L_08838920;
    case 136u: goto L_0883892C;
    case 137u: goto L_0883893C;
    case 138u: goto L_08838944;
    case 139u: goto L_0883894C;
    case 140u: goto L_08838950;
    case 141u: goto L_0883895C;
    case 142u: goto L_08838964;
    case 143u: goto L_08838974;
    case 144u: goto L_0883897C;
    case 145u: goto L_08838984;
    case 146u: goto L_08838994;
    case 147u: goto L_0883899C;
    case 148u: goto L_088389B4;
    case 149u: goto L_088389C4;
    case 150u: goto L_088389D0;
    case 151u: goto L_088389DC;
    case 152u: goto L_088389E4;
    case 153u: goto L_088389E8;
    case 154u: goto L_088389F0;
    case 155u: goto L_088389FC;
    case 156u: goto L_08838A08;
    case 157u: goto L_08838A28;
    case 158u: goto L_08838A54;
    case 159u: goto L_08838A58;
    case 160u: goto L_08838A78;
    case 161u: goto L_08838A88;
    case 162u: goto L_08838A90;
    case 163u: goto L_08838A98;
    case 164u: goto L_08838A9C;
    case 165u: goto L_08838AA4;
    case 166u: goto L_08838AE0;
    case 167u: goto L_08838AEC;
    case 168u: goto L_08838AF4;
    case 169u: goto L_08838B10;
    case 170u: goto L_08838B2C;
    case 171u: goto L_08838B34;
    case 172u: goto L_08838B3C;
    case 173u: goto L_08838B40;
    case 174u: goto L_08838B48;
    case 175u: goto L_08838B80;
    case 176u: goto L_08838B88;
    case 177u: goto L_08838B9C;
    case 178u: goto L_08838BA4;
    case 179u: goto L_08838BCC;
    case 180u: goto L_08838BDC;
    case 181u: goto L_08838BE4;
    case 182u: goto L_08838BF0;
    case 183u: goto L_08838BFC;
    case 184u: goto L_08838C04;
    case 185u: goto L_08838C0C;
    case 186u: goto L_08838C1C;
    case 187u: goto L_08838C54;
    case 188u: goto L_08838C5C;
    case 189u: goto L_08838C64;
    case 190u: goto L_08838C70;
    case 191u: goto L_08838C9C;
    case 192u: goto L_08838CAC;
    case 193u: goto L_08838CB4;
    case 194u: goto L_08838CC0;
    case 195u: goto L_08838CCC;
    case 196u: goto L_08838CD4;
    case 197u: goto L_08838CDC;
    case 198u: goto L_08838CEC;
    case 199u: goto L_08838D44;
    case 200u: goto L_08838D5C;
    case 201u: goto L_08838D88;
    case 202u: goto L_08838D90;
    case 203u: goto L_08838D98;
    case 204u: goto L_08838DAC;
    case 205u: goto L_08838DB8;
    case 206u: goto L_08838DCC;
    case 207u: goto L_08838DD8;
    case 208u: goto L_08838DE0;
    case 209u: goto L_08838DF0;
    case 210u: goto L_08838E00;
    case 211u: goto L_08838E60;
    case 212u: goto L_08838E84;
    case 213u: goto L_08838E90;
    case 214u: goto L_08838E9C;
    case 215u: goto L_08838EA4;
    case 216u: goto L_08838EB8;
    case 217u: goto L_08838ECC;
    case 218u: goto L_08838EFC;
    case 219u: goto L_08838F08;
    case 220u: goto L_08838F10;
    case 221u: goto L_08838F18;
    case 222u: goto L_08838F2C;
    case 223u: goto L_08838F3C;
    case 224u: goto L_08838F48;
    case 225u: goto L_08838F50;
    case 226u: goto L_08838F5C;
    case 227u: goto L_08838F64;
    case 228u: goto L_08838F78;
    case 229u: goto L_08838F80;
    case 230u: goto L_08838F88;
    case 231u: goto L_08838F98;
    case 232u: goto L_08838FA4;
    case 233u: goto L_08838FAC;
    case 234u: goto L_08838FD4;
    case 235u: goto L_08838FE4;
    case 236u: goto L_08838FF8;
    case 237u: goto L_08839014;
    case 238u: goto L_08839018;
    case 239u: goto L_08839048;
    case 240u: goto L_0883905C;
    case 241u: goto L_08839070;
    case 242u: goto L_08839094;
    case 243u: goto L_0883910C;
    case 244u: goto L_08839120;
    case 245u: goto L_08839128;
    case 246u: goto L_08839130;
    case 247u: goto L_08839138;
    case 248u: goto L_08839140;
    case 249u: goto L_08839148;
    case 250u: goto L_08839154;
    case 251u: goto L_0883915C;
    case 252u: goto L_08839164;
    case 253u: goto L_08839170;
    case 254u: goto L_08839178;
    case 255u: goto L_08839180;
    case 256u: goto L_08839190;
    case 257u: goto L_088391C8;
    case 258u: goto L_088391D4;
    case 259u: goto L_088391DC;
    case 260u: goto L_088391E8;
    case 261u: goto L_088391FC;
    case 262u: goto L_08839208;
    case 263u: goto L_08839210;
    case 264u: goto L_08839224;
    case 265u: goto L_08839230;
    case 266u: goto L_08839238;
    case 267u: goto L_08839240;
    case 268u: goto L_08839248;
    case 269u: goto L_08839250;
    case 270u: goto L_08839258;
    case 271u: goto L_08839260;
    case 272u: goto L_08839268;
    case 273u: goto L_08839270;
    case 274u: goto L_08839278;
    case 275u: goto L_0883927C;
    case 276u: goto L_08839298;
    case 277u: goto L_088392D0;
    case 278u: goto L_088392D8;
    case 279u: goto L_088392E4;
    case 280u: goto L_088392EC;
    case 281u: goto L_088392F4;
    case 282u: goto L_08839304;
    case 283u: goto L_0883930C;
    case 284u: goto L_08839314;
    case 285u: goto L_08839324;
    case 286u: goto L_08839338;
    case 287u: goto L_08839340;
    case 288u: goto L_08839348;
    case 289u: goto L_08839354;
    case 290u: goto L_0883935C;
    case 291u: goto L_08839360;
    case 292u: goto L_0883936C;
    case 293u: goto L_08839378;
    case 294u: goto L_08839388;
    case 295u: goto L_08839390;
    case 296u: goto L_0883939C;
    case 297u: goto L_088393A4;
    case 298u: goto L_088393AC;
    case 299u: goto L_088393B8;
    case 300u: goto L_088393C0;
    case 301u: goto L_088393D4;
    case 302u: goto L_088393EC;
    case 303u: goto L_088393F4;
    case 304u: goto L_088393FC;
    case 305u: goto L_08839408;
    case 306u: goto L_08839414;
    case 307u: goto L_0883941C;
    case 308u: goto L_08839424;
    case 309u: goto L_0883942C;
    case 310u: goto L_08839434;
    case 311u: goto L_0883943C;
    case 312u: goto L_08839440;
    case 313u: goto L_0883946C;
    case 314u: goto L_08839484;
    case 315u: goto L_08839494;
    case 316u: goto L_088394A0;
    case 317u: goto L_088394B0;
    case 318u: goto L_088394C0;
    case 319u: goto L_088394D4;
    case 320u: goto L_08839500;
    case 321u: goto L_0883951C;
    case 322u: goto L_08839528;
    case 323u: goto L_08839540;
    case 324u: goto L_08839568;
    case 325u: goto L_08839594;
    case 326u: goto L_088395BC;
    case 327u: goto L_088395C4;
    case 328u: goto L_088395CC;
    case 329u: goto L_088395DC;
    case 330u: goto L_088395E8;
    case 331u: goto L_088395F0;
    case 332u: goto L_08839600;
    case 333u: goto L_08839608;
    case 334u: goto L_08839624;
    case 335u: goto L_08839644;
    case 336u: goto L_088396A4;
    case 337u: goto L_088396D0;
    case 338u: goto L_08839704;
    case 339u: goto L_0883971C;
    case 340u: goto L_08839724;
    case 341u: goto L_08839738;
    case 342u: goto L_08839754;
    case 343u: goto L_0883975C;
    case 344u: goto L_0883977C;
    case 345u: goto L_08839780;
    case 346u: goto L_08839794;
    case 347u: goto L_088397A4;
    case 348u: goto L_088397AC;
    case 349u: goto L_088397C8;
    case 350u: goto L_088397E8;
    case 351u: goto L_08839808;
    case 352u: goto L_08839824;
    case 353u: goto L_08839858;
    case 354u: goto L_08839870;
    case 355u: goto L_0883987C;
    case 356u: goto L_08839890;
    case 357u: goto L_0883989C;
    case 358u: goto L_088398B0;
    case 359u: goto L_088398BC;
    case 360u: goto L_088398EC;
    case 361u: goto L_088398F4;
    case 362u: goto L_088398FC;
    case 363u: goto L_08839904;
    case 364u: goto L_0883990C;
    case 365u: goto L_08839914;
    case 366u: goto L_0883991C;
    case 367u: goto L_08839928;
    case 368u: goto L_08839938;
    case 369u: goto L_08839948;
    case 370u: goto L_08839964;
    case 371u: goto L_0883996C;
    case 372u: goto L_08839974;
    case 373u: goto L_08839988;
    case 374u: goto L_08839990;
    case 375u: goto L_08839998;
    case 376u: goto L_088399A0;
    case 377u: goto L_088399A8;
    case 378u: goto L_088399B8;
    case 379u: goto L_088399D4;
    case 380u: goto L_088399E4;
    case 381u: goto L_088399F8;
    case 382u: goto L_08839A08;
    case 383u: goto L_08839A18;
    case 384u: goto L_08839A20;
    case 385u: goto L_08839A40;
    case 386u: goto L_08839A78;
    case 387u: goto L_08839AAC;
    case 388u: goto L_08839AD8;
    case 389u: goto L_08839B08;
    case 390u: goto L_08839B18;
    case 391u: goto L_08839B20;
    case 392u: goto L_08839B38;
    case 393u: goto L_08839B40;
    case 394u: goto L_08839B50;
    case 395u: goto L_08839B58;
    case 396u: goto L_08839B64;
    case 397u: goto L_08839B6C;
    case 398u: goto L_08839B74;
    case 399u: goto L_08839B88;
    case 400u: goto L_08839B90;
    case 401u: goto L_08839BA4;
    case 402u: goto L_08839BB0;
    case 403u: goto L_08839BB8;
    case 404u: goto L_08839BC4;
    case 405u: goto L_08839BD0;
    case 406u: goto L_08839BE8;
    case 407u: goto L_08839BF0;
    case 408u: goto L_08839C08;
    case 409u: goto L_08839C14;
    case 410u: goto L_08839C20;
    case 411u: goto L_08839C28;
    case 412u: goto L_08839C3C;
    case 413u: goto L_08839C40;
    case 414u: goto L_08839C6C;
    case 415u: goto L_08839C84;
    case 416u: goto L_08839CA0;
    case 417u: goto L_08839CA8;
    case 418u: goto L_08839CB4;
    case 419u: goto L_08839CBC;
    case 420u: goto L_08839CD0;
    case 421u: goto L_08839D08;
    case 422u: goto L_08839D10;
    case 423u: goto L_08839D18;
    case 424u: goto L_08839D34;
    case 425u: goto L_08839D54;
    case 426u: goto L_08839D68;
    case 427u: goto L_08839D94;
    case 428u: goto L_08839DA0;
    case 429u: goto L_08839DAC;
    case 430u: goto L_08839DC4;
    case 431u: goto L_08839DE0;
    case 432u: goto L_08839DEC;
    case 433u: goto L_08839E00;
    case 434u: goto L_08839E08;
    case 435u: goto L_08839E10;
    case 436u: goto L_08839E20;
    case 437u: goto L_08839E28;
    case 438u: goto L_08839E60;
    case 439u: goto L_08839E70;
    case 440u: goto L_08839EA0;
    case 441u: goto L_08839EE4;
    case 442u: goto L_08839EF0;
    case 443u: goto L_08839EF8;
    case 444u: goto L_08839F04;
    case 445u: goto L_08839F0C;
    case 446u: goto L_08839F14;
    case 447u: goto L_08839F20;
    case 448u: goto L_08839F3C;
    case 449u: goto L_08839F5C;
    case 450u: goto L_08839F7C;
    case 451u: goto L_08839FB0;
    case 452u: goto L_08839FB4;
    case 453u: goto L_08839FC0;
    case 454u: goto L_08839FC8;
    case 455u: goto L_08839FCC;
    case 456u: goto L_08839FE4;
    case 457u: goto L_08839FF0;
    case 458u: goto L_0883A000;
    case 459u: goto L_0883A00C;
    case 460u: goto L_0883A020;
    case 461u: goto L_0883A02C;
    case 462u: goto L_0883A038;
    case 463u: goto L_0883A044;
    case 464u: goto L_0883A05C;
    case 465u: goto L_0883A068;
    case 466u: goto L_0883A08C;
    case 467u: goto L_0883A094;
    case 468u: goto L_0883A09C;
    case 469u: goto L_0883A0AC;
    case 470u: goto L_0883A0B4;
    case 471u: goto L_0883A10C;
    case 472u: goto L_0883A11C;
    case 473u: goto L_0883A14C;
    case 474u: goto L_0883A188;
    case 475u: goto L_0883A190;
    case 476u: goto L_0883A198;
    case 477u: goto L_0883A1B4;
    case 478u: goto L_0883A1C8;
    case 479u: goto L_0883A1D0;
    case 480u: goto L_0883A1DC;
    case 481u: goto L_0883A1F0;
    case 482u: goto L_0883A234;
    case 483u: goto L_0883A25C;
    case 484u: goto L_0883A278;
    case 485u: goto L_0883A294;
    case 486u: goto L_0883A2A0;
    case 487u: goto L_0883A2B0;
    case 488u: goto L_0883A2CC;
    case 489u: goto L_0883A2E4;
    case 490u: goto L_0883A2FC;
    case 491u: goto L_0883A310;
    case 492u: goto L_0883A320;
    case 493u: goto L_0883A334;
    case 494u: goto L_0883A344;
    case 495u: goto L_0883A34C;
    case 496u: goto L_0883A354;
    case 497u: goto L_0883A364;
    case 498u: goto L_0883A36C;
    case 499u: goto L_0883A374;
    case 500u: goto L_0883A37C;
    case 501u: goto L_0883A38C;
    case 502u: goto L_0883A394;
    case 503u: goto L_0883A39C;
    case 504u: goto L_0883A3A8;
    case 505u: goto L_0883A3AC;
    case 506u: goto L_0883A3B8;
    case 507u: goto L_0883A3D4;
    case 508u: goto L_0883A3E0;
    case 509u: goto L_0883A3EC;
    case 510u: goto L_0883A3F8;
    case 511u: goto L_0883A400;
    case 512u: goto L_0883A404;
    case 513u: goto L_0883A40C;
    case 514u: goto L_0883A410;
    case 515u: goto L_0883A428;
    case 516u: goto L_0883A448;
    case 517u: goto L_0883A464;
    case 518u: goto L_0883A470;
    case 519u: goto L_0883A47C;
    case 520u: goto L_0883A488;
    case 521u: goto L_0883A490;
    case 522u: goto L_0883A494;
    case 523u: goto L_0883A49C;
    case 524u: goto L_0883A4A0;
    case 525u: goto L_0883A4B8;
    case 526u: goto L_0883A4C0;
    case 527u: goto L_0883A4E0;
    case 528u: goto L_0883A504;
    case 529u: goto L_0883A520;
    case 530u: goto L_0883A530;
    case 531u: goto L_0883A5A8;
    case 532u: goto L_0883A5B8;
    case 533u: goto L_0883A610;
    case 534u: goto L_0883A614;
    case 535u: goto L_0883A61C;
    case 536u: goto L_0883A69C;
    case 537u: goto L_0883A6C8;
    case 538u: goto L_0883A6DC;
    case 539u: goto L_0883A6F4;
    case 540u: goto L_0883A700;
    case 541u: goto L_0883A71C;
    case 542u: goto L_0883A764;
    case 543u: goto L_0883A77C;
    case 544u: goto L_0883A790;
    case 545u: goto L_0883A7B0;
    case 546u: goto L_0883A7C0;
    case 547u: goto L_0883A7D0;
    case 548u: goto L_0883A7EC;
    case 549u: goto L_0883A7F0;
    case 550u: goto L_0883A808;
    case 551u: goto L_0883A860;
    case 552u: goto L_0883A8A8;
    case 553u: goto L_0883A8B8;
    case 554u: goto L_0883A8C0;
    case 555u: goto L_0883A8C8;
    case 556u: goto L_0883A8E4;
    case 557u: goto L_0883A940;
    case 558u: goto L_0883A968;
    case 559u: goto L_0883AA08;
    case 560u: goto L_0883AA10;
    case 561u: goto L_0883AA98;
    case 562u: goto L_0883AAC4;
    case 563u: goto L_0883AAD8;
    case 564u: goto L_0883AAE0;
    case 565u: goto L_0883AAF8;
    case 566u: goto L_0883AB0C;
    case 567u: goto L_0883AB24;
    case 568u: goto L_0883AB30;
    case 569u: goto L_0883AB50;
    case 570u: goto L_0883ABC0;
    case 571u: goto L_0883ABC8;
    case 572u: goto L_0883ABD4;
    case 573u: goto L_0883ABE4;
    case 574u: goto L_0883ABEC;
    case 575u: goto L_0883AC00;
    case 576u: goto L_0883AC10;
    case 577u: goto L_0883AC24;
    case 578u: goto L_0883AC2C;
    case 579u: goto L_0883AC34;
    case 580u: goto L_0883AC38;
    case 581u: goto L_0883AC40;
    case 582u: goto L_0883AC44;
    case 583u: goto L_0883AC64;
    case 584u: goto L_0883ACA8;
    case 585u: goto L_0883ACB8;
    case 586u: goto L_0883ACC4;
    case 587u: goto L_0883ACC8;
    case 588u: goto L_0883ACD0;
    case 589u: goto L_0883ACD4;
    case 590u: goto L_0883AD1C;
    case 591u: goto L_0883AD2C;
    case 592u: goto L_0883AD38;
    case 593u: goto L_0883AD40;
    case 594u: goto L_0883AD58;
    case 595u: goto L_0883AD60;
    case 596u: goto L_0883AD68;
    case 597u: goto L_0883AD84;
    case 598u: goto L_0883ADB4;
    case 599u: goto L_0883ADD8;
    case 600u: goto L_0883AE20;
    case 601u: goto L_0883AE38;
    case 602u: goto L_0883AE44;
    case 603u: goto L_0883AE4C;
    case 604u: goto L_0883AE74;
    case 605u: goto L_0883AEC0;
    case 606u: goto L_0883AF0C;
    case 607u: goto L_0883AF58;
    case 608u: goto L_0883AF8C;
    case 609u: goto L_0883AFA8;
    case 610u: goto L_0883AFAC;
    case 611u: goto L_0883AFD8;
    case 612u: goto L_0883AFDC;
    case 613u: goto L_0883B024;
    case 614u: goto L_0883B03C;
    case 615u: goto L_0883B060;
    case 616u: goto L_0883B078;
    case 617u: goto L_0883B090;
    case 618u: goto L_0883B0B4;
    case 619u: goto L_0883B0D0;
    case 620u: goto L_0883B144;
    case 621u: goto L_0883B1DC;
    case 622u: goto L_0883B1E4;
    case 623u: goto L_0883B1F0;
    case 624u: goto L_0883B200;
    case 625u: goto L_0883B23C;
    case 626u: goto L_0883B254;
    case 627u: goto L_0883B27C;
    case 628u: goto L_0883B28C;
    case 629u: goto L_0883B298;
    case 630u: goto L_0883B2B0;
    case 631u: goto L_0883B2B8;
    case 632u: goto L_0883B2E8;
    case 633u: goto L_0883B318;
    case 634u: goto L_0883B348;
    case 635u: goto L_0883B378;
    case 636u: goto L_0883B37C;
    case 637u: goto L_0883B3A4;
    case 638u: goto L_0883B3B0;
    case 639u: goto L_0883B3C0;
    case 640u: goto L_0883B420;
    case 641u: goto L_0883B46C;
    case 642u: goto L_0883B480;
    case 643u: goto L_0883B4E0;
    case 644u: goto L_0883B504;
    case 645u: goto L_0883B528;
    case 646u: goto L_0883B56C;
    case 647u: goto L_0883B574;
    case 648u: goto L_0883B57C;
    case 649u: goto L_0883B580;
    case 650u: goto L_0883B5C4;
    case 651u: goto L_0883B668;
    case 652u: goto L_0883B674;
    case 653u: goto L_0883B68C;
    case 654u: goto L_0883B6B8;
    case 655u: goto L_0883B6C0;
    case 656u: goto L_0883B6D0;
    case 657u: goto L_0883B6D8;
    case 658u: goto L_0883B6E0;
    case 659u: goto L_0883B6E8;
    case 660u: goto L_0883B6F0;
    case 661u: goto L_0883B6F8;
    case 662u: goto L_0883B700;
    case 663u: goto L_0883B708;
    case 664u: goto L_0883B714;
    case 665u: goto L_0883B744;
    case 666u: goto L_0883B750;
    case 667u: goto L_0883B768;
    case 668u: goto L_0883B770;
    case 669u: goto L_0883B774;
    case 670u: goto L_0883B77C;
    case 671u: goto L_0883B784;
    case 672u: goto L_0883B798;
    case 673u: goto L_0883B7B0;
    case 674u: goto L_0883B7D0;
    case 675u: goto L_0883B7E8;
    case 676u: goto L_0883B7F0;
    case 677u: goto L_0883B7F4;
    case 678u: goto L_0883B7FC;
    case 679u: goto L_0883B804;
    case 680u: goto L_0883B818;
    case 681u: goto L_0883B830;
    case 682u: goto L_0883B840;
    case 683u: goto L_0883B858;
    case 684u: goto L_0883B860;
    case 685u: goto L_0883B864;
    case 686u: goto L_0883B86C;
    case 687u: goto L_0883B874;
    case 688u: goto L_0883B888;
    case 689u: goto L_0883B8A4;
    case 690u: goto L_0883B8C0;
    case 691u: goto L_0883B8CC;
    case 692u: goto L_0883B8D4;
    case 693u: goto L_0883B8DC;
    case 694u: goto L_0883B8E8;
    case 695u: goto L_0883B8F4;
    case 696u: goto L_0883B8FC;
    case 697u: goto L_0883B904;
    case 698u: goto L_0883B914;
    case 699u: goto L_0883B92C;
    case 700u: goto L_0883B934;
    case 701u: goto L_0883B940;
    case 702u: goto L_0883B948;
    case 703u: goto L_0883B954;
    case 704u: goto L_0883B964;
    case 705u: goto L_0883B96C;
    case 706u: goto L_0883B984;
    case 707u: goto L_0883B98C;
    case 708u: goto L_0883B9A8;
    case 709u: goto L_0883B9B8;
    case 710u: goto L_0883B9C0;
    case 711u: goto L_0883B9C8;
    case 712u: goto L_0883B9D8;
    case 713u: goto L_0883B9DC;
    case 714u: goto L_0883B9E8;
    case 715u: goto L_0883B9EC;
    case 716u: goto L_0883B9F4;
    case 717u: goto L_0883BA08;
    case 718u: goto L_0883BA18;
    case 719u: goto L_0883BA28;
    case 720u: goto L_0883BA30;
    case 721u: goto L_0883BA3C;
    case 722u: goto L_0883BA40;
    case 723u: goto L_0883BA50;
    case 724u: goto L_0883BA68;
    case 725u: goto L_0883BA70;
    case 726u: goto L_0883BA78;
    case 727u: goto L_0883BA80;
    case 728u: goto L_0883BAF8;
    case 729u: goto L_0883BAFC;
    case 730u: goto L_0883BB2C;
    case 731u: goto L_0883BB38;
    case 732u: goto L_0883BB50;
    case 733u: goto L_0883BB64;
    case 734u: goto L_0883BB74;
    case 735u: goto L_0883BB7C;
    case 736u: goto L_0883BB88;
    case 737u: goto L_0883BC0C;
    case 738u: goto L_0883BC1C;
    case 739u: goto L_0883BC3C;
    case 740u: goto L_0883BC44;
    case 741u: goto L_0883BC50;
    case 742u: goto L_0883BC68;
    case 743u: goto L_0883BC74;
    case 744u: goto L_0883BC80;
    case 745u: goto L_0883BC8C;
    case 746u: goto L_0883BC94;
    case 747u: goto L_0883BC9C;
    case 748u: goto L_0883BCB4;
    case 749u: goto L_0883BCCC;
    case 750u: goto L_0883BCDC;
    case 751u: goto L_0883BD04;
    case 752u: goto L_0883BD24;
    case 753u: goto L_0883BD38;
    case 754u: goto L_0883BD40;
    case 755u: goto L_0883BD48;
    case 756u: goto L_0883BD54;
    case 757u: goto L_0883BD70;
    case 758u: goto L_0883BD84;
    case 759u: goto L_0883BDA0;
    case 760u: goto L_0883BDA4;
    case 761u: goto L_0883BDAC;
    case 762u: goto L_0883BDB8;
    case 763u: goto L_0883BDD0;
    case 764u: goto L_0883BDD4;
    case 765u: goto L_0883BE04;
    case 766u: goto L_0883BE0C;
    case 767u: goto L_0883BE18;
    case 768u: goto L_0883BE3C;
    case 769u: goto L_0883BE44;
    case 770u: goto L_0883BED8;
    case 771u: goto L_0883BEF0;
    case 772u: goto L_0883BF08;
    case 773u: goto L_0883BF14;
    case 774u: goto L_0883BF20;
    case 775u: goto L_0883BF30;
    case 776u: goto L_0883BF44;
    case 777u: goto L_0883BF58;
    case 778u: goto L_0883BF64;
    case 779u: goto L_0883BF78;
    case 780u: goto L_0883BF90;
    case 781u: goto L_0883BFA4;
    case 782u: goto L_0883BFB8;
    case 783u: goto L_0883BFC0;
    case 784u: goto L_0883BFCC;
    case 785u: goto L_0883BFE0;
    case 786u: goto L_0883BFE8;
    case 787u: goto L_0883BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08838004:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20644));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08838028u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 499u, 0x0886ABBCu>(ctx, &aot_mem) && ctx.pc == 0x08838028u) goto L_08838028;
    return;
L_08838028:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883803C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088380B8;
      }
      goto L_08838058;
    }
L_08838058:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20644));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x0883806Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 580u, 0x08837FCCu>(ctx, &aot_mem) && ctx.pc == 0x0883806Cu) goto L_0883806C;
    return;
L_0883806C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08838078u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 500u, 0x0886ABC8u>(ctx, &aot_mem) && ctx.pc == 0x08838078u) goto L_08838078;
    return;
L_08838078:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_088380A8;
      }
      goto L_08838080;
    }
L_08838080:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9620));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-20628), 0u);
      if (branch_taken) {
          goto L_088380A4;
      }
      goto L_08838098;
    }
L_08838098:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9668));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_088380A4;
L_088380A4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_088380A8;
L_088380A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088380B8;
      }
      goto L_088380B0;
    }
L_088380B0:
    ctx.gpr[31] = (0x088380B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088380B8u) goto L_088380B8;
    return;
L_088380B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088380CC:
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
L_088380F8:
    ctx.gpr[5] = (0u | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838104:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08838128u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08838D5C;
L_08838128:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088381AC;
      }
      goto L_08838138;
    }
L_08838138:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2824));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[31] = (0x08838154u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 669u, 0x088BB274u>(ctx, &aot_mem) && ctx.pc == 0x08838154u) goto L_08838154;
    return;
L_08838154:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838178;
      }
      goto L_0883815C;
    }
L_0883815C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08838168u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10088));
    goto L_088380CC;
L_08838168:
    ctx.gpr[31] = (0x08838170u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088383B8;
L_08838170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088381AC;
      }
      goto L_08838178;
    }
L_08838178:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08838184u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10028));
    goto L_088380CC;
L_08838184:
    ctx.gpr[31] = (0x0883818Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08838234;
L_0883818C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08838198u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0883823C;
L_08838198:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088381AC;
      }
      goto L_088381A0;
    }
L_088381A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088381ACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 670u, 0x088BB280u>(ctx, &aot_mem) && ctx.pc == 0x088381ACu) goto L_088381AC;
    return;
L_088381AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088381E0;
      }
      goto L_088381B8;
    }
L_088381B8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088381C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9968));
    goto L_088380CC;
L_088381C4:
    ctx.gpr[31] = (0x088381CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08838778;
L_088381CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088381DC;
      }
      goto L_088381D4;
    }
L_088381D4:
    ctx.gpr[31] = (0x088381DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0883823C;
L_088381DC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    goto L_088381E0;
L_088381E0:
    ctx.gpr[31] = (0x088381E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08838234;
L_088381E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838208;
      }
      goto L_088381F0;
    }
L_088381F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08838208;
      }
      goto L_08838200;
    }
L_08838200:
    ctx.gpr[31] = (0x08838208u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08838AA4;
L_08838208:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_0883822C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838234:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883823C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[17]);
    ctx.gpr[6] = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088382B4;
      }
      goto L_08838288;
    }
L_08838288:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08838298u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08838298u) goto L_08838298;
    return;
L_08838298:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08838288;
      }
      goto L_088382B0;
    }
L_088382B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_088382B4;
L_088382B4:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08838304;
      }
      goto L_088382C4;
    }
L_088382C4:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21008));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(5696));
    goto L_088382D4;
L_088382D4:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
        goto L_088382FC;
    }
    goto L_088382DC;
L_088382DC:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
        goto L_088382FC;
    }
    goto L_088382E4;
L_088382E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088382F8;
      }
      goto L_088382F0;
    }
L_088382F0:
    ctx.gpr[31] = (0x088382F8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088382F8u) goto L_088382F8;
    return;
L_088382F8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    goto L_088382FC;
L_088382FC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088382D4;
      }
      goto L_08838304;
    }
L_08838304:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    ctx.gpr[7] = (ctx.gpr[7] >> 29u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08838358;
      }
      goto L_08838334;
    }
L_08838334:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08838334;
      }
      goto L_08838354;
    }
L_08838354:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_08838358;
L_08838358:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08838374;
      }
      goto L_08838368;
    }
L_08838368:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_0883836C;
L_0883836C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0883836C;
      }
      goto L_08838374;
    }
L_08838374:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088383B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088383F4;
      }
      goto L_088383D4;
    }
L_088383D4:
    ctx.gpr[31] = (0x088383DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0883823C;
L_088383DC:
    ctx.gpr[31] = (0x088383E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08838D5C;
L_088383E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088383FC;
      }
      goto L_088383EC;
    }
L_088383EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883844C;
      }
      goto L_088383F4;
    }
L_088383F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883844C;
      }
      goto L_088383FC;
    }
L_088383FC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08838408u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9908));
    goto L_088380CC;
L_08838408:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[7] = (2225u << 16u);
    ctx.gpr[8] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9864));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9844));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9836));
    ctx.gpr[31] = (0x08838434u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-9824));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08838434u) goto L_08838434;
    return;
L_08838434:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08838444u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08838460;
L_08838444:
    ctx.gpr[31] = (0x0883844Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08838E00;
L_0883844C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838460:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-752));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[6]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(708), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08838548;
      }
      goto L_088384AC;
    }
L_088384AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[7]);
    ctx.gpr[31] = (0x088384B8u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.pc = 0x08B0BCF4u;
    return;
L_088384B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08838540;
      }
      goto L_088384C0;
    }
L_088384C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 352u);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[31] = (0x088384F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x088384F0u) goto L_088384F0;
    return;
L_088384F0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9808));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9800));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9792));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(648));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(5696));
      if (branch_taken) {
          goto L_08838550;
      }
      goto L_08838540;
    }
L_08838540:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08838748;
      }
      goto L_08838548;
    }
L_08838548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838748;
      }
      goto L_08838550;
    }
L_08838550:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    goto L_08838554;
L_08838554:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[31] = (0x08838560u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BD04u;
    return;
L_08838560:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
      if (branch_taken) {
          goto L_088386C4;
      }
      goto L_0883856C;
    }
L_0883856C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[5] = (0u | 4096u);
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088386BC;
      }
      goto L_08838580;
    }
L_08838580:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2868)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2864)));
    ctx.gpr[8] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[8] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088386BC;
      }
      goto L_088385B4;
    }
L_088385B4:
    ctx.gpr[31] = (0x088385BCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088385BCu) goto L_088385BC;
    return;
L_088385BC:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[31] = (0x088385CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(380));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 379u, 0x08AED520u>(ctx, &aot_mem) && ctx.pc == 0x088385CCu) goto L_088385CC;
    return;
L_088385CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088386BC;
      }
      goto L_088385D4;
    }
L_088385D4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(708), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088386BC;
      }
      goto L_088385E0;
    }
L_088385E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088385F4u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x088385F4u) goto L_088385F4;
    return;
L_088385F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[31] = (0x08838600u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088380CC;
L_08838600:
    ctx.gpr[31] = (0x08838608u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08838608u) goto L_08838608;
    return;
L_08838608:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08838618u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x08838618u) goto L_08838618;
    return;
L_08838618:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08838634u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08838634u) goto L_08838634;
    return;
L_08838634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08838648;
      }
      goto L_08838640;
    }
L_08838640:
    ctx.gpr[31] = (0x08838648u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08838648u) goto L_08838648;
    return;
L_08838648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08838688;
      }
      goto L_08838658;
    }
L_08838658:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
      if (branch_taken) {
          goto L_0883867C;
      }
      goto L_08838660;
    }
L_08838660:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[31] = (0x0883866Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x0883866Cu) goto L_0883866C;
    return;
L_0883866C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    goto L_0883867C;
L_0883867C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088386AC;
      }
      goto L_08838688;
    }
L_08838688:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(676), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(676));
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x088386A8u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 582u, 0x08AFA864u>(ctx, &aot_mem) && ctx.pc == 0x088386A8u) goto L_088386A8;
    return;
L_088386A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    goto L_088386AC;
L_088386AC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088386BC;
      }
      goto L_088386B4;
    }
L_088386B4:
    ctx.gpr[31] = (0x088386BCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088386BCu) goto L_088386BC;
    return;
L_088386BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
      if (branch_taken) {
          goto L_08838554;
      }
      goto L_088386C4;
    }
L_088386C4:
    ctx.gpr[31] = (0x088386CCu);
    // nop
    ctx.pc = 0x08B0BD14u;
    return;
L_088386CC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838744;
      }
      goto L_088386D4;
    }
L_088386D4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838744;
      }
      goto L_088386DC;
    }
L_088386DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(668));
      if (branch_taken) {
          goto L_08838724;
      }
      goto L_088386F8;
    }
L_088386F8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0883871C;
      }
      goto L_08838704;
    }
L_08838704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_0883871C;
L_0883871C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08838744;
      }
      goto L_08838724;
    }
L_08838724:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(677), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(677));
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08838744u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 549u, 0x08AFA65Cu>(ctx, &aot_mem) && ctx.pc == 0x08838744u) goto L_08838744;
    return;
L_08838744:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    goto L_08838748;
L_08838748:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(716)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838778:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088387AC;
      }
      goto L_08838794;
    }
L_08838794:
    ctx.gpr[31] = (0x0883879Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08838D5C;
L_0883879C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088387B4;
      }
      goto L_088387A4;
    }
L_088387A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088387F0;
      }
      goto L_088387AC;
    }
L_088387AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088387F0;
      }
      goto L_088387B4;
    }
L_088387B4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[7] = (2225u << 16u);
    ctx.gpr[8] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9864));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9844));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9836));
    ctx.gpr[31] = (0x088387E0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-9824));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x088387E0u) goto L_088387E0;
    return;
L_088387E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088387F0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08838460;
L_088387F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838804:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08838818u);
    // nop
    goto L_08838850;
L_08838818:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08838828u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9864));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08838828u) goto L_08838828;
    return;
L_08838828:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[31] = (0x08838834u);
    ctx.gpr[5] = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x08838834u) goto L_08838834;
    return;
L_08838834:
    ctx.gpr[31] = (0x0883883Cu);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x0883883Cu) goto L_0883883C;
    return;
L_0883883C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-3));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838850:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883887C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0883889Cu);
    // nop
    goto L_08838850;
L_0883889C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088388ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9864));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088388ACu) goto L_088388AC;
    return;
L_088388AC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[18] = (0u | 47u);
    ctx.gpr[31] = (0x088388BCu);
    ctx.gpr[5] = (0u | 47u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x088388BCu) goto L_088388BC;
    return;
L_088388BC:
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x088388C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x088388C8u) goto L_088388C8;
    return;
L_088388C8:
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 64u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 64 ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2952));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_088388E4;
    }
    goto L_088388E4;
L_088388E4:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[9] = (0u | 92u);
    ctx.gpr[10] = (0u | 126u);
    ctx.gpr[11] = (0u | 32u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    goto L_0883890C;
L_0883890C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0883899C;
      }
      goto L_08838914;
    }
L_08838914:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 63 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883899C;
      }
      goto L_08838920;
    }
L_08838920:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883899C;
      }
      goto L_0883892C;
    }
L_0883892C:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883894C;
      }
      goto L_0883893C;
    }
L_0883893C:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0883894C;
      }
      goto L_08838944;
    }
L_08838944:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08838950;
      }
      goto L_0883894C;
    }
L_0883894C:
    ctx.gpr[3] = (0u | 45u);
    goto L_08838950;
L_08838950:
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < 123 ? 1u : 0u);
      if (branch_taken) {
          goto L_08838974;
      }
      goto L_0883895C;
    }
L_0883895C:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838974;
      }
      goto L_08838964;
    }
L_08838964:
    ctx.gpr[12] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_08838974;
L_08838974:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08838994;
      }
      goto L_0883897C;
    }
L_0883897C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838994;
      }
      goto L_08838984;
    }
L_08838984:
    ctx.gpr[12] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_08838994;
L_08838994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0883890C;
      }
      goto L_0883899C;
    }
L_0883899C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-2952)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838A08;
      }
      goto L_088389B4;
    }
L_088389B4:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088389F0;
      }
      goto L_088389C4;
    }
L_088389C4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x088389D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088389D0u) goto L_088389D0;
    return;
L_088389D0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088389E8;
      }
      goto L_088389DC;
    }
L_088389DC:
    ctx.gpr[31] = (0x088389E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088389E4u) goto L_088389E4;
    return;
L_088389E4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_088389E8;
L_088389E8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088389F0;
L_088389F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088389FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9768));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088389FCu) goto L_088389FC;
    return;
L_088389FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08838A08u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x08838A08u) goto L_08838A08;
    return;
L_08838A08:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08838A28:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838A98;
      }
      goto L_08838A54;
    }
L_08838A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08838A58;
L_08838A58:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838A90;
      }
      goto L_08838A78;
    }
L_08838A78:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08838A58;
      }
      goto L_08838A88;
    }
L_08838A88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838A98;
      }
      goto L_08838A90;
    }
L_08838A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08838A9C;
      }
      goto L_08838A98;
    }
L_08838A98:
    ctx.gpr[2] = (0u | 0u);
    goto L_08838A9C;
L_08838A9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08838AE0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08838B48;
L_08838AE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838AEC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838AF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838B34;
      }
      goto L_08838B10;
    }
L_08838B10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838B3C;
      }
      goto L_08838B2C;
    }
L_08838B2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08838B40;
      }
      goto L_08838B34;
    }
L_08838B34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08838B40;
      }
      goto L_08838B3C;
    }
L_08838B3C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08838B40;
L_08838B40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838B48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838C04;
      }
      goto L_08838B80;
    }
L_08838B80:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    goto L_08838B88;
L_08838B88:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
        goto L_08838BA4;
    }
    goto L_08838B9C;
L_08838B9C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    goto L_08838BA4;
L_08838BA4:
    ctx.gpr[10] = (ctx.gpr[8] << 2u);
    ctx.gpr[10] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838BE4;
      }
      goto L_08838BCC;
    }
L_08838BCC:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[9] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838B88;
      }
      goto L_08838BDC;
    }
L_08838BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838C04;
      }
      goto L_08838BE4;
    }
L_08838BE4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[31] = (0x08838BF0u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9760));
    goto L_08838850;
L_08838BF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08838BFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088380CC;
L_08838BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838C0C;
      }
      goto L_08838C04;
    }
L_08838C04:
    ctx.gpr[31] = (0x08838C0Cu);
    // nop
    goto L_08838DB8;
L_08838C0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838C1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838CD4;
      }
      goto L_08838C54;
    }
L_08838C54:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    goto L_08838C5C;
L_08838C5C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08838C70;
      }
      goto L_08838C64;
    }
L_08838C64:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08838C70;
L_08838C70:
    ctx.gpr[10] = (ctx.gpr[8] << 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838CB4;
      }
      goto L_08838C9C;
    }
L_08838C9C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[9] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838C5C;
      }
      goto L_08838CAC;
    }
L_08838CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838CD4;
      }
      goto L_08838CB4;
    }
L_08838CB4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[31] = (0x08838CC0u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9760));
    goto L_08838850;
L_08838CC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08838CCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088380CC;
L_08838CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08838CDC;
      }
      goto L_08838CD4;
    }
L_08838CD4:
    ctx.gpr[31] = (0x08838CDCu);
    // nop
    goto L_08838DB8;
L_08838CDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838CEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9588));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08838D44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08838D5C;
L_08838D44:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838D5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (578u << 16u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10096));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08838D88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22563));
    ctx.pc = 0x08B0BCACu;
    return;
L_08838D88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
      if (branch_taken) {
          goto L_08838D98;
      }
      goto L_08838D90;
    }
L_08838D90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08838DAC;
      }
      goto L_08838D98;
    }
L_08838D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08838DAC;
L_08838DAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838DB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08838DCCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08838234;
L_08838DCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08838DD8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_0883823C;
L_08838DD8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838DF0;
      }
      goto L_08838DE0;
    }
L_08838DE0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08838DF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 670u, 0x088BB280u>(ctx, &aot_mem) && ctx.pc == 0x08838DF0u) goto L_08838DF0;
    return;
L_08838DF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08838E00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 12u);
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[22]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08838E60u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 665u, 0x08AFACC4u>(ctx, &aot_mem) && ctx.pc == 0x08838E60u) goto L_08838E60;
    return;
L_08838E60:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[22]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08838FE4;
      }
      goto L_08838E84;
    }
L_08838E84:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_08838E90;
L_08838E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_08838ECC;
      }
      goto L_08838E9C;
    }
L_08838E9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08838EB8;
      }
      goto L_08838EA4;
    }
L_08838EA4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[4]);
    goto L_08838EB8;
L_08838EB8:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[22]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08838FD4;
      }
      goto L_08838ECC;
    }
L_08838ECC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.gpr[30] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[30] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08838F08;
      }
      goto L_08838EFC;
    }
L_08838EFC:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[30] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08838F10;
      }
      goto L_08838F08;
    }
L_08838F08:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[30] + ctx.gpr[22]);
    goto L_08838F10;
L_08838F10:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08838F50;
      }
      goto L_08838F18;
    }
L_08838F18:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08838F2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08838F2Cu) goto L_08838F2C;
    return;
L_08838F2C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08838F50;
      }
      goto L_08838F3C;
    }
L_08838F3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x08838F48u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08838F48u) goto L_08838F48;
    return;
L_08838F48:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08838F50;
L_08838F50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08838F64;
      }
      goto L_08838F5C;
    }
L_08838F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08838F80;
      }
      goto L_08838F64;
    }
L_08838F64:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08838F78u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08838F78u) goto L_08838F78;
    return;
L_08838F78:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08838F80;
L_08838F80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08838F98;
      }
      goto L_08838F88;
    }
L_08838F88:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08838F88;
      }
      goto L_08838F98;
    }
L_08838F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08838FAC;
      }
      goto L_08838FA4;
    }
L_08838FA4:
    ctx.gpr[31] = (0x08838FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08838FACu) goto L_08838FAC;
    return;
L_08838FAC:
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[22]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    goto L_08838FD4;
L_08838FD4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08838E90;
      }
      goto L_08838FE4;
    }
L_08838FE4:
    ctx.gpr[6] = (2180u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08838FF8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28600));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 707u, 0x08AFAFC4u>(ctx, &aot_mem) && ctx.pc == 0x08838FF8u) goto L_08838FF8;
    return;
L_08838FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
      if (branch_taken) {
          goto L_08839018;
      }
      goto L_08839014;
    }
L_08839014:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_08839018;
L_08839018:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839048:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0883905Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0883905Cu) goto L_0883905C;
    return;
L_0883905C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08839070u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08839070u) goto L_08839070;
    return;
L_08839070:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
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
L_08839094:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2836)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2832)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[11] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(2840), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(2848), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(2844), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(2852), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(2856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883910C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08839180;
      }
      goto L_08839120;
    }
L_08839120:
    ctx.gpr[31] = (0x08839128u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 606u, 0x088735BCu>(ctx, &aot_mem) && ctx.pc == 0x08839128u) goto L_08839128;
    return;
L_08839128:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839140;
      }
      goto L_08839130;
    }
L_08839130:
    ctx.gpr[31] = (0x08839138u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 606u, 0x088735BCu>(ctx, &aot_mem) && ctx.pc == 0x08839138u) goto L_08839138;
    return;
L_08839138:
    ctx.gpr[31] = (0x08839140u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 155u, 0x08A5D294u>(ctx, &aot_mem) && ctx.pc == 0x08839140u) goto L_08839140;
    return;
L_08839140:
    ctx.gpr[31] = (0x08839148u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 631u, 0x0887387Cu>(ctx, &aot_mem) && ctx.pc == 0x08839148u) goto L_08839148;
    return;
L_08839148:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883915C;
      }
      goto L_08839154;
    }
L_08839154:
    ctx.gpr[31] = (0x0883915Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 379u, 0x0894E24Cu>(ctx, &aot_mem) && ctx.pc == 0x0883915Cu) goto L_0883915C;
    return;
L_0883915C:
    ctx.gpr[31] = (0x08839164u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 642u, 0x08873940u>(ctx, &aot_mem) && ctx.pc == 0x08839164u) goto L_08839164;
    return;
L_08839164:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839178;
      }
      goto L_08839170;
    }
L_08839170:
    ctx.gpr[31] = (0x08839178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 379u, 0x0894E24Cu>(ctx, &aot_mem) && ctx.pc == 0x08839178u) goto L_08839178;
    return;
L_08839178:
    ctx.gpr[31] = (0x08839180u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 588u, 0x088734A8u>(ctx, &aot_mem) && ctx.pc == 0x08839180u) goto L_08839180;
    return;
L_08839180:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839190:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088391C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 577u, 0x0887332Cu>(ctx, &aot_mem) && ctx.pc == 0x088391C8u) goto L_088391C8;
    return;
L_088391C8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839270;
      }
      goto L_088391D4;
    }
L_088391D4:
    ctx.gpr[31] = (0x088391DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 224u, 0x08A5D7E4u>(ctx, &aot_mem) && ctx.pc == 0x088391DCu) goto L_088391DC;
    return;
L_088391DC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088391E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 592u, 0x088734ECu>(ctx, &aot_mem) && ctx.pc == 0x088391E8u) goto L_088391E8;
    return;
L_088391E8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088391FCu);
    ctx.gpr[7] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 341u, 0x0894DF30u>(ctx, &aot_mem) && ctx.pc == 0x088391FCu) goto L_088391FC;
    return;
L_088391FC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08839208u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 594u, 0x08873514u>(ctx, &aot_mem) && ctx.pc == 0x08839208u) goto L_08839208;
    return;
L_08839208:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839230;
      }
      goto L_08839210;
    }
L_08839210:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08839224u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 341u, 0x0894DF30u>(ctx, &aot_mem) && ctx.pc == 0x08839224u) goto L_08839224;
    return;
L_08839224:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08839230u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 595u, 0x08873520u>(ctx, &aot_mem) && ctx.pc == 0x08839230u) goto L_08839230;
    return;
L_08839230:
    ctx.gpr[31] = (0x08839238u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 606u, 0x088735BCu>(ctx, &aot_mem) && ctx.pc == 0x08839238u) goto L_08839238;
    return;
L_08839238:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839270;
      }
      goto L_08839240;
    }
L_08839240:
    ctx.gpr[31] = (0x08839248u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 631u, 0x0887387Cu>(ctx, &aot_mem) && ctx.pc == 0x08839248u) goto L_08839248;
    return;
L_08839248:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839270;
      }
      goto L_08839250;
    }
L_08839250:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839268;
      }
      goto L_08839258;
    }
L_08839258:
    ctx.gpr[31] = (0x08839260u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 642u, 0x08873940u>(ctx, &aot_mem) && ctx.pc == 0x08839260u) goto L_08839260;
    return;
L_08839260:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839270;
      }
      goto L_08839268;
    }
L_08839268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0883927C;
      }
      goto L_08839270;
    }
L_08839270:
    ctx.gpr[31] = (0x08839278u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0883910C;
L_08839278:
    ctx.gpr[2] = (0u | 0u);
    goto L_0883927C;
L_0883927C:
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
L_08839298:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08839540;
      }
      goto L_088392D0;
    }
L_088392D0:
    ctx.gpr[31] = (0x088392D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 620u, 0x088B7C98u>(ctx, &aot_mem) && ctx.pc == 0x088392D8u) goto L_088392D8;
    return;
L_088392D8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x088392E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 619u, 0x088B7C68u>(ctx, &aot_mem) && ctx.pc == 0x088392E4u) goto L_088392E4;
    return;
L_088392E4:
    ctx.gpr[31] = (0x088392ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 631u, 0x0887387Cu>(ctx, &aot_mem) && ctx.pc == 0x088392ECu) goto L_088392EC;
    return;
L_088392EC:
    ctx.gpr[31] = (0x088392F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 386u, 0x0894E2B8u>(ctx, &aot_mem) && ctx.pc == 0x088392F4u) goto L_088392F4;
    return;
L_088392F4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[31] = (0x08839304u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 631u, 0x0887387Cu>(ctx, &aot_mem) && ctx.pc == 0x08839304u) goto L_08839304;
    return;
L_08839304:
    ctx.gpr[31] = (0x0883930Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 387u, 0x0894E2C8u>(ctx, &aot_mem) && ctx.pc == 0x0883930Cu) goto L_0883930C;
    return;
L_0883930C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0883936C;
      }
      goto L_08839314;
    }
L_08839314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839338;
      }
      goto L_08839324;
    }
L_08839324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08839360;
      }
      goto L_08839338;
    }
L_08839338:
    ctx.gpr[31] = (0x08839340u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 631u, 0x0887387Cu>(ctx, &aot_mem) && ctx.pc == 0x08839340u) goto L_08839340;
    return;
L_08839340:
    ctx.gpr[31] = (0x08839348u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 386u, 0x0894E2B8u>(ctx, &aot_mem) && ctx.pc == 0x08839348u) goto L_08839348;
    return;
L_08839348:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.gpr[31] = (0x08839354u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 631u, 0x0887387Cu>(ctx, &aot_mem) && ctx.pc == 0x08839354u) goto L_08839354;
    return;
L_08839354:
    ctx.gpr[31] = (0x0883935Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 387u, 0x0894E2C8u>(ctx, &aot_mem) && ctx.pc == 0x0883935Cu) goto L_0883935C;
    return;
L_0883935C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_08839360;
L_08839360:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_0883936C;
L_0883936C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08839388;
      }
      goto L_08839378;
    }
L_08839378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088394A0;
      }
      goto L_08839388;
    }
L_08839388:
    ctx.gpr[31] = (0x08839390u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 631u, 0x0887387Cu>(ctx, &aot_mem) && ctx.pc == 0x08839390u) goto L_08839390;
    return;
L_08839390:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088393A4;
      }
      goto L_0883939C;
    }
L_0883939C:
    ctx.gpr[31] = (0x088393A4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 379u, 0x0894E24Cu>(ctx, &aot_mem) && ctx.pc == 0x088393A4u) goto L_088393A4;
    return;
L_088393A4:
    ctx.gpr[31] = (0x088393ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 642u, 0x08873940u>(ctx, &aot_mem) && ctx.pc == 0x088393ACu) goto L_088393AC;
    return;
L_088393AC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088393C0;
      }
      goto L_088393B8;
    }
L_088393B8:
    ctx.gpr[31] = (0x088393C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 379u, 0x0894E24Cu>(ctx, &aot_mem) && ctx.pc == 0x088393C0u) goto L_088393C0;
    return;
L_088393C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088393D4u);
    ctx.gpr[7] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 341u, 0x0894DF30u>(ctx, &aot_mem) && ctx.pc == 0x088393D4u) goto L_088393D4;
    return;
L_088393D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088393ECu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 341u, 0x0894DF30u>(ctx, &aot_mem) && ctx.pc == 0x088393ECu) goto L_088393EC;
    return;
L_088393EC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0883941C;
      }
      goto L_088393F4;
    }
L_088393F4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883941C;
      }
      goto L_088393FC;
    }
L_088393FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08839408u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 594u, 0x08873514u>(ctx, &aot_mem) && ctx.pc == 0x08839408u) goto L_08839408;
    return;
L_08839408:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08839414u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 595u, 0x08873520u>(ctx, &aot_mem) && ctx.pc == 0x08839414u) goto L_08839414;
    return;
L_08839414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088394A0;
      }
      goto L_0883941C;
    }
L_0883941C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883942C;
      }
      goto L_08839424;
    }
L_08839424:
    ctx.gpr[31] = (0x0883942Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 379u, 0x0894E24Cu>(ctx, &aot_mem) && ctx.pc == 0x0883942Cu) goto L_0883942C;
    return;
L_0883942C:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08839440;
    }
    goto L_08839434;
L_08839434:
    ctx.gpr[31] = (0x0883943Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 379u, 0x0894E24Cu>(ctx, &aot_mem) && ctx.pc == 0x0883943Cu) goto L_0883943C;
    return;
L_0883943C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08839440;
L_08839440:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0883946Cu);
    ctx.gpr[7] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 341u, 0x0894DF30u>(ctx, &aot_mem) && ctx.pc == 0x0883946Cu) goto L_0883946C;
    return;
L_0883946C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08839484u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 341u, 0x0894DF30u>(ctx, &aot_mem) && ctx.pc == 0x08839484u) goto L_08839484;
    return;
L_08839484:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08839494u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 594u, 0x08873514u>(ctx, &aot_mem) && ctx.pc == 0x08839494u) goto L_08839494;
    return;
L_08839494:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088394A0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 595u, 0x08873520u>(ctx, &aot_mem) && ctx.pc == 0x088394A0u) goto L_088394A0;
    return;
L_088394A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088394C0;
      }
      goto L_088394B0;
    }
L_088394B0:
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883951C;
      }
      goto L_088394C0;
    }
L_088394C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
        goto L_08839500;
    }
    goto L_088394D4;
L_088394D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883951C;
      }
      goto L_08839500;
    }
L_08839500:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0883951C;
L_0883951C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08839528u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 581u, 0x0887340Cu>(ctx, &aot_mem) && ctx.pc == 0x08839528u) goto L_08839528;
    return;
L_08839528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1896));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08839540;
L_08839540:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
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
L_08839568:
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
L_08839594:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16436)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08839608;
      }
      goto L_088395BC;
    }
L_088395BC:
    ctx.gpr[31] = (0x088395C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 687u, 0x08AF720Cu>(ctx, &aot_mem) && ctx.pc == 0x088395C4u) goto L_088395C4;
    return;
L_088395C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088395DC;
      }
      goto L_088395CC;
    }
L_088395CC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088395DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9736));
    goto L_08839568;
L_088395DC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088395E8u);
    ctx.gpr[5] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 710u, 0x08AF737Cu>(ctx, &aot_mem) && ctx.pc == 0x088395E8u) goto L_088395E8;
    return;
L_088395E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839600;
      }
      goto L_088395F0;
    }
L_088395F0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08839600u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9716));
    goto L_08839568;
L_08839600:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(16436), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08839608;
L_08839608:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08839624u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9692));
    ctx.pc = 0x08B0BAD4u;
    return;
L_08839624:
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08839644u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9676));
    ctx.pc = 0x08B0BAD4u;
    return;
L_08839644:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16432), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3184));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3188));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16416), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3192));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16420), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3196));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16424), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3200));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16428), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_088396A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3204), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3208), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16432)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088396D0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BB7Cu;
    return;
L_088396D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16416)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16420)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16424)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0883971Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BB24u;
    return;
L_0883971C:
    ctx.gpr[31] = (0x08839724u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16432)));
    ctx.pc = 0x08B0BB24u;
    return;
L_08839724:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839738:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08839754u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08839858;
L_08839754:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0883977C;
      }
      goto L_0883975C;
    }
L_0883975C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 13u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08839780;
      }
      goto L_0883977C;
    }
L_0883977C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08839780;
L_08839780:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839794:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_088397AC;
      }
      goto L_088397A4;
    }
L_088397A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2872)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4180));
    goto L_088397AC;
L_088397AC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(2872), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16416)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16400), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088397C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16420)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16400)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088397E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08839808u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB6Cu;
    return;
L_08839808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08839824u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BB54u;
    return;
L_08839824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16416)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16428)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.hi);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839858:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16428)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16424)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16424)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883987C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883989C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16432)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088398B0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BB54u;
    return;
L_088398B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088398BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16432)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088398ECu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB6Cu;
    return;
L_088398EC:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[16] = (2230u << 16u);
    goto L_088398F4;
L_088398F4:
    ctx.gpr[31] = (0x088398FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08839890;
L_088398FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839990;
      }
      goto L_08839904;
    }
L_08839904:
    ctx.gpr[31] = (0x0883990Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08839870;
L_0883990C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08839974;
      }
      goto L_08839914;
    }
L_08839914:
    ctx.gpr[31] = (0x0883991Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08839A40;
L_0883991C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839938;
      }
      goto L_08839928;
    }
L_08839928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3204)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883996C;
      }
      goto L_08839938;
    }
L_08839938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08839948u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB6Cu;
    return;
L_08839948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08839964u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BB54u;
    return;
L_08839964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3204)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0883996C;
L_0883996C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3204), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08839988;
      }
      goto L_08839974;
    }
L_08839974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3208)));
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08839988u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3208), ctx.gpr[5]);
    ctx.pc = 0x08B0BBF4u;
    return;
L_08839988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088398F4;
      }
      goto L_08839990;
    }
L_08839990:
    ctx.gpr[31] = (0x08839998u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08839870;
L_08839998:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088399E4;
      }
      goto L_088399A0;
    }
L_088399A0:
    ctx.gpr[31] = (0x088399A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08839A40;
L_088399A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088399B8u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB6Cu;
    return;
L_088399B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16424)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088399D4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BB54u;
    return;
L_088399D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3204)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3204), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08839990;
      }
      goto L_088399E4;
    }
L_088399E4:
    ctx.gpr[5] = (0u | 32768u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088399F8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 716u, 0x08AF73ECu>(ctx, &aot_mem) && ctx.pc == 0x088399F8u) goto L_088399F8;
    return;
L_088399F8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3204)));
    ctx.gpr[31] = (0x08839A08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9656));
    goto L_08839568;
L_08839A08:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3208)));
    ctx.gpr[31] = (0x08839A18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9636));
    goto L_08839568;
L_08839A18:
    ctx.gpr[31] = (0x08839A20u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BBD4u;
    return;
L_08839A20:
    ctx.gpr[2] = (0u | 0u);
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
L_08839A40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16420)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 13u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[5] = (0u | 32768u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08839A78u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 716u, 0x08AF73ECu>(ctx, &aot_mem) && ctx.pc == 0x08839A78u) goto L_08839A78;
    return;
L_08839A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16420)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16428)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.hi);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839AAC:
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
L_08839AD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08839B08u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08839B08u) goto L_08839B08;
    return;
L_08839B08:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08839B18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9616));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08839B18u) goto L_08839B18;
    return;
L_08839B18:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08839B88;
      }
      goto L_08839B20;
    }
L_08839B20:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28104));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_08839B88;
      }
      goto L_08839B38;
    }
L_08839B38:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28172));
    ctx.gpr[20] = (2229u << 16u);
    goto L_08839B40;
L_08839B40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08839B58;
      }
      goto L_08839B50;
    }
L_08839B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08839B58;
L_08839B58:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08839B64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08839B64u) goto L_08839B64;
    return;
L_08839B64:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08839B74;
      }
      goto L_08839B6C;
    }
L_08839B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08839B88;
      }
      goto L_08839B74;
    }
L_08839B74:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08839B40;
      }
      goto L_08839B88;
    }
L_08839B88:
    ctx.gpr[31] = (0x08839B90u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08839B90u) goto L_08839B90;
    return;
L_08839B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08839C3C;
      }
      goto L_08839BA4;
    }
L_08839BA4:
    ctx.gpr[23] = (0u | 2u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[17] = (2229u << 16u);
    goto L_08839BB0;
L_08839BB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08839BC4;
      }
      goto L_08839BB8;
    }
L_08839BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08839BC4;
L_08839BC4:
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C28;
      }
      goto L_08839BD0;
    }
L_08839BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08839BE8u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08839BE8u) goto L_08839BE8;
    return;
L_08839BE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839C28;
      }
      goto L_08839BF0;
    }
L_08839BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08839C08u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08839C08u) goto L_08839C08;
    return;
L_08839C08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08839C28;
      }
      goto L_08839C14;
    }
L_08839C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08839C28;
      }
      goto L_08839C20;
    }
L_08839C20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08839C40;
      }
      goto L_08839C28;
    }
L_08839C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08839BB0;
      }
      goto L_08839C3C;
    }
L_08839C3C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08839C40;
L_08839C40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839C6C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839C84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08839CBC;
      }
      goto L_08839CA0;
    }
L_08839CA0:
    ctx.gpr[31] = (0x08839CA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0883A25C;
L_08839CA8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839CBC;
      }
      goto L_08839CB4;
    }
L_08839CB4:
    ctx.gpr[31] = (0x08839CBCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08839CBCu) goto L_08839CBC;
    return;
L_08839CBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839CD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08839D10;
      }
      goto L_08839D08;
    }
L_08839D08:
    ctx.gpr[31] = (0x08839D10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0883A25C;
L_08839D10:
    ctx.gpr[31] = (0x08839D18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x08839D18u) goto L_08839D18;
    return;
L_08839D18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[7] = (2187u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 68u);
    ctx.gpr[31] = (0x08839D34u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(15864));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08839D34u) goto L_08839D34;
    return;
L_08839D34:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (2225u << 16u);
      if (branch_taken) {
          goto L_08839E70;
      }
      goto L_08839D54;
    }
L_08839D54:
    ctx.gpr[23] = (2211u << 16u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-9604));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5740));
    ctx.gpr[18] = (2230u << 16u);
    goto L_08839D68;
L_08839D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08839D94u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08839AD8;
L_08839D94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839DC4;
      }
      goto L_08839DA0;
    }
L_08839DA0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08839DACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08839DACu) goto L_08839DAC;
    return;
L_08839DAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08839E60;
      }
      goto L_08839DC4;
    }
L_08839DC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08839DE0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08839DE0u) goto L_08839DE0;
    return;
L_08839DE0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08839DECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 304u, 0x088656A0u>(ctx, &aot_mem) && ctx.pc == 0x08839DECu) goto L_08839DEC;
    return;
L_08839DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[31] = (0x08839E00u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 877u, 0x088B3F54u>(ctx, &aot_mem) && ctx.pc == 0x08839E00u) goto L_08839E00;
    return;
L_08839E00:
    ctx.gpr[31] = (0x08839E08u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 226u, 0x08A4CED8u>(ctx, &aot_mem) && ctx.pc == 0x08839E08u) goto L_08839E08;
    return;
L_08839E08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08839E20;
      }
      goto L_08839E10;
    }
L_08839E10:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08839E20u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x08839E20u) goto L_08839E20;
    return;
L_08839E20:
    ctx.gpr[31] = (0x08839E28u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 195u, 0x08AA4F70u>(ctx, &aot_mem) && ctx.pc == 0x08839E28u) goto L_08839E28;
    return;
L_08839E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08839E60;
L_08839E60:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08839D68;
      }
      goto L_08839E70;
    }
L_08839E70:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08839EA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08839EF8;
      }
      goto L_08839EE4;
    }
L_08839EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839F0C;
      }
      goto L_08839EF0;
    }
L_08839EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08839F14;
      }
      goto L_08839EF8;
    }
L_08839EF8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08839F04u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08839CD0;
L_08839F04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A11C;
      }
      goto L_08839F0C;
    }
L_08839F0C:
    ctx.gpr[31] = (0x08839F14u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0883A25C;
L_08839F14:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[31] = (0x08839F20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x08839F20u) goto L_08839F20;
    return;
L_08839F20:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[7] = (2187u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 68u);
    ctx.gpr[31] = (0x08839F3Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(15864));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08839F3Cu) goto L_08839F3C;
    return;
L_08839F3C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0883A11C;
      }
      goto L_08839F5C;
    }
L_08839F5C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9564));
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9500));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[30] = (2211u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-5740));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    goto L_08839F7C;
L_08839F7C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08839FE4;
      }
      goto L_08839FB0;
    }
L_08839FB0:
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    goto L_08839FB4;
L_08839FB4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08839FC0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x08839FC0u) goto L_08839FC0;
    return;
L_08839FC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08839FCC;
      }
      goto L_08839FC8;
    }
L_08839FC8:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_08839FCC;
L_08839FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08839FB4;
      }
      goto L_08839FE4;
    }
L_08839FE4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883A00C;
      }
      goto L_08839FF0;
    }
L_08839FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0883A000u);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    goto L_08839AAC;
L_0883A000:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0883A10C;
      }
      goto L_0883A00C;
    }
L_0883A00C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x0883A020u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08839AD8;
L_0883A020:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883A044;
      }
      goto L_0883A02C;
    }
L_0883A02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0883A038u);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    goto L_08839AAC;
L_0883A038:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0883A10C;
      }
      goto L_0883A044;
    }
L_0883A044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0883A05Cu);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883A05Cu) goto L_0883A05C;
    return;
L_0883A05C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883A068u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 304u, 0x088656A0u>(ctx, &aot_mem) && ctx.pc == 0x0883A068u) goto L_0883A068;
    return;
L_0883A068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883A08Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 877u, 0x088B3F54u>(ctx, &aot_mem) && ctx.pc == 0x0883A08Cu) goto L_0883A08C;
    return;
L_0883A08C:
    ctx.gpr[31] = (0x0883A094u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 226u, 0x08A4CED8u>(ctx, &aot_mem) && ctx.pc == 0x0883A094u) goto L_0883A094;
    return;
L_0883A094:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A0AC;
      }
      goto L_0883A09C;
    }
L_0883A09C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883A0ACu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x0883A0ACu) goto L_0883A0AC;
    return;
L_0883A0AC:
    ctx.gpr[31] = (0x0883A0B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 195u, 0x08AA4F70u>(ctx, &aot_mem) && ctx.pc == 0x0883A0B4u) goto L_0883A0B4;
    return;
L_0883A0B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    goto L_0883A10C;
L_0883A10C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
        goto L_08839F7C;
    }
    goto L_0883A11C;
L_0883A11C:
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
L_0883A14C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0883A190;
      }
      goto L_0883A188;
    }
L_0883A188:
    ctx.gpr[31] = (0x0883A190u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0883A25C;
L_0883A190:
    ctx.gpr[31] = (0x0883A198u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x0883A198u) goto L_0883A198;
    return;
L_0883A198:
    ctx.gpr[7] = (2187u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 68u);
    ctx.gpr[31] = (0x0883A1B4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(15864));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0883A1B4u) goto L_0883A1B4;
    return;
L_0883A1B4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_0883A234;
      }
      goto L_0883A1C8;
    }
L_0883A1C8:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0883A1D0;
L_0883A1D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0883A1DCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 540u, 0x08A8B370u>(ctx, &aot_mem) && ctx.pc == 0x0883A1DCu) goto L_0883A1DC;
    return;
L_0883A1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0883A1F0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 877u, 0x088B3F54u>(ctx, &aot_mem) && ctx.pc == 0x0883A1F0u) goto L_0883A1F0;
    return;
L_0883A1F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_0883A1D0;
      }
      goto L_0883A234;
    }
L_0883A234:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
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
L_0883A25C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A2A0;
      }
      goto L_0883A278;
    }
L_0883A278:
    ctx.gpr[7] = (2187u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 68u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0883A294u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16036));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x0883A294u) goto L_0883A294;
    return;
L_0883A294:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0883A2A0;
L_0883A2A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A2B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A39C;
      }
      goto L_0883A2CC;
    }
L_0883A2CC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0883A2E4;
L_0883A2E4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0883A364;
      }
      goto L_0883A2FC;
    }
L_0883A2FC:
    ctx.gpr[3] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A320;
      }
      goto L_0883A310;
    }
L_0883A310:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[9] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 24u));
      if (branch_taken) {
          goto L_0883A320;
      }
      goto L_0883A320;
    }
L_0883A320:
    ctx.gpr[3] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A344;
      }
      goto L_0883A334;
    }
L_0883A334:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
      if (branch_taken) {
          goto L_0883A344;
      }
      goto L_0883A344;
    }
L_0883A344:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0883A354;
      }
      goto L_0883A34C;
    }
L_0883A34C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_0883A374;
      }
      goto L_0883A354;
    }
L_0883A354:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0883A2FC;
      }
      goto L_0883A364;
    }
L_0883A364:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0883A374;
      }
      goto L_0883A36C;
    }
L_0883A36C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_0883A374;
      }
      goto L_0883A374;
    }
L_0883A374:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A394;
      }
      goto L_0883A37C;
    }
L_0883A37C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_0883A2E4;
      }
      goto L_0883A38C;
    }
L_0883A38C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A39C;
      }
      goto L_0883A394;
    }
L_0883A394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A3AC;
      }
      goto L_0883A39C;
    }
L_0883A39C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0883A3A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9464));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x0883A3A8u) goto L_0883A3A8;
    return;
L_0883A3A8:
    ctx.gpr[2] = (0u | 0u);
    goto L_0883A3AC;
L_0883A3AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A3B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0883A3D4u);
    // nop
    goto L_0883A2B0;
L_0883A3D4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A40C;
      }
      goto L_0883A3E0;
    }
L_0883A3E0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0883A3ECu);
    ctx.gpr[4] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0883A3ECu) goto L_0883A3EC;
    return;
L_0883A3EC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0883A404;
      }
      goto L_0883A3F8;
    }
L_0883A3F8:
    ctx.gpr[31] = (0x0883A400u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 861u, 0x088B3E44u>(ctx, &aot_mem) && ctx.pc == 0x0883A400u) goto L_0883A400;
    return;
L_0883A400:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0883A404;
L_0883A404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0883A410;
      }
      goto L_0883A40C;
    }
L_0883A40C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0883A410;
L_0883A410:
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
L_0883A428:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0883A464u);
    // nop
    goto L_0883A428;
L_0883A464:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A49C;
      }
      goto L_0883A470;
    }
L_0883A470:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0883A47Cu);
    ctx.gpr[4] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0883A47Cu) goto L_0883A47C;
    return;
L_0883A47C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0883A494;
      }
      goto L_0883A488;
    }
L_0883A488:
    ctx.gpr[31] = (0x0883A490u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 861u, 0x088B3E44u>(ctx, &aot_mem) && ctx.pc == 0x0883A490u) goto L_0883A490;
    return;
L_0883A490:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0883A494;
L_0883A494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0883A4A0;
      }
      goto L_0883A49C;
    }
L_0883A49C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0883A4A0;
L_0883A4A0:
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
L_0883A4B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A4C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1840));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0883A4E0u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 232u, 0x08A7D3ECu>(ctx, &aot_mem) && ctx.pc == 0x0883A4E0u) goto L_0883A4E0;
    return;
L_0883A4E0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20620));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[31] = (0x0883A504u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2880));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0883A504u) goto L_0883A504;
    return;
L_0883A504:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 36u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1792));
    ctx.gpr[31] = (0x0883A520u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9416));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AEF4u>(ctx, &aot_mem) && ctx.pc == 0x0883A520u) goto L_0883A520;
    return;
L_0883A520:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A530:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2900)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2896)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[11] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(2904), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(2912), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(2908), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(2916), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(2920), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A5A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A610;
      }
      goto L_0883A5B8;
    }
L_0883A5B8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0883A614;
      }
      goto L_0883A610;
    }
L_0883A610:
    ctx.gpr[2] = (0u | 0u);
    goto L_0883A614;
L_0883A614:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A61C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x0883A69Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x0883A69Cu) goto L_0883A69C;
    return;
L_0883A69C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(152)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883A6DC;
      }
      goto L_0883A6C8;
    }
L_0883A6C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0883A700;
      }
      goto L_0883A6DC;
    }
L_0883A6DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(168)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883A700;
      }
      goto L_0883A6F4;
    }
L_0883A6F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0883A700;
L_0883A700:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883A71C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[13]));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0883A808;
      }
      goto L_0883A764;
    }
L_0883A764:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[17] = (2227u << 16u);
    goto L_0883A77C;
L_0883A77C:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883A7F0;
      }
      goto L_0883A790;
    }
L_0883A790:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883A7B0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_0883A61C;
L_0883A7B0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2968), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A7D0;
      }
      goto L_0883A7C0;
    }
L_0883A7C0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883A7D0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0883A860;
L_0883A7D0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883A790;
      }
      goto L_0883A7EC;
    }
L_0883A7EC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    goto L_0883A7F0;
L_0883A7F0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883A77C;
      }
      goto L_0883A808;
    }
L_0883A808:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
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
L_0883A860:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[9] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(3224), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(2968)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(3224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0883A8C0;
      }
      goto L_0883A8A8;
    }
L_0883A8A8:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(242)));
    ctx.gpr[7] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(3232));
      if (branch_taken) {
          goto L_0883A8C8;
      }
      goto L_0883A8B8;
    }
L_0883A8B8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
      if (branch_taken) {
          goto L_0883A8E4;
      }
      goto L_0883A8C0;
    }
L_0883A8C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AA08;
      }
      goto L_0883A8C8;
    }
L_0883A8C8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(3224)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(2968)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(3224), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(3224), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    goto L_0883A8E4;
L_0883A8E4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(3224)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[8] = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(3232), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883A968;
      }
      goto L_0883A940;
    }
L_0883A940:
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0883A968;
L_0883A968:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3216), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(3220), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3216)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(3224)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(3224)));
    goto L_0883AA08;
L_0883AA08:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883AA10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x0883AA98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x0883AA98u) goto L_0883AA98;
    return;
L_0883AA98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(168)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883AAE0;
      }
      goto L_0883AAC4;
    }
L_0883AAC4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x0883AAD8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 304u, 0x0890DFECu>(ctx, &aot_mem) && ctx.pc == 0x0883AAD8u) goto L_0883AAD8;
    return;
L_0883AAD8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    goto L_0883AAE0;
L_0883AAE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883AB0C;
      }
      goto L_0883AAF8;
    }
L_0883AAF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0883AB30;
      }
      goto L_0883AB0C;
    }
L_0883AB0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(168)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883AB30;
      }
      goto L_0883AB24;
    }
L_0883AB24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_0883AB30;
L_0883AB30:
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
L_0883AB50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[31] = (0x0883ABC0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x0883ABC0u) goto L_0883ABC0;
    return;
L_0883ABC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AC40;
      }
      goto L_0883ABC8;
    }
L_0883ABC8:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0883ABD4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x0883ABD4u) goto L_0883ABD4;
    return;
L_0883ABD4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883ABE4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0883AC64;
L_0883ABE4:
    ctx.gpr[31] = (0x0883ABECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0883A71C;
L_0883ABEC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883AC00u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_0883A5A8;
L_0883AC00:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(242)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_0883AC2C;
      }
      goto L_0883AC10;
    }
L_0883AC10:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0883AC34;
      }
      goto L_0883AC24;
    }
L_0883AC24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883AC38;
      }
      goto L_0883AC2C;
    }
L_0883AC2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0883AC44;
      }
      goto L_0883AC34;
    }
L_0883AC34:
    ctx.gpr[4] = (0u | 1u);
    goto L_0883AC38;
L_0883AC38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0883AC44;
      }
      goto L_0883AC40;
    }
L_0883AC40:
    ctx.gpr[2] = (0u | 0u);
    goto L_0883AC44;
L_0883AC44:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883AC64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 4u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0883ACD0;
      }
      goto L_0883ACA8;
    }
L_0883ACA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883ACC4;
      }
      goto L_0883ACB8;
    }
L_0883ACB8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(242), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0883ACC8;
      }
      goto L_0883ACC4;
    }
L_0883ACC4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(242), static_cast<std::uint8_t>(0u));
    goto L_0883ACC8;
L_0883ACC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883ACD4;
      }
      goto L_0883ACD0;
    }
L_0883ACD0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(242), static_cast<std::uint8_t>(0u));
    goto L_0883ACD4;
L_0883ACD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(242)));
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
        goto L_0883AFDC;
    }
    goto L_0883AD1C;
L_0883AD1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 194 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 195 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883AD58;
      }
      goto L_0883AD2C;
    }
L_0883AD2C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -973 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883AFA8;
      }
      goto L_0883AD38;
    }
L_0883AD38:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
      if (branch_taken) {
          goto L_0883AFA8;
      }
      goto L_0883AD40;
    }
L_0883AD40:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-9384)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883AD58:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 196 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883AD84;
      }
      goto L_0883AD60;
    }
L_0883AD60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16262u << 16u);
      if (branch_taken) {
          goto L_0883AFAC;
      }
      goto L_0883AD68;
    }
L_0883AD68:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883AFD8;
      }
      goto L_0883AD84;
    }
L_0883AD84:
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (16212u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 31457u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0883AFD8;
      }
      goto L_0883ADB4;
    }
L_0883ADB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883AFD8;
      }
      goto L_0883ADD8;
    }
L_0883ADD8:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0883AE20u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0883AE20u) goto L_0883AE20;
    return;
L_0883AE20:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3160)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0883AE38u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x0883AE38u) goto L_0883AE38;
    return;
L_0883AE38:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0883AE44u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x0883AE44u) goto L_0883AE44;
    return;
L_0883AE44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0883AFD8;
      }
      goto L_0883AE4C;
    }
L_0883AE4C:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0883AFD8;
      }
      goto L_0883AE74;
    }
L_0883AE74:
    ctx.gpr[4] = (16294u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16209u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60293u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (15948u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883AFD8;
      }
      goto L_0883AEC0;
    }
L_0883AEC0:
    ctx.gpr[4] = (16268u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (16025u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883AFD8;
      }
      goto L_0883AF0C;
    }
L_0883AF0C:
    ctx.gpr[4] = (16294u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (15948u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883AFD8;
      }
      goto L_0883AF58;
    }
L_0883AF58:
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0883AFD8;
      }
      goto L_0883AF8C;
    }
L_0883AF8C:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883AFD8;
      }
      goto L_0883AFA8;
    }
L_0883AFA8:
    ctx.gpr[4] = (16262u << 16u);
    goto L_0883AFAC;
L_0883AFAC:
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0883AFD8;
L_0883AFD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    goto L_0883AFDC;
L_0883AFDC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[15] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0883B060;
      }
      goto L_0883B024;
    }
L_0883B024:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883B060;
      }
      goto L_0883B03C;
    }
L_0883B03C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0883B0D0;
      }
      goto L_0883B060;
    }
L_0883B060:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
        goto L_0883B0B4;
    }
    goto L_0883B078;
L_0883B078:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
        goto L_0883B0B4;
    }
    goto L_0883B090;
L_0883B090:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0883B0D0;
      }
      goto L_0883B0B4;
    }
L_0883B0B4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0883B0D0;
L_0883B0D0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B144:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[31] = (0x0883B1DCu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x0883B1DCu) goto L_0883B1DC;
    return;
L_0883B1DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B57C;
      }
      goto L_0883B1E4;
    }
L_0883B1E4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0883B1F0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B1F0u) goto L_0883B1F0;
    return;
L_0883B1F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883B200u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0883AC64;
L_0883B200:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[15]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0883B528;
      }
      goto L_0883B23C;
    }
L_0883B23C:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0883B504;
      }
      goto L_0883B254;
    }
L_0883B254:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0883B27Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0883AA10;
L_0883B27C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -973 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 194u);
      if (branch_taken) {
          goto L_0883B2B0;
      }
      goto L_0883B28C;
    }
L_0883B28C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -991 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(991));
      if (branch_taken) {
          goto L_0883B378;
      }
      goto L_0883B298;
    }
L_0883B298:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-9272)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B2B0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_0883B37C;
      }
      goto L_0883B2B8;
    }
L_0883B2B8:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3116));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2968), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883B3A4;
      }
      goto L_0883B2E8;
    }
L_0883B2E8:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3008));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2968), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883B3A4;
      }
      goto L_0883B318;
    }
L_0883B318:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3044));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2968), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883B3A4;
      }
      goto L_0883B348;
    }
L_0883B348:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3080));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2968), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883B3A4;
      }
      goto L_0883B378;
    }
L_0883B378:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[22]);
    goto L_0883B37C;
L_0883B37C:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2972));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2968), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0883B3A4;
L_0883B3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B4E0;
      }
      goto L_0883B3B0;
    }
L_0883B3B0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x0883B3C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0883A860;
L_0883B3C0:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883B420u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 438u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x0883B420u) goto L_0883B420;
    return;
L_0883B420:
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0883B46C;
    }
    goto L_0883B46C;
L_0883B46C:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    { const bool branch_taken = ctx.gpr[20] != 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883B4E0;
      }
      goto L_0883B480;
    }
L_0883B480:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x0883B4E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x0883B4E0u) goto L_0883B4E0;
    return;
L_0883B4E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (ctx.gpr[4] << 16u);
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
      if (branch_taken) {
          goto L_0883B254;
      }
      goto L_0883B504;
    }
L_0883B504:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
      if (branch_taken) {
          goto L_0883B23C;
      }
      goto L_0883B528;
    }
L_0883B528:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(242)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B574;
      }
      goto L_0883B56C;
    }
L_0883B56C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0883B580;
      }
      goto L_0883B574;
    }
L_0883B574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_0883B580;
      }
      goto L_0883B57C;
    }
L_0883B57C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0883B580;
L_0883B580:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
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
L_0883B5C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[3] = (2233u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2928)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-25472));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(80), 0u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[12]);
    ctx.gpr[9] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[8] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(2944), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(2940), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(3168));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(2948), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0883B668u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(2952), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0883B668u) goto L_0883B668;
    return;
L_0883B668:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B674:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1776));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7664), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_0883B68C;
L_0883B68C:
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 800 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B68C;
      }
      goto L_0883B6B8;
    }
L_0883B6B8:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(6392), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B6C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0883B6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0883B6D0u) goto L_0883B6D0;
    return;
L_0883B6D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B6E8;
      }
      goto L_0883B6D8;
    }
L_0883B6D8:
    ctx.gpr[31] = (0x0883B6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0883B6E0u) goto L_0883B6E0;
    return;
L_0883B6E0:
    ctx.gpr[31] = (0x0883B6E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0883B98C;
L_0883B6E8:
    ctx.gpr[31] = (0x0883B6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0883B6F0u) goto L_0883B6F0;
    return;
L_0883B6F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B708;
      }
      goto L_0883B6F8;
    }
L_0883B6F8:
    ctx.gpr[31] = (0x0883B700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0883B700u) goto L_0883B700;
    return;
L_0883B700:
    ctx.gpr[31] = (0x0883B708u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0883B98C;
L_0883B708:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0883B798;
      }
      goto L_0883B744;
    }
L_0883B744:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[17] = (ctx.lo);
    goto L_0883B750;
L_0883B750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0883B770;
    }
    goto L_0883B768;
L_0883B768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0883B774;
      }
      goto L_0883B770;
    }
L_0883B770:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_0883B774;
L_0883B774:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B784;
      }
      goto L_0883B77C;
    }
L_0883B77C:
    ctx.gpr[31] = (0x0883B784u);
    // nop
    goto L_0883BA30;
L_0883B784:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-3248));
      if (branch_taken) {
          goto L_0883B750;
      }
      goto L_0883B798;
    }
L_0883B798:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0883B818;
      }
      goto L_0883B7B0;
    }
L_0883B7B0:
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_0883B7D0;
L_0883B7D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0883B7F0;
    }
    goto L_0883B7E8;
L_0883B7E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0883B7F4;
      }
      goto L_0883B7F0;
    }
L_0883B7F0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_0883B7F4;
L_0883B7F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B804;
      }
      goto L_0883B7FC;
    }
L_0883B7FC:
    ctx.gpr[31] = (0x0883B804u);
    // nop
    goto L_0883BA30;
L_0883B804:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_0883B7D0;
      }
      goto L_0883B818;
    }
L_0883B818:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0883B888;
      }
      goto L_0883B830;
    }
L_0883B830:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[19] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_0883B840;
L_0883B840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_0883B860;
    }
    goto L_0883B858;
L_0883B858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0883B864;
      }
      goto L_0883B860;
    }
L_0883B860:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0883B864;
L_0883B864:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B874;
      }
      goto L_0883B86C;
    }
L_0883B86C:
    ctx.gpr[31] = (0x0883B874u);
    // nop
    goto L_0883BA30;
L_0883B874:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-544));
      if (branch_taken) {
          goto L_0883B840;
      }
      goto L_0883B888;
    }
L_0883B888:
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
L_0883B8A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 2u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B8D4;
      }
      goto L_0883B8C0;
    }
L_0883B8C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B8DC;
      }
      goto L_0883B8CC;
    }
L_0883B8CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B904;
      }
      goto L_0883B8D4;
    }
L_0883B8D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B92C;
      }
      goto L_0883B8DC;
    }
L_0883B8DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883B8FC;
      }
      goto L_0883B8E8;
    }
L_0883B8E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B8DC;
      }
      goto L_0883B8F4;
    }
L_0883B8F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B904;
      }
      goto L_0883B8FC;
    }
L_0883B8FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B92C;
      }
      goto L_0883B904;
    }
L_0883B904:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7664)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B92C;
      }
      goto L_0883B914;
    }
L_0883B914:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7664), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_0883B92C;
L_0883B92C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B934:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B984;
      }
      goto L_0883B940;
    }
L_0883B940:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_0883B984;
      }
      goto L_0883B948;
    }
L_0883B948:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0883B96C;
      }
      goto L_0883B954;
    }
L_0883B954:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B948;
      }
      goto L_0883B964;
    }
L_0883B964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B984;
      }
      goto L_0883B96C;
    }
L_0883B96C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7664)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7664), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0883B984;
      }
      goto L_0883B984;
    }
L_0883B984:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B98C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 10u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B9C0;
      }
      goto L_0883B9A8;
    }
L_0883B9A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B9C8;
      }
      goto L_0883B9B8;
    }
L_0883B9B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B9EC;
      }
      goto L_0883B9C0;
    }
L_0883B9C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BA28;
      }
      goto L_0883B9C8;
    }
L_0883B9C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883B9DC;
      }
      goto L_0883B9D8;
    }
L_0883B9D8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_0883B9DC;
L_0883B9DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B9C8;
      }
      goto L_0883B9E8;
    }
L_0883B9E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    goto L_0883B9EC;
L_0883B9EC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BA28;
      }
      goto L_0883B9F4;
    }
L_0883B9F4:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7664)));
      if (branch_taken) {
          goto L_0883BA18;
      }
      goto L_0883BA08;
    }
L_0883BA08:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883BA08;
      }
      goto L_0883BA18;
    }
L_0883BA18:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7664), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    goto L_0883BA28;
L_0883BA28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BA30:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_0883BA78;
      }
      goto L_0883BA3C;
    }
L_0883BA3C:
    ctx.gpr[5] = (2230u << 16u);
    goto L_0883BA40;
L_0883BA40:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[4];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0883BA68;
      }
      goto L_0883BA50;
    }
L_0883BA50:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7664)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7664), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0883BA70;
      }
      goto L_0883BA68;
    }
L_0883BA68:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    goto L_0883BA70;
L_0883BA70:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883BA40;
      }
      goto L_0883BA78;
    }
L_0883BA78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BA80:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3188)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3184)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[11] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(3192), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(3200), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(3196), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(3204), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(3208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BAF8:
    ctx.gpr[5] = (0u | 0u);
    goto L_0883BAFC;
L_0883BAFC:
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883BAFC;
      }
      goto L_0883BB2C;
    }
L_0883BB2C:
    ctx.gpr[5] = (0u | 8u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BB38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0883BC3C;
      }
      goto L_0883BB50;
    }
L_0883BB50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883BC3C;
      }
      goto L_0883BB64;
    }
L_0883BB64:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0883BB74;
L_0883BB74:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BC0C;
      }
      goto L_0883BB7C;
    }
L_0883BB7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0883BC0C;
      }
      goto L_0883BB88;
    }
L_0883BB88:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0883BB74;
      }
      goto L_0883BC0C;
    }
L_0883BC0C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BC3C;
      }
      goto L_0883BC1C;
    }
L_0883BC1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x0883BC3Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 495u, 0x0887AFFCu>(ctx, &aot_mem) && ctx.pc == 0x0883BC3Cu) goto L_0883BC3C;
    return;
L_0883BC3C:
    ctx.gpr[31] = (0x0883BC44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0883BCDC;
L_0883BC44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BCCC;
      }
      goto L_0883BC50;
    }
L_0883BC50:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(117)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0883BC8C;
      }
      goto L_0883BC68;
    }
L_0883BC68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7660)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0883BC8C;
      }
      goto L_0883BC74;
    }
L_0883BC74:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4624)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
      if (branch_taken) {
          goto L_0883BC8C;
      }
      goto L_0883BC80;
    }
L_0883BC80:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BC9C;
      }
      goto L_0883BC8C;
    }
L_0883BC8C:
    ctx.gpr[31] = (0x0883BC94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0883BE0C;
L_0883BC94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BCCC;
      }
      goto L_0883BC9C;
    }
L_0883BC9C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BCCC;
      }
      goto L_0883BCB4;
    }
L_0883BCB4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0883BCCC;
L_0883BCCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BCDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_0883BDAC;
      }
      goto L_0883BD04;
    }
L_0883BD04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x0883BD24u);
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 517u, 0x0887B1ACu>(ctx, &aot_mem) && ctx.pc == 0x0883BD24u) goto L_0883BD24;
    return;
L_0883BD24:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (0u | 32u);
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    goto L_0883BD38;
L_0883BD38:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BDAC;
      }
      goto L_0883BD40;
    }
L_0883BD40:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883BDAC;
      }
      goto L_0883BD48;
    }
L_0883BD48:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0883BD70;
      }
      goto L_0883BD54;
    }
L_0883BD54:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(544), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0883BDA4;
      }
      goto L_0883BD70;
    }
L_0883BD70:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[29] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BDA0;
      }
      goto L_0883BD84;
    }
L_0883BD84:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(544), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0883BDA4;
      }
      goto L_0883BDA0;
    }
L_0883BDA0:
    ctx.gpr[4] = (0u | 1u);
    goto L_0883BDA4;
L_0883BDA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BD38;
      }
      goto L_0883BDAC;
    }
L_0883BDAC:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(544), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x0883BDB8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 484u, 0x08986E28u>(ctx, &aot_mem) && ctx.pc == 0x0883BDB8u) goto L_0883BDB8;
    return;
L_0883BDB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BDD0:
    ctx.gpr[5] = (0u | 0u);
    goto L_0883BDD4;
L_0883BDD4:
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883BDD4;
      }
      goto L_0883BE04;
    }
L_0883BE04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BE0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BE3C;
      }
      goto L_0883BE18;
    }
L_0883BE18:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    goto L_0883BE3C;
L_0883BE3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BE44:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3220)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3216)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3244)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(3224), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(3232), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(3228), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3236), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(3248), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0883BEF0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 115u, 0x089FD22Cu>(ctx, &aot_mem) && ctx.pc == 0x0883BEF0u) goto L_0883BEF0;
    return;
L_0883BEF0:
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(3256));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0883BF30;
      }
      goto L_0883BF08;
    }
L_0883BF08:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0883BF14u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883BF14u) goto L_0883BF14;
    return;
L_0883BF14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0883BF20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x0883BF20u) goto L_0883BF20;
    return;
L_0883BF20:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0883BF08;
      }
      goto L_0883BF30;
    }
L_0883BF30:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9152));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0883BF44u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x0883BF44u) goto L_0883BF44;
    return;
L_0883BF44:
    ctx.gpr[5] = (2180u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0883BF58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16124));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x0883BF58u) goto L_0883BF58;
    return;
L_0883BF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0883BF64u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x0883BF64u) goto L_0883BF64;
    return;
L_0883BF64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BF78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0883BF90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 125u, 0x089FD2C4u>(ctx, &aot_mem) && ctx.pc == 0x0883BF90u) goto L_0883BF90;
    return;
L_0883BF90:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BFA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0883BFB8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 87u, 0x08A4C5A8u>(ctx, &aot_mem) && ctx.pc == 0x0883BFB8u) goto L_0883BFB8;
    return;
L_0883BFB8:
    ctx.gpr[31] = (0x0883BFC0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 41u, 0x0883C290u>(ctx, &aot_mem) && ctx.pc == 0x0883BFC0u) goto L_0883BFC0;
    return;
L_0883BFC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BFCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0883BFE0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 81u, 0x08A4C548u>(ctx, &aot_mem) && ctx.pc == 0x0883BFE0u) goto L_0883BFE0;
    return;
L_0883BFE0:
    ctx.gpr[31] = (0x0883BFE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 41u, 0x0883C290u>(ctx, &aot_mem) && ctx.pc == 0x0883BFE8u) goto L_0883BFE8;
    return;
L_0883BFE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BFF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.pc = 0x0883C000u; return;
}

void recomp_unit_0013(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0013_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_13(Runtime &runtime) {
    runtime.register_generated_unit(13u, 0x08838000u, 16384u, &recomp_unit_0013, &recomp_unit_0013_entry);
    runtime.register_function(0x08838004u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838028u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883803Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838058u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883806Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838078u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838080u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838098u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088380F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838104u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838128u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838138u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838154u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883815Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838168u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838170u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838178u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838184u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883818Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838198u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088381F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838200u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838208u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883822Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838234u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883823Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838288u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838298u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088382FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838304u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838334u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838354u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838358u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838368u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883836Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838374u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088383FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838408u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838434u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838444u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883844Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838460u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088384F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838540u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838548u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838550u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838554u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838560u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883856Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838580u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088385B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088385BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088385CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088385D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088385E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088385F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838600u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838608u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838618u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838634u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838640u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838648u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838658u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838660u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883866Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883867Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838688u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088386F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838704u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883871Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838724u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838744u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838748u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838778u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838794u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883879Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088387A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088387ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088387B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088387E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088387F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838804u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838818u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838828u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838834u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883883Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838850u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883887Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883889Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088388E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883890Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838914u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838920u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883892Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883893Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838944u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883894Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838950u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883895Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838964u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838974u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883897Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838984u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838994u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883899Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088389FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838A9Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838AA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838AE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838AECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838AF4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B2Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838B9Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BCCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BDCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838BFCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C04u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C0Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C64u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838C9Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CCCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CDCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838CECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838D98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DCCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DD8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838DF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E60u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E84u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838E9Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838EA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838EB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838ECCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838EFCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F2Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F64u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838F98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838FA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838FACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838FD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838FE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08838FF8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839014u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839018u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839048u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883905Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839070u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839094u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883910Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839120u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839128u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839130u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839138u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839140u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839148u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839154u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883915Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839164u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839170u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839178u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839180u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839190u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088391FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839208u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839210u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839224u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839230u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839238u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839240u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839248u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839250u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839258u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839260u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839268u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839270u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839278u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883927Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839298u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088392F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839304u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883930Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839314u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839324u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839338u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839340u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839348u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839354u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883935Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839360u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883936Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839378u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839388u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839390u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883939Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088393FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839408u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839414u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883941Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839424u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883942Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839434u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883943Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839440u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883946Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839484u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839494u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088394D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839500u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883951Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839528u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839540u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839568u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839594u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088395F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839600u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839608u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839624u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839644u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088396A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088396D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839704u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883971Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839724u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839738u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839754u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883975Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883977Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839780u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839794u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088397E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839808u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839824u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839858u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839870u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883987Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839890u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883989Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398BCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088398FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839904u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883990Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839914u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883991Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839928u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839938u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839948u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839964u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883996Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839974u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839988u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839990u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839998u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x088399F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839A78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839AACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839AD8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B64u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B6Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B74u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839B90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BB0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BD0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839BF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C6Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839C84u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839CA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839CA8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839CB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839CBCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839CD0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839D94u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839DECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E60u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839E70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839EA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839EE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839EF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839EF8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F04u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F0Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F5Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839F7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839FB0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839FB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839FC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839FC8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839FCCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839FE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x08839FF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A000u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A00Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A020u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A02Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A038u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A044u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A05Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A068u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A08Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A094u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A09Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A0ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A0B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A10Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A11Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A14Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A188u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A190u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A198u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A1F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A234u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A25Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A278u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A294u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A2FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A310u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A320u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A334u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A344u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A34Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A354u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A364u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A36Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A374u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A37Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A38Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A394u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A39Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3ACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A3F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A400u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A404u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A40Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A410u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A428u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A448u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A464u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A470u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A47Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A488u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A490u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A494u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A49Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4A0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A4E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A504u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A520u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A530u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A5A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A5B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A610u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A614u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A61Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A69Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A6C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A6DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A6F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A700u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A71Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A764u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A77Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A790u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A7B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A7C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A7D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A7ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A7F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A808u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A860u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A8E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A940u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883A968u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AA98u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAD8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AAF8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB0Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB30u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AB50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABC8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABE4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ABECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC00u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC10u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC2Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC34u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AC64u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACA8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACC4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACC8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACD0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ACD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD2Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD60u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AD84u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883ADD8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE4Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AE74u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AEC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF0Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AF8Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFA8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFD8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883AFDCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B024u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B03Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B060u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B078u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B090u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0B4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B0D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B144u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1E4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B1F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B200u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B23Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B254u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B27Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B28Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B298u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B2B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B2B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B2E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B318u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B348u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B378u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B37Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B3A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B3B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B3C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B420u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B46Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B480u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B4E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B504u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B528u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B56Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B574u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B57Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B580u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B5C4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B668u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B674u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B68Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B6B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B6C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B6D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B6D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B6E0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B6E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B6F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B6F8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B700u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B708u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B714u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B744u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B750u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B768u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B770u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B774u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B77Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B784u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B798u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7B0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7D0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7F0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B7FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B804u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B818u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B830u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B840u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B858u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B860u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B864u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B86Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B874u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B888u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8A4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8CCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8D4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B8FCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B904u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B914u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B92Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B934u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B940u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B948u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B954u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B964u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B96Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B984u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B98Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9A8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9B8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9C0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9C8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9D8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9DCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9E8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9ECu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883B9F4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA28u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA30u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BA80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BAF8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BAFCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB2Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB64u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB74u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB7Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BB88u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC0Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC1Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC50u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC68u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC74u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC80u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC8Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC94u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BC9Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BCB4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BCCCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BCDCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD04u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD24u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD38u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD40u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD48u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD54u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD70u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BD84u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDA0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDACu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDD0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BDD4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE04u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE0Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE18u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE3Cu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BE44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BED8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BEF0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF08u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF14u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF20u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF30u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF44u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF58u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF64u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF78u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BF90u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFA4u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFB8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFC0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFCCu, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFE0u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFE8u, &recomp_unit_0013, "recomp_unit_0013");
    runtime.register_function(0x0883BFF4u, &recomp_unit_0013, "recomp_unit_0013");
}
} // namespace psprecomp
