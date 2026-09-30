#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0197[3716] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 7, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 14,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 17, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0,
    23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 32, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 51, 52, 0, 0, 53, 54, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    56, 0, 57, 0, 58, 0, 0, 0, 0, 59, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65,
    0, 66, 0, 0, 67, 0, 0, 0, 68, 69, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 81, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 86, 0, 87, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0,
    94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 101, 0, 0, 102, 103, 0, 0, 0, 104, 0, 0, 0,
    0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 121, 122, 0, 0, 123, 0, 0, 124,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0,
    133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0,
    149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0,
    165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0,
    181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 193,
    0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203,
    0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 0, 208, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0,
    216, 0, 0, 217, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227,
    0, 0, 0, 228, 0, 229, 230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0,
    0, 238, 0, 0, 0, 239, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0,
    0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0,
    267, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0,
    283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0,
    299, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0,
    0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 323, 0,
    324, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 328, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0, 333,
    0, 0, 334, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341,
    0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 346, 0, 0, 0, 347, 0, 348, 0,
    0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 357,
    0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 373, 0,
    0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 377, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0,
    384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0,
    0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0, 0, 397, 0, 398, 0,
    399, 0, 400, 0, 0, 401, 0, 402, 403, 0, 404, 405, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0,
    0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0,
    0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0,
    424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0,
    431, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0,
    0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0,
    0, 0, 460, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 482, 0, 0, 483, 484, 485, 0, 486, 0, 0, 487, 0, 0, 0, 488,
    0, 0, 0, 489, 0, 0, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 0, 495, 496, 0, 497, 498, 0, 499, 0, 500, 0, 0, 501, 0,
    0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0,
    0, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 0, 515, 0, 0, 516, 0, 517, 0, 518, 519, 0, 520, 0, 521, 0, 522,
    0, 523, 0, 0, 524, 0, 525, 0, 0, 526, 0, 527, 0, 528, 0, 0, 529, 0, 0, 530, 0, 531, 0, 0, 532, 0, 533, 0, 0, 534, 0, 535,
    0, 0, 536, 0, 537, 0, 538, 0, 0, 539, 0, 0, 540, 541, 0, 542, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0,
    0, 548, 0, 0, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0, 555, 556, 0, 557, 558, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0,
    0, 564, 0, 0, 565, 0, 566, 0, 567, 568, 0, 569, 0, 570, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 0, 576, 0, 0, 577, 0,
    0, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 0, 583, 0, 584, 585, 0, 586, 587, 0, 588, 589, 0, 0, 590, 0, 0, 591, 0, 592, 0,
    0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 599, 0, 600, 0, 0, 601, 602, 0, 603, 0, 0,
    0, 0, 604, 605, 606, 607, 0, 608, 0, 0, 609, 0, 610, 0, 611, 0, 612, 613, 614, 0, 615, 0, 616, 0, 617, 0, 618, 0, 619, 0, 620, 0,
    621, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0,
    632, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639,
    0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 646,
    0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 656, 0, 0, 657, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660,
    0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 668,
    0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0,
    672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0,
    0, 675, 676, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 682,
    0, 0, 683, 684, 0, 0, 0, 685, 686, 0, 687, 0, 688, 0, 689, 0, 0, 0, 690, 0, 0, 691, 692, 0, 0, 0, 693, 694, 0, 695, 0, 0,
    696, 0, 0, 697, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 701, 702, 0, 0, 0, 703, 0, 0, 0, 704, 0, 705, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 709,
    0, 0, 710, 0, 0, 711, 0, 0, 712, 0, 0, 713, 0, 714, 0, 715, 0, 0, 716, 0, 717, 0, 0, 0, 718, 0, 719, 0, 720, 0, 0, 721,
    0, 0, 722, 0, 723, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 726, 0, 0, 727, 0, 728, 0, 0, 0, 729, 0, 0, 730, 0, 0, 731, 0,
    732, 0, 0, 733, 0, 0, 734, 0, 0, 0, 735, 0, 736, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0,
    740, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 744, 0, 745, 0, 746, 0, 747, 0, 748, 0, 749, 0, 750,
    0, 751, 0, 752, 0, 753, 0, 754, 0, 755, 0, 756, 0, 757, 0, 758, 0, 759, 0, 760, 0, 761, 0, 762, 0, 763, 0, 764, 0, 765, 0, 766,
    0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 771,
    0, 772, 0, 773,
};
void recomp_unit_0197_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B18000u;
        entry_id = (entry_delta < 14864u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0197[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B18000;
    case 2u: goto L_08B18004;
    case 3u: goto L_08B18020;
    case 4u: goto L_08B18044;
    case 5u: goto L_08B18078;
    case 6u: goto L_08B18084;
    case 7u: goto L_08B180A0;
    case 8u: goto L_08B180A4;
    case 9u: goto L_08B180B0;
    case 10u: goto L_08B180CC;
    case 11u: goto L_08B180D0;
    case 12u: goto L_08B180DC;
    case 13u: goto L_08B180F8;
    case 14u: goto L_08B180FC;
    case 15u: goto L_08B18108;
    case 16u: goto L_08B18124;
    case 17u: goto L_08B18128;
    case 18u: goto L_08B18134;
    case 19u: goto L_08B1814C;
    case 20u: goto L_08B18154;
    case 21u: goto L_08B18160;
    case 22u: goto L_08B18178;
    case 23u: goto L_08B18180;
    case 24u: goto L_08B1818C;
    case 25u: goto L_08B181AC;
    case 26u: goto L_08B181B8;
    case 27u: goto L_08B181D8;
    case 28u: goto L_08B181E8;
    case 29u: goto L_08B181F8;
    case 30u: goto L_08B18214;
    case 31u: goto L_08B18228;
    case 32u: goto L_08B1822C;
    case 33u: goto L_08B18234;
    case 34u: goto L_08B18244;
    case 35u: goto L_08B1824C;
    case 36u: goto L_08B18264;
    case 37u: goto L_08B18274;
    case 38u: goto L_08B182E0;
    case 39u: goto L_08B182E8;
    case 40u: goto L_08B1830C;
    case 41u: goto L_08B1831C;
    case 42u: goto L_08B1832C;
    case 43u: goto L_08B18348;
    case 44u: goto L_08B18358;
    case 45u: goto L_08B18364;
    case 46u: goto L_08B1837C;
    case 47u: goto L_08B183A0;
    case 48u: goto L_08B183A8;
    case 49u: goto L_08B183BC;
    case 50u: goto L_08B183C4;
    case 51u: goto L_08B183D0;
    case 52u: goto L_08B183D4;
    case 53u: goto L_08B183E0;
    case 54u: goto L_08B183E4;
    case 55u: goto L_08B188F8;
    case 56u: goto L_08B18900;
    case 57u: goto L_08B18908;
    case 58u: goto L_08B18910;
    case 59u: goto L_08B18924;
    case 60u: goto L_08B18928;
    case 61u: goto L_08B18938;
    case 62u: goto L_08B18948;
    case 63u: goto L_08B18954;
    case 64u: goto L_08B1896C;
    case 65u: goto L_08B1897C;
    case 66u: goto L_08B18984;
    case 67u: goto L_08B18990;
    case 68u: goto L_08B189A0;
    case 69u: goto L_08B189A4;
    case 70u: goto L_08B189B0;
    case 71u: goto L_08B189BC;
    case 72u: goto L_08B189C4;
    case 73u: goto L_08B189D0;
    case 74u: goto L_08B189E4;
    case 75u: goto L_08B189F0;
    case 76u: goto L_08B18A00;
    case 77u: goto L_08B18A14;
    case 78u: goto L_08B18A20;
    case 79u: goto L_08B18A2C;
    case 80u: goto L_08B18A38;
    case 81u: goto L_08B18A3C;
    case 82u: goto L_08B18A4C;
    case 83u: goto L_08B18A58;
    case 84u: goto L_08B18A60;
    case 85u: goto L_08B18A68;
    case 86u: goto L_08B18A6C;
    case 87u: goto L_08B18A74;
    case 88u: goto L_08B18A8C;
    case 89u: goto L_08B18AA4;
    case 90u: goto L_08B18ABC;
    case 91u: goto L_08B18AC8;
    case 92u: goto L_08B18AE0;
    case 93u: goto L_08B18AF4;
    case 94u: goto L_08B18B00;
    case 95u: goto L_08B18B0C;
    case 96u: goto L_08B18B18;
    case 97u: goto L_08B18B24;
    case 98u: goto L_08B18B30;
    case 99u: goto L_08B18B3C;
    case 100u: goto L_08B18B48;
    case 101u: goto L_08B18B50;
    case 102u: goto L_08B18B5C;
    case 103u: goto L_08B18B60;
    case 104u: goto L_08B18B70;
    case 105u: goto L_08B18B84;
    case 106u: goto L_08B18BA0;
    case 107u: goto L_08B18BC0;
    case 108u: goto L_08B18BDC;
    case 109u: goto L_08B18BFC;
    case 110u: goto L_08B18C1C;
    case 111u: goto L_08B18C20;
    case 112u: goto L_08B18C30;
    case 113u: goto L_08B18C40;
    case 114u: goto L_08B18C54;
    case 115u: goto L_08B18C70;
    case 116u: goto L_08B18C8C;
    case 117u: goto L_08B18CB4;
    case 118u: goto L_08B18CC0;
    case 119u: goto L_08B18CCC;
    case 120u: goto L_08B18CD4;
    case 121u: goto L_08B18CE0;
    case 122u: goto L_08B18CE4;
    case 123u: goto L_08B18CF0;
    case 124u: goto L_08B18CFC;
    case 125u: goto L_08B18D08;
    case 126u: goto L_08B18D40;
    case 127u: goto L_08B18D50;
    case 128u: goto L_08B18D58;
    case 129u: goto L_08B18D60;
    case 130u: goto L_08B18D68;
    case 131u: goto L_08B18D70;
    case 132u: goto L_08B18D78;
    case 133u: goto L_08B18D80;
    case 134u: goto L_08B18D88;
    case 135u: goto L_08B18D90;
    case 136u: goto L_08B18D98;
    case 137u: goto L_08B18DA0;
    case 138u: goto L_08B18DA8;
    case 139u: goto L_08B18DB0;
    case 140u: goto L_08B18DB8;
    case 141u: goto L_08B18DC0;
    case 142u: goto L_08B18DC8;
    case 143u: goto L_08B18DD0;
    case 144u: goto L_08B18DD8;
    case 145u: goto L_08B18DE0;
    case 146u: goto L_08B18DE8;
    case 147u: goto L_08B18DF0;
    case 148u: goto L_08B18DF8;
    case 149u: goto L_08B18E00;
    case 150u: goto L_08B18E08;
    case 151u: goto L_08B18E10;
    case 152u: goto L_08B18E18;
    case 153u: goto L_08B18E20;
    case 154u: goto L_08B18E28;
    case 155u: goto L_08B18E30;
    case 156u: goto L_08B18E38;
    case 157u: goto L_08B18E40;
    case 158u: goto L_08B18E48;
    case 159u: goto L_08B18E50;
    case 160u: goto L_08B18E58;
    case 161u: goto L_08B18E60;
    case 162u: goto L_08B18E68;
    case 163u: goto L_08B18E70;
    case 164u: goto L_08B18E78;
    case 165u: goto L_08B18E80;
    case 166u: goto L_08B18E88;
    case 167u: goto L_08B18E90;
    case 168u: goto L_08B18E98;
    case 169u: goto L_08B18EA0;
    case 170u: goto L_08B18EA8;
    case 171u: goto L_08B18EB0;
    case 172u: goto L_08B18EB8;
    case 173u: goto L_08B18EC0;
    case 174u: goto L_08B18EC8;
    case 175u: goto L_08B18ED0;
    case 176u: goto L_08B18ED8;
    case 177u: goto L_08B18EE0;
    case 178u: goto L_08B18EE8;
    case 179u: goto L_08B18EF0;
    case 180u: goto L_08B18EF8;
    case 181u: goto L_08B18F00;
    case 182u: goto L_08B18F08;
    case 183u: goto L_08B18F10;
    case 184u: goto L_08B18F18;
    case 185u: goto L_08B18F20;
    case 186u: goto L_08B18F28;
    case 187u: goto L_08B18F30;
    case 188u: goto L_08B18F38;
    case 189u: goto L_08B18F40;
    case 190u: goto L_08B18F48;
    case 191u: goto L_08B18F50;
    case 192u: goto L_08B18F78;
    case 193u: goto L_08B18F7C;
    case 194u: goto L_08B18F8C;
    case 195u: goto L_08B18F94;
    case 196u: goto L_08B18FA0;
    case 197u: goto L_08B18FAC;
    case 198u: goto L_08B18FB8;
    case 199u: goto L_08B18FC8;
    case 200u: goto L_08B18FD4;
    case 201u: goto L_08B18FE0;
    case 202u: goto L_08B18FF0;
    case 203u: goto L_08B18FFC;
    case 204u: goto L_08B19004;
    case 205u: goto L_08B19010;
    case 206u: goto L_08B19018;
    case 207u: goto L_08B19020;
    case 208u: goto L_08B1902C;
    case 209u: goto L_08B19030;
    case 210u: goto L_08B1903C;
    case 211u: goto L_08B19048;
    case 212u: goto L_08B19054;
    case 213u: goto L_08B19060;
    case 214u: goto L_08B1906C;
    case 215u: goto L_08B19074;
    case 216u: goto L_08B19080;
    case 217u: goto L_08B1908C;
    case 218u: goto L_08B19098;
    case 219u: goto L_08B190A0;
    case 220u: goto L_08B190A8;
    case 221u: goto L_08B190B0;
    case 222u: goto L_08B190B8;
    case 223u: goto L_08B190C0;
    case 224u: goto L_08B190CC;
    case 225u: goto L_08B190DC;
    case 226u: goto L_08B190EC;
    case 227u: goto L_08B190FC;
    case 228u: goto L_08B1910C;
    case 229u: goto L_08B19114;
    case 230u: goto L_08B19118;
    case 231u: goto L_08B19124;
    case 232u: goto L_08B19130;
    case 233u: goto L_08B19140;
    case 234u: goto L_08B19150;
    case 235u: goto L_08B1915C;
    case 236u: goto L_08B19168;
    case 237u: goto L_08B19178;
    case 238u: goto L_08B19184;
    case 239u: goto L_08B19194;
    case 240u: goto L_08B1919C;
    case 241u: goto L_08B191AC;
    case 242u: goto L_08B191B8;
    case 243u: goto L_08B191C8;
    case 244u: goto L_08B191D0;
    case 245u: goto L_08B191D8;
    case 246u: goto L_08B191E8;
    case 247u: goto L_08B191F8;
    case 248u: goto L_08B19204;
    case 249u: goto L_08B19210;
    case 250u: goto L_08B1921C;
    case 251u: goto L_08B19228;
    case 252u: goto L_08B19234;
    case 253u: goto L_08B19240;
    case 254u: goto L_08B1924C;
    case 255u: goto L_08B19258;
    case 256u: goto L_08B19270;
    case 257u: goto L_08B192B0;
    case 258u: goto L_08B192B8;
    case 259u: goto L_08B192C0;
    case 260u: goto L_08B192C8;
    case 261u: goto L_08B192D0;
    case 262u: goto L_08B192D8;
    case 263u: goto L_08B192E0;
    case 264u: goto L_08B192E8;
    case 265u: goto L_08B192F0;
    case 266u: goto L_08B192F8;
    case 267u: goto L_08B19300;
    case 268u: goto L_08B19308;
    case 269u: goto L_08B19310;
    case 270u: goto L_08B19318;
    case 271u: goto L_08B19320;
    case 272u: goto L_08B19328;
    case 273u: goto L_08B19330;
    case 274u: goto L_08B19338;
    case 275u: goto L_08B19340;
    case 276u: goto L_08B19348;
    case 277u: goto L_08B19350;
    case 278u: goto L_08B19358;
    case 279u: goto L_08B19360;
    case 280u: goto L_08B19368;
    case 281u: goto L_08B19370;
    case 282u: goto L_08B19378;
    case 283u: goto L_08B19380;
    case 284u: goto L_08B19388;
    case 285u: goto L_08B19390;
    case 286u: goto L_08B19398;
    case 287u: goto L_08B193A0;
    case 288u: goto L_08B193A8;
    case 289u: goto L_08B193B0;
    case 290u: goto L_08B193B8;
    case 291u: goto L_08B193C0;
    case 292u: goto L_08B193C8;
    case 293u: goto L_08B193D0;
    case 294u: goto L_08B193D8;
    case 295u: goto L_08B193E0;
    case 296u: goto L_08B193E8;
    case 297u: goto L_08B193F0;
    case 298u: goto L_08B193F8;
    case 299u: goto L_08B19400;
    case 300u: goto L_08B19408;
    case 301u: goto L_08B19410;
    case 302u: goto L_08B19538;
    case 303u: goto L_08B19548;
    case 304u: goto L_08B19560;
    case 305u: goto L_08B19578;
    case 306u: goto L_08B195A8;
    case 307u: goto L_08B195C0;
    case 308u: goto L_08B19608;
    case 309u: goto L_08B19610;
    case 310u: goto L_08B19628;
    case 311u: goto L_08B19644;
    case 312u: goto L_08B19654;
    case 313u: goto L_08B1965C;
    case 314u: goto L_08B1966C;
    case 315u: goto L_08B19678;
    case 316u: goto L_08B19688;
    case 317u: goto L_08B19690;
    case 318u: goto L_08B196B0;
    case 319u: goto L_08B196C0;
    case 320u: goto L_08B196C8;
    case 321u: goto L_08B196DC;
    case 322u: goto L_08B196E8;
    case 323u: goto L_08B196F8;
    case 324u: goto L_08B19700;
    case 325u: goto L_08B1970C;
    case 326u: goto L_08B19720;
    case 327u: goto L_08B19730;
    case 328u: goto L_08B19738;
    case 329u: goto L_08B19744;
    case 330u: goto L_08B19758;
    case 331u: goto L_08B19768;
    case 332u: goto L_08B19770;
    case 333u: goto L_08B1977C;
    case 334u: goto L_08B19788;
    case 335u: goto L_08B19798;
    case 336u: goto L_08B197A0;
    case 337u: goto L_08B197B4;
    case 338u: goto L_08B197C4;
    case 339u: goto L_08B197CC;
    case 340u: goto L_08B197EC;
    case 341u: goto L_08B197FC;
    case 342u: goto L_08B19804;
    case 343u: goto L_08B19824;
    case 344u: goto L_08B19848;
    case 345u: goto L_08B19858;
    case 346u: goto L_08B19860;
    case 347u: goto L_08B19870;
    case 348u: goto L_08B19878;
    case 349u: goto L_08B19888;
    case 350u: goto L_08B19890;
    case 351u: goto L_08B198AC;
    case 352u: goto L_08B198BC;
    case 353u: goto L_08B198C4;
    case 354u: goto L_08B198D8;
    case 355u: goto L_08B198E4;
    case 356u: goto L_08B198F4;
    case 357u: goto L_08B198FC;
    case 358u: goto L_08B19908;
    case 359u: goto L_08B19918;
    case 360u: goto L_08B19928;
    case 361u: goto L_08B19930;
    case 362u: goto L_08B19948;
    case 363u: goto L_08B19958;
    case 364u: goto L_08B19960;
    case 365u: goto L_08B19980;
    case 366u: goto L_08B19990;
    case 367u: goto L_08B19998;
    case 368u: goto L_08B199B4;
    case 369u: goto L_08B199C4;
    case 370u: goto L_08B199CC;
    case 371u: goto L_08B199E0;
    case 372u: goto L_08B199F0;
    case 373u: goto L_08B199F8;
    case 374u: goto L_08B19A04;
    case 375u: goto L_08B19A14;
    case 376u: goto L_08B19A24;
    case 377u: goto L_08B19A2C;
    case 378u: goto L_08B19A38;
    case 379u: goto L_08B19A40;
    case 380u: goto L_08B19A50;
    case 381u: goto L_08B19A58;
    case 382u: goto L_08B19A68;
    case 383u: goto L_08B19A78;
    case 384u: goto L_08B19A80;
    case 385u: goto L_08B19A9C;
    case 386u: goto L_08B19AC0;
    case 387u: goto L_08B19AE8;
    case 388u: goto L_08B19AF4;
    case 389u: goto L_08B19B04;
    case 390u: goto L_08B19B10;
    case 391u: goto L_08B19B1C;
    case 392u: goto L_08B19B34;
    case 393u: goto L_08B19B48;
    case 394u: goto L_08B19B50;
    case 395u: goto L_08B19B58;
    case 396u: goto L_08B19B60;
    case 397u: goto L_08B19B70;
    case 398u: goto L_08B19B78;
    case 399u: goto L_08B19B80;
    case 400u: goto L_08B19B88;
    case 401u: goto L_08B19B94;
    case 402u: goto L_08B19B9C;
    case 403u: goto L_08B19BA0;
    case 404u: goto L_08B19BA8;
    case 405u: goto L_08B19BAC;
    case 406u: goto L_08B19BBC;
    case 407u: goto L_08B19BD0;
    case 408u: goto L_08B19BE0;
    case 409u: goto L_08B19BF4;
    case 410u: goto L_08B19C04;
    case 411u: goto L_08B19C1C;
    case 412u: goto L_08B19C2C;
    case 413u: goto L_08B19C44;
    case 414u: goto L_08B19C54;
    case 415u: goto L_08B19C60;
    case 416u: goto L_08B19C70;
    case 417u: goto L_08B19C84;
    case 418u: goto L_08B19C94;
    case 419u: goto L_08B19CA8;
    case 420u: goto L_08B19CB4;
    case 421u: goto L_08B19CCC;
    case 422u: goto L_08B19CDC;
    case 423u: goto L_08B19CE8;
    case 424u: goto L_08B19D00;
    case 425u: goto L_08B19D10;
    case 426u: goto L_08B19D1C;
    case 427u: goto L_08B19D34;
    case 428u: goto L_08B19D48;
    case 429u: goto L_08B19D54;
    case 430u: goto L_08B19D6C;
    case 431u: goto L_08B19D80;
    case 432u: goto L_08B19D8C;
    case 433u: goto L_08B19DA4;
    case 434u: goto L_08B19DB0;
    case 435u: goto L_08B19DBC;
    case 436u: goto L_08B19DD4;
    case 437u: goto L_08B19DE4;
    case 438u: goto L_08B19DF0;
    case 439u: goto L_08B19E08;
    case 440u: goto L_08B19E60;
    case 441u: goto L_08B19E8C;
    case 442u: goto L_08B19EC8;
    case 443u: goto L_08B19ED0;
    case 444u: goto L_08B19ED8;
    case 445u: goto L_08B19EE0;
    case 446u: goto L_08B19EF0;
    case 447u: goto L_08B19F18;
    case 448u: goto L_08B19F4C;
    case 449u: goto L_08B1A030;
    case 450u: goto L_08B1A038;
    case 451u: goto L_08B1A044;
    case 452u: goto L_08B1A04C;
    case 453u: goto L_08B1A06C;
    case 454u: goto L_08B1A07C;
    case 455u: goto L_08B1A0A4;
    case 456u: goto L_08B1A0B0;
    case 457u: goto L_08B1A0BC;
    case 458u: goto L_08B1A258;
    case 459u: goto L_08B1A270;
    case 460u: goto L_08B1A288;
    case 461u: goto L_08B1A28C;
    case 462u: goto L_08B1A2B0;
    case 463u: goto L_08B1A2CC;
    case 464u: goto L_08B1A2E4;
    case 465u: goto L_08B1A30C;
    case 466u: goto L_08B1A344;
    case 467u: goto L_08B1A354;
    case 468u: goto L_08B1A398;
    case 469u: goto L_08B1A3D4;
    case 470u: goto L_08B1A404;
    case 471u: goto L_08B1A424;
    case 472u: goto L_08B1A42C;
    case 473u: goto L_08B1A464;
    case 474u: goto L_08B1A4A0;
    case 475u: goto L_08B1A4E4;
    case 476u: goto L_08B1A51C;
    case 477u: goto L_08B1A538;
    case 478u: goto L_08B1A550;
    case 479u: goto L_08B1A584;
    case 480u: goto L_08B1A5B0;
    case 481u: goto L_08B1A5BC;
    case 482u: goto L_08B1A5C4;
    case 483u: goto L_08B1A5D0;
    case 484u: goto L_08B1A5D4;
    case 485u: goto L_08B1A5D8;
    case 486u: goto L_08B1A5E0;
    case 487u: goto L_08B1A5EC;
    case 488u: goto L_08B1A5FC;
    case 489u: goto L_08B1A60C;
    case 490u: goto L_08B1A61C;
    case 491u: goto L_08B1A624;
    case 492u: goto L_08B1A62C;
    case 493u: goto L_08B1A638;
    case 494u: goto L_08B1A640;
    case 495u: goto L_08B1A64C;
    case 496u: goto L_08B1A650;
    case 497u: goto L_08B1A658;
    case 498u: goto L_08B1A65C;
    case 499u: goto L_08B1A664;
    case 500u: goto L_08B1A66C;
    case 501u: goto L_08B1A678;
    case 502u: goto L_08B1A688;
    case 503u: goto L_08B1A698;
    case 504u: goto L_08B1A6AC;
    case 505u: goto L_08B1A6B4;
    case 506u: goto L_08B1A6F0;
    case 507u: goto L_08B1A6F8;
    case 508u: goto L_08B1A708;
    case 509u: goto L_08B1A710;
    case 510u: goto L_08B1A718;
    case 511u: goto L_08B1A720;
    case 512u: goto L_08B1A728;
    case 513u: goto L_08B1A730;
    case 514u: goto L_08B1A738;
    case 515u: goto L_08B1A744;
    case 516u: goto L_08B1A750;
    case 517u: goto L_08B1A758;
    case 518u: goto L_08B1A760;
    case 519u: goto L_08B1A764;
    case 520u: goto L_08B1A76C;
    case 521u: goto L_08B1A774;
    case 522u: goto L_08B1A77C;
    case 523u: goto L_08B1A784;
    case 524u: goto L_08B1A790;
    case 525u: goto L_08B1A798;
    case 526u: goto L_08B1A7A4;
    case 527u: goto L_08B1A7AC;
    case 528u: goto L_08B1A7B4;
    case 529u: goto L_08B1A7C0;
    case 530u: goto L_08B1A7CC;
    case 531u: goto L_08B1A7D4;
    case 532u: goto L_08B1A7E0;
    case 533u: goto L_08B1A7E8;
    case 534u: goto L_08B1A7F4;
    case 535u: goto L_08B1A7FC;
    case 536u: goto L_08B1A808;
    case 537u: goto L_08B1A810;
    case 538u: goto L_08B1A818;
    case 539u: goto L_08B1A824;
    case 540u: goto L_08B1A830;
    case 541u: goto L_08B1A834;
    case 542u: goto L_08B1A83C;
    case 543u: goto L_08B1A844;
    case 544u: goto L_08B1A850;
    case 545u: goto L_08B1A85C;
    case 546u: goto L_08B1A868;
    case 547u: goto L_08B1A878;
    case 548u: goto L_08B1A884;
    case 549u: goto L_08B1A894;
    case 550u: goto L_08B1A89C;
    case 551u: goto L_08B1A8A4;
    case 552u: goto L_08B1A8AC;
    case 553u: goto L_08B1A8B4;
    case 554u: goto L_08B1A8BC;
    case 555u: goto L_08B1A8C4;
    case 556u: goto L_08B1A8C8;
    case 557u: goto L_08B1A8D0;
    case 558u: goto L_08B1A8D4;
    case 559u: goto L_08B1A8D8;
    case 560u: goto L_08B1A8E0;
    case 561u: goto L_08B1A8E8;
    case 562u: goto L_08B1A8F0;
    case 563u: goto L_08B1A8F8;
    case 564u: goto L_08B1A904;
    case 565u: goto L_08B1A910;
    case 566u: goto L_08B1A918;
    case 567u: goto L_08B1A920;
    case 568u: goto L_08B1A924;
    case 569u: goto L_08B1A92C;
    case 570u: goto L_08B1A934;
    case 571u: goto L_08B1A940;
    case 572u: goto L_08B1A948;
    case 573u: goto L_08B1A950;
    case 574u: goto L_08B1A958;
    case 575u: goto L_08B1A960;
    case 576u: goto L_08B1A96C;
    case 577u: goto L_08B1A978;
    case 578u: goto L_08B1A988;
    case 579u: goto L_08B1A990;
    case 580u: goto L_08B1A998;
    case 581u: goto L_08B1A9A0;
    case 582u: goto L_08B1A9A8;
    case 583u: goto L_08B1A9B4;
    case 584u: goto L_08B1A9BC;
    case 585u: goto L_08B1A9C0;
    case 586u: goto L_08B1A9C8;
    case 587u: goto L_08B1A9CC;
    case 588u: goto L_08B1A9D4;
    case 589u: goto L_08B1A9D8;
    case 590u: goto L_08B1A9E4;
    case 591u: goto L_08B1A9F0;
    case 592u: goto L_08B1A9F8;
    case 593u: goto L_08B1AA04;
    case 594u: goto L_08B1AA10;
    case 595u: goto L_08B1AA1C;
    case 596u: goto L_08B1AA28;
    case 597u: goto L_08B1AA34;
    case 598u: goto L_08B1AA44;
    case 599u: goto L_08B1AA54;
    case 600u: goto L_08B1AA5C;
    case 601u: goto L_08B1AA68;
    case 602u: goto L_08B1AA6C;
    case 603u: goto L_08B1AA74;
    case 604u: goto L_08B1AA88;
    case 605u: goto L_08B1AA8C;
    case 606u: goto L_08B1AA90;
    case 607u: goto L_08B1AA94;
    case 608u: goto L_08B1AA9C;
    case 609u: goto L_08B1AAA8;
    case 610u: goto L_08B1AAB0;
    case 611u: goto L_08B1AAB8;
    case 612u: goto L_08B1AAC0;
    case 613u: goto L_08B1AAC4;
    case 614u: goto L_08B1AAC8;
    case 615u: goto L_08B1AAD0;
    case 616u: goto L_08B1AAD8;
    case 617u: goto L_08B1AAE0;
    case 618u: goto L_08B1AAE8;
    case 619u: goto L_08B1AAF0;
    case 620u: goto L_08B1AAF8;
    case 621u: goto L_08B1AB00;
    case 622u: goto L_08B1AB08;
    case 623u: goto L_08B1AB10;
    case 624u: goto L_08B1AB18;
    case 625u: goto L_08B1AB20;
    case 626u: goto L_08B1AB28;
    case 627u: goto L_08B1AB30;
    case 628u: goto L_08B1AB38;
    case 629u: goto L_08B1AB40;
    case 630u: goto L_08B1AB48;
    case 631u: goto L_08B1AB70;
    case 632u: goto L_08B1AB80;
    case 633u: goto L_08B1AB8C;
    case 634u: goto L_08B1AB94;
    case 635u: goto L_08B1ABB4;
    case 636u: goto L_08B1ABBC;
    case 637u: goto L_08B1ABD0;
    case 638u: goto L_08B1ABF4;
    case 639u: goto L_08B1ABFC;
    case 640u: goto L_08B1AC10;
    case 641u: goto L_08B1AC2C;
    case 642u: goto L_08B1AC34;
    case 643u: goto L_08B1AC48;
    case 644u: goto L_08B1AC60;
    case 645u: goto L_08B1AC68;
    case 646u: goto L_08B1AC7C;
    case 647u: goto L_08B1AC98;
    case 648u: goto L_08B1ACAC;
    case 649u: goto L_08B1ACB8;
    case 650u: goto L_08B1ACD0;
    case 651u: goto L_08B1ACF0;
    case 652u: goto L_08B1AE24;
    case 653u: goto L_08B1AFF4;
    case 654u: goto L_08B1B020;
    case 655u: goto L_08B1B030;
    case 656u: goto L_08B1B038;
    case 657u: goto L_08B1B044;
    case 658u: goto L_08B1B04C;
    case 659u: goto L_08B1B060;
    case 660u: goto L_08B1B07C;
    case 661u: goto L_08B1B090;
    case 662u: goto L_08B1B0A8;
    case 663u: goto L_08B1B0AC;
    case 664u: goto L_08B1B0BC;
    case 665u: goto L_08B1B0CC;
    case 666u: goto L_08B1B0D4;
    case 667u: goto L_08B1B0E4;
    case 668u: goto L_08B1B0FC;
    case 669u: goto L_08B1B114;
    case 670u: goto L_08B1B134;
    case 671u: goto L_08B1B160;
    case 672u: goto L_08B1B180;
    case 673u: goto L_08B1B1C8;
    case 674u: goto L_08B1B1F0;
    case 675u: goto L_08B1B204;
    case 676u: goto L_08B1B208;
    case 677u: goto L_08B1B218;
    case 678u: goto L_08B1B22C;
    case 679u: goto L_08B1B244;
    case 680u: goto L_08B1B25C;
    case 681u: goto L_08B1B26C;
    case 682u: goto L_08B1B27C;
    case 683u: goto L_08B1B288;
    case 684u: goto L_08B1B28C;
    case 685u: goto L_08B1B29C;
    case 686u: goto L_08B1B2A0;
    case 687u: goto L_08B1B2A8;
    case 688u: goto L_08B1B2B0;
    case 689u: goto L_08B1B2B8;
    case 690u: goto L_08B1B2C8;
    case 691u: goto L_08B1B2D4;
    case 692u: goto L_08B1B2D8;
    case 693u: goto L_08B1B2E8;
    case 694u: goto L_08B1B2EC;
    case 695u: goto L_08B1B2F4;
    case 696u: goto L_08B1B300;
    case 697u: goto L_08B1B30C;
    case 698u: goto L_08B1B318;
    case 699u: goto L_08B1B320;
    case 700u: goto L_08B1B338;
    case 701u: goto L_08B1B34C;
    case 702u: goto L_08B1B350;
    case 703u: goto L_08B1B360;
    case 704u: goto L_08B1B370;
    case 705u: goto L_08B1B378;
    case 706u: goto L_08B1B3B8;
    case 707u: goto L_08B1B3D0;
    case 708u: goto L_08B1B3D8;
    case 709u: goto L_08B1B3FC;
    case 710u: goto L_08B1B408;
    case 711u: goto L_08B1B414;
    case 712u: goto L_08B1B420;
    case 713u: goto L_08B1B42C;
    case 714u: goto L_08B1B434;
    case 715u: goto L_08B1B43C;
    case 716u: goto L_08B1B448;
    case 717u: goto L_08B1B450;
    case 718u: goto L_08B1B460;
    case 719u: goto L_08B1B468;
    case 720u: goto L_08B1B470;
    case 721u: goto L_08B1B47C;
    case 722u: goto L_08B1B488;
    case 723u: goto L_08B1B490;
    case 724u: goto L_08B1B4A0;
    case 725u: goto L_08B1B4B0;
    case 726u: goto L_08B1B4BC;
    case 727u: goto L_08B1B4C8;
    case 728u: goto L_08B1B4D0;
    case 729u: goto L_08B1B4E0;
    case 730u: goto L_08B1B4EC;
    case 731u: goto L_08B1B4F8;
    case 732u: goto L_08B1B500;
    case 733u: goto L_08B1B50C;
    case 734u: goto L_08B1B518;
    case 735u: goto L_08B1B528;
    case 736u: goto L_08B1B530;
    case 737u: goto L_08B1B53C;
    case 738u: goto L_08B1B838;
    case 739u: goto L_08B1B878;
    case 740u: goto L_08B1B880;
    case 741u: goto L_08B1B898;
    case 742u: goto L_08B1B8BC;
    case 743u: goto L_08B1B8C8;
    case 744u: goto L_08B1B8CC;
    case 745u: goto L_08B1B8D4;
    case 746u: goto L_08B1B8DC;
    case 747u: goto L_08B1B8E4;
    case 748u: goto L_08B1B8EC;
    case 749u: goto L_08B1B8F4;
    case 750u: goto L_08B1B8FC;
    case 751u: goto L_08B1B904;
    case 752u: goto L_08B1B90C;
    case 753u: goto L_08B1B914;
    case 754u: goto L_08B1B91C;
    case 755u: goto L_08B1B924;
    case 756u: goto L_08B1B92C;
    case 757u: goto L_08B1B934;
    case 758u: goto L_08B1B93C;
    case 759u: goto L_08B1B944;
    case 760u: goto L_08B1B94C;
    case 761u: goto L_08B1B954;
    case 762u: goto L_08B1B95C;
    case 763u: goto L_08B1B964;
    case 764u: goto L_08B1B96C;
    case 765u: goto L_08B1B974;
    case 766u: goto L_08B1B97C;
    case 767u: goto L_08B1B984;
    case 768u: goto L_08B1B994;
    case 769u: goto L_08B1B9AC;
    case 770u: goto L_08B1B9D8;
    case 771u: goto L_08B1B9FC;
    case 772u: goto L_08B1BA04;
    case 773u: goto L_08B1BA0C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B18000:
    if (0u == 0u) (void)(0u);
    goto L_08B18004;
L_08B18004:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 0u>();
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B1800Cu, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B18020:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<85u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    ctx.gpr[26] = (ctx.gpr[17] ^ 28001u);
    rt.unsupported(0x08B1802Cu, 0x75716341u, "unknown not lowered yet"); return;
L_08B18044:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<85u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    ctx.gpr[26] = (ctx.gpr[17] ^ 28001u);
    ctx.execute_vfpu_vscl_ct<82u, 101u, 108u, 1u>();
    rt.unsupported(0x08B18054u, 0x4C657361u, "unknown not lowered yet"); return;
L_08B18078:
    rt.unsupported(0x08B18078u, 0x43534944u, "unknown not lowered yet"); return;
L_08B18084:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B18088u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1808Cu, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B180A0:
    // nop
    goto L_08B180A4;
L_08B180A4:
    rt.unsupported(0x08B180A4u, 0x43534944u, "unknown not lowered yet"); return;
L_08B180B0:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B180B4u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B180B8u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B180CC:
    // nop
    goto L_08B180D0;
L_08B180D0:
    rt.unsupported(0x08B180D0u, 0x43534944u, "unknown not lowered yet"); return;
L_08B180DC:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B180E0u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B180E4u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B180F8:
    // nop
    goto L_08B180FC;
L_08B180FC:
    rt.unsupported(0x08B180FCu, 0x43534944u, "unknown not lowered yet"); return;
L_08B18108:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B1810Cu, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B18110u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B18124:
    // nop
    goto L_08B18128;
L_08B18128:
    rt.unsupported(0x08B18128u, 0x43534944u, "unknown not lowered yet"); return;
L_08B18134:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B18138u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1813Cu, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B1814C:
    if (static_cast<std::int32_t>(ctx.gpr[18]) <= 0) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 301u, 0x08B2B208u>(ctx, &aot_mem); return;
    }
    goto L_08B18154;
L_08B18154:
    rt.unsupported(0x08B18154u, 0x43534944u, "unknown not lowered yet"); return;
L_08B18160:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B18164u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B18168u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B18178:
    rt.unsupported(0x08B18178u, 0x474D492Eu, "cop1? not lowered yet"); return;
L_08B18180:
    rt.unsupported(0x08B18180u, 0x43534944u, "unknown not lowered yet"); return;
L_08B1818C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B18190u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B18194u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B181AC:
    rt.unsupported(0x08B181ACu, 0x43534944u, "unknown not lowered yet"); return;
L_08B181B8:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B181BCu, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B181C0u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B181D8:
    rt.unsupported(0x08B181D8u, 0x45524C41u, "cop1? not lowered yet"); return;
L_08B181E8:
    rt.unsupported(0x08B181E8u, 0x45534552u, "cop1? not lowered yet"); return;
L_08B181F8:
    rt.unsupported(0x08B181F8u, 0x45524C41u, "cop1? not lowered yet"); return;
L_08B18214:
    rt.unsupported(0x08B18214u, 0x74696177u, "unknown not lowered yet"); return;
L_08B18228:
    rt.unsupported(0x08B18228u, 0x000A6B6Fu, "special? not lowered yet"); return;
L_08B1822C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B18230u, 0x4D414552u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 991u, 0x08B236E4u>(ctx, &aot_mem); return;
    }
    goto L_08B18234;
