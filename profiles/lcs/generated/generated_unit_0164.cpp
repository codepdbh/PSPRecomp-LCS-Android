#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0164[4095] = {
    1, 0, 0, 2, 0, 0, 3, 0, 4, 5, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0,
    11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 28, 29, 0, 30, 0, 0, 31, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0,
    0, 36, 0, 0, 37, 0, 38, 39, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 43, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 47, 0,
    48, 0, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    62, 0, 0, 63, 0, 64, 65, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 75, 76, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 82,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 89, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95,
    0, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 102, 103, 0, 104, 0,
    0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 111, 0, 0,
    112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 121, 122, 0, 123, 0, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147, 148, 149, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 152, 0, 0, 0, 153, 0, 154, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 162, 163, 0, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 172, 0, 0, 173, 0, 174, 175, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 183, 184, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 194, 195, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 205,
    206, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 214, 215, 0, 216, 0, 0, 217, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 0, 222, 0, 0, 223, 0, 224, 225, 0, 226, 0, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 237,
    238, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 248, 249, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 258, 259, 0, 260, 0, 0, 261, 0,
    0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0,
    0, 267, 0, 268, 269, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0,
    0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 278, 279, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 288, 289, 0, 290, 0, 0, 291,
    0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296,
    0, 0, 297, 0, 298, 299, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 307, 308, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 316, 317,
    0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 325, 326, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 334, 335, 0, 336, 0, 0, 337, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0,
    341, 0, 0, 342, 0, 343, 344, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 352, 353, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 361,
    362, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0,
    0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 370, 371, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 381, 382, 0,
    383, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0,
    387, 0, 0, 388, 0, 0, 389, 0, 390, 391, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 399, 400, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 403,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0,
    408, 409, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 417, 418, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 425, 0, 0, 426, 0, 427, 0, 0, 428,
    0, 429, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    435, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 441, 442, 0, 443, 0, 0, 444, 0, 0, 0, 0, 445, 0,
    0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0,
    0, 451, 0, 452, 453, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458,
    0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 463, 464, 0, 0, 465, 0, 466, 0, 0, 467, 0, 468, 0, 469, 0, 0,
    470, 0, 471, 0, 472, 0, 0, 473, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 0, 479, 0, 480, 0, 481, 0, 0, 482, 0, 483, 0,
    484, 0, 0, 485, 0, 486, 0, 487, 0, 0, 488, 0, 489, 0, 490, 0, 0, 491, 0, 492, 0, 493, 0, 0, 494, 0, 495, 0, 496, 0, 0, 497,
    0, 498, 0, 499, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 505, 0, 506, 0, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0,
    0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0,
    0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 0, 521, 0, 0, 0, 522,
    0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 527, 0, 528, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 533, 0, 534, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 541, 0, 542, 0, 0, 0,
    0, 543, 0, 544, 0, 545, 0, 0, 0, 0, 0, 546, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 549, 0, 0, 550, 0, 0, 551, 0, 552, 553, 554, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0,
    563, 0, 564, 0, 0, 0, 0, 565, 0, 566, 0, 567, 0, 0, 0, 0, 0, 568, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 574, 575, 576, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0,
    0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 582,
    0, 0, 583, 0, 584, 0, 585, 0, 0, 586, 0, 587, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 591, 592, 593, 0, 594, 0, 0, 595, 0, 0,
    596, 0, 0, 597, 598, 599, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 603, 604, 605, 0, 606, 0, 0, 607, 0, 608, 0, 609, 0, 0, 610, 0,
    611, 0, 612, 0, 0, 613, 0, 614, 0, 615, 0, 0, 616, 0, 617, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 621, 622, 623, 0, 624, 0, 0,
    625, 0, 0, 626, 0, 0, 627, 628, 629, 0, 630, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0,
    0, 635, 0, 0, 0, 0, 636, 0, 637, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 645, 0, 646, 0, 647, 0, 648, 0, 0, 0, 649, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 650, 651, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 655, 0, 656, 0, 0, 0, 657, 0,
    658, 659, 0, 660, 0, 0, 0, 661, 0, 662, 663, 0, 664, 0, 0, 0, 665, 0, 666, 667, 0, 668, 0, 0, 0, 669, 0, 670, 671, 0, 672, 0,
    0, 0, 673, 0, 0, 674, 0, 0, 675, 676, 0, 677, 0, 0, 678, 0, 0, 679, 680, 681, 0, 682, 0, 0, 0, 683, 0, 0, 684, 0, 0, 685,
    686, 0, 687, 0, 0, 688, 0, 0, 689, 690, 691, 0, 692, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 696, 0, 697, 0, 0, 698, 0, 0, 699,
    700, 701, 0, 702, 0, 0, 0, 703, 0, 0, 704, 0, 0, 705, 706, 0, 707, 0, 0, 708, 0, 0, 709, 710, 711, 0, 712, 0, 0, 0, 713, 0,
    0, 714, 0, 0, 715, 716, 0, 717, 0, 0, 718, 0, 0, 719, 720, 721, 0, 722, 0, 0, 0, 723, 0, 0, 724, 0, 0, 725, 726, 0, 727, 0,
    0, 728, 0, 0, 729, 730, 731, 0, 732, 0, 0, 0, 0, 733, 0, 734, 0, 735, 0, 736, 0, 737, 738, 0, 0, 0, 739, 0, 0, 0, 0, 740,
    0, 741, 0, 742, 0, 743, 0, 744, 745, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 748, 0, 749, 0, 750, 0, 751, 752, 0, 0, 0, 753, 0,
    0, 0, 0, 754, 0, 755, 0, 756, 0, 757, 0, 758, 759, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 762, 0, 0, 763, 0, 0, 764, 765,
    766, 0, 767, 0, 0, 768, 769, 770, 0, 0, 0, 771, 0, 0, 772, 0, 0, 773, 774, 0, 775, 0, 0, 0, 0, 776, 0, 777, 0, 778, 0, 0,
    779, 0, 780, 0, 781, 0, 782, 0, 783, 0, 784, 0, 785, 0, 786, 787, 0, 0, 788, 0, 0, 0, 0, 0, 789, 0, 790, 0, 791, 0, 792, 0,
    793, 0, 794, 0, 795, 0, 796, 0, 797, 798, 0, 0, 799, 0, 0, 0, 0, 0, 800, 0, 0, 0, 801, 0, 802, 0, 803, 0, 804, 0, 0, 0,
    0, 0, 805, 0, 806, 0, 807, 0, 808, 0, 0, 0, 809, 0, 810, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0, 0, 814,
    0, 815, 0, 816, 0, 817, 0, 818, 0, 819, 0, 820, 0, 0, 821, 0, 822, 0, 823, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 825, 0, 826,
    0, 827, 0, 828, 0, 829, 0, 830, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0,
    835, 0, 0, 0, 0, 0, 836, 0, 837, 0, 838, 0, 0, 839, 0, 840, 0, 841, 0, 842, 0, 843, 0, 844, 0, 0, 0, 845, 0, 0, 0, 0,
    0, 0, 0, 846, 0, 847, 0, 0, 848, 0, 0, 849, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 852, 0, 853, 0, 854, 0, 0,
    0, 0, 0, 0, 855, 0, 856, 0, 857, 858, 0, 0, 0, 0, 859, 0, 0, 0, 0, 860, 0, 0, 0, 861, 0, 0, 862, 0, 863, 0, 864, 0,
    865, 0, 866, 0, 867, 0, 0, 868, 0, 0, 0, 0, 869, 0, 0, 0, 870, 0, 0, 871, 0, 872, 0, 873, 0, 874, 0, 875, 0, 876, 0, 0,
    877, 0, 0, 0, 0, 0, 0, 0, 878, 0, 879, 0, 0, 880, 0, 0, 881, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 884, 0,
    885, 0, 886, 0, 0, 0, 0, 0, 0, 887, 0, 888, 0, 889, 890, 0, 0, 0, 0, 891, 0, 0, 0, 0, 0, 892, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 893, 0, 894, 0, 895, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 896, 0, 897, 0, 0, 898, 0, 899, 0,
    900, 0, 0, 0, 901, 0, 902, 0, 903, 0, 904, 0, 905, 0, 0, 0, 906, 0, 907, 0, 0, 908, 0, 909, 0, 910, 0, 911, 0, 0, 912, 0,
    913, 0, 0, 914, 0, 915, 0, 916, 0, 0, 917, 0, 918, 0, 919, 0, 0, 920, 0, 921, 0, 922, 0, 0, 923, 0, 924, 0, 925, 0, 926, 927,
    0, 928, 0, 929, 930, 0, 0, 0, 931, 0, 0, 0, 0, 0, 932, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 933, 0, 934, 0, 935,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 936, 0, 937, 0, 0, 938, 0, 939, 0, 940, 0, 0, 0, 941, 0, 942, 0, 943, 0, 944,
    0, 945, 0, 0, 0, 946, 0, 947, 0, 0, 948, 0, 949, 0, 950, 0, 951, 0, 0, 952, 0, 953, 0, 0, 954, 0, 955, 0, 956, 0, 0, 957,
    0, 958, 0, 959, 0, 0, 960, 0, 961, 0, 962, 0, 0, 963, 0, 964, 0, 965, 0, 966, 967, 0, 968, 0, 969, 0, 970, 0, 0, 0, 971, 0,
    0, 0, 0, 0, 972, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 973, 0, 974, 0, 975, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 976, 0, 0, 0, 977, 0, 978, 0, 979, 0, 980, 0, 981, 0, 982, 0, 0, 983, 0, 0, 984, 0, 0, 985, 986, 987, 0, 988, 989, 0,
    0, 0, 990, 0, 0, 991, 0, 0, 992, 993, 994, 0, 995, 996, 0, 0, 0, 0, 997, 0, 0, 998, 0, 999, 0, 0, 1000, 0, 1001, 0, 0, 0,
    0, 1002, 0, 1003, 0, 0, 1004, 1005, 0, 0, 0, 1006, 0, 0, 0, 1007, 0, 0, 1008, 0, 0, 1009, 0, 1010, 0, 1011, 0, 1012, 0, 0, 1013, 1014,
    1015, 0, 1016, 0, 0, 0, 0, 1017, 0, 0, 0, 1018, 0, 1019, 0, 1020, 0, 1021, 0, 1022, 0, 1023, 0, 1024, 0, 1025, 0, 1026, 0, 1027, 0, 1028,
    1029, 0, 0, 1030, 0, 0, 0, 0, 1031, 0, 0, 0, 1032, 0, 1033, 0, 1034, 0, 1035, 0, 1036, 0, 1037, 0, 1038, 0, 1039, 0, 1040, 0, 1041, 0,
    1042, 1043, 0, 0, 1044, 0, 0, 1045, 0, 1046, 0, 1047, 0, 1048, 0, 0, 1049, 0, 0, 1050, 0, 1051, 0, 1052, 0, 0, 1053, 1054, 1055, 0, 1056, 0,
    0, 1057, 0, 0, 1058, 0, 1059, 0, 1060, 0, 0, 1061, 1062, 1063, 0, 1064, 0, 0, 1065, 0, 0, 0, 1066, 0, 1067, 0, 0, 1068, 0, 1069, 0, 1070,
    0, 1071, 0, 1072, 0, 1073, 0, 0, 1074, 0, 1075, 1076, 0, 1077, 0, 0, 1078, 0, 1079, 1080, 0, 1081, 0, 0, 1082, 0, 0, 1083, 0, 0, 1084, 0,
    1085, 0, 1086, 0, 1087, 0, 1088, 0, 0, 1089, 0, 0, 1090, 0, 0, 1091, 0, 0, 1092, 0, 0, 1093, 0, 1094, 0, 1095, 0, 1096, 0, 1097, 0, 0,
    1098, 1099, 1100, 0, 1101, 0, 0, 1102, 0, 0, 1103, 0, 1104, 0, 1105, 0, 1106, 1107, 0, 1108, 0, 0, 1109, 0, 0, 1110, 0, 1111, 0, 0, 1112,
};
void recomp_unit_0164_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A94000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0164[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A94000;
    case 2u: goto L_08A9400C;
    case 3u: goto L_08A94018;
    case 4u: goto L_08A94020;
    case 5u: goto L_08A94024;
    case 6u: goto L_08A94028;
    case 7u: goto L_08A94038;
    case 8u: goto L_08A9404C;
    case 9u: goto L_08A94068;
    case 10u: goto L_08A94070;
    case 11u: goto L_08A94080;
    case 12u: goto L_08A9408C;
    case 13u: goto L_08A9409C;
    case 14u: goto L_08A940AC;
    case 15u: goto L_08A940B8;
    case 16u: goto L_08A940E4;
    case 17u: goto L_08A94100;
    case 18u: goto L_08A9410C;
    case 19u: goto L_08A94118;
    case 20u: goto L_08A94128;
    case 21u: goto L_08A94130;
    case 22u: goto L_08A94138;
    case 23u: goto L_08A9414C;
    case 24u: goto L_08A94190;
    case 25u: goto L_08A941B4;
    case 26u: goto L_08A941C0;
    case 27u: goto L_08A941CC;
    case 28u: goto L_08A941D4;
    case 29u: goto L_08A941D8;
    case 30u: goto L_08A941E0;
    case 31u: goto L_08A941EC;
    case 32u: goto L_08A94204;
    case 33u: goto L_08A94244;
    case 34u: goto L_08A94268;
    case 35u: goto L_08A94278;
    case 36u: goto L_08A94284;
    case 37u: goto L_08A94290;
    case 38u: goto L_08A94298;
    case 39u: goto L_08A9429C;
    case 40u: goto L_08A942A4;
    case 41u: goto L_08A942B0;
    case 42u: goto L_08A942C4;
    case 43u: goto L_08A942C8;
    case 44u: goto L_08A942DC;
    case 45u: goto L_08A942E4;
    case 46u: goto L_08A942EC;
    case 47u: goto L_08A942F8;
    case 48u: goto L_08A94300;
    case 49u: goto L_08A9430C;
    case 50u: goto L_08A94314;
    case 51u: goto L_08A94320;
    case 52u: goto L_08A94328;
    case 53u: goto L_08A94338;
    case 54u: goto L_08A94340;
    case 55u: goto L_08A94350;
    case 56u: goto L_08A94358;
    case 57u: goto L_08A94368;
    case 58u: goto L_08A94370;
    case 59u: goto L_08A94380;
    case 60u: goto L_08A943B8;
    case 61u: goto L_08A943F4;
    case 62u: goto L_08A94400;
    case 63u: goto L_08A9440C;
    case 64u: goto L_08A94414;
    case 65u: goto L_08A94418;
    case 66u: goto L_08A9441C;
    case 67u: goto L_08A94428;
    case 68u: goto L_08A9443C;
    case 69u: goto L_08A94464;
    case 70u: goto L_08A9446C;
    case 71u: goto L_08A9448C;
    case 72u: goto L_08A94498;
    case 73u: goto L_08A944A4;
    case 74u: goto L_08A944B0;
    case 75u: goto L_08A944B8;
    case 76u: goto L_08A944BC;
    case 77u: goto L_08A944C0;
    case 78u: goto L_08A944CC;
    case 79u: goto L_08A944E0;
    case 80u: goto L_08A944EC;
    case 81u: goto L_08A944F4;
    case 82u: goto L_08A944FC;
    case 83u: goto L_08A9450C;
    case 84u: goto L_08A94534;
    case 85u: goto L_08A94540;
    case 86u: goto L_08A9454C;
    case 87u: goto L_08A94558;
    case 88u: goto L_08A94564;
    case 89u: goto L_08A94568;
    case 90u: goto L_08A94570;
    case 91u: goto L_08A945F0;
    case 92u: goto L_08A94604;
    case 93u: goto L_08A94628;
    case 94u: goto L_08A9466C;
    case 95u: goto L_08A9467C;
    case 96u: goto L_08A94688;
    case 97u: goto L_08A94698;
    case 98u: goto L_08A946A4;
    case 99u: goto L_08A946CC;
    case 100u: goto L_08A946D8;
    case 101u: goto L_08A946E4;
    case 102u: goto L_08A946EC;
    case 103u: goto L_08A946F0;
    case 104u: goto L_08A946F8;
    case 105u: goto L_08A94704;
    case 106u: goto L_08A94718;
    case 107u: goto L_08A94730;
    case 108u: goto L_08A94750;
    case 109u: goto L_08A94768;
    case 110u: goto L_08A94770;
    case 111u: goto L_08A94774;
    case 112u: goto L_08A94780;
    case 113u: goto L_08A947A0;
    case 114u: goto L_08A947B4;
    case 115u: goto L_08A947D0;
    case 116u: goto L_08A9480C;
    case 117u: goto L_08A94814;
    case 118u: goto L_08A94824;
    case 119u: goto L_08A94830;
    case 120u: goto L_08A9483C;
    case 121u: goto L_08A94844;
    case 122u: goto L_08A94848;
    case 123u: goto L_08A94850;
    case 124u: goto L_08A9485C;
    case 125u: goto L_08A94870;
    case 126u: goto L_08A94878;
    case 127u: goto L_08A948A8;
    case 128u: goto L_08A948B0;
    case 129u: goto L_08A948C4;
    case 130u: goto L_08A948FC;
    case 131u: goto L_08A94910;
    case 132u: goto L_08A94918;
    case 133u: goto L_08A94920;
    case 134u: goto L_08A94928;
    case 135u: goto L_08A94930;
    case 136u: goto L_08A94960;
    case 137u: goto L_08A9496C;
    case 138u: goto L_08A94974;
    case 139u: goto L_08A94998;
    case 140u: goto L_08A949A4;
    case 141u: goto L_08A949B0;
    case 142u: goto L_08A949B8;
    case 143u: goto L_08A949E8;
    case 144u: goto L_08A94A24;
    case 145u: goto L_08A94A30;
    case 146u: goto L_08A94A3C;
    case 147u: goto L_08A94A44;
    case 148u: goto L_08A94A48;
    case 149u: goto L_08A94A4C;
    case 150u: goto L_08A94A5C;
    case 151u: goto L_08A94A70;
    case 152u: goto L_08A94A84;
    case 153u: goto L_08A94A94;
    case 154u: goto L_08A94A9C;
    case 155u: goto L_08A94AA0;
    case 156u: goto L_08A94AB0;
    case 157u: goto L_08A94AB8;
    case 158u: goto L_08A94AF4;
    case 159u: goto L_08A94B18;
    case 160u: goto L_08A94B24;
    case 161u: goto L_08A94B30;
    case 162u: goto L_08A94B38;
    case 163u: goto L_08A94B3C;
    case 164u: goto L_08A94B44;
    case 165u: goto L_08A94B50;
    case 166u: goto L_08A94B64;
    case 167u: goto L_08A94B70;
    case 168u: goto L_08A94B98;
    case 169u: goto L_08A94BA0;
    case 170u: goto L_08A94BD4;
    case 171u: goto L_08A94BF8;
    case 172u: goto L_08A94C04;
    case 173u: goto L_08A94C10;
    case 174u: goto L_08A94C18;
    case 175u: goto L_08A94C1C;
    case 176u: goto L_08A94C24;
    case 177u: goto L_08A94C30;
    case 178u: goto L_08A94C48;
    case 179u: goto L_08A94C88;
    case 180u: goto L_08A94CB0;
    case 181u: goto L_08A94CBC;
    case 182u: goto L_08A94CC8;
    case 183u: goto L_08A94CD0;
    case 184u: goto L_08A94CD4;
    case 185u: goto L_08A94CD8;
    case 186u: goto L_08A94CE8;
    case 187u: goto L_08A94CFC;
    case 188u: goto L_08A94D18;
    case 189u: goto L_08A94D28;
    case 190u: goto L_08A94D60;
    case 191u: goto L_08A94D88;
    case 192u: goto L_08A94D94;
    case 193u: goto L_08A94DA0;
    case 194u: goto L_08A94DA8;
    case 195u: goto L_08A94DAC;
    case 196u: goto L_08A94DB0;
    case 197u: goto L_08A94DC0;
    case 198u: goto L_08A94DD4;
    case 199u: goto L_08A94DF0;
    case 200u: goto L_08A94E00;
    case 201u: goto L_08A94E38;
    case 202u: goto L_08A94E5C;
    case 203u: goto L_08A94E68;
    case 204u: goto L_08A94E74;
    case 205u: goto L_08A94E7C;
    case 206u: goto L_08A94E80;
    case 207u: goto L_08A94E88;
    case 208u: goto L_08A94E94;
    case 209u: goto L_08A94EAC;
    case 210u: goto L_08A94F18;
    case 211u: goto L_08A94F40;
    case 212u: goto L_08A94F4C;
    case 213u: goto L_08A94F58;
    case 214u: goto L_08A94F60;
    case 215u: goto L_08A94F64;
    case 216u: goto L_08A94F6C;
    case 217u: goto L_08A94F78;
    case 218u: goto L_08A94F90;
    case 219u: goto L_08A94FA8;
    case 220u: goto L_08A94FE0;
    case 221u: goto L_08A95004;
    case 222u: goto L_08A95010;
    case 223u: goto L_08A9501C;
    case 224u: goto L_08A95024;
    case 225u: goto L_08A95028;
    case 226u: goto L_08A95030;
    case 227u: goto L_08A9503C;
    case 228u: goto L_08A95050;
    case 229u: goto L_08A95058;
    case 230u: goto L_08A95060;
    case 231u: goto L_08A95078;
    case 232u: goto L_08A95084;
    case 233u: goto L_08A950B8;
    case 234u: goto L_08A950DC;
    case 235u: goto L_08A950E8;
    case 236u: goto L_08A950F4;
    case 237u: goto L_08A950FC;
    case 238u: goto L_08A95100;
    case 239u: goto L_08A95108;
    case 240u: goto L_08A95114;
    case 241u: goto L_08A9512C;
    case 242u: goto L_08A95134;
    case 243u: goto L_08A95140;
    case 244u: goto L_08A95170;
    case 245u: goto L_08A95194;
    case 246u: goto L_08A951A0;
    case 247u: goto L_08A951AC;
    case 248u: goto L_08A951B4;
    case 249u: goto L_08A951B8;
    case 250u: goto L_08A951C0;
    case 251u: goto L_08A951CC;
    case 252u: goto L_08A951E4;
    case 253u: goto L_08A951EC;
    case 254u: goto L_08A9521C;
    case 255u: goto L_08A95240;
    case 256u: goto L_08A9524C;
    case 257u: goto L_08A95258;
    case 258u: goto L_08A95260;
    case 259u: goto L_08A95264;
    case 260u: goto L_08A9526C;
    case 261u: goto L_08A95278;
    case 262u: goto L_08A95290;
    case 263u: goto L_08A95298;
    case 264u: goto L_08A952C8;
    case 265u: goto L_08A952EC;
    case 266u: goto L_08A952F8;
    case 267u: goto L_08A95304;
    case 268u: goto L_08A9530C;
    case 269u: goto L_08A95310;
    case 270u: goto L_08A95318;
    case 271u: goto L_08A95324;
    case 272u: goto L_08A9533C;
    case 273u: goto L_08A95344;
    case 274u: goto L_08A95374;
    case 275u: goto L_08A95398;
    case 276u: goto L_08A953A4;
    case 277u: goto L_08A953B0;
    case 278u: goto L_08A953B8;
    case 279u: goto L_08A953BC;
    case 280u: goto L_08A953C4;
    case 281u: goto L_08A953D0;
    case 282u: goto L_08A953E8;
    case 283u: goto L_08A953F0;
    case 284u: goto L_08A95420;
    case 285u: goto L_08A95444;
    case 286u: goto L_08A95450;
    case 287u: goto L_08A9545C;
    case 288u: goto L_08A95464;
    case 289u: goto L_08A95468;
    case 290u: goto L_08A95470;
    case 291u: goto L_08A9547C;
    case 292u: goto L_08A95494;
    case 293u: goto L_08A9549C;
    case 294u: goto L_08A954CC;
    case 295u: goto L_08A954F0;
    case 296u: goto L_08A954FC;
    case 297u: goto L_08A95508;
    case 298u: goto L_08A95510;
    case 299u: goto L_08A95514;
    case 300u: goto L_08A9551C;
    case 301u: goto L_08A95528;
    case 302u: goto L_08A95540;
    case 303u: goto L_08A95580;
    case 304u: goto L_08A955A4;
    case 305u: goto L_08A955B0;
    case 306u: goto L_08A955BC;
    case 307u: goto L_08A955C4;
    case 308u: goto L_08A955C8;
    case 309u: goto L_08A955D0;
    case 310u: goto L_08A955DC;
    case 311u: goto L_08A955F4;
    case 312u: goto L_08A95634;
    case 313u: goto L_08A95658;
    case 314u: goto L_08A95664;
    case 315u: goto L_08A95670;
    case 316u: goto L_08A95678;
    case 317u: goto L_08A9567C;
    case 318u: goto L_08A95684;
    case 319u: goto L_08A95690;
    case 320u: goto L_08A956A8;
    case 321u: goto L_08A956E8;
    case 322u: goto L_08A9570C;
    case 323u: goto L_08A95718;
    case 324u: goto L_08A95724;
    case 325u: goto L_08A9572C;
    case 326u: goto L_08A95730;
    case 327u: goto L_08A95738;
    case 328u: goto L_08A95744;
    case 329u: goto L_08A9575C;
    case 330u: goto L_08A9579C;
    case 331u: goto L_08A957C0;
    case 332u: goto L_08A957CC;
    case 333u: goto L_08A957D8;
    case 334u: goto L_08A957E0;
    case 335u: goto L_08A957E4;
    case 336u: goto L_08A957EC;
    case 337u: goto L_08A957F8;
    case 338u: goto L_08A95810;
    case 339u: goto L_08A95850;
    case 340u: goto L_08A95874;
    case 341u: goto L_08A95880;
    case 342u: goto L_08A9588C;
    case 343u: goto L_08A95894;
    case 344u: goto L_08A95898;
    case 345u: goto L_08A958A0;
    case 346u: goto L_08A958AC;
    case 347u: goto L_08A958C4;
    case 348u: goto L_08A95904;
    case 349u: goto L_08A95928;
    case 350u: goto L_08A95934;
    case 351u: goto L_08A95940;
    case 352u: goto L_08A95948;
    case 353u: goto L_08A9594C;
    case 354u: goto L_08A95954;
    case 355u: goto L_08A95960;
    case 356u: goto L_08A95978;
    case 357u: goto L_08A959B8;
    case 358u: goto L_08A959DC;
    case 359u: goto L_08A959E8;
    case 360u: goto L_08A959F4;
    case 361u: goto L_08A959FC;
    case 362u: goto L_08A95A00;
    case 363u: goto L_08A95A08;
    case 364u: goto L_08A95A14;
    case 365u: goto L_08A95A2C;
    case 366u: goto L_08A95A64;
    case 367u: goto L_08A95A88;
    case 368u: goto L_08A95A94;
    case 369u: goto L_08A95AA0;
    case 370u: goto L_08A95AA8;
    case 371u: goto L_08A95AAC;
    case 372u: goto L_08A95AB4;
    case 373u: goto L_08A95AC0;
    case 374u: goto L_08A95AD8;
    case 375u: goto L_08A95AE0;
    case 376u: goto L_08A95B00;
    case 377u: goto L_08A95B30;
    case 378u: goto L_08A95B54;
    case 379u: goto L_08A95B60;
    case 380u: goto L_08A95B6C;
    case 381u: goto L_08A95B74;
    case 382u: goto L_08A95B78;
    case 383u: goto L_08A95B80;
    case 384u: goto L_08A95B8C;
    case 385u: goto L_08A95BA4;
    case 386u: goto L_08A95BDC;
    case 387u: goto L_08A95C00;
    case 388u: goto L_08A95C0C;
    case 389u: goto L_08A95C18;
    case 390u: goto L_08A95C20;
    case 391u: goto L_08A95C24;
    case 392u: goto L_08A95C2C;
    case 393u: goto L_08A95C38;
    case 394u: goto L_08A95C50;
    case 395u: goto L_08A95C88;
    case 396u: goto L_08A95CAC;
    case 397u: goto L_08A95CB8;
    case 398u: goto L_08A95CC4;
    case 399u: goto L_08A95CCC;
    case 400u: goto L_08A95CD0;
    case 401u: goto L_08A95CD8;
    case 402u: goto L_08A95CE4;
    case 403u: goto L_08A95CFC;
    case 404u: goto L_08A95D3C;
    case 405u: goto L_08A95D60;
    case 406u: goto L_08A95D6C;
    case 407u: goto L_08A95D78;
    case 408u: goto L_08A95D80;
    case 409u: goto L_08A95D84;
    case 410u: goto L_08A95D8C;
    case 411u: goto L_08A95D98;
    case 412u: goto L_08A95DB0;
    case 413u: goto L_08A95DF0;
    case 414u: goto L_08A95E14;
    case 415u: goto L_08A95E20;
    case 416u: goto L_08A95E2C;
    case 417u: goto L_08A95E34;
    case 418u: goto L_08A95E38;
    case 419u: goto L_08A95E40;
    case 420u: goto L_08A95E4C;
    case 421u: goto L_08A95E64;
    case 422u: goto L_08A95EA4;
    case 423u: goto L_08A95ECC;
    case 424u: goto L_08A95ED4;
    case 425u: goto L_08A95EDC;
    case 426u: goto L_08A95EE8;
    case 427u: goto L_08A95EF0;
    case 428u: goto L_08A95EFC;
    case 429u: goto L_08A95F04;
    case 430u: goto L_08A95F0C;
    case 431u: goto L_08A95F18;
    case 432u: goto L_08A95F24;
    case 433u: goto L_08A95F34;
    case 434u: goto L_08A95F50;
    case 435u: goto L_08A95F80;
    case 436u: goto L_08A95F8C;
    case 437u: goto L_08A95F9C;
    case 438u: goto L_08A95FAC;
    case 439u: goto L_08A95FB8;
    case 440u: goto L_08A95FC4;
    case 441u: goto L_08A95FCC;
    case 442u: goto L_08A95FD0;
    case 443u: goto L_08A95FD8;
    case 444u: goto L_08A95FE4;
    case 445u: goto L_08A95FF8;
    case 446u: goto L_08A96008;
    case 447u: goto L_08A96024;
    case 448u: goto L_08A96048;
    case 449u: goto L_08A9606C;
    case 450u: goto L_08A96078;
    case 451u: goto L_08A96084;
    case 452u: goto L_08A9608C;
    case 453u: goto L_08A96090;
    case 454u: goto L_08A96098;
    case 455u: goto L_08A960A4;
    case 456u: goto L_08A960BC;
    case 457u: goto L_08A960F4;
    case 458u: goto L_08A960FC;
    case 459u: goto L_08A96104;
    case 460u: goto L_08A96110;
    case 461u: goto L_08A9612C;
    case 462u: goto L_08A96134;
    case 463u: goto L_08A96140;
    case 464u: goto L_08A96144;
    case 465u: goto L_08A96150;
    case 466u: goto L_08A96158;
    case 467u: goto L_08A96164;
    case 468u: goto L_08A9616C;
    case 469u: goto L_08A96174;
    case 470u: goto L_08A96180;
    case 471u: goto L_08A96188;
    case 472u: goto L_08A96190;
    case 473u: goto L_08A9619C;
    case 474u: goto L_08A961A4;
    case 475u: goto L_08A961AC;
    case 476u: goto L_08A961B8;
    case 477u: goto L_08A961C0;
    case 478u: goto L_08A961C8;
    case 479u: goto L_08A961D4;
    case 480u: goto L_08A961DC;
    case 481u: goto L_08A961E4;
    case 482u: goto L_08A961F0;
    case 483u: goto L_08A961F8;
    case 484u: goto L_08A96200;
    case 485u: goto L_08A9620C;
    case 486u: goto L_08A96214;
    case 487u: goto L_08A9621C;
    case 488u: goto L_08A96228;
    case 489u: goto L_08A96230;
    case 490u: goto L_08A96238;
    case 491u: goto L_08A96244;
    case 492u: goto L_08A9624C;
    case 493u: goto L_08A96254;
    case 494u: goto L_08A96260;
    case 495u: goto L_08A96268;
    case 496u: goto L_08A96270;
    case 497u: goto L_08A9627C;
    case 498u: goto L_08A96284;
    case 499u: goto L_08A9628C;
    case 500u: goto L_08A96290;
    case 501u: goto L_08A96298;
    case 502u: goto L_08A962FC;
    case 503u: goto L_08A96324;
    case 504u: goto L_08A96338;
    case 505u: goto L_08A96340;
    case 506u: goto L_08A96348;
    case 507u: goto L_08A9635C;
    case 508u: goto L_08A96368;
    case 509u: goto L_08A96384;
    case 510u: goto L_08A963C4;
    case 511u: goto L_08A963D8;
    case 512u: goto L_08A963E8;
    case 513u: goto L_08A96408;
    case 514u: goto L_08A96424;
    case 515u: goto L_08A96434;
    case 516u: goto L_08A96440;
    case 517u: goto L_08A96448;
    case 518u: goto L_08A96450;
    case 519u: goto L_08A96458;
    case 520u: goto L_08A96460;
    case 521u: goto L_08A9646C;
    case 522u: goto L_08A9647C;
    case 523u: goto L_08A96488;
    case 524u: goto L_08A96494;
    case 525u: goto L_08A964A8;
    case 526u: goto L_08A964B8;
    case 527u: goto L_08A964C0;
    case 528u: goto L_08A964C8;
    case 529u: goto L_08A964D8;
    case 530u: goto L_08A964E0;
    case 531u: goto L_08A96514;
    case 532u: goto L_08A96524;
    case 533u: goto L_08A9652C;
    case 534u: goto L_08A96534;
    case 535u: goto L_08A96540;
    case 536u: goto L_08A96550;
    case 537u: goto L_08A96598;
    case 538u: goto L_08A965B8;
    case 539u: goto L_08A965C8;
    case 540u: goto L_08A965E0;
    case 541u: goto L_08A965E8;
    case 542u: goto L_08A965F0;
    case 543u: goto L_08A96604;
    case 544u: goto L_08A9660C;
    case 545u: goto L_08A96614;
    case 546u: goto L_08A9662C;
    case 547u: goto L_08A96634;
    case 548u: goto L_08A9663C;
    case 549u: goto L_08A96684;
    case 550u: goto L_08A96690;
    case 551u: goto L_08A9669C;
    case 552u: goto L_08A966A4;
    case 553u: goto L_08A966A8;
    case 554u: goto L_08A966AC;
    case 555u: goto L_08A966BC;
    case 556u: goto L_08A966D0;
    case 557u: goto L_08A966D8;
    case 558u: goto L_08A966E8;
    case 559u: goto L_08A96730;
    case 560u: goto L_08A96750;
    case 561u: goto L_08A96760;
    case 562u: goto L_08A96778;
    case 563u: goto L_08A96780;
    case 564u: goto L_08A96788;
    case 565u: goto L_08A9679C;
    case 566u: goto L_08A967A4;
    case 567u: goto L_08A967AC;
    case 568u: goto L_08A967C4;
    case 569u: goto L_08A967CC;
    case 570u: goto L_08A967D4;
    case 571u: goto L_08A9681C;
    case 572u: goto L_08A96828;
    case 573u: goto L_08A96834;
    case 574u: goto L_08A9683C;
    case 575u: goto L_08A96840;
    case 576u: goto L_08A96844;
    case 577u: goto L_08A96854;
    case 578u: goto L_08A96868;
    case 579u: goto L_08A9688C;
    case 580u: goto L_08A9689C;
    case 581u: goto L_08A96960;
    case 582u: goto L_08A9697C;
    case 583u: goto L_08A96988;
    case 584u: goto L_08A96990;
    case 585u: goto L_08A96998;
    case 586u: goto L_08A969A4;
    case 587u: goto L_08A969AC;
    case 588u: goto L_08A969B4;
    case 589u: goto L_08A969C0;
    case 590u: goto L_08A969CC;
    case 591u: goto L_08A969D8;
    case 592u: goto L_08A969DC;
    case 593u: goto L_08A969E0;
    case 594u: goto L_08A969E8;
    case 595u: goto L_08A969F4;
    case 596u: goto L_08A96A00;
    case 597u: goto L_08A96A0C;
    case 598u: goto L_08A96A10;
    case 599u: goto L_08A96A14;
    case 600u: goto L_08A96A1C;
    case 601u: goto L_08A96A28;
    case 602u: goto L_08A96A34;
    case 603u: goto L_08A96A40;
    case 604u: goto L_08A96A44;
    case 605u: goto L_08A96A48;
    case 606u: goto L_08A96A50;
    case 607u: goto L_08A96A5C;
    case 608u: goto L_08A96A64;
    case 609u: goto L_08A96A6C;
    case 610u: goto L_08A96A78;
    case 611u: goto L_08A96A80;
    case 612u: goto L_08A96A88;
    case 613u: goto L_08A96A94;
    case 614u: goto L_08A96A9C;
    case 615u: goto L_08A96AA4;
    case 616u: goto L_08A96AB0;
    case 617u: goto L_08A96AB8;
    case 618u: goto L_08A96AC0;
    case 619u: goto L_08A96ACC;
    case 620u: goto L_08A96AD8;
    case 621u: goto L_08A96AE4;
    case 622u: goto L_08A96AE8;
    case 623u: goto L_08A96AEC;
    case 624u: goto L_08A96AF4;
    case 625u: goto L_08A96B00;
    case 626u: goto L_08A96B0C;
    case 627u: goto L_08A96B18;
    case 628u: goto L_08A96B1C;
    case 629u: goto L_08A96B20;
    case 630u: goto L_08A96B28;
    case 631u: goto L_08A96B34;
    case 632u: goto L_08A96B44;
    case 633u: goto L_08A96B68;
    case 634u: goto L_08A96B70;
    case 635u: goto L_08A96B84;
    case 636u: goto L_08A96B98;
    case 637u: goto L_08A96BA0;
    case 638u: goto L_08A96BA4;
    case 639u: goto L_08A96BB0;
    case 640u: goto L_08A96BCC;
    case 641u: goto L_08A96BD8;
    case 642u: goto L_08A96BF8;
    case 643u: goto L_08A96C2C;
    case 644u: goto L_08A96C40;
    case 645u: goto L_08A96C48;
    case 646u: goto L_08A96C50;
    case 647u: goto L_08A96C58;
    case 648u: goto L_08A96C60;
    case 649u: goto L_08A96C70;
    case 650u: goto L_08A96C98;
    case 651u: goto L_08A96C9C;
    case 652u: goto L_08A96CA4;
    case 653u: goto L_08A96CB4;
    case 654u: goto L_08A96CDC;
    case 655u: goto L_08A96CE0;
    case 656u: goto L_08A96CE8;
    case 657u: goto L_08A96CF8;
    case 658u: goto L_08A96D00;
    case 659u: goto L_08A96D04;
    case 660u: goto L_08A96D0C;
    case 661u: goto L_08A96D1C;
    case 662u: goto L_08A96D24;
    case 663u: goto L_08A96D28;
    case 664u: goto L_08A96D30;
    case 665u: goto L_08A96D40;
    case 666u: goto L_08A96D48;
    case 667u: goto L_08A96D4C;
    case 668u: goto L_08A96D54;
    case 669u: goto L_08A96D64;
    case 670u: goto L_08A96D6C;
    case 671u: goto L_08A96D70;
    case 672u: goto L_08A96D78;
    case 673u: goto L_08A96D88;
    case 674u: goto L_08A96D94;
    case 675u: goto L_08A96DA0;
    case 676u: goto L_08A96DA4;
    case 677u: goto L_08A96DAC;
    case 678u: goto L_08A96DB8;
    case 679u: goto L_08A96DC4;
    case 680u: goto L_08A96DC8;
    case 681u: goto L_08A96DCC;
    case 682u: goto L_08A96DD4;
    case 683u: goto L_08A96DE4;
    case 684u: goto L_08A96DF0;
    case 685u: goto L_08A96DFC;
    case 686u: goto L_08A96E00;
    case 687u: goto L_08A96E08;
    case 688u: goto L_08A96E14;
    case 689u: goto L_08A96E20;
    case 690u: goto L_08A96E24;
    case 691u: goto L_08A96E28;
    case 692u: goto L_08A96E30;
    case 693u: goto L_08A96E40;
    case 694u: goto L_08A96E4C;
    case 695u: goto L_08A96E58;
    case 696u: goto L_08A96E5C;
    case 697u: goto L_08A96E64;
    case 698u: goto L_08A96E70;
    case 699u: goto L_08A96E7C;
    case 700u: goto L_08A96E80;
    case 701u: goto L_08A96E84;
    case 702u: goto L_08A96E8C;
    case 703u: goto L_08A96E9C;
    case 704u: goto L_08A96EA8;
    case 705u: goto L_08A96EB4;
    case 706u: goto L_08A96EB8;
    case 707u: goto L_08A96EC0;
    case 708u: goto L_08A96ECC;
    case 709u: goto L_08A96ED8;
    case 710u: goto L_08A96EDC;
    case 711u: goto L_08A96EE0;
    case 712u: goto L_08A96EE8;
    case 713u: goto L_08A96EF8;
    case 714u: goto L_08A96F04;
    case 715u: goto L_08A96F10;
    case 716u: goto L_08A96F14;
    case 717u: goto L_08A96F1C;
    case 718u: goto L_08A96F28;
    case 719u: goto L_08A96F34;
    case 720u: goto L_08A96F38;
    case 721u: goto L_08A96F3C;
    case 722u: goto L_08A96F44;
    case 723u: goto L_08A96F54;
    case 724u: goto L_08A96F60;
    case 725u: goto L_08A96F6C;
    case 726u: goto L_08A96F70;
    case 727u: goto L_08A96F78;
    case 728u: goto L_08A96F84;
    case 729u: goto L_08A96F90;
    case 730u: goto L_08A96F94;
    case 731u: goto L_08A96F98;
    case 732u: goto L_08A96FA0;
    case 733u: goto L_08A96FB4;
    case 734u: goto L_08A96FBC;
    case 735u: goto L_08A96FC4;
    case 736u: goto L_08A96FCC;
    case 737u: goto L_08A96FD4;
    case 738u: goto L_08A96FD8;
    case 739u: goto L_08A96FE8;
    case 740u: goto L_08A96FFC;
    case 741u: goto L_08A97004;
    case 742u: goto L_08A9700C;
    case 743u: goto L_08A97014;
    case 744u: goto L_08A9701C;
    case 745u: goto L_08A97020;
    case 746u: goto L_08A97030;
    case 747u: goto L_08A97044;
    case 748u: goto L_08A9704C;
    case 749u: goto L_08A97054;
    case 750u: goto L_08A9705C;
    case 751u: goto L_08A97064;
    case 752u: goto L_08A97068;
    case 753u: goto L_08A97078;
    case 754u: goto L_08A9708C;
    case 755u: goto L_08A97094;
    case 756u: goto L_08A9709C;
    case 757u: goto L_08A970A4;
    case 758u: goto L_08A970AC;
    case 759u: goto L_08A970B0;
    case 760u: goto L_08A970C0;
    case 761u: goto L_08A970CC;
    case 762u: goto L_08A970E0;
    case 763u: goto L_08A970EC;
    case 764u: goto L_08A970F8;
    case 765u: goto L_08A970FC;
    case 766u: goto L_08A97100;
    case 767u: goto L_08A97108;
    case 768u: goto L_08A97114;
    case 769u: goto L_08A97118;
    case 770u: goto L_08A9711C;
    case 771u: goto L_08A9712C;
    case 772u: goto L_08A97138;
    case 773u: goto L_08A97144;
    case 774u: goto L_08A97148;
    case 775u: goto L_08A97150;
    case 776u: goto L_08A97164;
    case 777u: goto L_08A9716C;
    case 778u: goto L_08A97174;
    case 779u: goto L_08A97180;
    case 780u: goto L_08A97188;
    case 781u: goto L_08A97190;
    case 782u: goto L_08A97198;
    case 783u: goto L_08A971A0;
    case 784u: goto L_08A971A8;
    case 785u: goto L_08A971B0;
    case 786u: goto L_08A971B8;
    case 787u: goto L_08A971BC;
    case 788u: goto L_08A971C8;
    case 789u: goto L_08A971E0;
    case 790u: goto L_08A971E8;
    case 791u: goto L_08A971F0;
    case 792u: goto L_08A971F8;
    case 793u: goto L_08A97200;
    case 794u: goto L_08A97208;
    case 795u: goto L_08A97210;
    case 796u: goto L_08A97218;
    case 797u: goto L_08A97220;
    case 798u: goto L_08A97224;
    case 799u: goto L_08A97230;
    case 800u: goto L_08A97248;
    case 801u: goto L_08A97258;
    case 802u: goto L_08A97260;
    case 803u: goto L_08A97268;
    case 804u: goto L_08A97270;
    case 805u: goto L_08A97288;
    case 806u: goto L_08A97290;
    case 807u: goto L_08A97298;
    case 808u: goto L_08A972A0;
    case 809u: goto L_08A972B0;
    case 810u: goto L_08A972B8;
    case 811u: goto L_08A972C8;
    case 812u: goto L_08A972D8;
    case 813u: goto L_08A972EC;
    case 814u: goto L_08A972FC;
    case 815u: goto L_08A97304;
    case 816u: goto L_08A9730C;
    case 817u: goto L_08A97314;
    case 818u: goto L_08A9731C;
    case 819u: goto L_08A97324;
    case 820u: goto L_08A9732C;
    case 821u: goto L_08A97338;
    case 822u: goto L_08A97340;
    case 823u: goto L_08A97348;
    case 824u: goto L_08A97354;
    case 825u: goto L_08A97374;
    case 826u: goto L_08A9737C;
    case 827u: goto L_08A97384;
    case 828u: goto L_08A9738C;
    case 829u: goto L_08A97394;
    case 830u: goto L_08A9739C;
    case 831u: goto L_08A973A8;
    case 832u: goto L_08A973C8;
    case 833u: goto L_08A973D0;
    case 834u: goto L_08A973F0;
    case 835u: goto L_08A97400;
    case 836u: goto L_08A97418;
    case 837u: goto L_08A97420;
    case 838u: goto L_08A97428;
    case 839u: goto L_08A97434;
    case 840u: goto L_08A9743C;
    case 841u: goto L_08A97444;
    case 842u: goto L_08A9744C;
    case 843u: goto L_08A97454;
    case 844u: goto L_08A9745C;
    case 845u: goto L_08A9746C;
    case 846u: goto L_08A9748C;
    case 847u: goto L_08A97494;
    case 848u: goto L_08A974A0;
    case 849u: goto L_08A974AC;
    case 850u: goto L_08A974B8;
    case 851u: goto L_08A974DC;
    case 852u: goto L_08A974E4;
    case 853u: goto L_08A974EC;
    case 854u: goto L_08A974F4;
    case 855u: goto L_08A97510;
    case 856u: goto L_08A97518;
    case 857u: goto L_08A97520;
    case 858u: goto L_08A97524;
    case 859u: goto L_08A97538;
    case 860u: goto L_08A9754C;
    case 861u: goto L_08A9755C;
    case 862u: goto L_08A97568;
    case 863u: goto L_08A97570;
    case 864u: goto L_08A97578;
    case 865u: goto L_08A97580;
    case 866u: goto L_08A97588;
    case 867u: goto L_08A97590;
    case 868u: goto L_08A9759C;
    case 869u: goto L_08A975B0;
    case 870u: goto L_08A975C0;
    case 871u: goto L_08A975CC;
    case 872u: goto L_08A975D4;
    case 873u: goto L_08A975DC;
    case 874u: goto L_08A975E4;
    case 875u: goto L_08A975EC;
    case 876u: goto L_08A975F4;
    case 877u: goto L_08A97600;
    case 878u: goto L_08A97620;
    case 879u: goto L_08A97628;
    case 880u: goto L_08A97634;
    case 881u: goto L_08A97640;
    case 882u: goto L_08A9764C;
    case 883u: goto L_08A97670;
    case 884u: goto L_08A97678;
    case 885u: goto L_08A97680;
    case 886u: goto L_08A97688;
    case 887u: goto L_08A976A4;
    case 888u: goto L_08A976AC;
    case 889u: goto L_08A976B4;
    case 890u: goto L_08A976B8;
    case 891u: goto L_08A976CC;
    case 892u: goto L_08A976E4;
    case 893u: goto L_08A97718;
    case 894u: goto L_08A97720;
    case 895u: goto L_08A97728;
    case 896u: goto L_08A9775C;
    case 897u: goto L_08A97764;
    case 898u: goto L_08A97770;
    case 899u: goto L_08A97778;
    case 900u: goto L_08A97780;
    case 901u: goto L_08A97790;
    case 902u: goto L_08A97798;
    case 903u: goto L_08A977A0;
    case 904u: goto L_08A977A8;
    case 905u: goto L_08A977B0;
    case 906u: goto L_08A977C0;
    case 907u: goto L_08A977C8;
    case 908u: goto L_08A977D4;
    case 909u: goto L_08A977DC;
    case 910u: goto L_08A977E4;
    case 911u: goto L_08A977EC;
    case 912u: goto L_08A977F8;
    case 913u: goto L_08A97800;
    case 914u: goto L_08A9780C;
    case 915u: goto L_08A97814;
    case 916u: goto L_08A9781C;
    case 917u: goto L_08A97828;
    case 918u: goto L_08A97830;
    case 919u: goto L_08A97838;
    case 920u: goto L_08A97844;
    case 921u: goto L_08A9784C;
    case 922u: goto L_08A97854;
    case 923u: goto L_08A97860;
    case 924u: goto L_08A97868;
    case 925u: goto L_08A97870;
    case 926u: goto L_08A97878;
    case 927u: goto L_08A9787C;
    case 928u: goto L_08A97884;
    case 929u: goto L_08A9788C;
    case 930u: goto L_08A97890;
    case 931u: goto L_08A978A0;
    case 932u: goto L_08A978B8;
    case 933u: goto L_08A978EC;
    case 934u: goto L_08A978F4;
    case 935u: goto L_08A978FC;
    case 936u: goto L_08A97930;
    case 937u: goto L_08A97938;
    case 938u: goto L_08A97944;
    case 939u: goto L_08A9794C;
    case 940u: goto L_08A97954;
    case 941u: goto L_08A97964;
    case 942u: goto L_08A9796C;
    case 943u: goto L_08A97974;
    case 944u: goto L_08A9797C;
    case 945u: goto L_08A97984;
    case 946u: goto L_08A97994;
    case 947u: goto L_08A9799C;
    case 948u: goto L_08A979A8;
    case 949u: goto L_08A979B0;
    case 950u: goto L_08A979B8;
    case 951u: goto L_08A979C0;
    case 952u: goto L_08A979CC;
    case 953u: goto L_08A979D4;
    case 954u: goto L_08A979E0;
    case 955u: goto L_08A979E8;
    case 956u: goto L_08A979F0;
    case 957u: goto L_08A979FC;
    case 958u: goto L_08A97A04;
    case 959u: goto L_08A97A0C;
    case 960u: goto L_08A97A18;
    case 961u: goto L_08A97A20;
    case 962u: goto L_08A97A28;
    case 963u: goto L_08A97A34;
    case 964u: goto L_08A97A3C;
    case 965u: goto L_08A97A44;
    case 966u: goto L_08A97A4C;
    case 967u: goto L_08A97A50;
    case 968u: goto L_08A97A58;
    case 969u: goto L_08A97A60;
    case 970u: goto L_08A97A68;
    case 971u: goto L_08A97A78;
    case 972u: goto L_08A97A90;
    case 973u: goto L_08A97AC4;
    case 974u: goto L_08A97ACC;
    case 975u: goto L_08A97AD4;
    case 976u: goto L_08A97B08;
    case 977u: goto L_08A97B18;
    case 978u: goto L_08A97B20;
    case 979u: goto L_08A97B28;
    case 980u: goto L_08A97B30;
    case 981u: goto L_08A97B38;
    case 982u: goto L_08A97B40;
    case 983u: goto L_08A97B4C;
    case 984u: goto L_08A97B58;
    case 985u: goto L_08A97B64;
    case 986u: goto L_08A97B68;
    case 987u: goto L_08A97B6C;
    case 988u: goto L_08A97B74;
    case 989u: goto L_08A97B78;
    case 990u: goto L_08A97B88;
    case 991u: goto L_08A97B94;
    case 992u: goto L_08A97BA0;
    case 993u: goto L_08A97BA4;
    case 994u: goto L_08A97BA8;
    case 995u: goto L_08A97BB0;
    case 996u: goto L_08A97BB4;
    case 997u: goto L_08A97BC8;
    case 998u: goto L_08A97BD4;
    case 999u: goto L_08A97BDC;
    case 1000u: goto L_08A97BE8;
    case 1001u: goto L_08A97BF0;
    case 1002u: goto L_08A97C04;
    case 1003u: goto L_08A97C0C;
    case 1004u: goto L_08A97C18;
    case 1005u: goto L_08A97C1C;
    case 1006u: goto L_08A97C2C;
    case 1007u: goto L_08A97C3C;
    case 1008u: goto L_08A97C48;
    case 1009u: goto L_08A97C54;
    case 1010u: goto L_08A97C5C;
    case 1011u: goto L_08A97C64;
    case 1012u: goto L_08A97C6C;
    case 1013u: goto L_08A97C78;
    case 1014u: goto L_08A97C7C;
    case 1015u: goto L_08A97C80;
    case 1016u: goto L_08A97C88;
    case 1017u: goto L_08A97C9C;
    case 1018u: goto L_08A97CAC;
    case 1019u: goto L_08A97CB4;
    case 1020u: goto L_08A97CBC;
    case 1021u: goto L_08A97CC4;
    case 1022u: goto L_08A97CCC;
    case 1023u: goto L_08A97CD4;
    case 1024u: goto L_08A97CDC;
    case 1025u: goto L_08A97CE4;
    case 1026u: goto L_08A97CEC;
    case 1027u: goto L_08A97CF4;
    case 1028u: goto L_08A97CFC;
    case 1029u: goto L_08A97D00;
    case 1030u: goto L_08A97D0C;
    case 1031u: goto L_08A97D20;
    case 1032u: goto L_08A97D30;
    case 1033u: goto L_08A97D38;
    case 1034u: goto L_08A97D40;
    case 1035u: goto L_08A97D48;
    case 1036u: goto L_08A97D50;
    case 1037u: goto L_08A97D58;
    case 1038u: goto L_08A97D60;
    case 1039u: goto L_08A97D68;
    case 1040u: goto L_08A97D70;
    case 1041u: goto L_08A97D78;
    case 1042u: goto L_08A97D80;
    case 1043u: goto L_08A97D84;
    case 1044u: goto L_08A97D90;
    case 1045u: goto L_08A97D9C;
    case 1046u: goto L_08A97DA4;
    case 1047u: goto L_08A97DAC;
    case 1048u: goto L_08A97DB4;
    case 1049u: goto L_08A97DC0;
    case 1050u: goto L_08A97DCC;
    case 1051u: goto L_08A97DD4;
    case 1052u: goto L_08A97DDC;
    case 1053u: goto L_08A97DE8;
    case 1054u: goto L_08A97DEC;
    case 1055u: goto L_08A97DF0;
    case 1056u: goto L_08A97DF8;
    case 1057u: goto L_08A97E04;
    case 1058u: goto L_08A97E10;
    case 1059u: goto L_08A97E18;
    case 1060u: goto L_08A97E20;
    case 1061u: goto L_08A97E2C;
    case 1062u: goto L_08A97E30;
    case 1063u: goto L_08A97E34;
    case 1064u: goto L_08A97E3C;
    case 1065u: goto L_08A97E48;
    case 1066u: goto L_08A97E58;
    case 1067u: goto L_08A97E60;
    case 1068u: goto L_08A97E6C;
    case 1069u: goto L_08A97E74;
    case 1070u: goto L_08A97E7C;
    case 1071u: goto L_08A97E84;
    case 1072u: goto L_08A97E8C;
    case 1073u: goto L_08A97E94;
    case 1074u: goto L_08A97EA0;
    case 1075u: goto L_08A97EA8;
    case 1076u: goto L_08A97EAC;
    case 1077u: goto L_08A97EB4;
    case 1078u: goto L_08A97EC0;
    case 1079u: goto L_08A97EC8;
    case 1080u: goto L_08A97ECC;
    case 1081u: goto L_08A97ED4;
    case 1082u: goto L_08A97EE0;
    case 1083u: goto L_08A97EEC;
    case 1084u: goto L_08A97EF8;
    case 1085u: goto L_08A97F00;
    case 1086u: goto L_08A97F08;
    case 1087u: goto L_08A97F10;
    case 1088u: goto L_08A97F18;
    case 1089u: goto L_08A97F24;
    case 1090u: goto L_08A97F30;
    case 1091u: goto L_08A97F3C;
    case 1092u: goto L_08A97F48;
    case 1093u: goto L_08A97F54;
    case 1094u: goto L_08A97F5C;
    case 1095u: goto L_08A97F64;
    case 1096u: goto L_08A97F6C;
    case 1097u: goto L_08A97F74;
    case 1098u: goto L_08A97F80;
    case 1099u: goto L_08A97F84;
    case 1100u: goto L_08A97F88;
    case 1101u: goto L_08A97F90;
    case 1102u: goto L_08A97F9C;
    case 1103u: goto L_08A97FA8;
    case 1104u: goto L_08A97FB0;
    case 1105u: goto L_08A97FB8;
    case 1106u: goto L_08A97FC0;
    case 1107u: goto L_08A97FC4;
    case 1108u: goto L_08A97FCC;
    case 1109u: goto L_08A97FD8;
    case 1110u: goto L_08A97FE4;
    case 1111u: goto L_08A97FEC;
    case 1112u: goto L_08A97FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A94000:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A9400Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A9400Cu) goto L_08A9400C;
    return;
L_08A9400C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94024;
      }
      goto L_08A94018;
    }
L_08A94018:
    ctx.gpr[31] = (0x08A94020u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A94020u) goto L_08A94020;
    return;
L_08A94020:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A94024;
L_08A94024:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_08A94028;
L_08A94028:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A94038u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A94038u) goto L_08A94038;
    return;
L_08A94038:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A9404Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9404Cu) goto L_08A9404C;
    return;
L_08A9404C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(25632)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A94070;
      }
      goto L_08A94068;
    }
L_08A94068:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A9408C;
      }
      goto L_08A94070;
    }
L_08A94070:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9408C;
      }
      goto L_08A94080;
    }
L_08A94080:
    ctx.gpr[4] = (16384u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9408C;
      }
      goto L_08A9408C;
    }
L_08A9408C:
    ctx.gpr[4] = (0u | 202u);
    ctx.gpr[7] = (0u | 808u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    goto L_08A9409C;
L_08A9409C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A940B8;
      }
      goto L_08A940AC;
    }
L_08A940AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A940B8;
L_08A940B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(25632)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 211 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A9409C;
      }
      goto L_08A940E4;
    }
L_08A940E4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9414C;
      }
      goto L_08A94100;
    }
L_08A94100:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9410Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A9410Cu) goto L_08A9410C;
    return;