L_08B18234:
    rt.unsupported(0x08B18234u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B18244:
    ctx.gpr[13] = (ctx.gpr[9] < static_cast<std::uint32_t>(26917) ? 1u : 0u);
    if (0u == 0u) (void)(0u);
    goto L_08B1824C;
L_08B1824C:
    rt.unsupported(0x08B1824Cu, 0x45524C41u, "cop1? not lowered yet"); return;
L_08B18264:
    ctx.execute_vfpu_compare3(114u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B18268u, 0x676E6976u, "vfpu1 not lowered yet"); return;
L_08B18274:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B18278u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B182E0:
    ctx.gpr[5] = (ctx.gpr[1] & 25705u);
    rt.unsupported(0x08B182E4u, 0x00006932u, "special? not lowered yet"); return;
L_08B182E8:
    rt.unsupported(0x08B182E8u, 0x736F6C63u, "unknown not lowered yet"); return;
L_08B1830C:
    rt.unsupported(0x08B1830Cu, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B1831C:
    rt.unsupported(0x08B1831Cu, 0x4C434948u, "unknown not lowered yet"); return;
L_08B1832C:
    rt.unsupported(0x08B1832Cu, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B18348:
    rt.unsupported(0x08B18348u, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B18358:
    rt.unsupported(0x08B18358u, 0x69252044u, "unknown not lowered yet"); return;
L_08B18364:
    rt.unsupported(0x08B18364u, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B1837C:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(9766));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(9766));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(9766));
    ctx.execute_vfpu_vscl_ct<38u, 67u, 114u, 1u>();
    rt.unsupported(0x08B1838Cu, 0x6E697461u, "vfpu3 not lowered yet"); return;
L_08B183A0:
    rt.unsupported(0x08B183A0u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B183A8:
    ctx.execute_vfpu_vscl_ct<67u, 84u, 104u, 1u>();
    rt.unsupported(0x08B183ACu, 0x69726353u, "unknown not lowered yet"); return;
L_08B183BC:
    rt.unsupported(0x08B183BCu, 0x41544144u, "unknown not lowered yet"); return;
L_08B183C4:
    rt.unsupported(0x08B183C4u, 0x6E69616Du, "vfpu3 not lowered yet"); return;
L_08B183D0:
    rt.unsupported(0x08B183D0u, 0x00006272u, "special? not lowered yet"); return;
L_08B183D4:
    rt.unsupported(0x08B183D4u, 0x69726353u, "unknown not lowered yet"); return;
L_08B183E0:
    // nop
    goto L_08B183E4;
L_08B183E4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B183E8u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08B188F8:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B188FCu, 0x00006576u, "special? not lowered yet"); return;
L_08B18900:
    rt.unsupported(0x08B18900u, 0x63675F5Fu, "vfpu0 not lowered yet"); return;
L_08B18908:
    if (ctx.gpr[27] == ctx.gpr[4]) {
    rt.unsupported(0x08B1890Cu, 0x74697270u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 225u, 0x08B31A10u>(ctx, &aot_mem); return;
    }
    goto L_08B18910;
L_08B18910:
    rt.unsupported(0x08B18910u, 0x696C4265u, "unknown not lowered yet"); return;
L_08B18924:
    // nop
    goto L_08B18928;
L_08B18928:
    rt.unsupported(0x08B18928u, 0x42646441u, "unknown not lowered yet"); return;
L_08B18938:
    rt.unsupported(0x08B18938u, 0x61647055u, "vfpu0 not lowered yet"); return;
L_08B18948:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    ctx.execute_vfpu_vcmp_ct<101u, 66u, 1u, 6u>();
    rt.unsupported(0x08B18950u, 0x00007069u, "special? not lowered yet"); return;
L_08B18954:
    rt.unsupported(0x08B18954u, 0x4C646441u, "unknown not lowered yet"); return;
L_08B1896C:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    ctx.execute_vfpu_compare3(118u, 101u, 76u, 1u, 6u);
    if (ctx.gpr[19] == ctx.gpr[12]) {
    rt.unsupported(0x08B18978u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 95u, 0x08B30F04u>(ctx, &aot_mem); return;
    }
    goto L_08B1897C;
L_08B1897C:
    rt.unsupported(0x08B1897Cu, 0x70696C42u, "unknown not lowered yet"); return;
L_08B18984:
    rt.unsupported(0x08B18984u, 0x42746553u, "unknown not lowered yet"); return;
L_08B18990:
    ctx.execute_vfpu_compare3(108u, 101u, 70u, 1u, 6u);
    rt.unsupported(0x08B18994u, 0x616C5072u, "vfpu0 not lowered yet"); return;
L_08B189A0:
    // nop
    goto L_08B189A4;
L_08B189A4:
    rt.unsupported(0x08B189A4u, 0x77617244u, "unknown not lowered yet"); return;
L_08B189B0:
    rt.unsupported(0x08B189B0u, 0x77617244u, "unknown not lowered yet"); return;
L_08B189BC:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    rt.unsupported(0x08B189C0u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 266u, 0x08B31F0Cu>(ctx, &aot_mem); return;
    }
    goto L_08B189C4;
L_08B189C4:
    rt.unsupported(0x08B189C4u, 0x70696C42u, "unknown not lowered yet"); return;
L_08B189D0:
    rt.unsupported(0x08B189D0u, 0x776F6853u, "unknown not lowered yet"); return;
L_08B189E4:
    rt.unsupported(0x08B189E4u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B189F0:
    rt.unsupported(0x08B189F0u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B18A00:
    rt.unsupported(0x08B18A00u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18A14:
    rt.unsupported(0x08B18A14u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18A20:
    rt.unsupported(0x08B18A20u, 0x4D643365u, "unknown not lowered yet"); return;
L_08B18A2C:
    rt.unsupported(0x08B18A2Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18A38:
    rt.unsupported(0x08B18A38u, 0x006E6F69u, "special? not lowered yet"); return;
L_08B18A3C:
    rt.unsupported(0x08B18A3Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18A4C:
    rt.unsupported(0x08B18A4Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18A58:
    rt.unsupported(0x08B18A58u, 0x68746C61u, "unknown not lowered yet"); return;
L_08B18A60:
    rt.unsupported(0x08B18A60u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18A68:
    ctx.execute_vfpu_compare3(101u, 116u, 80u, 1u, 6u);
    goto L_08B18A6C;
L_08B18A6C:
    rt.unsupported(0x08B18A6Cu, 0x69746973u, "unknown not lowered yet"); return;
L_08B18A74:
    rt.unsupported(0x08B18A74u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18A8C:
    rt.unsupported(0x08B18A8Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18AA4:
    rt.unsupported(0x08B18AA4u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18ABC:
    rt.unsupported(0x08B18ABCu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18AC8:
    rt.unsupported(0x08B18AC8u, 0x746E6563u, "unknown not lowered yet"); return;
L_08B18AE0:
    rt.unsupported(0x08B18AE0u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18AF4:
    rt.unsupported(0x08B18AF4u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18B00:
    ctx.execute_vfpu_vscl_ct<101u, 114u, 103u, 1u>();
    if (ctx.gpr[27] == ctx.gpr[25]) {
    rt.unsupported(0x08B18B08u, 0x00706F74u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 218u, 0x08B318C0u>(ctx, &aot_mem); return;
    }
    goto L_08B18B0C;
L_08B18B0C:
    rt.unsupported(0x08B18B0Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18B18:
    ctx.execute_vfpu_compare3(114u, 68u, 111u, 1u, 6u);
    rt.unsupported(0x08B18B1Cu, 0x636F4C72u, "vfpu0 not lowered yet"); return;
L_08B18B24:
    rt.unsupported(0x08B18B24u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18B30:
    rt.unsupported(0x08B18B30u, 0x4E736572u, "unknown not lowered yet"); return;
L_08B18B3C:
    rt.unsupported(0x08B18B3Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18B48:
    rt.unsupported(0x08B18B48u, 0x72756F6Cu, "unknown not lowered yet"); return;
L_08B18B50:
    rt.unsupported(0x08B18B50u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18B5C:
    rt.unsupported(0x08B18B5Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B18B60:
    ctx.execute_vfpu_vscl_ct<68u, 101u, 108u, 1u>();
    ctx.execute_vfpu_vscl_ct<116u, 101u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    (void)(0u | 0u);
    goto L_08B18B70;
L_08B18B70:
    ctx.execute_vfpu_vscl_ct<73u, 115u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    ctx.execute_vfpu_vscl_ct<101u, 87u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<107u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    // nop
    goto L_08B18B84;
L_08B18B84:
    rt.unsupported(0x08B18B84u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18BA0:
    rt.unsupported(0x08B18BA0u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18BC0:
    rt.unsupported(0x08B18BC0u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18BDC:
    rt.unsupported(0x08B18BDCu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18BFC:
    rt.unsupported(0x08B18BFCu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18C1C:
    rt.unsupported(0x08B18C1Cu, 0x69686556u, "unknown not lowered yet"); return;
L_08B18C20:
    rt.unsupported(0x08B18C20u, 0x41656C63u, "unknown not lowered yet"); return;
L_08B18C30:
    rt.unsupported(0x08B18C30u, 0x696D694Cu, "unknown not lowered yet"); return;
L_08B18C40:
    rt.unsupported(0x08B18C40u, 0x696D694Cu, "unknown not lowered yet"); return;
L_08B18C54:
    rt.unsupported(0x08B18C54u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18C70:
    rt.unsupported(0x08B18C70u, 0x69686556u, "unknown not lowered yet"); return;
L_08B18C8C:
    rt.unsupported(0x08B18C8Cu, 0x61766E49u, "vfpu0 not lowered yet"); return;
L_08B18CB4:
    rt.unsupported(0x08B18CB4u, 0x4D5E545Eu, "unknown not lowered yet"); return;
L_08B18CC0:
    rt.unsupported(0x08B18CC0u, 0x4C524143u, "unknown not lowered yet"); return;
L_08B18CCC:
    rt.unsupported(0x08B18CCCu, 0x44454B43u, "unsupported CFC1 control register"); return;
    // nop
    goto L_08B18CD4;
L_08B18CD4:
    rt.unsupported(0x08B18CD4u, 0x4C524143u, "unknown not lowered yet"); return;
L_08B18CE0:
    rt.unsupported(0x08B18CE0u, 0x00004445u, "special? not lowered yet"); return;
L_08B18CE4:
    rt.unsupported(0x08B18CE4u, 0x4C524143u, "unknown not lowered yet"); return;
L_08B18CF0:
    rt.unsupported(0x08B18CF0u, 0x4F4C5F31u, "unknown not lowered yet"); return;
L_08B18CFC:
    rt.unsupported(0x08B18CFCu, 0x4C524143u, "unknown not lowered yet"); return;
L_08B18D08:
    rt.unsupported(0x08B18D08u, 0x4F4C5F32u, "unknown not lowered yet"); return;
L_08B18D40:
    ctx.execute_vfpu_vminmax(67u, 68u, 117u, 1u, false);
    rt.unsupported(0x08B18D44u, 0x624F796Du, "vfpu0 not lowered yet"); return;
L_08B18D50:
    rt.unsupported(0x08B18D50u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18D58:
    rt.unsupported(0x08B18D58u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18D60:
    rt.unsupported(0x08B18D60u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18D68:
    rt.unsupported(0x08B18D68u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18D70:
    rt.unsupported(0x08B18D70u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18D78:
    rt.unsupported(0x08B18D78u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18D80:
    rt.unsupported(0x08B18D80u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18D88:
    rt.unsupported(0x08B18D88u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18D90:
    rt.unsupported(0x08B18D90u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18D98:
    rt.unsupported(0x08B18D98u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DA0:
    rt.unsupported(0x08B18DA0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DA8:
    rt.unsupported(0x08B18DA8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DB0:
    rt.unsupported(0x08B18DB0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DB8:
    rt.unsupported(0x08B18DB8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DC0:
    rt.unsupported(0x08B18DC0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DC8:
    rt.unsupported(0x08B18DC8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DD0:
    rt.unsupported(0x08B18DD0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DD8:
    rt.unsupported(0x08B18DD8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DE0:
    rt.unsupported(0x08B18DE0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DE8:
    rt.unsupported(0x08B18DE8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DF0:
    rt.unsupported(0x08B18DF0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18DF8:
    rt.unsupported(0x08B18DF8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E00:
    rt.unsupported(0x08B18E00u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E08:
    rt.unsupported(0x08B18E08u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E10:
    rt.unsupported(0x08B18E10u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E18:
    rt.unsupported(0x08B18E18u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E20:
    rt.unsupported(0x08B18E20u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E28:
    rt.unsupported(0x08B18E28u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E30:
    rt.unsupported(0x08B18E30u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E38:
    rt.unsupported(0x08B18E38u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E40:
    rt.unsupported(0x08B18E40u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E48:
    rt.unsupported(0x08B18E48u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E50:
    rt.unsupported(0x08B18E50u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E58:
    rt.unsupported(0x08B18E58u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E60:
    rt.unsupported(0x08B18E60u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E68:
    rt.unsupported(0x08B18E68u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E70:
    rt.unsupported(0x08B18E70u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E78:
    rt.unsupported(0x08B18E78u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E80:
    rt.unsupported(0x08B18E80u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E88:
    rt.unsupported(0x08B18E88u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E90:
    rt.unsupported(0x08B18E90u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18E98:
    rt.unsupported(0x08B18E98u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EA0:
    rt.unsupported(0x08B18EA0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EA8:
    rt.unsupported(0x08B18EA8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EB0:
    rt.unsupported(0x08B18EB0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EB8:
    rt.unsupported(0x08B18EB8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EC0:
    rt.unsupported(0x08B18EC0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EC8:
    rt.unsupported(0x08B18EC8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18ED0:
    rt.unsupported(0x08B18ED0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18ED8:
    rt.unsupported(0x08B18ED8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EE0:
    rt.unsupported(0x08B18EE0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EE8:
    rt.unsupported(0x08B18EE8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EF0:
    rt.unsupported(0x08B18EF0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18EF8:
    rt.unsupported(0x08B18EF8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F00:
    rt.unsupported(0x08B18F00u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F08:
    rt.unsupported(0x08B18F08u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F10:
    rt.unsupported(0x08B18F10u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F18:
    rt.unsupported(0x08B18F18u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F20:
    rt.unsupported(0x08B18F20u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F28:
    rt.unsupported(0x08B18F28u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F30:
    rt.unsupported(0x08B18F30u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F38:
    rt.unsupported(0x08B18F38u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F40:
    rt.unsupported(0x08B18F40u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F48:
    rt.unsupported(0x08B18F48u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F50:
    rt.unsupported(0x08B18F50u, 0x79646954u, "unknown not lowered yet"); return;
L_08B18F78:
    rt.unsupported(0x08B18F78u, 0x00647568u, "special? not lowered yet"); return;
L_08B18F7C:
    rt.unsupported(0x08B18F7Cu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18F8C:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B18F90u, 0x00000077u, "special? not lowered yet"); return;
L_08B18F94:
    rt.unsupported(0x08B18F94u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18FA0:
    rt.unsupported(0x08B18FA0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18FAC:
    rt.unsupported(0x08B18FACu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18FB8:
    rt.unsupported(0x08B18FB8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18FC8:
    rt.unsupported(0x08B18FC8u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18FD4:
    rt.unsupported(0x08B18FD4u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18FE0:
    rt.unsupported(0x08B18FE0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18FF0:
    rt.unsupported(0x08B18FF0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B18FFC:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    rt.unsupported(0x08B19000u, 0x00007372u, "special? not lowered yet"); return;
L_08B19004:
    rt.unsupported(0x08B19004u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B19010:
    rt.unsupported(0x08B19010u, 0x62756C63u, "vfpu0 not lowered yet"); return;
L_08B19018:
    rt.unsupported(0x08B19018u, 0x61627563u, "vfpu0 not lowered yet"); return;
L_08B19020:
    ctx.execute_vfpu_vminmax(102u, 105u, 108u, 1u, false);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<116u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B19028u, 0x00006F69u, "special? not lowered yet"); return;
L_08B1902C:
    ctx.gpr[14] = (~(ctx.gpr[3] | ctx.gpr[14]));
    goto L_08B19030;
L_08B19030:
    rt.unsupported(0x08B19030u, 0x74696168u, "unknown not lowered yet"); return;
L_08B1903C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<119u, 97u, 114u, 1u>();
    // nop
    goto L_08B19048;
L_08B19048:
    rt.unsupported(0x08B19048u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19054:
    rt.unsupported(0x08B19054u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19060:
    rt.unsupported(0x08B19060u, 0x63656369u, "vfpu0 not lowered yet"); return;
L_08B1906C:
    rt.unsupported(0x08B1906Cu, 0x6261636Bu, "vfpu0 not lowered yet"); return;
L_08B19074:
    ctx.execute_vfpu_vscl_ct<108u, 111u, 118u, 1u>();
    rt.unsupported(0x08B19078u, 0x74736966u, "unknown not lowered yet"); return;
L_08B19080:
    rt.unsupported(0x08B19080u, 0x6E697270u, "vfpu3 not lowered yet"); return;
L_08B1908C:
    rt.unsupported(0x08B1908Cu, 0x706F7270u, "unknown not lowered yet"); return;
L_08B19098:
    if (static_cast<std::int32_t>(ctx.gpr[11]) <= 0) {
    ctx.gpr[14] = (ctx.gpr[3] + ctx.gpr[4]);
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 368u, 0x08B365E8u>(ctx, &aot_mem); return;
    }
    goto L_08B190A0;
L_08B190A0:
    rt.unsupported(0x08B190A0u, 0x61727073u, "vfpu0 not lowered yet"); return;
L_08B190A8:
    rt.unsupported(0x08B190A8u, 0x69687374u, "unknown not lowered yet"); return;
L_08B190B0:
    ctx.execute_vfpu_vminmax(116u, 111u, 109u, 1u, false);
    rt.unsupported(0x08B190B4u, 0x00000079u, "special? not lowered yet"); return;
L_08B190B8:
    rt.unsupported(0x08B190B8u, 0x6E6F6870u, "vfpu3 not lowered yet"); return;
L_08B190C0:
    rt.unsupported(0x08B190C0u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B190CC:
    rt.unsupported(0x08B190CCu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B190DC:
    rt.unsupported(0x08B190DCu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B190EC:
    rt.unsupported(0x08B190ECu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B190FC:
    rt.unsupported(0x08B190FCu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B1910C:
    rt.unsupported(0x08B1910Cu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19114:
    rt.unsupported(0x08B19114u, 0x00656E6Fu, "special? not lowered yet"); return;
L_08B19118:
    rt.unsupported(0x08B19118u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19124:
    rt.unsupported(0x08B19124u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19130:
    rt.unsupported(0x08B19130u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19140:
    rt.unsupported(0x08B19140u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19150:
    rt.unsupported(0x08B19150u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B1915C:
    rt.unsupported(0x08B1915Cu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19168:
    rt.unsupported(0x08B19168u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19178:
    rt.unsupported(0x08B19178u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19184:
    rt.unsupported(0x08B19184u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B19194:
    rt.unsupported(0x08B19194u, 0x625F706Du, "vfpu0 not lowered yet"); return;
L_08B1919C:
    rt.unsupported(0x08B1919Cu, 0x635F706Du, "vfpu0 not lowered yet"); return;
L_08B191AC:
    rt.unsupported(0x08B191ACu, 0x705F706Du, "unknown not lowered yet"); return;
L_08B191B8:
    ctx.execute_vfpu_compare3(109u, 112u, 95u, 1u, 6u);
    rt.unsupported(0x08B191BCu, 0x63656A62u, "vfpu0 not lowered yet"); return;
L_08B191C8:
    rt.unsupported(0x08B191C8u, 0x635F706Du, "vfpu0 not lowered yet"); return;
L_08B191D0:
    rt.unsupported(0x08B191D0u, 0x745F706Du, "unknown not lowered yet"); return;
L_08B191D8:
    rt.unsupported(0x08B191D8u, 0x635F706Du, "vfpu0 not lowered yet"); return;
L_08B191E8:
    rt.unsupported(0x08B191E8u, 0x745F706Du, "unknown not lowered yet"); return;
L_08B191F8:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[1] & 24439u);
    // nop
    goto L_08B19204;
L_08B19204:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[9] & 24439u);
    // nop
    goto L_08B19210;
L_08B19210:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[17] & 24439u);
    // nop
    goto L_08B1921C;
L_08B1921C:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[25] & 24439u);
    // nop
    goto L_08B19228;
L_08B19228:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[1] | 24439u);
    // nop
    goto L_08B19234;
L_08B19234:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[9] | 24439u);
    // nop
    goto L_08B19240;
L_08B19240:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[17] | 24439u);
    // nop
    goto L_08B1924C;
L_08B1924C:
    ctx.execute_vfpu_compare3(97u, 114u, 114u, 1u, 6u);
    ctx.gpr[16] = (ctx.gpr[25] | 24439u);
    // nop
    goto L_08B19258;
L_08B19258:
    rt.unsupported(0x08B19258u, 0x20646441u, "unknown not lowered yet"); return;
L_08B19270:
    rt.unsupported(0x08B19270u, 0x4D646441u, "unknown not lowered yet"); return;
L_08B192B0:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192B4u, 0x00000031u, "special? not lowered yet"); return;
L_08B192B8:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192BCu, 0x00000032u, "special? not lowered yet"); return;
L_08B192C0:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192C4u, 0x00000033u, "special? not lowered yet"); return;
L_08B192C8:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192CCu, 0x00000034u, "special? not lowered yet"); return;
L_08B192D0:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192D4u, 0x00000035u, "special? not lowered yet"); return;
L_08B192D8:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192DCu, 0x00000036u, "special? not lowered yet"); return;
L_08B192E0:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192E4u, 0x00000037u, "special? not lowered yet"); return;
L_08B192E8:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192ECu, 0x00000038u, "special? not lowered yet"); return;
L_08B192F0:
    ctx.gpr[31] = (ctx.gpr[2] & 18252u);
    rt.unsupported(0x08B192F4u, 0x00000039u, "special? not lowered yet"); return;
L_08B192F8:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B192FCu, 0x00000030u, "special? not lowered yet"); return;
L_08B19300:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B19304u, 0x00000031u, "special? not lowered yet"); return;
L_08B19308:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B1930Cu, 0x00000032u, "special? not lowered yet"); return;
L_08B19310:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B19314u, 0x00000033u, "special? not lowered yet"); return;
L_08B19318:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B1931Cu, 0x00000034u, "special? not lowered yet"); return;
L_08B19320:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B19324u, 0x00000035u, "special? not lowered yet"); return;
L_08B19328:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B1932Cu, 0x00000036u, "special? not lowered yet"); return;
L_08B19330:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B19334u, 0x00000037u, "special? not lowered yet"); return;
L_08B19338:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B1933Cu, 0x00000038u, "special? not lowered yet"); return;
L_08B19340:
    ctx.gpr[31] = (ctx.gpr[10] & 18252u);
    rt.unsupported(0x08B19344u, 0x00000039u, "special? not lowered yet"); return;
L_08B19348:
    ctx.gpr[31] = (ctx.gpr[18] & 18252u);
    rt.unsupported(0x08B1934Cu, 0x00000030u, "special? not lowered yet"); return;
L_08B19350:
    ctx.gpr[31] = (ctx.gpr[18] & 18252u);
    rt.unsupported(0x08B19354u, 0x00000031u, "special? not lowered yet"); return;
L_08B19358:
    ctx.gpr[31] = (ctx.gpr[18] & 18252u);
    rt.unsupported(0x08B1935Cu, 0x00000032u, "special? not lowered yet"); return;
L_08B19360:
    ctx.gpr[31] = (ctx.gpr[18] & 18252u);
    rt.unsupported(0x08B19364u, 0x00000033u, "special? not lowered yet"); return;
L_08B19368:
    ctx.gpr[31] = (ctx.gpr[18] & 18252u);
    rt.unsupported(0x08B1936Cu, 0x00000034u, "special? not lowered yet"); return;
L_08B19370:
    ctx.gpr[31] = (ctx.gpr[18] & 18252u);
    rt.unsupported(0x08B19374u, 0x00000035u, "special? not lowered yet"); return;
L_08B19378:
    ctx.gpr[31] = (ctx.gpr[26] & 18252u);
    rt.unsupported(0x08B1937Cu, 0x00000035u, "special? not lowered yet"); return;
L_08B19380:
    ctx.gpr[31] = (ctx.gpr[10] | 18252u);
    rt.unsupported(0x08B19384u, 0x00000032u, "special? not lowered yet"); return;
L_08B19388:
    ctx.gpr[31] = (ctx.gpr[10] | 18252u);
    rt.unsupported(0x08B1938Cu, 0x00000031u, "special? not lowered yet"); return;
L_08B19390:
    ctx.gpr[31] = (ctx.gpr[10] | 18252u);
    rt.unsupported(0x08B19394u, 0x00000033u, "special? not lowered yet"); return;
L_08B19398:
    ctx.gpr[31] = (ctx.gpr[26] & 18252u);
    rt.unsupported(0x08B1939Cu, 0x00000036u, "special? not lowered yet"); return;
L_08B193A0:
    ctx.gpr[31] = (ctx.gpr[26] & 18252u);
    rt.unsupported(0x08B193A4u, 0x00000037u, "special? not lowered yet"); return;
L_08B193A8:
    ctx.gpr[31] = (ctx.gpr[26] & 18252u);
    rt.unsupported(0x08B193ACu, 0x00000038u, "special? not lowered yet"); return;
L_08B193B0:
    ctx.gpr[31] = (ctx.gpr[26] & 18252u);
    rt.unsupported(0x08B193B4u, 0x00000039u, "special? not lowered yet"); return;
L_08B193B8:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B193BCu, 0x00000030u, "special? not lowered yet"); return;
L_08B193C0:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B193C4u, 0x00000031u, "special? not lowered yet"); return;
L_08B193C8:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B193CCu, 0x00000032u, "special? not lowered yet"); return;
L_08B193D0:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B193D4u, 0x00000033u, "special? not lowered yet"); return;
L_08B193D8:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B193DCu, 0x00000034u, "special? not lowered yet"); return;
L_08B193E0:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B193E4u, 0x00000035u, "special? not lowered yet"); return;
L_08B193E8:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B193ECu, 0x00000036u, "special? not lowered yet"); return;
L_08B193F0:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B193F4u, 0x00000037u, "special? not lowered yet"); return;
L_08B193F8:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B193FCu, 0x00000038u, "special? not lowered yet"); return;
L_08B19400:
    ctx.gpr[31] = (ctx.gpr[2] | 18252u);
    rt.unsupported(0x08B19404u, 0x00000039u, "special? not lowered yet"); return;
L_08B19408:
    ctx.gpr[31] = (ctx.gpr[10] | 18252u);
    rt.unsupported(0x08B1940Cu, 0x00000030u, "special? not lowered yet"); return;
L_08B19410:
    ctx.gpr[31] = (ctx.gpr[10] | 18252u);
    rt.unsupported(0x08B19414u, 0x00000034u, "special? not lowered yet"); return;
L_08B19538:
    rt.unsupported(0x08B19538u, 0x74696E69u, "unknown not lowered yet"); return;
L_08B19548:
    rt.unsupported(0x08B19548u, 0x6E65706Fu, "vfpu3 not lowered yet"); return;
L_08B19560:
    rt.unsupported(0x08B19560u, 0x736F6C63u, "unknown not lowered yet"); return;
L_08B19578:
    rt.unsupported(0x08B19578u, 0x74746573u, "unknown not lowered yet"); return;
L_08B195A8:
    ctx.execute_vfpu_vminmax(97u, 110u, 105u, 1u, false);
    rt.unsupported(0x08B195ACu, 0x20732520u, "unknown not lowered yet"); return;
L_08B195C0:
    rt.unsupported(0x08B195C0u, 0x4170702Au, "unknown not lowered yet"); return;
L_08B19608:
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 14u>();
    // nop
    goto L_08B19610;
L_08B19610:
    ctx.execute_vfpu_vscl_ct<67u, 69u, 108u, 1u>();
    rt.unsupported(0x08B19614u, 0x746E656Du, "unknown not lowered yet"); return;
L_08B19628:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B1962Cu, 0x706F2072u, "unknown not lowered yet"); return;
L_08B19644:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19648u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19654:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19658u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 201u, 0x08B2AB90u>(ctx, &aot_mem); return;
    }
    goto L_08B1965C;
L_08B1965C:
    rt.unsupported(0x08B1965Cu, 0x4E495F43u, "unknown not lowered yet"); return;
L_08B1966C:
    rt.unsupported(0x08B1966Cu, 0x63657220u, "vfpu0 not lowered yet"); return;
L_08B19678:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1967Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19688:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1968Cu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 206u, 0x08B2ABC4u>(ctx, &aot_mem); return;
    }
    goto L_08B19690;
L_08B19690:
    rt.unsupported(0x08B19690u, 0x4F4E5F43u, "unknown not lowered yet"); return;
L_08B196B0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B196B4u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B196C0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B196C4u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 208u, 0x08B2ABFCu>(ctx, &aot_mem); return;
    }
    goto L_08B196C8;
L_08B196C8:
    rt.unsupported(0x08B196C8u, 0x4E495F43u, "unknown not lowered yet"); return;
L_08B196DC:
    rt.unsupported(0x08B196DCu, 0x72206E6Fu, "unknown not lowered yet"); return;
L_08B196E8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B196ECu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B196F8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B196FCu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 211u, 0x08B2AC34u>(ctx, &aot_mem); return;
    }
    goto L_08B19700;
L_08B19700:
    rt.unsupported(0x08B19700u, 0x4F535F43u, "unknown not lowered yet"); return;
L_08B1970C:
    rt.unsupported(0x08B1970Cu, 0x44455445u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19710u, 0x206E6F20u, "unknown not lowered yet"); return;
L_08B19720:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19724u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19730:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19734u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 217u, 0x08B2AC6Cu>(ctx, &aot_mem); return;
    }
    goto L_08B19738;
L_08B19738:
    rt.unsupported(0x08B19738u, 0x4F535F43u, "unknown not lowered yet"); return;
L_08B19744:
    rt.unsupported(0x08B19744u, 0x44455452u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19748u, 0x206E6F20u, "unknown not lowered yet"); return;
L_08B19758:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1975Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19768:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1976Cu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 221u, 0x08B2ACA4u>(ctx, &aot_mem); return;
    }
    goto L_08B19770;
L_08B19770:
    rt.unsupported(0x08B19770u, 0x49545F43u, "cop2/vfpu not lowered yet"); return;
L_08B1977C:
    rt.unsupported(0x08B1977Cu, 0x63657220u, "vfpu0 not lowered yet"); return;
L_08B19788:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1978Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19798:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1979Cu, 0x45544E49u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 224u, 0x08B2ACD4u>(ctx, &aot_mem); return;
    }
    goto L_08B197A0;
L_08B197A0:
    rt.unsupported(0x08B197A0u, 0x4C414E52u, "unknown not lowered yet"); return;
L_08B197B4:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B197B8u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B197C4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B197C8u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 228u, 0x08B2AD00u>(ctx, &aot_mem); return;
    }
    goto L_08B197CC;
L_08B197CC:
    rt.unsupported(0x08B197CCu, 0x4F4E5F43u, "unknown not lowered yet"); return;
L_08B197EC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B197F0u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B197FC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19800u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 233u, 0x08B2AD38u>(ctx, &aot_mem); return;
    }
    goto L_08B19804;
L_08B19804:
    rt.unsupported(0x08B19804u, 0x48545F43u, "cop2/vfpu not lowered yet"); return;
L_08B19824:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19828u, 0x6E55202Au, "vfpu3 not lowered yet"); return;
L_08B19848:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1984Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19858:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1985Cu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 240u, 0x08B2AD94u>(ctx, &aot_mem); return;
    }
    goto L_08B19860;
L_08B19860:
    rt.unsupported(0x08B19860u, 0x4E495F43u, "unknown not lowered yet"); return;
L_08B19870:
    rt.unsupported(0x08B19870u, 0x6E657320u, "vfpu3 not lowered yet"); return;
L_08B19878:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1987Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19888:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1988Cu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 242u, 0x08B2ADC4u>(ctx, &aot_mem); return;
    }
    goto L_08B19890;
L_08B19890:
    rt.unsupported(0x08B19890u, 0x4F4E5F43u, "unknown not lowered yet"); return;
L_08B198AC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B198B0u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B198BC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B198C0u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 247u, 0x08B2ADF8u>(ctx, &aot_mem); return;
    }
    goto L_08B198C4;
L_08B198C4:
    rt.unsupported(0x08B198C4u, 0x4E495F43u, "unknown not lowered yet"); return;
L_08B198D8:
    rt.unsupported(0x08B198D8u, 0x73206E6Fu, "unknown not lowered yet"); return;
L_08B198E4:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B198E8u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B198F4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B198F8u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 250u, 0x08B2AE30u>(ctx, &aot_mem); return;
    }
    goto L_08B198FC;
L_08B198FC:
    rt.unsupported(0x08B198FCu, 0x4F535F43u, "unknown not lowered yet"); return;
L_08B19908:
    rt.unsupported(0x08B19908u, 0x44455445u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1990Cu, 0x206E6F20u, "unknown not lowered yet"); return;
L_08B19918:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1991Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19928:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1992Cu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 254u, 0x08B2AE64u>(ctx, &aot_mem); return;
    }
    goto L_08B19930;
L_08B19930:
    rt.unsupported(0x08B19930u, 0x4E495F43u, "unknown not lowered yet"); return;
L_08B19948:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1994Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19958:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1995Cu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 259u, 0x08B2AE94u>(ctx, &aot_mem); return;
    }
    goto L_08B19960;
L_08B19960:
    rt.unsupported(0x08B19960u, 0x4E495F43u, "unknown not lowered yet"); return;
L_08B19980:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19984u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19990:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19994u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 261u, 0x08B2AECCu>(ctx, &aot_mem); return;
    }
    goto L_08B19998;
L_08B19998:
    rt.unsupported(0x08B19998u, 0x4E495F43u, "unknown not lowered yet"); return;
L_08B199B4:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B199B8u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B199C4:
    rt.unsupported(0x08B199C8u, 0x535F4F4Eu, "control flow in delay slot"); return;
L_08B199CC:
    rt.unsupported(0x08B199CCu, 0x45434150u, "cop1? not lowered yet"); return;
L_08B199E0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B199E4u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B199F0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B199F4u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 263u, 0x08B2AF2Cu>(ctx, &aot_mem); return;
    }
    goto L_08B199F8;
L_08B199F8:
    rt.unsupported(0x08B199F8u, 0x4F535F43u, "unknown not lowered yet"); return;
L_08B19A04:
    rt.unsupported(0x08B19A04u, 0x44455452u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19A08u, 0x206E6F20u, "unknown not lowered yet"); return;
L_08B19A14:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19A18u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19A24:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19A28u, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 264u, 0x08B2AF60u>(ctx, &aot_mem); return;
    }
    goto L_08B19A2C;
L_08B19A2C:
    rt.unsupported(0x08B19A2Cu, 0x49545F43u, "cop2/vfpu not lowered yet"); return;
L_08B19A38:
    rt.unsupported(0x08B19A38u, 0x6E657320u, "vfpu3 not lowered yet"); return;
L_08B19A40:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19A44u, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19A50:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19A54u, 0x45544E49u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 266u, 0x08B2AF8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B19A58;
L_08B19A58:
    rt.unsupported(0x08B19A58u, 0x4C414E52u, "unknown not lowered yet"); return;
L_08B19A68:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19A6Cu, 0x4353202Au, "unknown not lowered yet"); return;
L_08B19A78:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19A7Cu, 0x4F484441u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 269u, 0x08B2AFB4u>(ctx, &aot_mem); return;
    }
    goto L_08B19A80;
L_08B19A80:
    rt.unsupported(0x08B19A80u, 0x48545F43u, "cop2/vfpu not lowered yet"); return;
L_08B19A9C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B19AA0u, 0x6E55202Au, "vfpu3 not lowered yet"); return;
L_08B19AC0:
    rt.unsupported(0x08B19AC0u, 0x70737553u, "unknown not lowered yet"); return;
L_08B19AE8:
    rt.unsupported(0x08B19AE8u, 0x2041554Cu, "unknown not lowered yet"); return;
L_08B19AF4:
    rt.unsupported(0x08B19AF4u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08B19B04:
    rt.unsupported(0x08B19B04u, 0x2041554Cu, "unknown not lowered yet"); return;
L_08B19B10:
    rt.unsupported(0x08B19B10u, 0x43534944u, "unknown not lowered yet"); return;
L_08B19B1C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19B20u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19B24u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19B34:
    ctx.gpr[1] = (ctx.gpr[18] < static_cast<std::uint32_t>(21836) ? 1u : 0u);
    rt.unsupported(0x08B19B38u, 0x443B434Cu, "cop1? not lowered yet"); return;
L_08B19B48:
    if (ctx.gpr[9] != ctx.gpr[15]) {
    rt.unsupported(0x08B19B4Cu, 0x49445253u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 277u, 0x08B2B080u>(ctx, &aot_mem); return;
    }
    goto L_08B19B50;
L_08B19B50:
    rt.unsupported(0x08B19B54u, 0x52435341u, "control flow in delay slot"); return;
L_08B19B58:
    if (ctx.gpr[26] == ctx.gpr[20]) {
    rt.unsupported(0x08B19B5Cu, 0x4C2E3F2Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 381u, 0x08B2DC80u>(ctx, &aot_mem); return;
    }
    goto L_08B19B60;
L_08B19B60:
    rt.unsupported(0x08B19B60u, 0x443B4155u, "cop1? not lowered yet"); return;
L_08B19B70:
    if (ctx.gpr[9] != ctx.gpr[15]) {
    rt.unsupported(0x08B19B74u, 0x49445253u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 282u, 0x08B2B0A8u>(ctx, &aot_mem); return;
    }
    goto L_08B19B78;
L_08B19B78:
    rt.unsupported(0x08B19B7Cu, 0x52435341u, "control flow in delay slot"); return;
L_08B19B80:
    if (ctx.gpr[26] == ctx.gpr[20]) {
    rt.unsupported(0x08B19B84u, 0x443B3F2Fu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 385u, 0x08B2DCA8u>(ctx, &aot_mem); return;
    }
    goto L_08B19B88;
L_08B19B88:
    ctx.gpr[3] = (ctx.gpr[2] & 21321u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    rt.unsupported(0x08B19B90u, 0x41475F50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 809u, 0x08B25878u>(ctx, &aot_mem); return;
    }
    goto L_08B19B94;
L_08B19B94:
    if (ctx.gpr[9] != ctx.gpr[15]) {
    rt.unsupported(0x08B19B98u, 0x49445253u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 284u, 0x08B2B0CCu>(ctx, &aot_mem); return;
    }
    goto L_08B19B9C;
L_08B19B9C:
    ctx.gpr[5] = (ctx.lo);
    goto L_08B19BA0;
L_08B19BA0:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B19BA4u, 0x48544150u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 704u, 0x08B2F0D4u>(ctx, &aot_mem); return;
    }
    goto L_08B19BA8;
L_08B19BA8:
    // nop
    goto L_08B19BAC;
L_08B19BAC:
    rt.unsupported(0x08B19BACu, 0x74736F68u, "unknown not lowered yet"); return;
L_08B19BBC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<83u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<47u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<84u, 1u>(vfpu_d); }
    rt.unsupported(0x08B19BC0u, 0x68746165u, "unknown not lowered yet"); return;
L_08B19BD0:
    rt.unsupported(0x08B19BD0u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B19BE0:
    ctx.execute_vfpu_vminmax(84u, 83u, 47u, 1u, false);
    rt.unsupported(0x08B19BE4u, 0x69746C75u, "unknown not lowered yet"); return;
L_08B19BF4:
    rt.unsupported(0x08B19BF4u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B19C04:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<83u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<47u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<84u, 1u>(vfpu_d); }
    rt.unsupported(0x08B19C08u, 0x6E656665u, "vfpu3 not lowered yet"); return;
L_08B19C1C:
    rt.unsupported(0x08B19C1Cu, 0x74736F68u, "unknown not lowered yet"); return;
L_08B19C2C:
    rt.unsupported(0x08B19C2Cu, 0x632F5354u, "vfpu0 not lowered yet"); return;
L_08B19C44:
    rt.unsupported(0x08B19C44u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B19C54:
    rt.unsupported(0x08B19C54u, 0x742F5354u, "unknown not lowered yet"); return;
L_08B19C60:
    rt.unsupported(0x08B19C60u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B19C70:
    rt.unsupported(0x08B19C70u, 0x682F5354u, "unknown not lowered yet"); return;
L_08B19C84:
    rt.unsupported(0x08B19C84u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B19C94:
    rt.unsupported(0x08B19C94u, 0x732F5354u, "unknown not lowered yet"); return;
L_08B19CA8:
    rt.unsupported(0x08B19CA8u, 0x43534944u, "unknown not lowered yet"); return;
L_08B19CB4:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19CB8u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19CBCu, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19CCC:
    ctx.execute_vfpu_vminmax(97u, 116u, 104u, 1u, false);
    rt.unsupported(0x08B19CD0u, 0x68637461u, "unknown not lowered yet"); return;
L_08B19CDC:
    rt.unsupported(0x08B19CDCu, 0x43534944u, "unknown not lowered yet"); return;
L_08B19CE8:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19CECu, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19CF0u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19D00:
    rt.unsupported(0x08B19D00u, 0x7269746Cu, "unknown not lowered yet"); return;
L_08B19D10:
    rt.unsupported(0x08B19D10u, 0x43534944u, "unknown not lowered yet"); return;
L_08B19D1C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19D20u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19D24u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19D34:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<102u, 1u>(vfpu_d); }
    rt.unsupported(0x08B19D38u, 0x62656874u, "vfpu0 not lowered yet"); return;
L_08B19D48:
    rt.unsupported(0x08B19D48u, 0x43534944u, "unknown not lowered yet"); return;
L_08B19D54:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19D58u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19D5Cu, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19D6C:
    rt.unsupported(0x08B19D6Cu, 0x72757470u, "unknown not lowered yet"); return;
L_08B19D80:
    rt.unsupported(0x08B19D80u, 0x43534944u, "unknown not lowered yet"); return;
L_08B19D8C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19D90u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19D94u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19DA4:
    ctx.execute_vfpu_vcmp_ct<107u, 46u, 1u, 14u>();
    ctx.execute_vfpu_vcmp_ct<97u, 46u, 1u, 5u>();
    (void)(0u - 0u);
    goto L_08B19DB0;
L_08B19DB0:
    rt.unsupported(0x08B19DB0u, 0x43534944u, "unknown not lowered yet"); return;
L_08B19DBC:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19DC0u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19DC4u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19DD4:
    rt.unsupported(0x08B19DD4u, 0x72617074u, "unknown not lowered yet"); return;
L_08B19DE4:
    rt.unsupported(0x08B19DE4u, 0x43534944u, "unknown not lowered yet"); return;
L_08B19DF0:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B19DF4u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B19DF8u, 0x4C2F5249u, "unknown not lowered yet"); return;
L_08B19E08:
    rt.unsupported(0x08B19E08u, 0x73797478u, "unknown not lowered yet"); return;
L_08B19E60:
    rt.unsupported(0x08B19E60u, 0x61766E49u, "vfpu0 not lowered yet"); return;
L_08B19E8C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<110u, 1u>(vfpu_d); }
    rt.unsupported(0x08B19E90u, 0x206F7420u, "unknown not lowered yet"); return;
L_08B19EC8:
    ctx.gpr[31] = (ctx.gpr[18] & 16711u);
    rt.unsupported(0x08B19ECCu, 0x00000030u, "special? not lowered yet"); return;
L_08B19ED0:
    ctx.gpr[31] = (ctx.gpr[10] & 16711u);
    rt.unsupported(0x08B19ED4u, 0x00000039u, "special? not lowered yet"); return;
L_08B19ED8:
    ctx.gpr[31] = (ctx.gpr[10] & 21059u);
    // nop
    goto L_08B19EE0;
L_08B19EE0:
    rt.unsupported(0x08B19EE0u, 0x74696E69u, "unknown not lowered yet"); return;
L_08B19EF0:
    rt.unsupported(0x08B19EF0u, 0x74746573u, "unknown not lowered yet"); return;
L_08B19F18:
    rt.unsupported(0x08B19F18u, 0x74746573u, "unknown not lowered yet"); return;
L_08B19F4C:
    ctx.gpr[31] = (ctx.gpr[10] & 16711u);
    rt.unsupported(0x08B19F50u, 0x00000030u, "special? not lowered yet"); return;
L_08B1A030:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1A034u, 0x454A424Fu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 102u, 0x08B2A554u>(ctx, &aot_mem); return;
    }
    goto L_08B1A038;
L_08B1A038:
    rt.unsupported(0x08B1A038u, 0x425F5443u, "unknown not lowered yet"); return;
L_08B1A044:
    rt.unsupported(0x08B1A048u, 0x575F5942u, "control flow in delay slot"); return;
L_08B1A04C:
    rt.unsupported(0x08B1A04Cu, 0x4F504145u, "unknown not lowered yet"); return;
L_08B1A06C:
    rt.unsupported(0x08B1A06Cu, 0x41454C43u, "unknown not lowered yet"); return;
L_08B1A07C:
    rt.unsupported(0x08B1A07Cu, 0x45575F54u, "cop1? not lowered yet"); return;
L_08B1A0A4:
    rt.unsupported(0x08B1A0A4u, 0x4D4D4F43u, "unknown not lowered yet"); return;
L_08B1A0B0:
    rt.unsupported(0x08B1A0B0u, 0x414C5049u, "unknown not lowered yet"); return;
L_08B1A0BC:
    rt.unsupported(0x08B1A0BCu, 0x445F5450u, "unsupported CFC1 control register"); return;
    // nop
    (void)(ctx.pc = 0x0915393Cu, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B1A258:
    rt.unsupported(0x08B1A25Cu, 0x0897F5B4u, "control flow in delay slot"); return;
L_08B1A270:
    rt.unsupported(0x08B1A270u, 0x20296425u, "unknown not lowered yet"); return;
L_08B1A288:
    ctx.gpr[12] = (0u | ctx.gpr[10]);
    goto L_08B1A28C;
L_08B1A28C:
    rt.unsupported(0x08B1A28Cu, 0x69797274u, "unknown not lowered yet"); return;
L_08B1A2B0:
    rt.unsupported(0x08B1A2B0u, 0x69797254u, "unknown not lowered yet"); return;
L_08B1A2CC:
    rt.unsupported(0x08B1A2CCu, 0x6E617254u, "vfpu3 not lowered yet"); return;
L_08B1A2E4:
    rt.unsupported(0x08B1A2E4u, 0x20646550u, "unknown not lowered yet"); return;
L_08B1A30C:
    rt.unsupported(0x08B1A30Cu, 0x20646550u, "unknown not lowered yet"); return;
L_08B1A344:
    rt.unsupported(0x08B1A344u, 0x20646550u, "unknown not lowered yet"); return;
L_08B1A354:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<80u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1A358u, 0x74617453u, "unknown not lowered yet"); return;
L_08B1A398:
    rt.unsupported(0x08B1A398u, 0x6E612020u, "vfpu3 not lowered yet"); return;
L_08B1A3D4:
    rt.unsupported(0x08B1A3D4u, 0x7373696Du, "unknown not lowered yet"); return;
L_08B1A404:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1A408u, 0x75632064u, "unknown not lowered yet"); return;
L_08B1A424:
    if (ctx.gpr[27] == ctx.gpr[4]) {
    ctx.execute_vfpu_vscl_ct<116u, 97u, 116u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 376u, 0x08B33968u>(ctx, &aot_mem); return;
    }
    goto L_08B1A42C;
L_08B1A42C:
    ctx.execute_vfpu_vhdp(32u, 40u, 37u, 1u);
    rt.unsupported(0x08B1A430u, 0x20662520u, "unknown not lowered yet"); return;
L_08B1A464:
    rt.unsupported(0x08B1A464u, 0x696E6120u, "unknown not lowered yet"); return;
L_08B1A4A0:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    rt.unsupported(0x08B1A4ACu, 0x20292929u, "unknown not lowered yet"); return;
L_08B1A4E4:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    rt.unsupported(0x08B1A4F0u, 0x20292929u, "unknown not lowered yet"); return;
L_08B1A51C:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < 10537 ? 1u : 0u);
    rt.unsupported(0x08B1A528u, 0x20292929u, "unknown not lowered yet"); return;
L_08B1A538:
    rt.unsupported(0x08B1A538u, 0x4320444Eu, "unknown not lowered yet"); return;
L_08B1A550:
    rt.unsupported(0x08B1A550u, 0x200A4445u, "unknown not lowered yet"); return;
L_08B1A584:
    rt.unsupported(0x08B1A584u, 0x6E726157u, "vfpu3 not lowered yet"); return;
L_08B1A5B0:
    rt.unsupported(0x08B1A5B0u, 0x48474946u, "cop2/vfpu not lowered yet"); return;
L_08B1A5BC:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    ctx.gpr[8] = (ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 93u, 0x08B2C70Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1A5C4;
L_08B1A5C4:
    rt.unsupported(0x08B1A5C4u, 0x45524946u, "cop1? not lowered yet"); return;
L_08B1A5D0:
    jump_target = 0u;
    ctx.gpr[10] = (0x08B1A5D8u);
    rt.unsupported(0x08B1A5D4u, 0x45524946u, "cop1? not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1A5D8u) goto L_08B1A5D8;
    return;
L_08B1A5D4:
    rt.unsupported(0x08B1A5D4u, 0x45524946u, "cop1? not lowered yet"); return;
L_08B1A5D8:
    if (ctx.gpr[2] == ctx.gpr[9]) {
    rt.unsupported(0x08B1A5DCu, 0x00005245u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 468u, 0x08B2DF28u>(ctx, &aot_mem); return;
    }
    goto L_08B1A5E0;
L_08B1A5E0:
    rt.unsupported(0x08B1A5E0u, 0x45524946u, "cop1? not lowered yet"); return;
L_08B1A5EC:
    rt.unsupported(0x08B1A5ECu, 0x45524946u, "cop1? not lowered yet"); return;
L_08B1A5FC:
    rt.unsupported(0x08B1A5FCu, 0x44455355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1A600u, 0x4E4F5445u, "unknown not lowered yet"); return;
L_08B1A60C:
    rt.unsupported(0x08B1A60Cu, 0x45524946u, "cop1? not lowered yet"); return;
L_08B1A61C:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    rt.unsupported(0x08B1A620u, 0x46444550u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 95u, 0x08B2C76Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1A624;
L_08B1A624:
    rt.unsupported(0x08B1A624u, 0x434D4F52u, "unknown not lowered yet"); return;
L_08B1A62C:
    rt.unsupported(0x08B1A62Cu, 0x45524946u, "cop1? not lowered yet"); return;
L_08B1A638:
    rt.unsupported(0x08B1A638u, 0x41435449u, "unknown not lowered yet"); return;
L_08B1A640:
    rt.unsupported(0x08B1A640u, 0x4C4C494Bu, "unknown not lowered yet"); return;
L_08B1A64C:
    (void)(0u << (0u & 31u));
    goto L_08B1A650;
L_08B1A650:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    rt.unsupported(0x08B1A654u, 0x49484556u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 98u, 0x08B2C7A0u>(ctx, &aot_mem); return;
    }
    goto L_08B1A658;
L_08B1A658:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 17u));
    goto L_08B1A65C;
L_08B1A65C:
    rt.unsupported(0x08B1A65Cu, 0x454C454Du, "cop1? not lowered yet"); return;
L_08B1A664:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    rt.unsupported(0x08B1A668u, 0x45425245u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 308u, 0x08B2D7A8u>(ctx, &aot_mem); return;
    }
    goto L_08B1A66C;
L_08B1A66C:
    rt.unsupported(0x08B1A66Cu, 0x49484E45u, "cop2/vfpu not lowered yet"); return;
L_08B1A678:
    rt.unsupported(0x08B1A678u, 0x74726F66u, "unknown not lowered yet"); return;
L_08B1A688:
    rt.unsupported(0x08B1A688u, 0x74726F66u, "unknown not lowered yet"); return;
L_08B1A698:
    rt.unsupported(0x08B1A698u, 0x206D6572u, "unknown not lowered yet"); return;
L_08B1A6AC:
    rt.unsupported(0x08B1A6ACu, 0x75646E69u, "unknown not lowered yet"); return;
L_08B1A6B4:
    rt.unsupported(0x08B1A6B4u, 0x45455246u, "cop1? not lowered yet"); return;
L_08B1A6F0:
    rt.unsupported(0x08B1A6F0u, 0x74736966u, "unknown not lowered yet"); return;
L_08B1A6F8:
    rt.unsupported(0x08B1A6F8u, 0x614D6F6Eu, "vfpu0 not lowered yet"); return;
L_08B1A708:
    rt.unsupported(0x08B1A708u, 0x73617262u, "unknown not lowered yet"); return;
L_08B1A710:
    rt.unsupported(0x08B1A710u, 0x73617262u, "unknown not lowered yet"); return;
L_08B1A718:
    ctx.execute_vfpu_vscl_ct<115u, 99u, 114u, 1u>();
    rt.unsupported(0x08B1A71Cu, 0x00000077u, "special? not lowered yet"); return;
L_08B1A720:
    ctx.execute_vfpu_vscl_ct<115u, 99u, 114u, 1u>();
    rt.unsupported(0x08B1A724u, 0x00004177u, "special? not lowered yet"); return;
L_08B1A728:
    ctx.execute_vfpu_vhdp(103u, 111u, 108u, 1u);
    // nop
    goto L_08B1A730;
L_08B1A730:
    ctx.execute_vfpu_vhdp(103u, 111u, 108u, 1u);
    rt.unsupported(0x08B1A734u, 0x00000041u, "special? not lowered yet"); return;
L_08B1A738:
    rt.unsupported(0x08B1A738u, 0x6867696Eu, "unknown not lowered yet"); return;
L_08B1A744:
    rt.unsupported(0x08B1A744u, 0x6867696Eu, "unknown not lowered yet"); return;
L_08B1A750:
    ctx.execute_vfpu_vhdp(107u, 110u, 105u, 1u);
    (void)(0u | 0u);
    goto L_08B1A758;
L_08B1A758:
    ctx.execute_vfpu_vhdp(107u, 110u, 105u, 1u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08B1A760;
L_08B1A760:
    { const bool signed_ok = ctx.execute_signed_sub(12u, 3u, 20u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B1A760u, 0x00746162u); return; } }
    goto L_08B1A764;
L_08B1A764:
    ctx.execute_vfpu_vminmax(98u, 97u, 116u, 1u, false);
    // nop
    goto L_08B1A76C;
L_08B1A76C:
    ctx.execute_vfpu_vminmax(104u, 97u, 109u, 1u, false);
    ctx.gpr[14] = (0u | 0u);
    goto L_08B1A774;
L_08B1A774:
    ctx.execute_vfpu_vminmax(104u, 97u, 109u, 1u, false);
    ctx.gpr[14] = (ctx.gpr[2] | ctx.gpr[1]);
    goto L_08B1A77C;
L_08B1A77C:
    rt.unsupported(0x08B1A77Cu, 0x61656C63u, "vfpu0 not lowered yet"); return;
L_08B1A784:
    rt.unsupported(0x08B1A784u, 0x61656C63u, "vfpu0 not lowered yet"); return;
L_08B1A790:
    rt.unsupported(0x08B1A790u, 0x6863616Du, "unknown not lowered yet"); return;
L_08B1A798:
    rt.unsupported(0x08B1A798u, 0x6863616Du, "unknown not lowered yet"); return;
L_08B1A7A4:
    rt.unsupported(0x08B1A7A4u, 0x726F7773u, "unknown not lowered yet"); return;
L_08B1A7AC:
    rt.unsupported(0x08B1A7ACu, 0x726F7773u, "unknown not lowered yet"); return;
L_08B1A7B4:
    rt.unsupported(0x08B1A7B4u, 0x69616863u, "unknown not lowered yet"); return;
L_08B1A7C0:
    rt.unsupported(0x08B1A7C0u, 0x69616863u, "unknown not lowered yet"); return;
L_08B1A7CC:
    rt.unsupported(0x08B1A7CCu, 0x6E657267u, "vfpu3 not lowered yet"); return;
L_08B1A7D4:
    rt.unsupported(0x08B1A7D4u, 0x6E657267u, "vfpu3 not lowered yet"); return;
L_08B1A7E0:
    rt.unsupported(0x08B1A7E0u, 0x72616574u, "unknown not lowered yet"); return;
L_08B1A7E8:
    rt.unsupported(0x08B1A7E8u, 0x72616574u, "unknown not lowered yet"); return;
L_08B1A7F4:
    ctx.execute_vfpu_compare3(109u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1A7F8u, 0x00766F74u, "special? not lowered yet"); return;
L_08B1A7FC:
    ctx.execute_vfpu_compare3(109u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1A800u, 0x41766F74u, "unknown not lowered yet"); return;
L_08B1A808:
    rt.unsupported(0x08B1A808u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B1A810:
    rt.unsupported(0x08B1A810u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B1A818:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    ctx.gpr[14] = (ctx.gpr[11] & 30023u);
    // nop
    goto L_08B1A824;
L_08B1A824:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    ctx.gpr[14] = (ctx.gpr[11] & 30023u);
    rt.unsupported(0x08B1A82Cu, 0x00000041u, "special? not lowered yet"); return;
L_08B1A830:
    // nop
    goto L_08B1A834;
L_08B1A834:
    rt.unsupported(0x08B1A834u, 0x68747970u, "unknown not lowered yet"); return;
L_08B1A83C:
    rt.unsupported(0x08B1A83Cu, 0x68747970u, "unknown not lowered yet"); return;
L_08B1A844:
    ctx.execute_vfpu_compare3(99u, 104u, 114u, 1u, 6u);
    rt.unsupported(0x08B1A848u, 0x7567656Du, "unknown not lowered yet"); return;
L_08B1A850:
    ctx.execute_vfpu_compare3(99u, 104u, 114u, 1u, 6u);
    rt.unsupported(0x08B1A854u, 0x7567656Du, "unknown not lowered yet"); return;
L_08B1A85C:
    rt.unsupported(0x08B1A85Cu, 0x746F6873u, "unknown not lowered yet"); return;
L_08B1A868:
    rt.unsupported(0x08B1A868u, 0x73617073u, "unknown not lowered yet"); return;
L_08B1A878:
    rt.unsupported(0x08B1A878u, 0x62757473u, "vfpu0 not lowered yet"); return;
L_08B1A884:
    rt.unsupported(0x08B1A884u, 0x62757473u, "vfpu0 not lowered yet"); return;
L_08B1A894:
    ctx.gpr[3] = (ctx.gpr[11] ^ 25972u);
    // nop
    goto L_08B1A89C;
L_08B1A89C:
    ctx.gpr[3] = (ctx.gpr[11] ^ 25972u);
    rt.unsupported(0x08B1A8A0u, 0x00000041u, "special? not lowered yet"); return;
L_08B1A8A4:
    ctx.gpr[9] = (ctx.gpr[11] & 31349u);
    // nop
    goto L_08B1A8AC;
L_08B1A8AC:
    ctx.gpr[9] = (ctx.gpr[11] & 31349u);
    rt.unsupported(0x08B1A8B0u, 0x00000041u, "special? not lowered yet"); return;
L_08B1A8B4:
    ctx.gpr[9] = (ctx.gpr[19] & 31349u);
    // nop
    goto L_08B1A8BC;
L_08B1A8BC:
    ctx.gpr[9] = (ctx.gpr[19] & 31349u);
    rt.unsupported(0x08B1A8C0u, 0x00000041u, "special? not lowered yet"); return;
L_08B1A8C4:
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[1]) < static_cast<std::int32_t>(ctx.gpr[21]) ? ctx.gpr[1] : ctx.gpr[21]);
    goto L_08B1A8C8;
L_08B1A8C8:
    rt.unsupported(0x08B1A8C8u, 0x4135706Du, "unknown not lowered yet"); return;
L_08B1A8D0:
    ctx.gpr[6] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B1A8D4;
L_08B1A8D4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? ctx.gpr[2] : ctx.gpr[1]);
    goto L_08B1A8D8;
L_08B1A8D8:
    ctx.execute_vfpu_vscl_ct<114u, 117u, 103u, 1u>();
    rt.unsupported(0x08B1A8DCu, 0x00000072u, "special? not lowered yet"); return;
L_08B1A8E0:
    ctx.execute_vfpu_vscl_ct<114u, 117u, 103u, 1u>();
    rt.unsupported(0x08B1A8E4u, 0x00004172u, "special? not lowered yet"); return;
L_08B1A8E8:
    rt.unsupported(0x08B1A8E8u, 0x70696E73u, "unknown not lowered yet"); return;
L_08B1A8F0:
    rt.unsupported(0x08B1A8F0u, 0x70696E73u, "unknown not lowered yet"); return;
L_08B1A8F8:
    ctx.execute_vfpu_vscl_ct<108u, 97u, 115u, 1u>();
    ctx.execute_vfpu_compare3(114u, 115u, 99u, 1u, 6u);
    rt.unsupported(0x08B1A900u, 0x00006570u, "special? not lowered yet"); return;
L_08B1A904:
    ctx.execute_vfpu_vscl_ct<108u, 97u, 115u, 1u>();
    ctx.execute_vfpu_compare3(114u, 115u, 99u, 1u, 6u);
    rt.unsupported(0x08B1A90Cu, 0x00416570u, "special? not lowered yet"); return;
L_08B1A910:
    ctx.execute_vfpu_vminmax(102u, 108u, 97u, 1u, false);
    ctx.gpr[14] = (0u | 0u);
    goto L_08B1A918;
L_08B1A918:
    ctx.execute_vfpu_vminmax(102u, 108u, 97u, 1u, false);
    ctx.gpr[14] = (ctx.gpr[2] | ctx.gpr[1]);
    goto L_08B1A920;
L_08B1A920:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[1]) < static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[1] : ctx.gpr[16]);
    goto L_08B1A924;
L_08B1A924:
    rt.unsupported(0x08B1A924u, 0x4130366Du, "unknown not lowered yet"); return;
L_08B1A92C:
    rt.unsupported(0x08B1A92Cu, 0x696E696Du, "unknown not lowered yet"); return;
L_08B1A934:
    rt.unsupported(0x08B1A934u, 0x696E696Du, "unknown not lowered yet"); return;
L_08B1A940:
    rt.unsupported(0x08B1A940u, 0x626D6F62u, "vfpu0 not lowered yet"); return;
L_08B1A948:
    rt.unsupported(0x08B1A948u, 0x626D6F62u, "vfpu0 not lowered yet"); return;
L_08B1A950:
    ctx.execute_vfpu_vscl_ct<99u, 97u, 109u, 1u>();
    rt.unsupported(0x08B1A954u, 0x00006172u, "special? not lowered yet"); return;
L_08B1A958:
    ctx.execute_vfpu_vscl_ct<99u, 97u, 109u, 1u>();
    rt.unsupported(0x08B1A95Cu, 0x00416172u, "special? not lowered yet"); return;
L_08B1A960:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    rt.unsupported(0x08B1A964u, 0x6B636F72u, "unknown not lowered yet"); return;
L_08B1A96C:
    rt.unsupported(0x08B1A96Cu, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B1A978:
    rt.unsupported(0x08B1A978u, 0x61646172u, "vfpu0 not lowered yet"); return;
L_08B1A988:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B1A98Cu, 0x69736E69u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 327u, 0x08B32F14u>(ctx, &aot_mem); return;
    }
    goto L_08B1A990;
L_08B1A990:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<49u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    ctx.gpr[14] = (ctx.gpr[3] + ctx.gpr[11]);
    goto L_08B1A998;
L_08B1A998:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B1A99Cu, 0x69736E69u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 328u, 0x08B32F24u>(ctx, &aot_mem); return;
    }
    goto L_08B1A9A0;
L_08B1A9A0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<50u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    ctx.gpr[14] = (ctx.gpr[3] + ctx.gpr[11]);
    goto L_08B1A9A8;
L_08B1A9A8:
    rt.unsupported(0x08B1A9A8u, 0x6E647568u, "vfpu3 not lowered yet"); return;
L_08B1A9B4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B1A9B8u, 0x69736E69u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 330u, 0x08B32F40u>(ctx, &aot_mem); return;
    }
    goto L_08B1A9BC;
L_08B1A9BC:
    ctx.gpr[12] = (ctx.gpr[1] & ctx.gpr[17]);
    goto L_08B1A9C0;
L_08B1A9C0:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B1A9C4u, 0x69736E69u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 331u, 0x08B32F4Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1A9C8;
L_08B1A9C8:
    ctx.gpr[12] = (ctx.gpr[1] & ctx.gpr[18]);
    goto L_08B1A9CC;
L_08B1A9CC:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    ctx.execute_vfpu_vcmp_ct<117u, 116u, 1u, 15u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 332u, 0x08B32F58u>(ctx, &aot_mem); return;
    }
    goto L_08B1A9D4;
L_08B1A9D4:
    rt.unsupported(0x08B1A9D4u, 0x00656E69u, "special? not lowered yet"); return;
L_08B1A9D8:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    rt.unsupported(0x08B1A9DCu, 0x70696E73u, "unknown not lowered yet"); return;
L_08B1A9E4:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    rt.unsupported(0x08B1A9E8u, 0x70696E73u, "unknown not lowered yet"); return;
L_08B1A9F0:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    rt.unsupported(0x08B1A9F4u, 0x0036314Du, "special? not lowered yet"); return;
L_08B1A9F8:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    ctx.execute_vfpu_vminmax(77u, 49u, 54u, 1u, false);
    // nop
    goto L_08B1AA04;
L_08B1AA04:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    ctx.execute_vfpu_vscl_ct<108u, 97u, 115u, 1u>();
    rt.unsupported(0x08B1AA0Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B1AA10:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 116u, 1u>();
    ctx.execute_vfpu_vscl_ct<108u, 97u, 115u, 1u>();
    rt.unsupported(0x08B1AA18u, 0x00006D72u, "special? not lowered yet"); return;
L_08B1AA1C:
    ctx.execute_vfpu_vscl_ct<108u, 97u, 115u, 1u>();
    rt.unsupported(0x08B1AA20u, 0x746F6472u, "unknown not lowered yet"); return;
L_08B1AA28:
    ctx.execute_vfpu_vscl_ct<108u, 97u, 115u, 1u>();
    rt.unsupported(0x08B1AA2Cu, 0x746F6472u, "unknown not lowered yet"); return;
L_08B1AA34:
    rt.unsupported(0x08B1AA34u, 0x77656976u, "unknown not lowered yet"); return;
L_08B1AA44:
    rt.unsupported(0x08B1AA44u, 0x77656976u, "unknown not lowered yet"); return;
L_08B1AA54:
    ctx.execute_vfpu_vscl_ct<98u, 108u, 101u, 1u>();
    ctx.gpr[12] = (ctx.gpr[3] & ctx.gpr[18]);
    goto L_08B1AA5C;
L_08B1AA5C:
    rt.unsupported(0x08B1AA5Cu, 0x6E657267u, "vfpu3 not lowered yet"); return;
L_08B1AA68:
    (void)(0u < 0u ? 1u : 0u);
    goto L_08B1AA6C;
L_08B1AA6C:
    ctx.gpr[16] = (ctx.gpr[1] ^ 9508u);
    (void)(0u & 0u);
    goto L_08B1AA74;
L_08B1AA74:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<50u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    ctx.gpr[16] = (ctx.gpr[17] & 9530u);
    (void)(0u & 0u);
    rt.unsupported(0x08B1AA80u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B1AA88:
    rt.unsupported(0x08B1AA88u, 0x00647568u, "special? not lowered yet"); return;
L_08B1AA8C:
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B1AA90;
L_08B1AA90:
    ctx.gpr[12] = (0u | 0u);
    goto L_08B1AA94;
L_08B1AA94:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<51u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    // nop
    goto L_08B1AA9C;
L_08B1AA9C:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    ctx.gpr[13] = (ctx.gpr[9] + static_cast<std::uint32_t>(8292));
    ctx.gpr[5] = (0u & 0u);
    goto L_08B1AAA8;
L_08B1AAA8:
    rt.unsupported(0x08B1AAA8u, 0x45534843u, "cop1? not lowered yet"); return;
L_08B1AAB0:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    (void)(0u & 0u);
    goto L_08B1AAB8;
L_08B1AAB8:
    rt.unsupported(0x08B1AAB8u, 0x41465F4Du, "unknown not lowered yet"); return;
L_08B1AAC0:
    if (ctx.gpr[18] != ctx.gpr[15]) {
    rt.unsupported(0x08B1AAC4u, 0x00005245u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 296u, 0x08B327F8u>(ctx, &aot_mem); return;
    }
    goto L_08B1AAC8;
L_08B1AAC4:
    rt.unsupported(0x08B1AAC4u, 0x00005245u, "special? not lowered yet"); return;
L_08B1AAC8:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    rt.unsupported(0x08B1AACCu, 0x0000465Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 273u, 0x08B2B014u>(ctx, &aot_mem); return;
    }
    goto L_08B1AAD0;
L_08B1AAD0:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AAD4u, 0x00000031u, "special? not lowered yet"); return;
L_08B1AAD8:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AADCu, 0x00000032u, "special? not lowered yet"); return;
L_08B1AAE0:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AAE4u, 0x00000033u, "special? not lowered yet"); return;
L_08B1AAE8:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AAECu, 0x00000034u, "special? not lowered yet"); return;
L_08B1AAF0:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AAF4u, 0x00000035u, "special? not lowered yet"); return;
L_08B1AAF8:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AAFCu, 0x00000036u, "special? not lowered yet"); return;
L_08B1AB00:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AB04u, 0x00000037u, "special? not lowered yet"); return;
L_08B1AB08:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AB0Cu, 0x00000038u, "special? not lowered yet"); return;
L_08B1AB10:
    ctx.gpr[9] = (ctx.gpr[2] & 20557u);
    rt.unsupported(0x08B1AB14u, 0x00000039u, "special? not lowered yet"); return;
L_08B1AB18:
    ctx.gpr[9] = (ctx.gpr[10] & 20557u);
    rt.unsupported(0x08B1AB1Cu, 0x00000030u, "special? not lowered yet"); return;
L_08B1AB20:
    ctx.gpr[9] = (ctx.gpr[10] & 20557u);
    rt.unsupported(0x08B1AB24u, 0x00000031u, "special? not lowered yet"); return;
L_08B1AB28:
    ctx.gpr[9] = (ctx.gpr[10] & 20557u);
    rt.unsupported(0x08B1AB2Cu, 0x00000032u, "special? not lowered yet"); return;
L_08B1AB30:
    ctx.gpr[9] = (ctx.gpr[10] & 20557u);
    rt.unsupported(0x08B1AB34u, 0x00000033u, "special? not lowered yet"); return;
L_08B1AB38:
    ctx.gpr[9] = (ctx.gpr[10] & 20557u);
    rt.unsupported(0x08B1AB3Cu, 0x00000034u, "special? not lowered yet"); return;
L_08B1AB40:
    ctx.gpr[9] = (ctx.gpr[10] & 20557u);
    rt.unsupported(0x08B1AB44u, 0x00000035u, "special? not lowered yet"); return;
L_08B1AB48:
    ctx.gpr[9] = (ctx.gpr[10] & 20557u);
    rt.unsupported(0x08B1AB4Cu, 0x00000036u, "special? not lowered yet"); return;
L_08B1AB70:
    rt.unsupported(0x08B1AB70u, 0x43414E4Bu, "unknown not lowered yet"); return;
L_08B1AB80:
    rt.unsupported(0x08B1AB80u, 0x4C414745u, "unknown not lowered yet"); return;
L_08B1AB8C:
    rt.unsupported(0x08B1AB8Cu, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B1AB94:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1AB98u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1ABB4:
    rt.unsupported(0x08B1ABB8u, 0x52414843u, "control flow in delay slot"); return;
L_08B1ABBC:
    rt.unsupported(0x08B1ABBCu, 0x4545425Fu, "cop1? not lowered yet"); return;
L_08B1ABD0:
    rt.unsupported(0x08B1ABD0u, 0x202D2052u, "unknown not lowered yet"); return;
L_08B1ABF4:
    rt.unsupported(0x08B1ABF8u, 0x52414843u, "control flow in delay slot"); return;
L_08B1ABFC:
    rt.unsupported(0x08B1ABFCu, 0x4545425Fu, "cop1? not lowered yet"); return;
L_08B1AC10:
    rt.unsupported(0x08B1AC10u, 0x43202D20u, "unknown not lowered yet"); return;
L_08B1AC2C:
    rt.unsupported(0x08B1AC30u, 0x5F524143u, "control flow in delay slot"); return;
L_08B1AC34:
    rt.unsupported(0x08B1AC34u, 0x4E454542u, "unknown not lowered yet"); return;
L_08B1AC48:
    rt.unsupported(0x08B1AC48u, 0x43202D20u, "unknown not lowered yet"); return;
L_08B1AC60:
    rt.unsupported(0x08B1AC64u, 0x5F524143u, "control flow in delay slot"); return;
L_08B1AC68:
    rt.unsupported(0x08B1AC68u, 0x4E454542u, "unknown not lowered yet"); return;
L_08B1AC7C:
    rt.unsupported(0x08B1AC7Cu, 0x6946202Du, "unknown not lowered yet"); return;
L_08B1AC98:
    rt.unsupported(0x08B1AC98u, 0x41454C43u, "unknown not lowered yet"); return;
L_08B1ACAC:
    rt.unsupported(0x08B1ACACu, 0x455F4547u, "cop1? not lowered yet"); return;
L_08B1ACB8:
    rt.unsupported(0x08B1ACB8u, 0x72616843u, "unknown not lowered yet"); return;
L_08B1ACD0:
    rt.unsupported(0x08B1ACD0u, 0x41454C43u, "unknown not lowered yet"); return;
L_08B1ACF0:
    rt.unsupported(0x08B1ACF0u, 0x63696865u, "vfpu0 not lowered yet"); return;
L_08B1AE24:
    rt.unsupported(0x08B1AE28u, 0x08993C80u, "control flow in delay slot"); return;
L_08B1AFF4:
    rt.unsupported(0x08B1AFF8u, 0x08996AD0u, "control flow in delay slot"); return;
L_08B1B020:
    rt.unsupported(0x08B1B020u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B1B030:
    if (ctx.gpr[19] != ctx.gpr[20]) {
    rt.unsupported(0x08B1B034u, 0x63696865u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 42u, 0x08B34580u>(ctx, &aot_mem); return;
    }
    goto L_08B1B038;
L_08B1B038:
    ctx.execute_vfpu_compare3(108u, 101u, 70u, 1u, 6u);
    rt.unsupported(0x08B1B03Cu, 0x72614772u, "unknown not lowered yet"); return;
L_08B1B044:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 45u, 0x08B34594u>(ctx, &aot_mem); return;
    }
    goto L_08B1B04C;
L_08B1B04C:
    ctx.execute_vfpu_vscl_ct<114u, 115u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    rt.unsupported(0x08B1B054u, 0x726F4665u, "unknown not lowered yet"); return;
L_08B1B060:
    rt.unsupported(0x08B1B060u, 0x47736148u, "cop1? not lowered yet"); return;
L_08B1B07C:
    ctx.execute_vfpu_vscl_ct<73u, 115u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    rt.unsupported(0x08B1B084u, 0x476E4965u, "cop1? not lowered yet"); return;
L_08B1B090:
    rt.unsupported(0x08B1B090u, 0x73656F44u, "unknown not lowered yet"); return;
L_08B1B0A8:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B1B0AC;
L_08B1B0AC:
    rt.unsupported(0x08B1B0ACu, 0x47746553u, "cop1? not lowered yet"); return;
L_08B1B0BC:
    rt.unsupported(0x08B1B0BCu, 0x47746547u, "cop1? not lowered yet"); return;
L_08B1B0CC:
    if (ctx.gpr[26] == ctx.gpr[19]) {
    rt.unsupported(0x08B1B0D0u, 0x61726147u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 614u, 0x08B37DF4u>(ctx, &aot_mem); return;
    }
    goto L_08B1B0D4;
L_08B1B0D4:
    rt.unsupported(0x08B1B0D4u, 0x74536567u, "unknown not lowered yet"); return;
L_08B1B0E4:
    rt.unsupported(0x08B1B0E4u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B1B0FC:
    rt.unsupported(0x08B1B0FCu, 0x61726167u, "vfpu0 not lowered yet"); return;
L_08B1B114:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B1B118u, 0x72724520u, "unknown not lowered yet"); return;
L_08B1B134:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B1B138u, 0x6E795320u, "vfpu3 not lowered yet"); return;
L_08B1B160:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    ctx.execute_vfpu_vminmax(32u, 77u, 101u, 1u, false);
    rt.unsupported(0x08B1B168u, 0x2079726Fu, "unknown not lowered yet"); return;
L_08B1B180:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B1B184u, 0x6E654720u, "vfpu3 not lowered yet"); return;
L_08B1B1C8:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B1B1CCu, 0x72724520u, "unknown not lowered yet"); return;
L_08B1B1F0:
    ctx.gpr[1] = (ctx.gpr[19] ^ 30028u);
    rt.unsupported(0x08B1B1F4u, 0x6B6E5520u, "unknown not lowered yet"); return;
L_08B1B204:
    if (0u == 0u) (void)(0u);
    goto L_08B1B208;
L_08B1B208:
    rt.unsupported(0x08B1B208u, 0x4152545Fu, "unknown not lowered yet"); return;
L_08B1B218:
    rt.unsupported(0x08B1B218u, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B1B22C:
    rt.unsupported(0x08B1B22Cu, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B1B244:
    rt.unsupported(0x08B1B244u, 0x206E7572u, "unknown not lowered yet"); return;
L_08B1B25C:
    rt.unsupported(0x08B1B25Cu, 0x75716552u, "unknown not lowered yet"); return;
L_08B1B26C:
    rt.unsupported(0x08B1B26Cu, 0x4D736148u, "unknown not lowered yet"); return;
L_08B1B27C:
    rt.unsupported(0x08B1B27Cu, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    if (ctx.gpr[2] != ctx.gpr[21]) {
    rt.unsupported(0x08B1B284u, 0x4E454353u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 1u, 0x08B2C000u>(ctx, &aot_mem); return;
    }
    goto L_08B1B288;
L_08B1B288:
    rt.unsupported(0x08B1B288u, 0x00000045u, "special? not lowered yet"); return;
L_08B1B28C:
    rt.unsupported(0x08B1B28Cu, 0x435F5349u, "unknown not lowered yet"); return;
L_08B1B29C:
    rt.unsupported(0x08B1B29Cu, 0x00004445u, "special? not lowered yet"); return;
L_08B1B2A0:
    rt.unsupported(0x08B1B2A4u, 0x55435F54u, "control flow in delay slot"); return;
L_08B1B2A8:
    rt.unsupported(0x08B1B2A8u, 0x45435354u, "cop1? not lowered yet"); return;
L_08B1B2B0:
    rt.unsupported(0x08B1B2B4u, 0x53545543u, "control flow in delay slot"); return;
L_08B1B2B8:
    rt.unsupported(0x08B1B2B8u, 0x454E4543u, "cop1? not lowered yet"); return;
L_08B1B2C8:
    rt.unsupported(0x08B1B2C8u, 0x41454C43u, "unknown not lowered yet"); return;
L_08B1B2D4:
    rt.unsupported(0x08B1B2D4u, 0x0000454Eu, "special? not lowered yet"); return;
L_08B1B2D8:
    rt.unsupported(0x08B1B2D8u, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B1B2E8:
    rt.unsupported(0x08B1B2E8u, 0x0000006Eu, "special? not lowered yet"); return;
L_08B1B2EC:
    if (ctx.gpr[27] == ctx.gpr[14]) {
    rt.unsupported(0x08B1B2F0u, 0x70697263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 16u, 0x08B38838u>(ctx, &aot_mem); return;
    }
    goto L_08B1B2F4;
L_08B1B2F4:
    rt.unsupported(0x08B1B2F4u, 0x43646574u, "unknown not lowered yet"); return;
L_08B1B300:
    rt.unsupported(0x08B1B300u, 0x636F7250u, "vfpu0 not lowered yet"); return;
L_08B1B30C:
    rt.unsupported(0x08B1B30Cu, 0x43646574u, "unknown not lowered yet"); return;
L_08B1B318:
    if (ctx.gpr[19] != ctx.gpr[20]) {
    ctx.execute_vfpu_compare3(101u, 99u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 66u, 0x08B34868u>(ctx, &aot_mem); return;
    }
    goto L_08B1B320;
L_08B1B320:
    rt.unsupported(0x08B1B320u, 0x726F4672u, "unknown not lowered yet"); return;
L_08B1B338:
    rt.unsupported(0x08B1B338u, 0x41746547u, "unknown not lowered yet"); return;
L_08B1B34C:
    rt.unsupported(0x08B1B34Cu, 0x00000073u, "special? not lowered yet"); return;
L_08B1B350:
    rt.unsupported(0x08B1B350u, 0x736F7243u, "unknown not lowered yet"); return;
L_08B1B360:
    rt.unsupported(0x08B1B360u, 0x4E636556u, "unknown not lowered yet"); return;
L_08B1B370:
    if (ctx.gpr[27] == ctx.gpr[3]) {
    ctx.execute_vfpu_vscl_ct<99u, 97u, 108u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 67u, 0x08B348CCu>(ctx, &aot_mem); return;
    }
    goto L_08B1B378;
L_08B1B378:
    // nop
    // nop
    // nop
    ctx.gpr[12] = (0u | 0u);
    rt.unsupported(0x08B1B388u, 0x00646574u, "special? not lowered yet"); return;
L_08B1B3B8:
    rt.unsupported(0x08B1B3B8u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B1B3D0:
    ctx.gpr[14] = (ctx.gpr[17] < static_cast<std::uint32_t>(11890) ? 1u : 0u);
    // nop
    goto L_08B1B3D8;
L_08B1B3D8:
    rt.unsupported(0x08B1B3D8u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B1B3FC:
    rt.unsupported(0x08B1B3FCu, 0x74726170u, "unknown not lowered yet"); return;
L_08B1B408:
    rt.unsupported(0x08B1B408u, 0x6B6F6D73u, "unknown not lowered yet"); return;
L_08B1B414:
    rt.unsupported(0x08B1B414u, 0x6E696172u, "vfpu3 not lowered yet"); return;
L_08B1B420:
    rt.unsupported(0x08B1B420u, 0x74616F62u, "unknown not lowered yet"); return;
L_08B1B42C:
    ctx.execute_vfpu_vminmax(102u, 108u, 97u, 1u, false);
    ctx.gpr[6] = (0u | 0u);
    goto L_08B1B434;
L_08B1B434:
    ctx.execute_vfpu_vminmax(102u, 108u, 97u, 1u, false);
    ctx.gpr[6] = (0u | 0u);
    goto L_08B1B43C;
L_08B1B43C:
    rt.unsupported(0x08B1B43Cu, 0x6E696172u, "vfpu3 not lowered yet"); return;
L_08B1B448:
    ctx.execute_vfpu_compare3(98u, 108u, 111u, 1u, 6u);
    (void)(0u & 0u);
    goto L_08B1B450;
L_08B1B450:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vhdp(108u, 101u, 97u, 1u);
    ctx.gpr[31] = (ctx.gpr[18] | 12592u);
    rt.unsupported(0x08B1B45Cu, 0x00000034u, "special? not lowered yet"); return;
L_08B1B460:
    rt.unsupported(0x08B1B460u, 0x7474656Cu, "unknown not lowered yet"); return;
L_08B1B468:
    rt.unsupported(0x08B1B468u, 0x756F6C63u, "unknown not lowered yet"); return;
L_08B1B470:
    rt.unsupported(0x08B1B470u, 0x756F6C63u, "unknown not lowered yet"); return;
L_08B1B47C:
    ctx.execute_vfpu_compare3(98u, 108u, 111u, 1u, 6u);
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 4u>();
    ctx.gpr[14] = (ctx.gpr[1] + ctx.gpr[18]);
    goto L_08B1B488;
L_08B1B488:
    rt.unsupported(0x08B1B488u, 0x676E7567u, "vfpu1 not lowered yet"); return;
L_08B1B490:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 3u>();
    ctx.execute_vfpu_compare3(105u, 115u, 105u, 1u, 6u);
    ctx.execute_vfpu_compare3(110u, 115u, 109u, 1u, 6u);
    ctx.gpr[12] = (0u < 0u ? 1u : 0u);
    goto L_08B1B4A0;
L_08B1B4A0:
    ctx.execute_vfpu_vcmp_ct<117u, 108u, 1u, 2u>();
    rt.unsupported(0x08B1B4A4u, 0x69687465u, "unknown not lowered yet"); return;
L_08B1B4B0:
    rt.unsupported(0x08B1B4B0u, 0x736E7567u, "unknown not lowered yet"); return;
L_08B1B4BC:
    rt.unsupported(0x08B1B4BCu, 0x6E696F70u, "vfpu3 not lowered yet"); return;
L_08B1B4C8:
    rt.unsupported(0x08B1B4C8u, 0x72617073u, "unknown not lowered yet"); return;
L_08B1B4D0:
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 2u>();
    rt.unsupported(0x08B1B4D4u, 0x705F746Fu, "unknown not lowered yet"); return;
L_08B1B4E0:
    rt.unsupported(0x08B1B4E0u, 0x736E7567u, "unknown not lowered yet"); return;
L_08B1B4EC:
    rt.unsupported(0x08B1B4ECu, 0x74616568u, "unknown not lowered yet"); return;
L_08B1B4F8:
    rt.unsupported(0x08B1B4F8u, 0x73616562u, "unknown not lowered yet"); return;
L_08B1B500:
    rt.unsupported(0x08B1B500u, 0x6E696172u, "vfpu3 not lowered yet"); return;
L_08B1B50C:
    rt.unsupported(0x08B1B50Cu, 0x6E696172u, "vfpu3 not lowered yet"); return;
L_08B1B518:
    rt.unsupported(0x08B1B518u, 0x6E696172u, "vfpu3 not lowered yet"); return;
L_08B1B528:
    rt.unsupported(0x08B1B528u, 0x6968706Du, "unknown not lowered yet"); return;
L_08B1B530:
    ctx.execute_vfpu_vscl_ct<102u, 105u, 114u, 1u>();
    ctx.execute_vfpu_vscl_ct<104u, 111u, 115u, 1u>();
    // nop
    goto L_08B1B53C;
L_08B1B53C:
    rt.unsupported(0x08B1B53Cu, 0x72615043u, "unknown not lowered yet"); return;
L_08B1B838:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<80u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<77u, 111u, 100u, 1u>();
    ctx.execute_vfpu_vhdp(108u, 73u, 110u, 1u);
    rt.unsupported(0x08B1B844u, 0x0000006Fu, "special? not lowered yet"); return;
L_08B1B878:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B1B87Cu, 0x4D204E4Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 188u, 0x08B2CDD8u>(ctx, &aot_mem); return;
    }
    goto L_08B1B880;
L_08B1B880:
    rt.unsupported(0x08B1B880u, 0x4C45444Fu, "unknown not lowered yet"); return;
L_08B1B898:
    ctx.gpr[14] = (ctx.gpr[27] + static_cast<std::uint32_t>(24899));
    rt.unsupported(0x08B1B89Cu, 0x69662074u, "unknown not lowered yet"); return;
L_08B1B8BC:
    rt.unsupported(0x08B1B8BCu, 0x74615072u, "unknown not lowered yet"); return;
L_08B1B8C8:
    rt.unsupported(0x08B1B8C8u, 0x00007070u, "special? not lowered yet"); return;
L_08B1B8CC:
    ctx.execute_vfpu_compare3(77u, 80u, 78u, 1u, 6u);
    rt.unsupported(0x08B1B8D0u, 0x00006574u, "special? not lowered yet"); return;
L_08B1B8D4:
    ctx.execute_vfpu_vminmax(99u, 115u, 95u, 1u, false);
    rt.unsupported(0x08B1B8D8u, 0x00637369u, "special? not lowered yet"); return;
L_08B1B8DC:
    rt.unsupported(0x08B1B8DCu, 0x686E6F64u, "unknown not lowered yet"); return;
L_08B1B8E4:
    rt.unsupported(0x08B1B8E4u, 0x686E6F64u, "unknown not lowered yet"); return;
L_08B1B8EC:
    ctx.gpr[20] = (ctx.gpr[19] & 25706u);
    // nop
    goto L_08B1B8F4;
L_08B1B8F4:
    ctx.gpr[20] = (ctx.gpr[3] | 25706u);
    // nop
    goto L_08B1B8FC;
L_08B1B8FC:
    ctx.gpr[20] = (ctx.gpr[11] | 25706u);
    // nop
    goto L_08B1B904;
L_08B1B904:
    ctx.gpr[20] = (ctx.gpr[19] | 25706u);
    // nop
    goto L_08B1B90C;
L_08B1B90C:
    ctx.gpr[18] = (ctx.gpr[11] & 24941u);
    // nop
    goto L_08B1B914;
L_08B1B914:
    ctx.gpr[18] = (ctx.gpr[19] & 24941u);
    // nop
    goto L_08B1B91C;
L_08B1B91C:
    ctx.gpr[18] = (ctx.gpr[27] & 24941u);
    // nop
    goto L_08B1B924;
L_08B1B924:
    ctx.gpr[12] = (ctx.gpr[11] & 24947u);
    // nop
    goto L_08B1B92C;
L_08B1B92C:
    ctx.gpr[12] = (ctx.gpr[19] & 24947u);
    // nop
    goto L_08B1B934;
L_08B1B934:
    ctx.gpr[12] = (ctx.gpr[27] & 24947u);
    // nop
    goto L_08B1B93C;
L_08B1B93C:
    ctx.gpr[12] = (ctx.gpr[3] | 24947u);
    // nop
    goto L_08B1B944;
L_08B1B944:
    ctx.gpr[12] = (ctx.gpr[19] | 24947u);
    // nop
    goto L_08B1B94C;
L_08B1B94C:
    ctx.gpr[12] = (ctx.gpr[27] | 24947u);
    // nop
    goto L_08B1B954;
L_08B1B954:
    ctx.gpr[3] = (ctx.gpr[19] & 26998u);
    // nop
    goto L_08B1B95C;
L_08B1B95C:
    ctx.gpr[3] = (ctx.gpr[27] & 26998u);
    // nop
    goto L_08B1B964;
L_08B1B964:
    ctx.gpr[3] = (ctx.gpr[3] | 26998u);
    // nop
    goto L_08B1B96C;
L_08B1B96C:
    ctx.gpr[3] = (ctx.gpr[19] | 26998u);
    // nop
    goto L_08B1B974;
L_08B1B974:
    rt.unsupported(0x08B1B974u, 0x72756F74u, "unknown not lowered yet"); return;
L_08B1B97C:
    ctx.gpr[3] = (ctx.gpr[19] & 24941u);
    // nop
    goto L_08B1B984;
L_08B1B984:
    ctx.gpr[3] = (ctx.gpr[27] | 26998u);
    // nop
    rt.unsupported(0x08B1B98Cu, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B1B994:
    rt.unsupported(0x08B1B994u, 0x6E616C50u, "vfpu3 not lowered yet"); return;
L_08B1B9AC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_vcmp_ct<32u, 80u, 1u, 10u>();
    rt.unsupported(0x08B1B9B4u, 0x72657961u, "unknown not lowered yet"); return;
L_08B1B9D8:
    ctx.execute_vfpu_vscl_ct<83u, 112u, 101u, 1u>();
    ctx.execute_vfpu_vhdp(100u, 32u, 37u, 1u);
    rt.unsupported(0x08B1B9E0u, 0x73614D20u, "unknown not lowered yet"); return;
L_08B1B9FC:
    rt.unsupported(0x08B1B9FCu, 0x746F6972u, "unknown not lowered yet"); return;
L_08B1BA04:
    rt.unsupported(0x08B1BA04u, 0x69727473u, "unknown not lowered yet"); return;
L_08B1BA0C:
    rt.unsupported(0x08B1BA0Cu, 0x61656C43u, "vfpu0 not lowered yet"); return;
}

void recomp_unit_0197(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0197_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_197(Runtime &runtime) {
    runtime.register_generated_unit(197u, 0x08B18000u, 16384u, &recomp_unit_0197, &recomp_unit_0197_entry);
    runtime.register_function(0x08B18000u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18004u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18020u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18044u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18078u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18084u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B180FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18108u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18124u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18128u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18134u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1814Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18154u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18160u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18178u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18180u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1818Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B181F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18214u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18228u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1822Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18234u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18244u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1824Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18264u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18274u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B182E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B182E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1830Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1831Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1832Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18348u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18358u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18364u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1837Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B183E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B188F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18900u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18908u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18910u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18924u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18928u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18938u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18948u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18954u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1896Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1897Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18984u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18990u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B189F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A14u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A2Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A3Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A4Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A6Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A74u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18A8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18AA4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18ABCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18AC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18AE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18AF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B0Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B3Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B5Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18B84u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18BA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18BC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18BDCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18BFCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C54u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18C8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CCCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CD4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CE4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18CFCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D88u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18D98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DB0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DD8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18DF8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E88u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18E98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EB0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18ED0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18ED8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18EF8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F7Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18F94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FD4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B18FFCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19004u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19010u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19018u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19020u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1902Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19030u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1903Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19048u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19054u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19060u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1906Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19074u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19080u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1908Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19098u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B190FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1910Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19114u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19118u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19124u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19130u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19140u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19150u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1915Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19168u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19178u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19184u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19194u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1919Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B191F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19204u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19210u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1921Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19228u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19234u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19240u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1924Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19258u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19270u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B192F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19300u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19308u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19310u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19318u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19320u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19328u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19330u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19338u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19340u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19348u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19350u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19358u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19360u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19368u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19370u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19378u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19380u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19388u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19390u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19398u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B193F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19400u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19408u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19410u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19538u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19548u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19560u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19578u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B195A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B195C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19608u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19610u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19628u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19644u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19654u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1965Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1966Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19678u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19688u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19690u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B196F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19700u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1970Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19720u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19730u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19738u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19744u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19758u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19768u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19770u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1977Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19788u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19798u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B197FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19804u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19824u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19848u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19858u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19860u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19870u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19878u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19888u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19890u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B198FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19908u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19918u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19928u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19930u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19948u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19958u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19960u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19980u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19990u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19998u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B199F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A14u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A2Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19A9Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19AC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19AE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19AF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B34u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B50u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B58u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B78u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B88u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19B9Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BA0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BBCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19BF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C2Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C44u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C54u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C84u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19C94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19CA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19CB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19CCCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19CDCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19CE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D34u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D54u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D6Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19D8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DA4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DB0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DBCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DD4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DE4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19DF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19E8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19EC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19ED0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19ED8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19EE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19EF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19F18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B19F4Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A030u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A038u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A044u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A04Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A06Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A07Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A0BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A258u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A270u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A288u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A28Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A2B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A2CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A2E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A30Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A344u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A354u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A398u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A3D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A404u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A424u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A42Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A464u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A4A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A4E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A51Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A538u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A550u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A584u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A5FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A60Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A61Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A624u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A62Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A638u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A640u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A64Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A650u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A658u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A65Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A664u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A66Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A678u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A688u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A698u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A6ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A6B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A6F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A6F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A708u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A710u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A718u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A720u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A728u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A730u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A738u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A744u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A750u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A758u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A760u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A764u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A76Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A774u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A77Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A784u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A790u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A798u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A7FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A808u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A810u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A818u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A824u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A830u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A834u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A83Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A844u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A850u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A85Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A868u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A878u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A884u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A894u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A89Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8A4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8C4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A8F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A904u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A910u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A918u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A920u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A924u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A92Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A934u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A940u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A948u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A950u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A958u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A960u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A96Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A978u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A988u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A990u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A998u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9B4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9C0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1A9F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA1Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA34u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA44u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA54u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA5Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA6Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA74u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA88u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA90u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AA9Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAA8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAB0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAC0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAC4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAC8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAD8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAE0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAE8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AAF8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB00u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB08u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB18u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB20u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB28u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB30u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB38u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB40u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB70u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB80u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB8Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AB94u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABB4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABBCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ABFCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC10u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC2Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC34u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC48u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC60u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC68u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC7Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AC98u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACB8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACD0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1ACF0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AE24u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1AFF4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B020u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B030u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B038u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B044u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B04Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B060u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B07Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B090u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B0FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B114u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B134u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B160u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B180u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B1C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B1F0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B204u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B208u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B218u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B22Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B244u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B25Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B26Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B27Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B288u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B28Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B29Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2A8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2E8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B2F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B300u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B30Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B318u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B320u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B338u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B34Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B350u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B360u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B370u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B378u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B3B8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B3D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B3D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B3FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B408u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B414u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B420u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B42Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B434u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B43Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B448u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B450u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B460u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B468u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B470u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B47Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B488u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B490u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4A0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4B0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4D0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4E0u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B4F8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B500u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B50Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B518u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B528u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B530u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B53Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B838u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B878u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B880u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B898u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8BCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8C8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8CCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8D4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8DCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8E4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8ECu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8F4u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B8FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B904u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B90Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B914u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B91Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B924u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B92Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B934u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B93Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B944u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B94Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B954u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B95Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B964u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B96Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B974u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B97Cu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B984u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B994u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B9ACu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B9D8u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1B9FCu, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BA04u, &recomp_unit_0197, "recomp_unit_0197");
    runtime.register_function(0x08B1BA0Cu, &recomp_unit_0197, "recomp_unit_0197");
}
} // namespace psprecomp