L_08A9410C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94138;
      }
      goto L_08A94118;
    }
L_08A94118:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(202) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(211) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A94138;
      }
      goto L_08A94128;
    }
L_08A94128:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94138;
      }
      goto L_08A94130;
    }
L_08A94130:
    ctx.gpr[31] = (0x08A94138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 592u, 0x08A37DD8u>(ctx, &aot_mem) && ctx.pc == 0x08A94138u) goto L_08A94138;
    return;
L_08A94138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A94100;
      }
      goto L_08A9414C;
    }
L_08A9414C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(25632), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7284), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94190:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A941E0;
      }
      goto L_08A941B4;
    }
L_08A941B4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A941C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A941C0u) goto L_08A941C0;
    return;
L_08A941C0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A941D8;
      }
      goto L_08A941CC;
    }
L_08A941CC:
    ctx.gpr[31] = (0x08A941D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A941D4u) goto L_08A941D4;
    return;
L_08A941D4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A941D8;
L_08A941D8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A941E0;
L_08A941E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A941ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A941ECu) goto L_08A941EC;
    return;
L_08A941EC:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94204u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A94204u) goto L_08A94204;
    return;
L_08A94204:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-30010)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-30010), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A94244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A942C8;
      }
      goto L_08A94268;
    }
L_08A94268:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A942A4;
      }
      goto L_08A94278;
    }
L_08A94278:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A94284u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A94284u) goto L_08A94284;
    return;
L_08A94284:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9429C;
      }
      goto L_08A94290;
    }
L_08A94290:
    ctx.gpr[31] = (0x08A94298u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A94298u) goto L_08A94298;
    return;
L_08A94298:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A9429C;
L_08A9429C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A942A4;
L_08A942A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A942B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20360));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A942B0u) goto L_08A942B0;
    return;
L_08A942B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A942C4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A942C4u) goto L_08A942C4;
    return;
L_08A942C4:
    ctx.gpr[4] = (2233u << 16u);
    goto L_08A942C8;
L_08A942C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(359)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A942DCu);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A942DCu) goto L_08A942DC;
    return;
L_08A942DC:
    ctx.gpr[31] = (0x08A942E4u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A942E4u) goto L_08A942E4;
    return;
L_08A942E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94380;
      }
      goto L_08A942EC;
    }
L_08A942EC:
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[31] = (0x08A942F8u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A942F8u) goto L_08A942F8;
    return;
L_08A942F8:
    ctx.gpr[31] = (0x08A94300u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A94300u) goto L_08A94300;
    return;
L_08A94300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A94380;
      }
      goto L_08A9430C;
    }
L_08A9430C:
    ctx.gpr[31] = (0x08A94314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A94314u) goto L_08A94314;
    return;
L_08A94314:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08A94320u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 216u, 0x08A292D4u>(ctx, &aot_mem) && ctx.pc == 0x08A94320u) goto L_08A94320;
    return;
L_08A94320:
    ctx.gpr[31] = (0x08A94328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A94328u) goto L_08A94328;
    return;
L_08A94328:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A94338u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 208u, 0x08A29274u>(ctx, &aot_mem) && ctx.pc == 0x08A94338u) goto L_08A94338;
    return;
L_08A94338:
    ctx.gpr[31] = (0x08A94340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A94340u) goto L_08A94340;
    return;
L_08A94340:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A94350u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 208u, 0x08A29274u>(ctx, &aot_mem) && ctx.pc == 0x08A94350u) goto L_08A94350;
    return;
L_08A94350:
    ctx.gpr[31] = (0x08A94358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A94358u) goto L_08A94358;
    return;
L_08A94358:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A94368u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 208u, 0x08A29274u>(ctx, &aot_mem) && ctx.pc == 0x08A94368u) goto L_08A94368;
    return;
L_08A94368:
    ctx.gpr[31] = (0x08A94370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A94370u) goto L_08A94370;
    return;
L_08A94370:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08A94380u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 208u, 0x08A29274u>(ctx, &aot_mem) && ctx.pc == 0x08A94380u) goto L_08A94380;
    return;
L_08A94380:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A943B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-20368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9441C;
      }
      goto L_08A943F4;
    }
L_08A943F4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A94400u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A94400u) goto L_08A94400;
    return;
L_08A94400:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94418;
      }
      goto L_08A9440C;
    }
L_08A9440C:
    ctx.gpr[31] = (0x08A94414u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A94414u) goto L_08A94414;
    return;
L_08A94414:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A94418;
L_08A94418:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    goto L_08A9441C;
L_08A9441C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A94428u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A94428u) goto L_08A94428;
    return;
L_08A94428:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A9443Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9443Cu) goto L_08A9443C;
    return;
L_08A9443C:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    ctx.gpr[31] = (0x08A94464u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A94464u) goto L_08A94464;
    return;
L_08A94464:
    ctx.gpr[31] = (0x08A9446Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08A9446Cu) goto L_08A9446C;
    return;
L_08A9446C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94628;
      }
      goto L_08A9448C;
    }
L_08A9448C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (2228u << 16u);
      if (branch_taken) {
          goto L_08A944C0;
      }
      goto L_08A94498;
    }
L_08A94498:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08A944A4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A944A4u) goto L_08A944A4;
    return;
L_08A944A4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A944BC;
      }
      goto L_08A944B0;
    }
L_08A944B0:
    ctx.gpr[31] = (0x08A944B8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A944B8u) goto L_08A944B8;
    return;
L_08A944B8:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08A944BC;
L_08A944BC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    goto L_08A944C0;
L_08A944C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A944CCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A944CCu) goto L_08A944CC;
    return;
L_08A944CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A944E0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A944E0u) goto L_08A944E0;
    return;
L_08A944E0:
    ctx.gpr[4] = (ctx.gpr[19] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A944FC;
      }
      goto L_08A944EC;
    }
L_08A944EC:
    ctx.gpr[31] = (0x08A944F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A944F4u) goto L_08A944F4;
    return;
L_08A944F4:
    ctx.gpr[31] = (0x08A944FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 620u, 0x089C69C0u>(ctx, &aot_mem) && ctx.pc == 0x08A944FCu) goto L_08A944FC;
    return;
L_08A944FC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[31] = (0x08A9450Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9450Cu) goto L_08A9450C;
    return;
L_08A9450C:
    ctx.gpr[11] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A94534u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 369u, 0x0897572Cu>(ctx, &aot_mem) && ctx.pc == 0x08A94534u) goto L_08A94534;
    return;
L_08A94534:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A94628;
      }
      goto L_08A94540;
    }
L_08A94540:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A9454Cu);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9454Cu) goto L_08A9454C;
    return;
L_08A9454C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A94568;
      }
      goto L_08A94558;
    }
L_08A94558:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A94564u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08A94564u) goto L_08A94564;
    return;
L_08A94564:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A94568;
L_08A94568:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94628;
      }
      goto L_08A94570;
    }
L_08A94570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16479u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A945F0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A945F0u) goto L_08A945F0;
    return;
L_08A945F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A94604u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A94604u) goto L_08A94604;
    return;
L_08A94604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A94628u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A94628u) goto L_08A94628;
    return;
L_08A94628:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9466C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9467Cu);
    ctx.gpr[4] = (0u | 162u);
    goto L_08A943B8;
L_08A9467C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A94688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A94698u);
    ctx.gpr[4] = (0u | 139u);
    goto L_08A943B8;
L_08A94698:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A946A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A946F8;
      }
      goto L_08A946CC;
    }
L_08A946CC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A946D8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A946D8u) goto L_08A946D8;
    return;
L_08A946D8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A946F0;
      }
      goto L_08A946E4;
    }
L_08A946E4:
    ctx.gpr[31] = (0x08A946ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A946ECu) goto L_08A946EC;
    return;
L_08A946EC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A946F0;
L_08A946F0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A946F8;
L_08A946F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A94704u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A94704u) goto L_08A94704;
    return;
L_08A94704:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94718u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A94718u) goto L_08A94718;
    return;
L_08A94718:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A947B4;
      }
      goto L_08A94730;
    }
L_08A94730:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08A94750;
L_08A94750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A94770;
    }
    goto L_08A94768;
L_08A94768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A94774;
      }
      goto L_08A94770;
    }
L_08A94770:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    goto L_08A94774;
L_08A94774:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A947A0;
      }
      goto L_08A94780;
    }
L_08A94780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A947A0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A947A0u) goto L_08A947A0;
    return;
L_08A947A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_08A94750;
      }
      goto L_08A947B4;
    }
L_08A947B4:
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
L_08A947D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9480Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20352));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28BB8u>(ctx, &aot_mem) && ctx.pc == 0x08A9480Cu) goto L_08A9480C;
    return;
L_08A9480C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A949B8;
      }
      goto L_08A94814;
    }
L_08A94814:
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A94850;
      }
      goto L_08A94824;
    }
L_08A94824:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A94830u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A94830u) goto L_08A94830;
    return;
L_08A94830:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94848;
      }
      goto L_08A9483C;
    }
L_08A9483C:
    ctx.gpr[31] = (0x08A94844u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A94844u) goto L_08A94844;
    return;
L_08A94844:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A94848;
L_08A94848:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A94850;
L_08A94850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A9485Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9485Cu) goto L_08A9485C;
    return;
L_08A9485C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94870u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A94870u) goto L_08A94870;
    return;
L_08A94870:
    ctx.gpr[31] = (0x08A94878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A94878u) goto L_08A94878;
    return;
L_08A94878:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(744)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25660)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25656)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25668)));
    ctx.gpr[17] = (0u | 9u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25664)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2229u << 16u);
    goto L_08A948A8;
L_08A948A8:
    ctx.gpr[31] = (0x08A948B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A948B0u) goto L_08A948B0;
    return;
L_08A948B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A948C4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A948C4u) goto L_08A948C4;
    return;
L_08A948C4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A94910;
      }
      goto L_08A948FC;
    }
L_08A948FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A94910;
L_08A94910:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 109 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A948A8;
      }
      goto L_08A94918;
    }
L_08A94918:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 113 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A94928;
      }
      goto L_08A94920;
    }
L_08A94920:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A948A8;
      }
      goto L_08A94928;
    }
L_08A94928:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
      if (branch_taken) {
          goto L_08A948A8;
      }
      goto L_08A94930;
    }
L_08A94930:
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A94960u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A94960u) goto L_08A94960;
    return;
L_08A94960:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9496Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A9496Cu) goto L_08A9496C;
    return;
L_08A9496C:
    ctx.gpr[31] = (0x08A94974u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08A94974u) goto L_08A94974;
    return;
L_08A94974:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A94998u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A94998u) goto L_08A94998;
    return;
L_08A94998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A949B8;
      }
      goto L_08A949A4;
    }
L_08A949A4:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A949B8;
      }
      goto L_08A949B0;
    }
L_08A949B0:
    ctx.gpr[31] = (0x08A949B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A949B8u) goto L_08A949B8;
    return;
L_08A949B8:
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
L_08A949E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25637)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(25637), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A94A4C;
      }
      goto L_08A94A24;
    }
L_08A94A24:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A94A30u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A94A30u) goto L_08A94A30;
    return;
L_08A94A30:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94A48;
      }
      goto L_08A94A3C;
    }
L_08A94A3C:
    ctx.gpr[31] = (0x08A94A44u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A94A44u) goto L_08A94A44;
    return;
L_08A94A44:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A94A48;
L_08A94A48:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    goto L_08A94A4C;
L_08A94A4C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A94A5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A94A5Cu) goto L_08A94A5C;
    return;
L_08A94A5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94A70u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A94A70u) goto L_08A94A70;
    return;
L_08A94A70:
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[17] = (0u | 4u);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25637)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_08A94A84;
L_08A94A84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-11468)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A94A9C;
      }
      goto L_08A94A94;
    }
L_08A94A94:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A94AA0;
      }
      goto L_08A94A9C;
    }
L_08A94A9C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), 0u);
    goto L_08A94AA0;
L_08A94AA0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A94A84;
      }
      goto L_08A94AB0;
    }
L_08A94AB0:
    ctx.gpr[31] = (0x08A94AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 732u, 0x08A93868u>(ctx, &aot_mem) && ctx.pc == 0x08A94AB8u) goto L_08A94AB8;
    return;
L_08A94AB8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A94AF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A94B44;
      }
      goto L_08A94B18;
    }
L_08A94B18:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A94B24u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A94B24u) goto L_08A94B24;
    return;
L_08A94B24:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94B3C;
      }
      goto L_08A94B30;
    }
L_08A94B30:
    ctx.gpr[31] = (0x08A94B38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A94B38u) goto L_08A94B38;
    return;
L_08A94B38:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A94B3C;
L_08A94B3C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A94B44;
L_08A94B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A94B50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A94B50u) goto L_08A94B50;
    return;
L_08A94B50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94B64u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A94B64u) goto L_08A94B64;
    return;
L_08A94B64:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[16] = (2229u << 16u);
    goto L_08A94B70;
L_08A94B70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11468)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[7] | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A94B70;
      }
      goto L_08A94B98;
    }
L_08A94B98:
    ctx.gpr[31] = (0x08A94BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 732u, 0x08A93868u>(ctx, &aot_mem) && ctx.pc == 0x08A94BA0u) goto L_08A94BA0;
    return;
L_08A94BA0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A94BD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A94C24;
      }
      goto L_08A94BF8;
    }
L_08A94BF8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A94C04u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A94C04u) goto L_08A94C04;
    return;
L_08A94C04:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94C1C;
      }
      goto L_08A94C10;
    }
L_08A94C10:
    ctx.gpr[31] = (0x08A94C18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A94C18u) goto L_08A94C18;
    return;
L_08A94C18:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A94C1C;
L_08A94C1C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A94C24;
L_08A94C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A94C30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A94C30u) goto L_08A94C30;
    return;
L_08A94C30:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94C48u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A94C48u) goto L_08A94C48;
    return;
L_08A94C48:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26136)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26136), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A94C88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A94CD8;
      }
      goto L_08A94CB0;
    }
L_08A94CB0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A94CBCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A94CBCu) goto L_08A94CBC;
    return;
L_08A94CBC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94CD4;
      }
      goto L_08A94CC8;
    }
L_08A94CC8:
    ctx.gpr[31] = (0x08A94CD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A94CD0u) goto L_08A94CD0;
    return;
L_08A94CD0:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A94CD4;
L_08A94CD4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    goto L_08A94CD8;
L_08A94CD8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A94CE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A94CE8u) goto L_08A94CE8;
    return;
L_08A94CE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94CFCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A94CFCu) goto L_08A94CFC;
    return;
L_08A94CFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7848)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A94D28;
      }
      goto L_08A94D18;
    }
L_08A94D18:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A94D28;
L_08A94D28:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A94D60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A94DB0;
      }
      goto L_08A94D88;
    }
L_08A94D88:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A94D94u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A94D94u) goto L_08A94D94;
    return;
L_08A94D94:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94DAC;
      }
      goto L_08A94DA0;
    }
L_08A94DA0:
    ctx.gpr[31] = (0x08A94DA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A94DA8u) goto L_08A94DA8;
    return;
L_08A94DA8:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A94DAC;
L_08A94DAC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    goto L_08A94DB0;
L_08A94DB0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A94DC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A94DC0u) goto L_08A94DC0;
    return;
L_08A94DC0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94DD4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A94DD4u) goto L_08A94DD4;
    return;
L_08A94DD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7848)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A94E00;
      }
      goto L_08A94DF0;
    }
L_08A94DF0:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-7848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A94E00;
L_08A94E00:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A94E38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A94E88;
      }
      goto L_08A94E5C;
    }
L_08A94E5C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A94E68u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A94E68u) goto L_08A94E68;
    return;
L_08A94E68:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94E80;
      }
      goto L_08A94E74;
    }
L_08A94E74:
    ctx.gpr[31] = (0x08A94E7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A94E7Cu) goto L_08A94E7C;
    return;
L_08A94E7C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A94E80;
L_08A94E80:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A94E88;
L_08A94E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A94E94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20344));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A94E94u) goto L_08A94E94;
    return;
L_08A94E94:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94EACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A94EACu) goto L_08A94EAC;
    return;
L_08A94EAC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A94F18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A94F6C;
      }
      goto L_08A94F40;
    }
L_08A94F40:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A94F4Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A94F4Cu) goto L_08A94F4C;
    return;
L_08A94F4C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A94F64;
      }
      goto L_08A94F58;
    }
L_08A94F58:
    ctx.gpr[31] = (0x08A94F60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A94F60u) goto L_08A94F60;
    return;
L_08A94F60:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A94F64;
L_08A94F64:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A94F6C;
L_08A94F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A94F78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20336));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A94F78u) goto L_08A94F78;
    return;
L_08A94F78:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A94F90u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A94F90u) goto L_08A94F90;
    return;
L_08A94F90:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A94FA8u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A94FA8u) goto L_08A94FA8;
    return;
L_08A94FA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7284), ctx.gpr[5]);
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
L_08A94FE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95030;
      }
      goto L_08A95004;
    }
L_08A95004:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A95010u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A95010u) goto L_08A95010;
    return;
L_08A95010:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95028;
      }
      goto L_08A9501C;
    }
L_08A9501C:
    ctx.gpr[31] = (0x08A95024u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A95024u) goto L_08A95024;
    return;
L_08A95024:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A95028;
L_08A95028:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95030;
L_08A95030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A9503Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20328));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9503Cu) goto L_08A9503C;
    return;
L_08A9503C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95050u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A95050u) goto L_08A95050;
    return;
L_08A95050:
    ctx.gpr[31] = (0x08A95058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A95058u) goto L_08A95058;
    return;
L_08A95058:
    ctx.gpr[31] = (0x08A95060u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A95060u) goto L_08A95060;
    return;
L_08A95060:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08A95078;
    }
    goto L_08A95078;
L_08A95078:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A95084u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 317u, 0x08ACD488u>(ctx, &aot_mem) && ctx.pc == 0x08A95084u) goto L_08A95084;
    return;
L_08A95084:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A950B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95108;
      }
      goto L_08A950DC;
    }
L_08A950DC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A950E8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A950E8u) goto L_08A950E8;
    return;
L_08A950E8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95100;
      }
      goto L_08A950F4;
    }
L_08A950F4:
    ctx.gpr[31] = (0x08A950FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A950FCu) goto L_08A950FC;
    return;
L_08A950FC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95100;
L_08A95100:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95108;
L_08A95108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95114u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20328));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95114u) goto L_08A95114;
    return;
L_08A95114:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A9512Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9512Cu) goto L_08A9512C;
    return;
L_08A9512C:
    ctx.gpr[31] = (0x08A95134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A95134u) goto L_08A95134;
    return;
L_08A95134:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    ctx.gpr[31] = (0x08A95140u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 317u, 0x08ACD488u>(ctx, &aot_mem) && ctx.pc == 0x08A95140u) goto L_08A95140;
    return;
L_08A95140:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A95170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A951C0;
      }
      goto L_08A95194;
    }
L_08A95194:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A951A0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A951A0u) goto L_08A951A0;
    return;
L_08A951A0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A951B8;
      }
      goto L_08A951AC;
    }
L_08A951AC:
    ctx.gpr[31] = (0x08A951B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A951B4u) goto L_08A951B4;
    return;
L_08A951B4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A951B8;
L_08A951B8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A951C0;
L_08A951C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A951CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20320));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A951CCu) goto L_08A951CC;
    return;
L_08A951CC:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A951E4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A951E4u) goto L_08A951E4;
    return;
L_08A951E4:
    ctx.gpr[31] = (0x08A951ECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 557u, 0x08932DBCu>(ctx, &aot_mem) && ctx.pc == 0x08A951ECu) goto L_08A951EC;
    return;
L_08A951EC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A9521C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A9526C;
      }
      goto L_08A95240;
    }
L_08A95240:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A9524Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A9524Cu) goto L_08A9524C;
    return;
L_08A9524C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95264;
      }
      goto L_08A95258;
    }
L_08A95258:
    ctx.gpr[31] = (0x08A95260u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A95260u) goto L_08A95260;
    return;
L_08A95260:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95264;
L_08A95264:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A9526C;
L_08A9526C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95278u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20320));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95278u) goto L_08A95278;
    return;
L_08A95278:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95290u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A95290u) goto L_08A95290;
    return;
L_08A95290:
    ctx.gpr[31] = (0x08A95298u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 557u, 0x08932DBCu>(ctx, &aot_mem) && ctx.pc == 0x08A95298u) goto L_08A95298;
    return;
L_08A95298:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A952C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95318;
      }
      goto L_08A952EC;
    }
L_08A952EC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A952F8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A952F8u) goto L_08A952F8;
    return;
L_08A952F8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95310;
      }
      goto L_08A95304;
    }
L_08A95304:
    ctx.gpr[31] = (0x08A9530Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A9530Cu) goto L_08A9530C;
    return;
L_08A9530C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95310;
L_08A95310:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95318;
L_08A95318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95324u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20320));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95324u) goto L_08A95324;
    return;
L_08A95324:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A9533Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9533Cu) goto L_08A9533C;
    return;
L_08A9533C:
    ctx.gpr[31] = (0x08A95344u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 557u, 0x08932DBCu>(ctx, &aot_mem) && ctx.pc == 0x08A95344u) goto L_08A95344;
    return;
L_08A95344:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A95374:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A953C4;
      }
      goto L_08A95398;
    }
L_08A95398:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A953A4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A953A4u) goto L_08A953A4;
    return;
L_08A953A4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A953BC;
      }
      goto L_08A953B0;
    }
L_08A953B0:
    ctx.gpr[31] = (0x08A953B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A953B8u) goto L_08A953B8;
    return;
L_08A953B8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A953BC;
L_08A953BC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A953C4;
L_08A953C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A953D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20320));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A953D0u) goto L_08A953D0;
    return;
L_08A953D0:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A953E8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A953E8u) goto L_08A953E8;
    return;
L_08A953E8:
    ctx.gpr[31] = (0x08A953F0u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 557u, 0x08932DBCu>(ctx, &aot_mem) && ctx.pc == 0x08A953F0u) goto L_08A953F0;
    return;
L_08A953F0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A95420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95470;
      }
      goto L_08A95444;
    }
L_08A95444:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95450u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A95450u) goto L_08A95450;
    return;
L_08A95450:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95468;
      }
      goto L_08A9545C;
    }
L_08A9545C:
    ctx.gpr[31] = (0x08A95464u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A95464u) goto L_08A95464;
    return;
L_08A95464:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95468;
L_08A95468:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95470;
L_08A95470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A9547Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20320));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9547Cu) goto L_08A9547C;
    return;
L_08A9547C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95494u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A95494u) goto L_08A95494;
    return;
L_08A95494:
    ctx.gpr[31] = (0x08A9549Cu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 557u, 0x08932DBCu>(ctx, &aot_mem) && ctx.pc == 0x08A9549Cu) goto L_08A9549C;
    return;
L_08A9549C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A954CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A9551C;
      }
      goto L_08A954F0;
    }
L_08A954F0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A954FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A954FCu) goto L_08A954FC;
    return;
L_08A954FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95514;
      }
      goto L_08A95508;
    }
L_08A95508:
    ctx.gpr[31] = (0x08A95510u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A95510u) goto L_08A95510;
    return;
L_08A95510:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95514;
L_08A95514:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A9551C;
L_08A9551C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95528u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95528u) goto L_08A95528;
    return;
L_08A95528:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95540u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A95540u) goto L_08A95540;
    return;
L_08A95540:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16652)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16652), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A95580:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A955D0;
      }
      goto L_08A955A4;
    }
L_08A955A4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A955B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A955B0u) goto L_08A955B0;
    return;
L_08A955B0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A955C8;
      }
      goto L_08A955BC;
    }
L_08A955BC:
    ctx.gpr[31] = (0x08A955C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A955C4u) goto L_08A955C4;
    return;
L_08A955C4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A955C8;
L_08A955C8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A955D0;
L_08A955D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A955DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A955DCu) goto L_08A955DC;
    return;
L_08A955DC:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A955F4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A955F4u) goto L_08A955F4;
    return;
L_08A955F4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16174)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16174), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A95634:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95684;
      }
      goto L_08A95658;
    }
L_08A95658:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95664u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A95664u) goto L_08A95664;
    return;
L_08A95664:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9567C;
      }
      goto L_08A95670;
    }
L_08A95670:
    ctx.gpr[31] = (0x08A95678u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A95678u) goto L_08A95678;
    return;
L_08A95678:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A9567C;
L_08A9567C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95684;
L_08A95684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95690u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95690u) goto L_08A95690;
    return;
L_08A95690:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A956A8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A956A8u) goto L_08A956A8;
    return;
L_08A956A8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-28869)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28869), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A956E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95738;
      }
      goto L_08A9570C;
    }
L_08A9570C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95718u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A95718u) goto L_08A95718;
    return;
L_08A95718:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95730;
      }
      goto L_08A95724;
    }
L_08A95724:
    ctx.gpr[31] = (0x08A9572Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A9572Cu) goto L_08A9572C;
    return;
L_08A9572C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95730;
L_08A95730:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95738;
L_08A95738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95744u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95744u) goto L_08A95744;
    return;
L_08A95744:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A9575Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A9575Cu) goto L_08A9575C;
    return;
L_08A9575C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27160)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(27160), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A9579C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A957EC;
      }
      goto L_08A957C0;
    }
L_08A957C0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A957CCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A957CCu) goto L_08A957CC;
    return;
L_08A957CC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A957E4;
      }
      goto L_08A957D8;
    }
L_08A957D8:
    ctx.gpr[31] = (0x08A957E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A957E0u) goto L_08A957E0;
    return;
L_08A957E0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A957E4;
L_08A957E4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A957EC;
L_08A957EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A957F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A957F8u) goto L_08A957F8;
    return;
L_08A957F8:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95810u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A95810u) goto L_08A95810;
    return;
L_08A95810:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27161)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(27161), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A95850:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A958A0;
      }
      goto L_08A95874;
    }
L_08A95874:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95880u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A95880u) goto L_08A95880;
    return;
L_08A95880:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95898;
      }
      goto L_08A9588C;
    }
L_08A9588C:
    ctx.gpr[31] = (0x08A95894u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A95894u) goto L_08A95894;
    return;
L_08A95894:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95898;
L_08A95898:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A958A0;
L_08A958A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A958ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A958ACu) goto L_08A958AC;
    return;
L_08A958AC:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A958C4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A958C4u) goto L_08A958C4;
    return;
L_08A958C4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27162)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(27162), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A95904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95954;
      }
      goto L_08A95928;
    }
L_08A95928:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95934u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A95934u) goto L_08A95934;
    return;
L_08A95934:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9594C;
      }
      goto L_08A95940;
    }
L_08A95940:
    ctx.gpr[31] = (0x08A95948u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A95948u) goto L_08A95948;
    return;
L_08A95948:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A9594C;
L_08A9594C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95954;
L_08A95954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95960u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95960u) goto L_08A95960;
    return;
L_08A95960:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95978u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A95978u) goto L_08A95978;
    return;
L_08A95978:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27163)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(27163), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A959B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95A08;
      }
      goto L_08A959DC;
    }
L_08A959DC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A959E8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A959E8u) goto L_08A959E8;
    return;
L_08A959E8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95A00;
      }
      goto L_08A959F4;
    }
L_08A959F4:
    ctx.gpr[31] = (0x08A959FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A959FCu) goto L_08A959FC;
    return;
L_08A959FC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95A00;
L_08A95A00:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95A08;
L_08A95A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95A14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95A14u) goto L_08A95A14;
    return;
L_08A95A14:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95A2Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A95A2Cu) goto L_08A95A2C;
    return;
L_08A95A2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7244), ctx.gpr[16]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A95A64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95AB4;
      }
      goto L_08A95A88;
    }
L_08A95A88:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95A94u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A95A94u) goto L_08A95A94;
    return;
L_08A95A94:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95AAC;
      }
      goto L_08A95AA0;
    }
L_08A95AA0:
    ctx.gpr[31] = (0x08A95AA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A95AA8u) goto L_08A95AA8;
    return;
L_08A95AA8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95AAC;
L_08A95AAC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95AB4;
L_08A95AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95AC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95AC0u) goto L_08A95AC0;
    return;
L_08A95AC0:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95AD8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A95AD8u) goto L_08A95AD8;
    return;
L_08A95AD8:
    ctx.gpr[31] = (0x08A95AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A95AE0u) goto L_08A95AE0;
    return;
L_08A95AE0:
    ctx.gpr[9] = (17530u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A95B00u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A95B00u) goto L_08A95B00;
    return;
L_08A95B00:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A95B30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95B80;
      }
      goto L_08A95B54;
    }
L_08A95B54:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95B60u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A95B60u) goto L_08A95B60;
    return;
L_08A95B60:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95B78;
      }
      goto L_08A95B6C;
    }
L_08A95B6C:
    ctx.gpr[31] = (0x08A95B74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A95B74u) goto L_08A95B74;
    return;
L_08A95B74:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95B78;
L_08A95B78:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95B80;
L_08A95B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95B8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95B8Cu) goto L_08A95B8C;
    return;
L_08A95B8C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95BA4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A95BA4u) goto L_08A95BA4;
    return;
L_08A95BA4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5548), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A95BDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95C2C;
      }
      goto L_08A95C00;
    }
L_08A95C00:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95C0Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A95C0Cu) goto L_08A95C0C;
    return;
L_08A95C0C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95C24;
      }
      goto L_08A95C18;
    }
L_08A95C18:
    ctx.gpr[31] = (0x08A95C20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A95C20u) goto L_08A95C20;
    return;
L_08A95C20:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95C24;
L_08A95C24:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95C2C;
L_08A95C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95C38u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95C38u) goto L_08A95C38;
    return;
L_08A95C38:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95C50u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A95C50u) goto L_08A95C50;
    return;
L_08A95C50:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-17120), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A95C88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95CD8;
      }
      goto L_08A95CAC;
    }
L_08A95CAC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95CB8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A95CB8u) goto L_08A95CB8;
    return;
L_08A95CB8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95CD0;
      }
      goto L_08A95CC4;
    }
L_08A95CC4:
    ctx.gpr[31] = (0x08A95CCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A95CCCu) goto L_08A95CCC;
    return;
L_08A95CCC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95CD0;
L_08A95CD0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95CD8;
L_08A95CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95CE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95CE4u) goto L_08A95CE4;
    return;
L_08A95CE4:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95CFCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A95CFCu) goto L_08A95CFC;
    return;
L_08A95CFC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15437), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15436), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A95D3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95D8C;
      }
      goto L_08A95D60;
    }
L_08A95D60:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95D6Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A95D6Cu) goto L_08A95D6C;
    return;
L_08A95D6C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95D84;
      }
      goto L_08A95D78;
    }
L_08A95D78:
    ctx.gpr[31] = (0x08A95D80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A95D80u) goto L_08A95D80;
    return;
L_08A95D80:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95D84;
L_08A95D84:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95D8C;
L_08A95D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95D98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95D98u) goto L_08A95D98;
    return;
L_08A95D98:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95DB0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A95DB0u) goto L_08A95DB0;
    return;
L_08A95DB0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15436), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15437), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A95DF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95E40;
      }
      goto L_08A95E14;
    }
L_08A95E14:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A95E20u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A95E20u) goto L_08A95E20;
    return;
L_08A95E20:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95E38;
      }
      goto L_08A95E2C;
    }
L_08A95E2C:
    ctx.gpr[31] = (0x08A95E34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A95E34u) goto L_08A95E34;
    return;
L_08A95E34:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A95E38;
L_08A95E38:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95E40;
L_08A95E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95E4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95E4Cu) goto L_08A95E4C;
    return;
L_08A95E4C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95E64u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A95E64u) goto L_08A95E64;
    return;
L_08A95E64:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16178)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16178), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A95EA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A95ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A95ECCu) goto L_08A95ECC;
    return;
L_08A95ECC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96024;
      }
      goto L_08A95ED4;
    }
L_08A95ED4:
    ctx.gpr[31] = (0x08A95EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A95EDCu) goto L_08A95EDC;
    return;
L_08A95EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 5u);
      if (branch_taken) {
          goto L_08A95EFC;
      }
      goto L_08A95EE8;
    }
L_08A95EE8:
    ctx.gpr[31] = (0x08A95EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A95EF0u) goto L_08A95EF0;
    return;
L_08A95EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A96024;
      }
      goto L_08A95EFC;
    }
L_08A95EFC:
    ctx.gpr[31] = (0x08A95F04u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A95F04u) goto L_08A95F04;
    return;
L_08A95F04:
    ctx.gpr[31] = (0x08A95F0Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A95F0Cu) goto L_08A95F0C;
    return;
L_08A95F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A95F34;
      }
      goto L_08A95F18;
    }
L_08A95F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95F34;
      }
      goto L_08A95F24;
    }
L_08A95F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08A95F34u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A95F34u) goto L_08A95F34;
    return;
L_08A95F34:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16576u << 16u);
    ctx.gpr[31] = (0x08A95F50u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A95F50u) goto L_08A95F50;
    return;
L_08A95F50:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A95F80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x08A95F80u) goto L_08A95F80;
    return;
L_08A95F80:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96024;
      }
      goto L_08A95F8C;
    }
L_08A95F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A96024;
      }
      goto L_08A95F9C;
    }
L_08A95F9C:
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A95FD8;
      }
      goto L_08A95FAC;
    }
L_08A95FAC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A95FB8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A95FB8u) goto L_08A95FB8;
    return;
L_08A95FB8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A95FD0;
      }
      goto L_08A95FC4;
    }
L_08A95FC4:
    ctx.gpr[31] = (0x08A95FCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A95FCCu) goto L_08A95FCC;
    return;
L_08A95FCC:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A95FD0;
L_08A95FD0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A95FD8;
L_08A95FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A95FE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A95FE4u) goto L_08A95FE4;
    return;
L_08A95FE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A95FF8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A95FF8u) goto L_08A95FF8;
    return;
L_08A95FF8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08A96008u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A96008u) goto L_08A96008;
    return;
L_08A96008:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
    goto L_08A96024;
L_08A96024:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96048:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A96098;
      }
      goto L_08A9606C;
    }
L_08A9606C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A96078u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A96078u) goto L_08A96078;
    return;
L_08A96078:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96090;
      }
      goto L_08A96084;
    }
L_08A96084:
    ctx.gpr[31] = (0x08A9608Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A9608Cu) goto L_08A9608C;
    return;
L_08A9608C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A96090;
L_08A96090:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A96098;
L_08A96098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A960A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A960A4u) goto L_08A960A4;
    return;
L_08A960A4:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A960BCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A960BCu) goto L_08A960BC;
    return;
L_08A960BC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28871), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A960F4:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08A960FC;
L_08A960FC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9612C;
      }
      goto L_08A96104;
    }
L_08A96104:
    ctx.gpr[8] = (ctx.gpr[7] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9628C;
      }
      goto L_08A96110;
    }
L_08A96110:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20160)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    jump_target = ctx.gpr[1];
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9612C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96290;
      }
      goto L_08A96134;
    }
L_08A96134:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96150;
      }
      goto L_08A96140;
    }
L_08A96140:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A96144;
L_08A96144:
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A960FC;
      }
      goto L_08A96150;
    }
L_08A96150:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96290;
      }
      goto L_08A96158;
    }
L_08A96158:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A9616C;
      }
      goto L_08A96164;
    }
L_08A96164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96144;
      }
      goto L_08A9616C;
    }
L_08A9616C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96290;
      }
      goto L_08A96174;
    }
L_08A96174:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96188;
      }
      goto L_08A96180;
    }
L_08A96180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96144;
      }
      goto L_08A96188;
    }
L_08A96188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96290;
      }
      goto L_08A96190;
    }
L_08A96190:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A961A4;
      }
      goto L_08A9619C;
    }
L_08A9619C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96144;
      }
      goto L_08A961A4;
    }
L_08A961A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96290;
      }
      goto L_08A961AC;
    }
L_08A961AC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A961C0;
      }
      goto L_08A961B8;
    }
L_08A961B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96144;
      }
      goto L_08A961C0;
    }
L_08A961C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96290;
      }
      goto L_08A961C8;
    }
L_08A961C8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A961DC;
      }
      goto L_08A961D4;
    }
L_08A961D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96144;
      }
      goto L_08A961DC;
    }
L_08A961DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96290;
      }
      goto L_08A961E4;
    }
L_08A961E4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A961F8;
      }
      goto L_08A961F0;
    }
L_08A961F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96144;
      }
      goto L_08A961F8;
    }
L_08A961F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96290;
      }
      goto L_08A96200;
    }
L_08A96200:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96214;
      }
      goto L_08A9620C;
    }
L_08A9620C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96144;
      }
      goto L_08A96214;
    }
L_08A96214:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96290;
      }
      goto L_08A9621C;
    }
L_08A9621C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96230;
      }
      goto L_08A96228;
    }
L_08A96228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96144;
      }
      goto L_08A96230;
    }
L_08A96230:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96290;
      }
      goto L_08A96238;
    }
L_08A96238:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A9624C;
      }
      goto L_08A96244;
    }
L_08A96244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96144;
      }
      goto L_08A9624C;
    }
L_08A9624C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96290;
      }
      goto L_08A96254;
    }
L_08A96254:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96268;
      }
      goto L_08A96260;
    }
L_08A96260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96144;
      }
      goto L_08A96268;
    }
L_08A96268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96290;
      }
      goto L_08A96270;
    }
L_08A96270:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A96284;
      }
      goto L_08A9627C;
    }
L_08A9627C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A96144;
      }
      goto L_08A96284;
    }
L_08A96284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96290;
      }
      goto L_08A9628C;
    }
L_08A9628C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A96290;
L_08A96290:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96298:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A962FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A96324u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20312));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A96324u) goto L_08A96324;
    return;
L_08A96324:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20628)));
    ctx.gpr[18] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-25184));
      if (branch_taken) {
          goto L_08A96340;
      }
      goto L_08A96338;
    }
L_08A96338:
    ctx.gpr[31] = (0x08A96340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 542u, 0x08AFA5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A96340u) goto L_08A96340;
    return;
L_08A96340:
    ctx.gpr[31] = (0x08A96348u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20628)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 575u, 0x08837F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A96348u) goto L_08A96348;
    return;
L_08A96348:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (2229u << 16u);
    goto L_08A9635C;
L_08A9635C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A96368u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96B44;
L_08A96368:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(25652), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_08A9635C;
      }
      goto L_08A96384;
    }
L_08A96384:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5826), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5827), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5828), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25648), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25649), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (16128u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A963C4u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08A96408;
L_08A963C4:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A963D8u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08A96408;
L_08A963D8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A963E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20288));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A963E8u) goto L_08A963E8;
    return;
L_08A963E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96408:
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25184));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A96434u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A96408;
L_08A96434:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A96440u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 318u, 0x08A98E88u>(ctx, &aot_mem) && ctx.pc == 0x08A96440u) goto L_08A96440;
    return;
L_08A96440:
    ctx.gpr[31] = (0x08A96448u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08A96408;
L_08A96448:
    ctx.gpr[31] = (0x08A96450u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    goto L_08A96298;
L_08A96450:
    ctx.gpr[31] = (0x08A96458u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08A96408;
L_08A96458:
    ctx.gpr[31] = (0x08A96460u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(52));
    goto L_08A96298;
L_08A96460:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9646C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9647Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A96408;
L_08A9647C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A96488u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A96960;
L_08A96488:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A964A8u);
    // nop
    goto L_08A96424;
L_08A964A8:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-5826)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A964C8;
      }
      goto L_08A964B8;
    }
L_08A964B8:
    ctx.gpr[31] = (0x08A964C0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A96408;
L_08A964C0:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(128), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-5826), static_cast<std::uint8_t>(0u));
    goto L_08A964C8;
L_08A964C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A964D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A964E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9652C;
      }
      goto L_08A96514;
    }
L_08A96514:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-5828)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A96534;
      }
      goto L_08A96524;
    }
L_08A96524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A966D8;
      }
      goto L_08A9652C;
    }
L_08A9652C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96868;
      }
      goto L_08A96534;
    }
L_08A96534:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29192)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A966D8;
      }
      goto L_08A96540;
    }
L_08A96540:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A966D8;
      }
      goto L_08A96550;
    }
L_08A96550:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17172u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 37450u);
    ctx.gpr[6] = (16800u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (17184u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A96598u);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08A96598u) goto L_08A96598;
    return;
L_08A96598:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[31] = (0x08A965B8u);
    ctx.gpr[8] = (0u | 210u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08A965B8u) goto L_08A965B8;
    return;
L_08A965B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A965C8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08A965C8u) goto L_08A965C8;
    return;
L_08A965C8:
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x08A965E0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08A965E0u) goto L_08A965E0;
    return;
L_08A965E0:
    ctx.gpr[31] = (0x08A965E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A965E8u) goto L_08A965E8;
    return;
L_08A965E8:
    ctx.gpr[31] = (0x08A965F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A965F0u) goto L_08A965F0;
    return;
L_08A965F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-50));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A96604u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x08A96604u) goto L_08A96604;
    return;
L_08A96604:
    ctx.gpr[31] = (0x08A9660Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A9660Cu) goto L_08A9660C;
    return;
L_08A9660C:
    ctx.gpr[31] = (0x08A96614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08A96614u) goto L_08A96614;
    return;
L_08A96614:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 200u);
    ctx.gpr[31] = (0x08A9662Cu);
    ctx.gpr[8] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08A9662Cu) goto L_08A9662C;
    return;
L_08A9662C:
    ctx.gpr[31] = (0x08A96634u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08A96634u) goto L_08A96634;
    return;
L_08A96634:
    ctx.gpr[31] = (0x08A9663Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08A9663Cu) goto L_08A9663C;
    return;
L_08A9663C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08A966AC;
      }
      goto L_08A96684;
    }
L_08A96684:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A96690u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A96690u) goto L_08A96690;
    return;
L_08A96690:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A966A8;
      }
      goto L_08A9669C;
    }
L_08A9669C:
    ctx.gpr[31] = (0x08A966A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A966A4u) goto L_08A966A4;
    return;
L_08A966A4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A966A8;
L_08A966A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_08A966AC;
L_08A966AC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A966BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20276));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A966BCu) goto L_08A966BC;
    return;
L_08A966BC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A966D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A966D0u) goto L_08A966D0;
    return;
L_08A966D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96868;
      }
      goto L_08A966D8;
    }
L_08A966D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-5826)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A96868;
      }
      goto L_08A966E8;
    }
L_08A966E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17172u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 37450u);
    ctx.gpr[6] = (16800u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (17184u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A96730u);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08A96730u) goto L_08A96730;
    return;
L_08A96730:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[31] = (0x08A96750u);
    ctx.gpr[8] = (0u | 210u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08A96750u) goto L_08A96750;
    return;
L_08A96750:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A96760u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08A96760u) goto L_08A96760;
    return;
L_08A96760:
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x08A96778u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08A96778u) goto L_08A96778;
    return;
L_08A96778:
    ctx.gpr[31] = (0x08A96780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A96780u) goto L_08A96780;
    return;
L_08A96780:
    ctx.gpr[31] = (0x08A96788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A96788u) goto L_08A96788;
    return;
L_08A96788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-50));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A9679Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x08A9679Cu) goto L_08A9679C;
    return;
L_08A9679C:
    ctx.gpr[31] = (0x08A967A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A967A4u) goto L_08A967A4;
    return;
L_08A967A4:
    ctx.gpr[31] = (0x08A967ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08A967ACu) goto L_08A967AC;
    return;
L_08A967AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 200u);
    ctx.gpr[31] = (0x08A967C4u);
    ctx.gpr[8] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08A967C4u) goto L_08A967C4;
    return;
L_08A967C4:
    ctx.gpr[31] = (0x08A967CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08A967CCu) goto L_08A967CC;
    return;
L_08A967CC:
    ctx.gpr[31] = (0x08A967D4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08A967D4u) goto L_08A967D4;
    return;
L_08A967D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08A96844;
      }
      goto L_08A9681C;
    }
L_08A9681C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A96828u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A96828u) goto L_08A96828;
    return;
L_08A96828:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96840;
      }
      goto L_08A96834;
    }
L_08A96834:
    ctx.gpr[31] = (0x08A9683Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A9683Cu) goto L_08A9683C;
    return;
L_08A9683C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A96840;
L_08A96840:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_08A96844;
L_08A96844:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A96854u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20268));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A96854u) goto L_08A96854;
    return;
L_08A96854:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A96868u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A96868u) goto L_08A96868;
    return;
L_08A96868:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9688C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9689Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 558u, 0x08932DD8u>(ctx, &aot_mem) && ctx.pc == 0x08A9689Cu) goto L_08A9689C;
    return;
L_08A9689C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16652), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26136), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16172), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16173), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16174), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16175), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16176), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16177), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16178), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16179), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16180), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16181), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15436), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15437), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-17120), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5548), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7244), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28872), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28869), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28871), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28870), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A96990;
      }
      goto L_08A9697C;
    }
L_08A9697C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96998;
      }
      goto L_08A96988;
    }
L_08A96988:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A969AC;
      }
      goto L_08A96990;
    }
L_08A96990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B34;
      }
      goto L_08A96998;
    }
L_08A96998:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A969AC;
      }
      goto L_08A969A4;
    }
L_08A969A4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A969AC;
L_08A969AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A969C0;
      }
      goto L_08A969B4;
    }
L_08A969B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A969C0u);
    ctx.gpr[5] = (0u | 84u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 453u, 0x08A99710u>(ctx, &aot_mem) && ctx.pc == 0x08A969C0u) goto L_08A969C0;
    return;
L_08A969C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A969DC;
      }
      goto L_08A969CC;
    }
L_08A969CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A969E0;
      }
      goto L_08A969D8;
    }
L_08A969D8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A969DC;
L_08A969DC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A969E0;
L_08A969E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A969F4;
      }
      goto L_08A969E8;
    }
L_08A969E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A969F4u);
    ctx.gpr[5] = (0u | 67u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 453u, 0x08A99710u>(ctx, &aot_mem) && ctx.pc == 0x08A969F4u) goto L_08A969F4;
    return;
L_08A969F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96A10;
      }
      goto L_08A96A00;
    }
L_08A96A00:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A96A14;
      }
      goto L_08A96A0C;
    }
L_08A96A0C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A96A10;
L_08A96A10:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A96A14;
L_08A96A14:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96A28;
      }
      goto L_08A96A1C;
    }
L_08A96A1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96A28u);
    ctx.gpr[5] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 453u, 0x08A99710u>(ctx, &aot_mem) && ctx.pc == 0x08A96A28u) goto L_08A96A28;
    return;
L_08A96A28:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96A44;
      }
      goto L_08A96A34;
    }
L_08A96A34:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A96A48;
      }
      goto L_08A96A40;
    }
L_08A96A40:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A96A44;
L_08A96A44:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A96A48;
L_08A96A48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96A5C;
      }
      goto L_08A96A50;
    }
L_08A96A50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96A5Cu);
    ctx.gpr[5] = (0u | 83u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 453u, 0x08A99710u>(ctx, &aot_mem) && ctx.pc == 0x08A96A5Cu) goto L_08A96A5C;
    return;
L_08A96A5C:
    ctx.gpr[31] = (0x08A96A64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96D78;
L_08A96A64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96A78;
      }
      goto L_08A96A6C;
    }
L_08A96A6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96A78u);
    ctx.gpr[5] = (0u | 85u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 453u, 0x08A99710u>(ctx, &aot_mem) && ctx.pc == 0x08A96A78u) goto L_08A96A78;
    return;
L_08A96A78:
    ctx.gpr[31] = (0x08A96A80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96DD4;
L_08A96A80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96A94;
      }
      goto L_08A96A88;
    }
L_08A96A88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96A94u);
    ctx.gpr[5] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 453u, 0x08A99710u>(ctx, &aot_mem) && ctx.pc == 0x08A96A94u) goto L_08A96A94;
    return;
L_08A96A94:
    ctx.gpr[31] = (0x08A96A9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96E30;
L_08A96A9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96AB0;
      }
      goto L_08A96AA4;
    }
L_08A96AA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96AB0u);
    ctx.gpr[5] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 453u, 0x08A99710u>(ctx, &aot_mem) && ctx.pc == 0x08A96AB0u) goto L_08A96AB0;
    return;
L_08A96AB0:
    ctx.gpr[31] = (0x08A96AB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96EE8;
L_08A96AB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96ACC;
      }
      goto L_08A96AC0;
    }
L_08A96AC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96ACCu);
    ctx.gpr[5] = (0u | 82u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 453u, 0x08A99710u>(ctx, &aot_mem) && ctx.pc == 0x08A96ACCu) goto L_08A96ACC;
    return;
L_08A96ACC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96AE8;
      }
      goto L_08A96AD8;
    }
L_08A96AD8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A96AEC;
      }
      goto L_08A96AE4;
    }
L_08A96AE4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A96AE8;
L_08A96AE8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A96AEC;
L_08A96AEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B00;
      }
      goto L_08A96AF4;
    }
L_08A96AF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96B00u);
    ctx.gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 453u, 0x08A99710u>(ctx, &aot_mem) && ctx.pc == 0x08A96B00u) goto L_08A96B00;
    return;
L_08A96B00:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96B1C;
      }
      goto L_08A96B0C;
    }
L_08A96B0C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A96B20;
      }
      goto L_08A96B18;
    }
L_08A96B18:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A96B1C;
L_08A96B1C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A96B20;
L_08A96B20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96B34;
      }
      goto L_08A96B28;
    }
L_08A96B28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A96B34u);
    ctx.gpr[5] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 453u, 0x08A99710u>(ctx, &aot_mem) && ctx.pc == 0x08A96B34u) goto L_08A96B34;
    return;
L_08A96B34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96B44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x08A96B68u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    goto L_08A96298;
L_08A96B68:
    ctx.gpr[31] = (0x08A96B70u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    goto L_08A96298;
L_08A96B70:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(132), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96B84;
L_08A96B84:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A96B84;
      }
      goto L_08A96B98;
    }
L_08A96B98:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
      if (branch_taken) {
          goto L_08A96BA4;
      }
      goto L_08A96BA0;
    }
L_08A96BA0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(0u));
    goto L_08A96BA4;
L_08A96BA4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    goto L_08A96BB0;
L_08A96BB0:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(138), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96BB0;
      }
      goto L_08A96BCC;
    }
L_08A96BCC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 32u);
    goto L_08A96BD8;
L_08A96BD8:
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96BD8;
      }
      goto L_08A96BF8;
    }
L_08A96BF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96C2C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96C40:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96C48:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96C50:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96C58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96C60:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25652)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96C98;
      }
      goto L_08A96C70;
    }
L_08A96C70:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A96C9C;
      }
      goto L_08A96C98;
    }
L_08A96C98:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    goto L_08A96C9C;
L_08A96C9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96CA4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25652)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96CDC;
      }
      goto L_08A96CB4;
    }
L_08A96CB4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A96CE0;
      }
      goto L_08A96CDC;
    }
L_08A96CDC:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    goto L_08A96CE0;
L_08A96CE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96CE8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25652)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96D00;
      }
      goto L_08A96CF8;
    }
L_08A96CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
      if (branch_taken) {
          goto L_08A96D04;
      }
      goto L_08A96D00;
    }
L_08A96D00:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    goto L_08A96D04;
L_08A96D04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96D0C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25652)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96D24;
      }
      goto L_08A96D1C;
    }
L_08A96D1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
      if (branch_taken) {
          goto L_08A96D28;
      }
      goto L_08A96D24;
    }
L_08A96D24:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    goto L_08A96D28;
L_08A96D28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96D30:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25652)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96D48;
      }
      goto L_08A96D40;
    }
L_08A96D40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_08A96D4C;
      }
      goto L_08A96D48;
    }
L_08A96D48:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    goto L_08A96D4C;
L_08A96D4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96D54:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25652)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96D6C;
      }
      goto L_08A96D64;
    }
L_08A96D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08A96D70;
      }
      goto L_08A96D6C;
    }
L_08A96D6C:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    goto L_08A96D70;
L_08A96D70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96D78:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25652)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96DAC;
      }
      goto L_08A96D88;
    }
L_08A96D88:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96DA4;
      }
      goto L_08A96D94;
    }
L_08A96D94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(76))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96DA4;
      }
      goto L_08A96DA0;
    }
L_08A96DA0:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96DA4;
L_08A96DA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A96DCC;
      }
      goto L_08A96DAC;
    }
L_08A96DAC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96DC8;
      }
      goto L_08A96DB8;
    }
L_08A96DB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(68))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96DC8;
      }
      goto L_08A96DC4;
    }
L_08A96DC4:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96DC8;
L_08A96DC8:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A96DCC;
L_08A96DCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96DD4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25652)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96E08;
      }
      goto L_08A96DE4;
    }
L_08A96DE4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96E00;
      }
      goto L_08A96DF0;
    }
L_08A96DF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(78))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96E00;
      }
      goto L_08A96DFC;
    }
L_08A96DFC:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96E00;
L_08A96E00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A96E28;
      }
      goto L_08A96E08;
    }
L_08A96E08:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96E24;
      }
      goto L_08A96E14;
    }
L_08A96E14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(70))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96E24;
      }
      goto L_08A96E20;
    }
L_08A96E20:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96E24;
L_08A96E24:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A96E28;
L_08A96E28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96E30:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25652)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96E64;
      }
      goto L_08A96E40;
    }
L_08A96E40:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96E5C;
      }
      goto L_08A96E4C;
    }
L_08A96E4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96E5C;
      }
      goto L_08A96E58;
    }
L_08A96E58:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96E5C;
L_08A96E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A96E84;
      }
      goto L_08A96E64;
    }
L_08A96E64:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96E80;
      }
      goto L_08A96E70;
    }
L_08A96E70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(72))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96E80;
      }
      goto L_08A96E7C;
    }
L_08A96E7C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96E80;
L_08A96E80:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A96E84;
L_08A96E84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96E8C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25652)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96EC0;
      }
      goto L_08A96E9C;
    }
L_08A96E9C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96EB8;
      }
      goto L_08A96EA8;
    }
L_08A96EA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96EB8;
      }
      goto L_08A96EB4;
    }
L_08A96EB4:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96EB8;
L_08A96EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A96EE0;
      }
      goto L_08A96EC0;
    }
L_08A96EC0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96EDC;
      }
      goto L_08A96ECC;
    }
L_08A96ECC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(72))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96EDC;
      }
      goto L_08A96ED8;
    }
L_08A96ED8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96EDC;
L_08A96EDC:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A96EE0;
L_08A96EE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96EE8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25652)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F1C;
      }
      goto L_08A96EF8;
    }
L_08A96EF8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96F14;
      }
      goto L_08A96F04;
    }
L_08A96F04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(82))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F14;
      }
      goto L_08A96F10;
    }
L_08A96F10:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96F14;
L_08A96F14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A96F3C;
      }
      goto L_08A96F1C;
    }
L_08A96F1C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96F38;
      }
      goto L_08A96F28;
    }
L_08A96F28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(74))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F38;
      }
      goto L_08A96F34;
    }
L_08A96F34:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96F38;
L_08A96F38:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A96F3C;
L_08A96F3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96F44:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25652)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F78;
      }
      goto L_08A96F54;
    }
L_08A96F54:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96F70;
      }
      goto L_08A96F60;
    }
L_08A96F60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(82))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F70;
      }
      goto L_08A96F6C;
    }
L_08A96F6C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96F70;
L_08A96F70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A96F98;
      }
      goto L_08A96F78;
    }
L_08A96F78:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A96F94;
      }
      goto L_08A96F84;
    }
L_08A96F84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(74))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96F94;
      }
      goto L_08A96F90;
    }
L_08A96F90:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A96F94;
L_08A96F94:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A96F98;
L_08A96F98:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96FA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A96FB4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x08A986ECu>(ctx, &aot_mem) && ctx.pc == 0x08A96FB4u) goto L_08A96FB4;
    return;
L_08A96FB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A96FCC;
      }
      goto L_08A96FBC;
    }
L_08A96FBC:
    ctx.gpr[31] = (0x08A96FC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96E30;
L_08A96FC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A96FD4;
      }
      goto L_08A96FCC;
    }
L_08A96FCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A96FD8;
      }
      goto L_08A96FD4;
    }
L_08A96FD4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A96FD8;
L_08A96FD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A96FE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A96FFCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 171u, 0x08A98744u>(ctx, &aot_mem) && ctx.pc == 0x08A96FFCu) goto L_08A96FFC;
    return;
L_08A96FFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97014;
      }
      goto L_08A97004;
    }
L_08A97004:
    ctx.gpr[31] = (0x08A9700Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96EE8;
L_08A9700C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9701C;
      }
      goto L_08A97014;
    }
L_08A97014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A97020;
      }
      goto L_08A9701C;
    }
L_08A9701C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A97020;
L_08A97020:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A97044u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 150u, 0x08A9863Cu>(ctx, &aot_mem) && ctx.pc == 0x08A97044u) goto L_08A97044;
    return;
L_08A97044:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9705C;
      }
      goto L_08A9704C;
    }
L_08A9704C:
    ctx.gpr[31] = (0x08A97054u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96D78;
L_08A97054:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97064;
      }
      goto L_08A9705C;
    }
L_08A9705C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A97068;
      }
      goto L_08A97064;
    }
L_08A97064:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A97068;
L_08A97068:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A9708Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 157u, 0x08A98694u>(ctx, &aot_mem) && ctx.pc == 0x08A9708Cu) goto L_08A9708C;
    return;
L_08A9708C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A970A4;
      }
      goto L_08A97094;
    }
L_08A97094:
    ctx.gpr[31] = (0x08A9709Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96DD4;
L_08A9709C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A970AC;
      }
      goto L_08A970A4;
    }
L_08A970A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A970B0;
      }
      goto L_08A970AC;
    }
L_08A970AC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A970B0;
L_08A970B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A970C0:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A970CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[2] = (ctx.gpr[5] | ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A970E0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A970FC;
      }
      goto L_08A970EC;
    }
L_08A970EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(94))))));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
        goto L_08A97100;
    }
    goto L_08A970F8;
L_08A970F8:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A970FC;
L_08A970FC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    goto L_08A97100;
L_08A97100:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97118;
      }
      goto L_08A97108;
    }
L_08A97108:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A9711C;
      }
      goto L_08A97114;
    }
L_08A97114:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A97118;
L_08A97118:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08A9711C;
L_08A9711C:
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    ctx.gpr[2] = (ctx.gpr[5] | ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9712C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97148;
      }
      goto L_08A97138;
    }
L_08A97138:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97148;
      }
      goto L_08A97144;
    }
L_08A97144:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A97148;
L_08A97148:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
      if (branch_taken) {
          goto L_08A97174;
      }
      goto L_08A97164;
    }
L_08A97164:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A971A0;
      }
      goto L_08A9716C;
    }
L_08A9716C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97180;
      }
      goto L_08A97174;
    }
L_08A97174:
    ctx.gpr[7] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A971A0;
      }
      goto L_08A97180;
    }
L_08A97180:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97190;
      }
      goto L_08A97188;
    }
L_08A97188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A971A0;
      }
      goto L_08A97190;
    }
L_08A97190:
    ctx.gpr[31] = (0x08A97198u);
    // nop
    goto L_08A96DD4;
L_08A97198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A971BC;
      }
      goto L_08A971A0;
    }
L_08A971A0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A971B8;
      }
      goto L_08A971A8;
    }
L_08A971A8:
    ctx.gpr[31] = (0x08A971B0u);
    // nop
    goto L_08A96D78;
L_08A971B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A971BC;
      }
      goto L_08A971B8;
    }
L_08A971B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A971BC;
L_08A971BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A971C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97200;
      }
      goto L_08A971E0;
    }
L_08A971E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A97220;
      }
      goto L_08A971E8;
    }
L_08A971E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A97210;
      }
      goto L_08A971F0;
    }
L_08A971F0:
    ctx.gpr[31] = (0x08A971F8u);
    // nop
    goto L_08A96CE8;
L_08A971F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97224;
      }
      goto L_08A97200;
    }
L_08A97200:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A971F0;
      }
      goto L_08A97208;
    }
L_08A97208:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97220;
      }
      goto L_08A97210;
    }
L_08A97210:
    ctx.gpr[31] = (0x08A97218u);
    // nop
    goto L_08A96D0C;
L_08A97218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97224;
      }
      goto L_08A97220;
    }
L_08A97220:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A97224;
L_08A97224:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97230:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A97288;
      }
      goto L_08A97248;
    }
L_08A97248:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A97290;
    }
    goto L_08A97258;
L_08A97258:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A97268;
      }
      goto L_08A97260;
    }
L_08A97260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A972C8;
      }
      goto L_08A97268;
    }
L_08A97268:
    ctx.gpr[31] = (0x08A97270u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96C60;
L_08A97270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(102))))));
      if (branch_taken) {
          goto L_08A972C8;
      }
      goto L_08A97288;
    }
L_08A97288:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A972C8;
      }
      goto L_08A97290;
    }
L_08A97290:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97260;
      }
      goto L_08A97298;
    }
L_08A97298:
    ctx.gpr[31] = (0x08A972A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96C60;
L_08A972A0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A972B8;
      }
      goto L_08A972B0;
    }
L_08A972B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97260;
      }
      goto L_08A972B8;
    }
L_08A972B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(102))))));
    goto L_08A972C8;
L_08A972C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A972D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9731C;
      }
      goto L_08A972EC;
    }
L_08A972EC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_08A97324;
    }
    goto L_08A972FC;
L_08A972FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A9730C;
      }
      goto L_08A97304;
    }
L_08A97304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97348;
      }
      goto L_08A9730C;
    }
L_08A9730C:
    ctx.gpr[31] = (0x08A97314u);
    // nop
    goto L_08A96CA4;
L_08A97314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97348;
      }
      goto L_08A9731C;
    }
L_08A9731C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97348;
      }
      goto L_08A97324;
    }
L_08A97324:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97304;
      }
      goto L_08A9732C;
    }
L_08A9732C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97340;
      }
      goto L_08A97338;
    }
L_08A97338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97304;
      }
      goto L_08A97340;
    }
L_08A97340:
    ctx.gpr[31] = (0x08A97348u);
    // nop
    goto L_08A96CA4;
L_08A97348:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A973C8;
      }
      goto L_08A97374;
    }
L_08A97374:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97394;
      }
      goto L_08A9737C;
    }
L_08A9737C:
    ctx.gpr[31] = (0x08A97384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A97D90;
L_08A97384:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
        goto L_08A973D0;
    }
    goto L_08A9738C;
L_08A9738C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A973F0;
      }
      goto L_08A97394;
    }
L_08A97394:
    ctx.gpr[31] = (0x08A9739Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96D54;
L_08A9739C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A973A8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08A96D30;
L_08A973A8:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A973F0;
      }
      goto L_08A973C8;
    }
L_08A973C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A973F0;
      }
      goto L_08A973D0;
    }
L_08A973D0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    goto L_08A973F0;
L_08A973F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A9744C;
      }
      goto L_08A97418;
    }
L_08A97418:
    ctx.gpr[31] = (0x08A97420u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A97D90;
L_08A97420:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97444;
      }
      goto L_08A97428;
    }
L_08A97428:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A9743C;
      }
      goto L_08A97434;
    }
L_08A97434:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97454;
      }
      goto L_08A9743C;
    }
L_08A9743C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9745C;
      }
      goto L_08A97444;
    }
L_08A97444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9745C;
      }
      goto L_08A9744C;
    }
L_08A9744C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9745C;
      }
      goto L_08A97454;
    }
L_08A97454:
    ctx.gpr[31] = (0x08A9745Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96CA4;
L_08A9745C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9746C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97520;
      }
      goto L_08A9748C;
    }
L_08A9748C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97520;
      }
      goto L_08A97494;
    }
L_08A97494:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A974A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A96C60;
L_08A974A0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A974ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A96D54;
L_08A974AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A974B8u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A96D30;
L_08A974B8:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A974E4;
      }
      goto L_08A974DC;
    }
L_08A974DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A974E4;
      }
      goto L_08A974E4;
    }
L_08A974E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A974F4;
      }
      goto L_08A974EC;
    }
L_08A974EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A974F4;
      }
      goto L_08A974F4;
    }
L_08A974F4:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97518;
      }
      goto L_08A97510;
    }
L_08A97510:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A97524;
      }
      goto L_08A97518;
    }
L_08A97518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97524;
      }
      goto L_08A97520;
    }
L_08A97520:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A97524;
L_08A97524:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97538:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97580;
      }
      goto L_08A9754C;
    }
L_08A9754C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97578;
      }
      goto L_08A9755C;
    }
L_08A9755C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97570;
      }
      goto L_08A97568;
    }
L_08A97568:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97588;
      }
      goto L_08A97570;
    }
L_08A97570:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97590;
      }
      goto L_08A97578;
    }
L_08A97578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97590;
      }
      goto L_08A97580;
    }
L_08A97580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97590;
      }
      goto L_08A97588;
    }
L_08A97588:
    ctx.gpr[31] = (0x08A97590u);
    // nop
    goto L_08A96C60;
L_08A97590:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9759C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A975E4;
      }
      goto L_08A975B0;
    }
L_08A975B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A975DC;
      }
      goto L_08A975C0;
    }
L_08A975C0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A975D4;
      }
      goto L_08A975CC;
    }
L_08A975CC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A975EC;
      }
      goto L_08A975D4;
    }
L_08A975D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A975F4;
      }
      goto L_08A975DC;
    }
L_08A975DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A975F4;
      }
      goto L_08A975E4;
    }
L_08A975E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A975F4;
      }
      goto L_08A975EC;
    }
L_08A975EC:
    ctx.gpr[31] = (0x08A975F4u);
    // nop
    goto L_08A96CA4;
L_08A975F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97600:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A976B4;
      }
      goto L_08A97620;
    }
L_08A97620:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A976B4;
      }
      goto L_08A97628;
    }
L_08A97628:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A97634u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A96CA4;
L_08A97634:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A97640u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A96D0C;
L_08A97640:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9764Cu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08A96CE8;
L_08A9764C:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A97678;
      }
      goto L_08A97670;
    }
L_08A97670:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A97678;
      }
      goto L_08A97678;
    }
L_08A97678:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A97688;
      }
      goto L_08A97680;
    }
L_08A97680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A97688;
      }
      goto L_08A97688;
    }
L_08A97688:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A976AC;
      }
      goto L_08A976A4;
    }
L_08A976A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A976B8;
      }
      goto L_08A976AC;
    }
L_08A976AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A976B8;
      }
      goto L_08A976B4;
    }
L_08A976B4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A976B8;
L_08A976B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A976CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A97720;
      }
      goto L_08A976E4;
    }
L_08A976E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A97728;
      }
      goto L_08A97718;
    }
L_08A97718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9775C;
      }
      goto L_08A97720;
    }
L_08A97720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97890;
      }
      goto L_08A97728;
    }
L_08A97728:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A97778;
      }
      goto L_08A9775C;
    }
L_08A9775C:
    ctx.gpr[31] = (0x08A97764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A97764u) goto L_08A97764;
    return;
L_08A97764:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97780;
      }
      goto L_08A97770;
    }
L_08A97770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A977B0;
      }
      goto L_08A97778;
    }
L_08A97778:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97890;
      }
      goto L_08A97780;
    }
L_08A97780:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 138u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 162u);
      if (branch_taken) {
          goto L_08A97798;
      }
      goto L_08A97790;
    }
L_08A97790:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A977B0;
      }
      goto L_08A97798;
    }
L_08A97798:
    ctx.gpr[31] = (0x08A977A0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A96408;
L_08A977A0:
    ctx.gpr[31] = (0x08A977A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A97D90;
L_08A977A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A977DC;
      }
      goto L_08A977B0;
    }
L_08A977B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A977E4;
    }
    goto L_08A977C0;
L_08A977C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A977F8;
      }
      goto L_08A977C8;
    }
L_08A977C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97800;
      }
      goto L_08A977D4;
    }
L_08A977D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A97814;
      }
      goto L_08A977DC;
    }
L_08A977DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97890;
      }
      goto L_08A977E4;
    }
L_08A977E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A977F8;
      }
      goto L_08A977EC;
    }
L_08A977EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97884;
      }
      goto L_08A977F8;
    }
L_08A977F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97890;
      }
      goto L_08A97800;
    }
L_08A97800:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A97814;
      }
      goto L_08A9780C;
    }
L_08A9780C:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A97814;
L_08A97814:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97830;
      }
      goto L_08A9781C;
    }
L_08A9781C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97838;
      }
      goto L_08A97828;
    }
L_08A97828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A9784C;
      }
      goto L_08A97830;
    }
L_08A97830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97890;
      }
      goto L_08A97838;
    }
L_08A97838:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A9784C;
      }
      goto L_08A97844;
    }
L_08A97844:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08A9784C;
L_08A9784C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97868;
      }
      goto L_08A97854;
    }
L_08A97854:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97870;
      }
      goto L_08A97860;
    }
L_08A97860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9787C;
      }
      goto L_08A97868;
    }
L_08A97868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97890;
      }
      goto L_08A97870;
    }
L_08A97870:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9787C;
      }
      goto L_08A97878;
    }
L_08A97878:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A9787C;
L_08A9787C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A97890;
      }
      goto L_08A97884;
    }
L_08A97884:
    ctx.gpr[31] = (0x08A9788Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96C60;
L_08A9788C:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < -10 ? 1u : 0u);
    goto L_08A97890;
L_08A97890:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A978A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A978F4;
      }
      goto L_08A978B8;
    }
L_08A978B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A978FC;
      }
      goto L_08A978EC;
    }
L_08A978EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97930;
      }
      goto L_08A978F4;
    }
L_08A978F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97A68;
      }
      goto L_08A978FC;
    }
L_08A978FC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9794C;
      }
      goto L_08A97930;
    }
L_08A97930:
    ctx.gpr[31] = (0x08A97938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A97938u) goto L_08A97938;
    return;
L_08A97938:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97954;
      }
      goto L_08A97944;
    }
L_08A97944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97984;
      }
      goto L_08A9794C;
    }
L_08A9794C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97A68;
      }
      goto L_08A97954;
    }
L_08A97954:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 138u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 162u);
      if (branch_taken) {
          goto L_08A9796C;
      }
      goto L_08A97964;
    }
L_08A97964:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A97984;
      }
      goto L_08A9796C;
    }
L_08A9796C:
    ctx.gpr[31] = (0x08A97974u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A96408;
L_08A97974:
    ctx.gpr[31] = (0x08A9797Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A97D90;
L_08A9797C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A979B0;
      }
      goto L_08A97984;
    }
L_08A97984:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A979B8;
    }
    goto L_08A97994;
L_08A97994:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A979CC;
      }
      goto L_08A9799C;
    }
L_08A9799C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A979D4;
      }
      goto L_08A979A8;
    }
L_08A979A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A979E8;
      }
      goto L_08A979B0;
    }
L_08A979B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97A68;
      }
      goto L_08A979B8;
    }
L_08A979B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A979CC;
      }
      goto L_08A979C0;
    }
L_08A979C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97A58;
      }
      goto L_08A979CC;
    }
L_08A979CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97A68;
      }
      goto L_08A979D4;
    }
L_08A979D4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A979E8;
      }
      goto L_08A979E0;
    }
L_08A979E0:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A979E8;
L_08A979E8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97A04;
      }
      goto L_08A979F0;
    }
L_08A979F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97A0C;
      }
      goto L_08A979FC;
    }
L_08A979FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A97A20;
      }
      goto L_08A97A04;
    }
L_08A97A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97A68;
      }
      goto L_08A97A0C;
    }
L_08A97A0C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A97A20;
      }
      goto L_08A97A18;
    }
L_08A97A18:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08A97A20;
L_08A97A20:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97A3C;
      }
      goto L_08A97A28;
    }
L_08A97A28:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97A44;
      }
      goto L_08A97A34;
    }
L_08A97A34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97A50;
      }
      goto L_08A97A3C;
    }
L_08A97A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97A68;
      }
      goto L_08A97A44;
    }
L_08A97A44:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97A50;
      }
      goto L_08A97A4C;
    }
L_08A97A4C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A97A50;
L_08A97A50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A97A68;
      }
      goto L_08A97A58;
    }
L_08A97A58:
    ctx.gpr[31] = (0x08A97A60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96C60;
L_08A97A60:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 11 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    goto L_08A97A68;
L_08A97A68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97A78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A97ACC;
      }
      goto L_08A97A90;
    }
L_08A97A90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A97AD4;
      }
      goto L_08A97AC4;
    }
L_08A97AC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97B08;
      }
      goto L_08A97ACC;
    }
L_08A97ACC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97C1C;
      }
      goto L_08A97AD4;
    }
L_08A97AD4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A97B28;
      }
      goto L_08A97B08;
    }
L_08A97B08:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A97B30;
    }
    goto L_08A97B18;
L_08A97B18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A97C18;
      }
      goto L_08A97B20;
    }
L_08A97B20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97B40;
      }
      goto L_08A97B28;
    }
L_08A97B28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97C1C;
      }
      goto L_08A97B30;
    }
L_08A97B30:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97BC8;
      }
      goto L_08A97B38;
    }
L_08A97B38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97C18;
      }
      goto L_08A97B40;
    }
L_08A97B40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97B74;
      }
      goto L_08A97B4C;
    }
L_08A97B4C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97B68;
      }
      goto L_08A97B58;
    }
L_08A97B58:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A97B6C;
      }
      goto L_08A97B64;
    }
L_08A97B64:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A97B68;
L_08A97B68:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A97B6C;
L_08A97B6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97B78;
      }
      goto L_08A97B74;
    }
L_08A97B74:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A97B78;
L_08A97B78:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97BB0;
      }
      goto L_08A97B88;
    }
L_08A97B88:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97BA4;
      }
      goto L_08A97B94;
    }
L_08A97B94:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A97BA8;
      }
      goto L_08A97BA0;
    }
L_08A97BA0:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A97BA4;
L_08A97BA4:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08A97BA8;
L_08A97BA8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97BB4;
      }
      goto L_08A97BB0;
    }
L_08A97BB0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A97BB4;
L_08A97BB4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[2] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A97C1C;
      }
      goto L_08A97BC8;
    }
L_08A97BC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97C18;
      }
      goto L_08A97BD4;
    }
L_08A97BD4:
    ctx.gpr[31] = (0x08A97BDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96C60;
L_08A97BDC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A97BF0;
      }
      goto L_08A97BE8;
    }
L_08A97BE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A97BF0;
      }
      goto L_08A97BF0;
    }
L_08A97BF0:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97C18;
      }
      goto L_08A97C04;
    }
L_08A97C04:
    ctx.gpr[31] = (0x08A97C0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A96CA4;
L_08A97C0C:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 11 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
      if (branch_taken) {
          goto L_08A97C1C;
      }
      goto L_08A97C18;
    }
L_08A97C18:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A97C1C;
L_08A97C1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97C2C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97C64;
      }
      goto L_08A97C3C;
    }
L_08A97C3C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97C5C;
      }
      goto L_08A97C48;
    }
L_08A97C48:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97C6C;
      }
      goto L_08A97C54;
    }
L_08A97C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97C7C;
      }
      goto L_08A97C5C;
    }
L_08A97C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97C80;
      }
      goto L_08A97C64;
    }
L_08A97C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97C80;
      }
      goto L_08A97C6C;
    }
L_08A97C6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97C7C;
      }
      goto L_08A97C78;
    }
L_08A97C78:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A97C7C;
L_08A97C7C:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A97C80;
L_08A97C80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97C88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97CB4;
      }
      goto L_08A97C9C;
    }
L_08A97C9C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97CBC;
      }
      goto L_08A97CAC;
    }
L_08A97CAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97CDC;
      }
      goto L_08A97CB4;
    }
L_08A97CB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97D00;
      }
      goto L_08A97CBC;
    }
L_08A97CBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A97CFC;
      }
      goto L_08A97CC4;
    }
L_08A97CC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A97CEC;
      }
      goto L_08A97CCC;
    }
L_08A97CCC:
    ctx.gpr[31] = (0x08A97CD4u);
    // nop
    goto L_08A96D0C;
L_08A97CD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97D00;
      }
      goto L_08A97CDC;
    }
L_08A97CDC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97CCC;
      }
      goto L_08A97CE4;
    }
L_08A97CE4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97CFC;
      }
      goto L_08A97CEC;
    }
L_08A97CEC:
    ctx.gpr[31] = (0x08A97CF4u);
    // nop
    goto L_08A96CE8;
L_08A97CF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97D00;
      }
      goto L_08A97CFC;
    }
L_08A97CFC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A97D00;
L_08A97D00:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97D0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D38;
      }
      goto L_08A97D20;
    }
L_08A97D20:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D40;
      }
      goto L_08A97D30;
    }
L_08A97D30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97D60;
      }
      goto L_08A97D38;
    }
L_08A97D38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97D84;
      }
      goto L_08A97D40;
    }
L_08A97D40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A97D80;
      }
      goto L_08A97D48;
    }
L_08A97D48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A97D70;
      }
      goto L_08A97D50;
    }
L_08A97D50:
    ctx.gpr[31] = (0x08A97D58u);
    // nop
    goto L_08A96DD4;
L_08A97D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D84;
      }
      goto L_08A97D60;
    }
L_08A97D60:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97D50;
      }
      goto L_08A97D68;
    }
L_08A97D68:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D80;
      }
      goto L_08A97D70;
    }
L_08A97D70:
    ctx.gpr[31] = (0x08A97D78u);
    // nop
    goto L_08A96D78;
L_08A97D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97D84;
      }
      goto L_08A97D80;
    }
L_08A97D80:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A97D84;
L_08A97D84:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97D90:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DA4;
      }
      goto L_08A97D9C;
    }
L_08A97D9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97DAC;
      }
      goto L_08A97DA4;
    }
L_08A97DA4:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A97DAC;
L_08A97DAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97DB4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DD4;
      }
      goto L_08A97DC0;
    }
L_08A97DC0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97DDC;
      }
      goto L_08A97DCC;
    }
L_08A97DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DEC;
      }
      goto L_08A97DD4;
    }
L_08A97DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97DF0;
      }
      goto L_08A97DDC;
    }
L_08A97DDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97DEC;
      }
      goto L_08A97DE8;
    }
L_08A97DE8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A97DEC;
L_08A97DEC:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A97DF0;
L_08A97DF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97DF8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E18;
      }
      goto L_08A97E04;
    }
L_08A97E04:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97E20;
      }
      goto L_08A97E10;
    }
L_08A97E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E30;
      }
      goto L_08A97E18;
    }
L_08A97E18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97E34;
      }
      goto L_08A97E20;
    }
L_08A97E20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E30;
      }
      goto L_08A97E2C;
    }
L_08A97E2C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A97E30;
L_08A97E30:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A97E34;
L_08A97E34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97E3C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E7C;
      }
      goto L_08A97E48;
    }
L_08A97E48:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_08A97E84;
    }
    goto L_08A97E58;
L_08A97E58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A97E74;
      }
      goto L_08A97E60;
    }
L_08A97E60:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97E94;
      }
      goto L_08A97E6C;
    }
L_08A97E6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
      if (branch_taken) {
          goto L_08A97EA8;
      }
      goto L_08A97E74;
    }
L_08A97E74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97EAC;
      }
      goto L_08A97E7C;
    }
L_08A97E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97EAC;
      }
      goto L_08A97E84;
    }
L_08A97E84:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97E74;
      }
      goto L_08A97E8C;
    }
L_08A97E8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
      if (branch_taken) {
          goto L_08A97EAC;
      }
      goto L_08A97E94;
    }
L_08A97E94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
      if (branch_taken) {
          goto L_08A97EA8;
      }
      goto L_08A97EA0;
    }
L_08A97EA0:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
    goto L_08A97EA8;
L_08A97EA8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    goto L_08A97EAC;
L_08A97EAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97EB4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97EC8;
      }
      goto L_08A97EC0;
    }
L_08A97EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97ECC;
      }
      goto L_08A97EC8;
    }
L_08A97EC8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
    goto L_08A97ECC;
L_08A97ECC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97ED4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F00;
      }
      goto L_08A97EE0;
    }
L_08A97EE0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F00;
      }
      goto L_08A97EEC;
    }
L_08A97EEC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(147)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F08;
      }
      goto L_08A97EF8;
    }
L_08A97EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97F10;
      }
      goto L_08A97F00;
    }
L_08A97F00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97F10;
      }
      goto L_08A97F08;
    }
L_08A97F08:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A97F10;
L_08A97F10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97F18:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97F24:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F6C;
      }
      goto L_08A97F30;
    }
L_08A97F30:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(147)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F64;
      }
      goto L_08A97F3C;
    }
L_08A97F3C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F5C;
      }
      goto L_08A97F48;
    }
L_08A97F48:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97F74;
      }
      goto L_08A97F54;
    }
L_08A97F54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F84;
      }
      goto L_08A97F5C;
    }
L_08A97F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97F88;
      }
      goto L_08A97F64;
    }
L_08A97F64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97F88;
      }
      goto L_08A97F6C;
    }
L_08A97F6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97F88;
      }
      goto L_08A97F74;
    }
L_08A97F74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97F84;
      }
      goto L_08A97F80;
    }
L_08A97F80:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A97F84;
L_08A97F84:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08A97F88;
L_08A97F88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97F90:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97FB8;
      }
      goto L_08A97F9C;
    }
L_08A97F9C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A97FB0;
      }
      goto L_08A97FA8;
    }
L_08A97FA8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A97FC0;
      }
      goto L_08A97FB0;
    }
L_08A97FB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97FC4;
      }
      goto L_08A97FB8;
    }
L_08A97FB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A97FC4;
      }
      goto L_08A97FC0;
    }
L_08A97FC0:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    goto L_08A97FC4;
L_08A97FC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A97FCC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 2u, 0x08A98008u>(ctx, &aot_mem); return;
      }
      goto L_08A97FD8;
    }
L_08A97FD8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 1u, 0x08A98000u>(ctx, &aot_mem); return;
      }
      goto L_08A97FE4;
    }
L_08A97FE4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 1u, 0x08A98000u>(ctx, &aot_mem); return;
      }
      goto L_08A97FEC;
    }
L_08A97FEC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 3u, 0x08A98010u>(ctx, &aot_mem); return;
      }
      goto L_08A97FF8;
    }
L_08A97FF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 5u, 0x08A98020u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 1u, 0x08A98000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0164(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0164_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_164(Runtime &runtime) {
    runtime.register_generated_unit(164u, 0x08A94000u, 16384u, &recomp_unit_0164, &recomp_unit_0164_entry);
    runtime.register_function(0x08A94000u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9400Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94018u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94020u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94024u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94028u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94038u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9404Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94068u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94070u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94080u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9408Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9409Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A940E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94100u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9410Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94118u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94128u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94130u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94138u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9414Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94190u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A941ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94204u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94244u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94268u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94278u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94284u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94290u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94298u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9429Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A942F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94300u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9430Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94314u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94320u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94328u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94338u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94340u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94350u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94358u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94368u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94370u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94380u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A943F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94400u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9440Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94414u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94418u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9441Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94428u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9443Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94464u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9446Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9448Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94498u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A944FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9450Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94534u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94540u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9454Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94558u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94564u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94568u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94570u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A945F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94604u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94628u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9466Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9467Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94688u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94698u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A946F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94704u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94718u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94730u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94750u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94768u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94770u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94774u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94780u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A947D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9480Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94814u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94824u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94830u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9483Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94844u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94848u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94850u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9485Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94870u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94878u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A948FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94910u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94918u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94920u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94928u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94930u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94960u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9496Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94974u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94998u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A949E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94A9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94AF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94B98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94BF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94C88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94CFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94D94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94DF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94E94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94EACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94F90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A94FE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95004u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95010u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9501Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95024u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95028u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95030u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9503Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95050u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95058u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95060u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95078u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95084u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A950FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95100u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95108u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95114u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9512Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95134u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95140u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95170u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95194u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A951ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9521Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95240u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9524Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95258u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95260u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95264u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9526Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95278u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95290u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95298u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A952F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95304u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9530Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95310u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95318u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95324u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9533Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95344u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95374u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95398u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A953F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95420u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95444u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95450u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9545Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95464u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95468u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95470u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9547Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95494u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9549Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A954FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95508u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95510u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95514u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9551Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95528u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95540u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95580u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A955F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95634u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95658u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95664u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95670u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95678u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9567Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95684u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95690u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A956E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9570Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95718u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95724u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9572Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95730u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95738u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95744u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9575Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9579Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A957F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95810u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95850u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95874u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95880u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9588Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95894u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95898u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A958C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95904u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95928u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95934u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95940u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95948u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9594Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95954u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95960u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95978u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A959FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95A94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95AE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95B8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95BA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95BDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95C88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95CFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95D98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95DB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95DF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95E64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95ECCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95ED4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95EFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95F9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A95FF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96008u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96024u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96048u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9606Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96078u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96084u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9608Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96090u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96098u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A960FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96104u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96110u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9612Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96134u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96140u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96144u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96150u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96158u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96164u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9616Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96174u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96180u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96188u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96190u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9619Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A961F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96200u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9620Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96214u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9621Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96228u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96230u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96238u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96244u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9624Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96254u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96260u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96268u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96270u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9627Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96284u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9628Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96290u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96298u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A962FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96324u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96338u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96340u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96348u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9635Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96368u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96384u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A963E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96408u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96424u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96434u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96440u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96448u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96450u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96458u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96460u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9646Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9647Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96488u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96494u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A964E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96514u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96524u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9652Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96534u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96540u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96550u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96598u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A965F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96604u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9660Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96614u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9662Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96634u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9663Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96684u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96690u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9669Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A966E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96730u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96750u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96760u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96778u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96780u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96788u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9679Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A967D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9681Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96828u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96834u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9683Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96840u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96844u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96854u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96868u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9688Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9689Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96960u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9697Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96988u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96990u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96998u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A969F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96A9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96ACCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96AF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96B98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96BF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96C9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96CF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96D94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96DFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96E9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96ECCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96ED8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96EF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96F98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A96FFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97004u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9700Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97014u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9701Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97020u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97030u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97044u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9704Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97054u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9705Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97064u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97068u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97078u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9708Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97094u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9709Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A970FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97100u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97108u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97114u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97118u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9711Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9712Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97138u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97144u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97148u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97150u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97164u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9716Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97174u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97180u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97188u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97190u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97198u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A971F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97200u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97208u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97210u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97218u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97220u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97224u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97230u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97248u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97258u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97260u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97268u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97270u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97288u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97290u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97298u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A972FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97304u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9730Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97314u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9731Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97324u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9732Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97338u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97340u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97348u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97354u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97374u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9737Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97384u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9738Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97394u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9739Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A973F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97400u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97418u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97420u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97428u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97434u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9743Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97444u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9744Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97454u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9745Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9746Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9748Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97494u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A974F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97510u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97518u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97520u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97524u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97538u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9754Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9755Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97568u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97570u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97578u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97580u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97588u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97590u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9759Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A975F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97600u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97620u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97628u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97634u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97640u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9764Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97670u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97678u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97680u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97688u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A976E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97718u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97720u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97728u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9775Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97764u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97770u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97778u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97780u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97790u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97798u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A977F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97800u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9780Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97814u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9781Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97828u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97830u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97838u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97844u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9784Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97854u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97860u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97868u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97870u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97878u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9787Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97884u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9788Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97890u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A978FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97930u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97938u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97944u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9794Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97954u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97964u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9796Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97974u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9797Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97984u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97994u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A9799Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A979FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97A90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97ACCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97AD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B4Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97B94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97BF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97C9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CF4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97CFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D50u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97D9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DD4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DE8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DF0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97DF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E8Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97E94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EB4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97ECCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97ED4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97EF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F00u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F24u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F30u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F64u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F80u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F84u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97F9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FCCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x08A97FF8u, &recomp_unit_0164, "recomp_unit_0164");
}
} // namespace psprecomp
