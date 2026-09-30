#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0079[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24,
    0, 0, 25, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 42, 43, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58,
    0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0,
    0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0,
    101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0,
    0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117,
    0, 0, 0, 0, 0, 0, 0, 118, 119, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 123, 0, 124, 0, 125, 0, 126, 0, 0, 127,
    0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0,
    0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155,
    0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 161, 0, 162, 0, 163, 0, 0, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 180,
    0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    186, 0, 187, 0, 0, 0, 188, 0, 189, 0, 190, 0, 191, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0,
    210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 230, 0, 0, 0,
    231, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 0, 241, 0,
    0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 252, 253, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0,
    0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 0, 0,
    272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0,
    286, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294,
    0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 297, 0, 298, 0, 299, 0, 300, 0, 0, 301, 0, 0, 302, 0, 303, 0, 0, 304, 0,
    0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321,
    0, 322, 0, 323, 0, 0, 324, 0, 0, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 0, 0, 0, 0, 332, 0, 333, 0,
    0, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0,
    0, 340, 0, 0, 0, 341, 0, 342, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0,
    0, 0, 0, 355, 0, 0, 0, 356, 0, 357, 0, 358, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 371, 0,
    0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 379, 0,
    0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0,
    385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0,
    0, 0, 403, 0, 404, 0, 405, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 411, 0, 0, 0,
    0, 0, 412, 0, 0, 413, 0, 414, 0, 415, 0, 416, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0,
    421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0,
    0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 444,
    0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0,
    455, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0,
    0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 475, 0, 476, 0, 477,
    0, 478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493,
    0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 0, 509,
    0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 520, 0, 0, 521,
    0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526, 527, 0, 528,
    0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 0, 534, 535,
    0, 536, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 544, 0, 0, 0, 0, 545, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0,
    549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 554, 555,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 557, 0, 0, 0, 0, 558, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0,
    562, 0, 0, 563, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 0, 580,
    0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0,
    0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 600, 0, 601, 0, 602, 0,
    0, 0, 0, 603, 0, 604, 605, 0, 606, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 611, 0, 0,
    0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0,
    0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0,
    0, 621, 0, 0, 622, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 626, 0, 0, 627, 0, 0, 628, 0, 629, 0, 0, 0, 0, 630, 0,
    0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635,
    0, 0, 0, 0, 636, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 650,
    0, 0, 0, 651, 0, 652, 0, 653, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0,
    0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 661, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0, 0,
    0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 668, 0, 669, 0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 673, 0,
    674, 0, 675, 0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 680, 0, 681, 682, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0,
    0, 685, 0, 0, 0, 686, 0, 0, 687, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690, 0, 691, 0, 692, 0, 693, 0, 694, 0, 0, 0, 695,
    0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 698, 0, 699, 0, 0, 0, 700, 0, 701, 0, 702, 0, 0, 703, 0, 0, 704,
    0, 0, 0, 705, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 711,
    0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 721, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 727, 728, 0, 729, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0,
    732, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 735, 0, 736, 0, 0, 737, 0, 0, 738, 0, 0, 0, 739, 0, 0, 740,
    0, 741, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 745, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0,
    750, 0, 751, 0, 752, 0, 0, 0, 753, 0, 0, 754, 0, 0, 0, 755, 0, 756, 0, 757, 0, 0, 758, 0, 759, 0, 760, 0, 761, 0, 762, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 766, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    769, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0,
    773, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 783,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 785, 786, 0, 787, 788, 0, 0, 0, 789, 0, 0, 0, 790, 0, 0, 0,
    0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 794, 0, 795, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 797,
    0, 0, 0, 0, 798, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 802, 0, 0, 0,
    803, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 806, 0, 807, 0, 808, 0, 809, 0, 0, 0, 810, 0, 811, 0, 0, 812, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 815, 0, 0, 0,
    816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0,
    0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 820, 0, 821, 822, 0, 0, 823, 0, 824, 0, 0, 825, 0, 826, 0, 827, 0, 0, 0, 828, 0, 0,
    829, 0, 830, 0, 0, 831, 832, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 835, 0, 836, 0, 0, 837, 0, 838, 0, 0,
    0, 839, 0, 840, 0, 0, 0, 0, 0, 841, 0, 0, 0, 842, 0, 843, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 846, 0, 0, 0, 0, 0, 847, 0, 0, 848, 0, 849, 0, 0, 850, 851, 0, 0, 0, 0, 0, 852, 0, 853, 0, 854,
};
void recomp_unit_0079_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08940000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0079[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08940000;
    case 2u: goto L_0894000C;
    case 3u: goto L_08940038;
    case 4u: goto L_08940040;
    case 5u: goto L_08940048;
    case 6u: goto L_0894005C;
    case 7u: goto L_08940074;
    case 8u: goto L_089400D4;
    case 9u: goto L_089400EC;
    case 10u: goto L_089400F4;
    case 11u: goto L_08940118;
    case 12u: goto L_08940120;
    case 13u: goto L_0894012C;
    case 14u: goto L_0894013C;
    case 15u: goto L_0894014C;
    case 16u: goto L_08940154;
    case 17u: goto L_08940178;
    case 18u: goto L_0894017C;
    case 19u: goto L_089401A4;
    case 20u: goto L_089401AC;
    case 21u: goto L_089401B8;
    case 22u: goto L_089401D4;
    case 23u: goto L_089401E0;
    case 24u: goto L_089401FC;
    case 25u: goto L_08940208;
    case 26u: goto L_08940210;
    case 27u: goto L_08940218;
    case 28u: goto L_08940224;
    case 29u: goto L_08940254;
    case 30u: goto L_08940270;
    case 31u: goto L_089402C4;
    case 32u: goto L_08940318;
    case 33u: goto L_08940330;
    case 34u: goto L_08940340;
    case 35u: goto L_08940364;
    case 36u: goto L_08940370;
    case 37u: goto L_089403B0;
    case 38u: goto L_089403BC;
    case 39u: goto L_08940414;
    case 40u: goto L_08940420;
    case 41u: goto L_0894042C;
    case 42u: goto L_08940434;
    case 43u: goto L_08940438;
    case 44u: goto L_08940444;
    case 45u: goto L_08940454;
    case 46u: goto L_08940480;
    case 47u: goto L_08940488;
    case 48u: goto L_089404D4;
    case 49u: goto L_089404DC;
    case 50u: goto L_089404E4;
    case 51u: goto L_089404EC;
    case 52u: goto L_089404F4;
    case 53u: goto L_0894050C;
    case 54u: goto L_0894051C;
    case 55u: goto L_08940528;
    case 56u: goto L_08940530;
    case 57u: goto L_08940558;
    case 58u: goto L_0894057C;
    case 59u: goto L_08940584;
    case 60u: goto L_089405C0;
    case 61u: goto L_089405DC;
    case 62u: goto L_08940604;
    case 63u: goto L_0894060C;
    case 64u: goto L_08940624;
    case 65u: goto L_0894062C;
    case 66u: goto L_08940644;
    case 67u: goto L_0894064C;
    case 68u: goto L_08940664;
    case 69u: goto L_0894066C;
    case 70u: goto L_08940684;
    case 71u: goto L_0894068C;
    case 72u: goto L_089406A4;
    case 73u: goto L_089406AC;
    case 74u: goto L_089406D0;
    case 75u: goto L_089406D8;
    case 76u: goto L_089406F0;
    case 77u: goto L_089406F8;
    case 78u: goto L_08940718;
    case 79u: goto L_08940720;
    case 80u: goto L_08940730;
    case 81u: goto L_08940738;
    case 82u: goto L_08940740;
    case 83u: goto L_08940748;
    case 84u: goto L_08940750;
    case 85u: goto L_08940758;
    case 86u: goto L_08940760;
    case 87u: goto L_08940768;
    case 88u: goto L_08940790;
    case 89u: goto L_089407B4;
    case 90u: goto L_089407D4;
    case 91u: goto L_0894080C;
    case 92u: goto L_08940818;
    case 93u: goto L_0894082C;
    case 94u: goto L_08940838;
    case 95u: goto L_08940840;
    case 96u: goto L_08940854;
    case 97u: goto L_08940860;
    case 98u: goto L_08940868;
    case 99u: goto L_08940870;
    case 100u: goto L_08940878;
    case 101u: goto L_08940880;
    case 102u: goto L_08940888;
    case 103u: goto L_08940890;
    case 104u: goto L_08940898;
    case 105u: goto L_089408A8;
    case 106u: goto L_089408C4;
    case 107u: goto L_089408CC;
    case 108u: goto L_089408D8;
    case 109u: goto L_089408E4;
    case 110u: goto L_089408F4;
    case 111u: goto L_08940904;
    case 112u: goto L_08940910;
    case 113u: goto L_08940930;
    case 114u: goto L_08940944;
    case 115u: goto L_08940964;
    case 116u: goto L_08940970;
    case 117u: goto L_0894097C;
    case 118u: goto L_0894099C;
    case 119u: goto L_089409A0;
    case 120u: goto L_089409A8;
    case 121u: goto L_089409BC;
    case 122u: goto L_089409D4;
    case 123u: goto L_089409D8;
    case 124u: goto L_089409E0;
    case 125u: goto L_089409E8;
    case 126u: goto L_089409F0;
    case 127u: goto L_089409FC;
    case 128u: goto L_08940A08;
    case 129u: goto L_08940A10;
    case 130u: goto L_08940A1C;
    case 131u: goto L_08940A30;
    case 132u: goto L_08940A4C;
    case 133u: goto L_08940A54;
    case 134u: goto L_08940A5C;
    case 135u: goto L_08940A68;
    case 136u: goto L_08940A78;
    case 137u: goto L_08940A84;
    case 138u: goto L_08940AA8;
    case 139u: goto L_08940ABC;
    case 140u: goto L_08940AE4;
    case 141u: goto L_08940AEC;
    case 142u: goto L_08940AF4;
    case 143u: goto L_08940B04;
    case 144u: goto L_08940B1C;
    case 145u: goto L_08940B24;
    case 146u: goto L_08940B2C;
    case 147u: goto L_08940B3C;
    case 148u: goto L_08940B44;
    case 149u: goto L_08940B4C;
    case 150u: goto L_08940B54;
    case 151u: goto L_08940B5C;
    case 152u: goto L_08940B64;
    case 153u: goto L_08940B6C;
    case 154u: goto L_08940B74;
    case 155u: goto L_08940B7C;
    case 156u: goto L_08940B88;
    case 157u: goto L_08940B98;
    case 158u: goto L_08940BA4;
    case 159u: goto L_08940BC8;
    case 160u: goto L_08940BDC;
    case 161u: goto L_08940C04;
    case 162u: goto L_08940C0C;
    case 163u: goto L_08940C14;
    case 164u: goto L_08940C24;
    case 165u: goto L_08940C2C;
    case 166u: goto L_08940C34;
    case 167u: goto L_08940C3C;
    case 168u: goto L_08940C44;
    case 169u: goto L_08940C4C;
    case 170u: goto L_08940C54;
    case 171u: goto L_08940C5C;
    case 172u: goto L_08940C6C;
    case 173u: goto L_08940C7C;
    case 174u: goto L_08940C88;
    case 175u: goto L_08940CA8;
    case 176u: goto L_08940CBC;
    case 177u: goto L_08940CE0;
    case 178u: goto L_08940CE8;
    case 179u: goto L_08940CF0;
    case 180u: goto L_08940CFC;
    case 181u: goto L_08940D0C;
    case 182u: goto L_08940D18;
    case 183u: goto L_08940D3C;
    case 184u: goto L_08940D50;
    case 185u: goto L_08940D78;
    case 186u: goto L_08940D80;
    case 187u: goto L_08940D88;
    case 188u: goto L_08940D98;
    case 189u: goto L_08940DA0;
    case 190u: goto L_08940DA8;
    case 191u: goto L_08940DB0;
    case 192u: goto L_08940DB4;
    case 193u: goto L_08940DBC;
    case 194u: goto L_08940DC4;
    case 195u: goto L_08940DCC;
    case 196u: goto L_08940DD4;
    case 197u: goto L_08940DE0;
    case 198u: goto L_08940DF0;
    case 199u: goto L_08940E0C;
    case 200u: goto L_08940E24;
    case 201u: goto L_08940E2C;
    case 202u: goto L_08940E34;
    case 203u: goto L_08940E3C;
    case 204u: goto L_08940E44;
    case 205u: goto L_08940E4C;
    case 206u: goto L_08940E54;
    case 207u: goto L_08940E5C;
    case 208u: goto L_08940E68;
    case 209u: goto L_08940E74;
    case 210u: goto L_08940E80;
    case 211u: goto L_08940E8C;
    case 212u: goto L_08940EA8;
    case 213u: goto L_08940EB8;
    case 214u: goto L_08940EC0;
    case 215u: goto L_08940ED0;
    case 216u: goto L_08940EE0;
    case 217u: goto L_08940EEC;
    case 218u: goto L_08940F0C;
    case 219u: goto L_08940F18;
    case 220u: goto L_08940F20;
    case 221u: goto L_08940F2C;
    case 222u: goto L_08940F44;
    case 223u: goto L_08940F64;
    case 224u: goto L_08940F70;
    case 225u: goto L_08940F9C;
    case 226u: goto L_08940FA4;
    case 227u: goto L_08940FAC;
    case 228u: goto L_08940FDC;
    case 229u: goto L_08940FE4;
    case 230u: goto L_08940FF0;
    case 231u: goto L_08941000;
    case 232u: goto L_08941008;
    case 233u: goto L_08941014;
    case 234u: goto L_08941030;
    case 235u: goto L_08941044;
    case 236u: goto L_0894104C;
    case 237u: goto L_08941054;
    case 238u: goto L_0894105C;
    case 239u: goto L_08941064;
    case 240u: goto L_0894106C;
    case 241u: goto L_08941078;
    case 242u: goto L_08941084;
    case 243u: goto L_08941090;
    case 244u: goto L_089410A0;
    case 245u: goto L_089410BC;
    case 246u: goto L_089410D0;
    case 247u: goto L_089410F4;
    case 248u: goto L_08941114;
    case 249u: goto L_08941124;
    case 250u: goto L_08941130;
    case 251u: goto L_0894113C;
    case 252u: goto L_08941144;
    case 253u: goto L_08941148;
    case 254u: goto L_08941154;
    case 255u: goto L_08941164;
    case 256u: goto L_08941178;
    case 257u: goto L_08941188;
    case 258u: goto L_08941190;
    case 259u: goto L_08941198;
    case 260u: goto L_089411C0;
    case 261u: goto L_089411C8;
    case 262u: goto L_089411D0;
    case 263u: goto L_089411D8;
    case 264u: goto L_089411E4;
    case 265u: goto L_089411F4;
    case 266u: goto L_08941200;
    case 267u: goto L_08941224;
    case 268u: goto L_08941238;
    case 269u: goto L_08941260;
    case 270u: goto L_08941268;
    case 271u: goto L_08941270;
    case 272u: goto L_08941280;
    case 273u: goto L_08941288;
    case 274u: goto L_08941290;
    case 275u: goto L_08941298;
    case 276u: goto L_089412A0;
    case 277u: goto L_089412A8;
    case 278u: goto L_089412B0;
    case 279u: goto L_089412B8;
    case 280u: goto L_089412E0;
    case 281u: goto L_08941304;
    case 282u: goto L_08941324;
    case 283u: goto L_0894135C;
    case 284u: goto L_08941368;
    case 285u: goto L_08941378;
    case 286u: goto L_08941380;
    case 287u: goto L_08941390;
    case 288u: goto L_08941398;
    case 289u: goto L_089413A4;
    case 290u: goto L_089413B0;
    case 291u: goto L_089413C0;
    case 292u: goto L_089413D0;
    case 293u: goto L_089413DC;
    case 294u: goto L_089413FC;
    case 295u: goto L_08941410;
    case 296u: goto L_08941430;
    case 297u: goto L_08941434;
    case 298u: goto L_0894143C;
    case 299u: goto L_08941444;
    case 300u: goto L_0894144C;
    case 301u: goto L_08941458;
    case 302u: goto L_08941464;
    case 303u: goto L_0894146C;
    case 304u: goto L_08941478;
    case 305u: goto L_0894148C;
    case 306u: goto L_089414A4;
    case 307u: goto L_089414AC;
    case 308u: goto L_089414B4;
    case 309u: goto L_089414C0;
    case 310u: goto L_089414D0;
    case 311u: goto L_089414DC;
    case 312u: goto L_08941500;
    case 313u: goto L_08941514;
    case 314u: goto L_0894153C;
    case 315u: goto L_08941544;
    case 316u: goto L_0894154C;
    case 317u: goto L_0894155C;
    case 318u: goto L_08941564;
    case 319u: goto L_0894156C;
    case 320u: goto L_08941574;
    case 321u: goto L_0894157C;
    case 322u: goto L_08941584;
    case 323u: goto L_0894158C;
    case 324u: goto L_08941598;
    case 325u: goto L_089415A8;
    case 326u: goto L_089415B0;
    case 327u: goto L_089415B8;
    case 328u: goto L_089415C0;
    case 329u: goto L_089415C8;
    case 330u: goto L_089415D0;
    case 331u: goto L_089415D8;
    case 332u: goto L_089415F0;
    case 333u: goto L_089415F8;
    case 334u: goto L_08941608;
    case 335u: goto L_08941618;
    case 336u: goto L_08941624;
    case 337u: goto L_08941644;
    case 338u: goto L_08941658;
    case 339u: goto L_08941678;
    case 340u: goto L_08941684;
    case 341u: goto L_08941694;
    case 342u: goto L_0894169C;
    case 343u: goto L_089416A4;
    case 344u: goto L_089416B0;
    case 345u: goto L_089416C0;
    case 346u: goto L_089416CC;
    case 347u: goto L_089416F0;
    case 348u: goto L_08941704;
    case 349u: goto L_0894172C;
    case 350u: goto L_08941734;
    case 351u: goto L_08941770;
    case 352u: goto L_08941828;
    case 353u: goto L_0894184C;
    case 354u: goto L_0894186C;
    case 355u: goto L_0894188C;
    case 356u: goto L_0894189C;
    case 357u: goto L_089418A4;
    case 358u: goto L_089418AC;
    case 359u: goto L_089418B4;
    case 360u: goto L_089418C4;
    case 361u: goto L_089418D4;
    case 362u: goto L_089418E4;
    case 363u: goto L_089418F4;
    case 364u: goto L_08941910;
    case 365u: goto L_08941920;
    case 366u: goto L_08941930;
    case 367u: goto L_08941940;
    case 368u: goto L_08941954;
    case 369u: goto L_08941964;
    case 370u: goto L_08941970;
    case 371u: goto L_08941978;
    case 372u: goto L_08941990;
    case 373u: goto L_089419A0;
    case 374u: goto L_08941A10;
    case 375u: goto L_08941A38;
    case 376u: goto L_08941A44;
    case 377u: goto L_08941A5C;
    case 378u: goto L_08941A64;
    case 379u: goto L_08941A78;
    case 380u: goto L_08941A84;
    case 381u: goto L_08941A98;
    case 382u: goto L_08941ACC;
    case 383u: goto L_08941AE0;
    case 384u: goto L_08941AF8;
    case 385u: goto L_08941B00;
    case 386u: goto L_08941B08;
    case 387u: goto L_08941B10;
    case 388u: goto L_08941B18;
    case 389u: goto L_08941B20;
    case 390u: goto L_08941B28;
    case 391u: goto L_08941B30;
    case 392u: goto L_08941B38;
    case 393u: goto L_08941B40;
    case 394u: goto L_08941B48;
    case 395u: goto L_08941B50;
    case 396u: goto L_08941B58;
    case 397u: goto L_08941B60;
    case 398u: goto L_08941B68;
    case 399u: goto L_08941BAC;
    case 400u: goto L_08941BBC;
    case 401u: goto L_08941BE0;
    case 402u: goto L_08941BE8;
    case 403u: goto L_08941C08;
    case 404u: goto L_08941C10;
    case 405u: goto L_08941C18;
    case 406u: goto L_08941C20;
    case 407u: goto L_08941C2C;
    case 408u: goto L_08941C40;
    case 409u: goto L_08941C58;
    case 410u: goto L_08941C60;
    case 411u: goto L_08941C70;
    case 412u: goto L_08941C88;
    case 413u: goto L_08941C94;
    case 414u: goto L_08941C9C;
    case 415u: goto L_08941CA4;
    case 416u: goto L_08941CAC;
    case 417u: goto L_08941CB0;
    case 418u: goto L_08941CC4;
    case 419u: goto L_08941CE4;
    case 420u: goto L_08941D6C;
    case 421u: goto L_08941D80;
    case 422u: goto L_08941D94;
    case 423u: goto L_08941DAC;
    case 424u: goto L_08941DC0;
    case 425u: goto L_08941DD0;
    case 426u: goto L_08941DE8;
    case 427u: goto L_08941DFC;
    case 428u: goto L_08941E10;
    case 429u: goto L_08941E28;
    case 430u: goto L_08941E3C;
    case 431u: goto L_08941E4C;
    case 432u: goto L_08941F34;
    case 433u: goto L_08941F70;
    case 434u: goto L_08941F84;
    case 435u: goto L_08941F90;
    case 436u: goto L_08941F9C;
    case 437u: goto L_08941FA8;
    case 438u: goto L_08941FB4;
    case 439u: goto L_08941FC0;
    case 440u: goto L_08941FCC;
    case 441u: goto L_08941FD8;
    case 442u: goto L_08941FE4;
    case 443u: goto L_08941FF0;
    case 444u: goto L_08941FFC;
    case 445u: goto L_08942008;
    case 446u: goto L_08942014;
    case 447u: goto L_08942020;
    case 448u: goto L_0894202C;
    case 449u: goto L_08942038;
    case 450u: goto L_08942044;
    case 451u: goto L_08942050;
    case 452u: goto L_0894205C;
    case 453u: goto L_08942068;
    case 454u: goto L_08942074;
    case 455u: goto L_08942080;
    case 456u: goto L_0894208C;
    case 457u: goto L_08942098;
    case 458u: goto L_089420A4;
    case 459u: goto L_089420B0;
    case 460u: goto L_089420BC;
    case 461u: goto L_089420C8;
    case 462u: goto L_089420D4;
    case 463u: goto L_089420E0;
    case 464u: goto L_089420EC;
    case 465u: goto L_089420F8;
    case 466u: goto L_08942104;
    case 467u: goto L_08942110;
    case 468u: goto L_0894211C;
    case 469u: goto L_08942128;
    case 470u: goto L_08942134;
    case 471u: goto L_08942140;
    case 472u: goto L_0894214C;
    case 473u: goto L_08942158;
    case 474u: goto L_08942164;
    case 475u: goto L_0894216C;
    case 476u: goto L_08942174;
    case 477u: goto L_0894217C;
    case 478u: goto L_08942184;
    case 479u: goto L_0894218C;
    case 480u: goto L_08942194;
    case 481u: goto L_0894219C;
    case 482u: goto L_089421A4;
    case 483u: goto L_089421AC;
    case 484u: goto L_089421B4;
    case 485u: goto L_089421BC;
    case 486u: goto L_089421C4;
    case 487u: goto L_089421CC;
    case 488u: goto L_089421D4;
    case 489u: goto L_089421DC;
    case 490u: goto L_089421E4;
    case 491u: goto L_089421EC;
    case 492u: goto L_089421F4;
    case 493u: goto L_089421FC;
    case 494u: goto L_08942204;
    case 495u: goto L_0894220C;
    case 496u: goto L_08942214;
    case 497u: goto L_0894221C;
    case 498u: goto L_08942224;
    case 499u: goto L_0894222C;
    case 500u: goto L_08942234;
    case 501u: goto L_0894223C;
    case 502u: goto L_08942244;
    case 503u: goto L_0894224C;
    case 504u: goto L_08942254;
    case 505u: goto L_0894225C;
    case 506u: goto L_08942264;
    case 507u: goto L_0894226C;
    case 508u: goto L_08942274;
    case 509u: goto L_0894227C;
    case 510u: goto L_08942284;
    case 511u: goto L_0894228C;
    case 512u: goto L_08942294;
    case 513u: goto L_0894229C;
    case 514u: goto L_089422A4;
    case 515u: goto L_089422AC;
    case 516u: goto L_089422B0;
    case 517u: goto L_089422B8;
    case 518u: goto L_089422DC;
    case 519u: goto L_089422E8;
    case 520u: goto L_089422F0;
    case 521u: goto L_089422FC;
    case 522u: goto L_08942308;
    case 523u: goto L_08942348;
    case 524u: goto L_08942354;
    case 525u: goto L_08942360;
    case 526u: goto L_08942370;
    case 527u: goto L_08942374;
    case 528u: goto L_0894237C;
    case 529u: goto L_08942384;
    case 530u: goto L_08942390;
    case 531u: goto L_089423D0;
    case 532u: goto L_089423DC;
    case 533u: goto L_089423E8;
    case 534u: goto L_089423F8;
    case 535u: goto L_089423FC;
    case 536u: goto L_08942404;
    case 537u: goto L_0894240C;
    case 538u: goto L_0894241C;
    case 539u: goto L_08942434;
    case 540u: goto L_0894249C;
    case 541u: goto L_089424C0;
    case 542u: goto L_089424D4;
    case 543u: goto L_089424E0;
    case 544u: goto L_08942508;
    case 545u: goto L_0894251C;
    case 546u: goto L_08942520;
    case 547u: goto L_08942564;
    case 548u: goto L_08942578;
    case 549u: goto L_08942580;
    case 550u: goto L_08942588;
    case 551u: goto L_089425CC;
    case 552u: goto L_089425D8;
    case 553u: goto L_089425E4;
    case 554u: goto L_089425F8;
    case 555u: goto L_089425FC;
    case 556u: goto L_08942628;
    case 557u: goto L_08942684;
    case 558u: goto L_08942698;
    case 559u: goto L_089426A0;
    case 560u: goto L_089426A8;
    case 561u: goto L_089426F0;
    case 562u: goto L_08942700;
    case 563u: goto L_0894270C;
    case 564u: goto L_08942720;
    case 565u: goto L_08942728;
    case 566u: goto L_08942754;
    case 567u: goto L_089427B0;
    case 568u: goto L_089427C4;
    case 569u: goto L_089427CC;
    case 570u: goto L_089427E0;
    case 571u: goto L_08942820;
    case 572u: goto L_08942828;
    case 573u: goto L_08942830;
    case 574u: goto L_08942890;
    case 575u: goto L_089428A8;
    case 576u: goto L_089428C0;
    case 577u: goto L_089428D4;
    case 578u: goto L_089428E0;
    case 579u: goto L_089428EC;
    case 580u: goto L_089428FC;
    case 581u: goto L_0894290C;
    case 582u: goto L_08942924;
    case 583u: goto L_0894293C;
    case 584u: goto L_08942954;
    case 585u: goto L_0894296C;
    case 586u: goto L_08942984;
    case 587u: goto L_0894299C;
    case 588u: goto L_089429AC;
    case 589u: goto L_08942A1C;
    case 590u: goto L_08942A54;
    case 591u: goto L_08942A68;
    case 592u: goto L_08942AAC;
    case 593u: goto L_08942AB8;
    case 594u: goto L_08942AC0;
    case 595u: goto L_08942B08;
    case 596u: goto L_08942B9C;
    case 597u: goto L_08942BB8;
    case 598u: goto L_08942BD4;
    case 599u: goto L_08942BE0;
    case 600u: goto L_08942BE8;
    case 601u: goto L_08942BF0;
    case 602u: goto L_08942BF8;
    case 603u: goto L_08942C0C;
    case 604u: goto L_08942C14;
    case 605u: goto L_08942C18;
    case 606u: goto L_08942C20;
    case 607u: goto L_08942C28;
    case 608u: goto L_08942C3C;
    case 609u: goto L_08942C5C;
    case 610u: goto L_08942C64;
    case 611u: goto L_08942C74;
    case 612u: goto L_08942C90;
    case 613u: goto L_08942CCC;
    case 614u: goto L_08942CDC;
    case 615u: goto L_08942CF0;
    case 616u: goto L_08942D10;
    case 617u: goto L_08942D38;
    case 618u: goto L_08942D48;
    case 619u: goto L_08942D54;
    case 620u: goto L_08942D70;
    case 621u: goto L_08942D84;
    case 622u: goto L_08942D90;
    case 623u: goto L_08942D98;
    case 624u: goto L_08942DA4;
    case 625u: goto L_08942DC0;
    case 626u: goto L_08942DC4;
    case 627u: goto L_08942DD0;
    case 628u: goto L_08942DDC;
    case 629u: goto L_08942DE4;
    case 630u: goto L_08942DF8;
    case 631u: goto L_08942E1C;
    case 632u: goto L_08942E28;
    case 633u: goto L_08942E30;
    case 634u: goto L_08942E38;
    case 635u: goto L_08942E7C;
    case 636u: goto L_08942E90;
    case 637u: goto L_08942E98;
    case 638u: goto L_08942EBC;
    case 639u: goto L_08942EE0;
    case 640u: goto L_08942F10;
    case 641u: goto L_08942F1C;
    case 642u: goto L_08942F4C;
    case 643u: goto L_08942F58;
    case 644u: goto L_08942FAC;
    case 645u: goto L_08942FB8;
    case 646u: goto L_08942FC4;
    case 647u: goto L_08942FD0;
    case 648u: goto L_08942FEC;
    case 649u: goto L_08942FF4;
    case 650u: goto L_08942FFC;
    case 651u: goto L_0894300C;
    case 652u: goto L_08943014;
    case 653u: goto L_0894301C;
    case 654u: goto L_08943024;
    case 655u: goto L_08943034;
    case 656u: goto L_08943054;
    case 657u: goto L_08943064;
    case 658u: goto L_08943084;
    case 659u: goto L_089430B0;
    case 660u: goto L_089430C0;
    case 661u: goto L_089430C8;
    case 662u: goto L_089430D0;
    case 663u: goto L_089430D8;
    case 664u: goto L_089430E8;
    case 665u: goto L_08943108;
    case 666u: goto L_08943120;
    case 667u: goto L_08943128;
    case 668u: goto L_08943138;
    case 669u: goto L_08943140;
    case 670u: goto L_08943148;
    case 671u: goto L_08943158;
    case 672u: goto L_08943170;
    case 673u: goto L_08943178;
    case 674u: goto L_08943180;
    case 675u: goto L_08943188;
    case 676u: goto L_08943190;
    case 677u: goto L_08943198;
    case 678u: goto L_089431A8;
    case 679u: goto L_089431B4;
    case 680u: goto L_089431BC;
    case 681u: goto L_089431C4;
    case 682u: goto L_089431C8;
    case 683u: goto L_089431D0;
    case 684u: goto L_089431EC;
    case 685u: goto L_08943204;
    case 686u: goto L_08943214;
    case 687u: goto L_08943220;
    case 688u: goto L_0894322C;
    case 689u: goto L_0894323C;
    case 690u: goto L_0894324C;
    case 691u: goto L_08943254;
    case 692u: goto L_0894325C;
    case 693u: goto L_08943264;
    case 694u: goto L_0894326C;
    case 695u: goto L_0894327C;
    case 696u: goto L_0894329C;
    case 697u: goto L_089432B4;
    case 698u: goto L_089432BC;
    case 699u: goto L_089432C4;
    case 700u: goto L_089432D4;
    case 701u: goto L_089432DC;
    case 702u: goto L_089432E4;
    case 703u: goto L_089432F0;
    case 704u: goto L_089432FC;
    case 705u: goto L_0894330C;
    case 706u: goto L_08943318;
    case 707u: goto L_08943320;
    case 708u: goto L_08943340;
    case 709u: goto L_08943358;
    case 710u: goto L_08943374;
    case 711u: goto L_0894337C;
    case 712u: goto L_0894338C;
    case 713u: goto L_089433A0;
    case 714u: goto L_089433BC;
    case 715u: goto L_089433F0;
    case 716u: goto L_089433FC;
    case 717u: goto L_08943424;
    case 718u: goto L_0894343C;
    case 719u: goto L_08943460;
    case 720u: goto L_08943470;
    case 721u: goto L_08943478;
    case 722u: goto L_089434A4;
    case 723u: goto L_089434B4;
    case 724u: goto L_089434D4;
    case 725u: goto L_08943500;
    case 726u: goto L_0894353C;
    case 727u: goto L_08943548;
    case 728u: goto L_0894354C;
    case 729u: goto L_08943554;
    case 730u: goto L_0894355C;
    case 731u: goto L_08943570;
    case 732u: goto L_08943580;
    case 733u: goto L_089435A0;
    case 734u: goto L_089435B8;
    case 735u: goto L_089435C0;
    case 736u: goto L_089435C8;
    case 737u: goto L_089435D4;
    case 738u: goto L_089435E0;
    case 739u: goto L_089435F0;
    case 740u: goto L_089435FC;
    case 741u: goto L_08943604;
    case 742u: goto L_08943624;
    case 743u: goto L_08943648;
    case 744u: goto L_089436A4;
    case 745u: goto L_089436AC;
    case 746u: goto L_089436BC;
    case 747u: goto L_089436CC;
    case 748u: goto L_089436E8;
    case 749u: goto L_089436F0;
    case 750u: goto L_08943700;
    case 751u: goto L_08943708;
    case 752u: goto L_08943710;
    case 753u: goto L_08943720;
    case 754u: goto L_0894372C;
    case 755u: goto L_0894373C;
    case 756u: goto L_08943744;
    case 757u: goto L_0894374C;
    case 758u: goto L_08943758;
    case 759u: goto L_08943760;
    case 760u: goto L_08943768;
    case 761u: goto L_08943770;
    case 762u: goto L_08943778;
    case 763u: goto L_089437A0;
    case 764u: goto L_089437C4;
    case 765u: goto L_089437D8;
    case 766u: goto L_089437F8;
    case 767u: goto L_08943820;
    case 768u: goto L_08943854;
    case 769u: goto L_08943880;
    case 770u: goto L_08943890;
    case 771u: goto L_089438B4;
    case 772u: goto L_089438E8;
    case 773u: goto L_08943900;
    case 774u: goto L_0894391C;
    case 775u: goto L_08943948;
    case 776u: goto L_0894396C;
    case 777u: goto L_089439A4;
    case 778u: goto L_089439C8;
    case 779u: goto L_089439E4;
    case 780u: goto L_08943A28;
    case 781u: goto L_08943A38;
    case 782u: goto L_08943A74;
    case 783u: goto L_08943A7C;
    case 784u: goto L_08943AB0;
    case 785u: goto L_08943AC0;
    case 786u: goto L_08943AC4;
    case 787u: goto L_08943ACC;
    case 788u: goto L_08943AD0;
    case 789u: goto L_08943AE0;
    case 790u: goto L_08943AF0;
    case 791u: goto L_08943B08;
    case 792u: goto L_08943B1C;
    case 793u: goto L_08943B2C;
    case 794u: goto L_08943B48;
    case 795u: goto L_08943B50;
    case 796u: goto L_08943B64;
    case 797u: goto L_08943B7C;
    case 798u: goto L_08943B90;
    case 799u: goto L_08943B98;
    case 800u: goto L_08943BC8;
    case 801u: goto L_08943C68;
    case 802u: goto L_08943C70;
    case 803u: goto L_08943C80;
    case 804u: goto L_08943C88;
    case 805u: goto L_08943CA4;
    case 806u: goto L_08943CBC;
    case 807u: goto L_08943CC4;
    case 808u: goto L_08943CCC;
    case 809u: goto L_08943CD4;
    case 810u: goto L_08943CE4;
    case 811u: goto L_08943CEC;
    case 812u: goto L_08943CF8;
    case 813u: goto L_08943D20;
    case 814u: goto L_08943D5C;
    case 815u: goto L_08943D70;
    case 816u: goto L_08943D80;
    case 817u: goto L_08943DEC;
    case 818u: goto L_08943E10;
    case 819u: goto L_08943E18;
    case 820u: goto L_08943E28;
    case 821u: goto L_08943E30;
    case 822u: goto L_08943E34;
    case 823u: goto L_08943E40;
    case 824u: goto L_08943E48;
    case 825u: goto L_08943E54;
    case 826u: goto L_08943E5C;
    case 827u: goto L_08943E64;
    case 828u: goto L_08943E74;
    case 829u: goto L_08943E80;
    case 830u: goto L_08943E88;
    case 831u: goto L_08943E94;
    case 832u: goto L_08943E98;
    case 833u: goto L_08943EBC;
    case 834u: goto L_08943ED0;
    case 835u: goto L_08943ED8;
    case 836u: goto L_08943EE0;
    case 837u: goto L_08943EEC;
    case 838u: goto L_08943EF4;
    case 839u: goto L_08943F04;
    case 840u: goto L_08943F0C;
    case 841u: goto L_08943F24;
    case 842u: goto L_08943F34;
    case 843u: goto L_08943F3C;
    case 844u: goto L_08943F50;
    case 845u: goto L_08943F70;
    case 846u: goto L_08943F98;
    case 847u: goto L_08943FB0;
    case 848u: goto L_08943FBC;
    case 849u: goto L_08943FC4;
    case 850u: goto L_08943FD0;
    case 851u: goto L_08943FD4;
    case 852u: goto L_08943FEC;
    case 853u: goto L_08943FF4;
    case 854u: goto L_08943FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08940000:
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08940038;
      }
      goto L_0894000C;
    }
L_0894000C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940038u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08940038u) goto L_08940038;
    return;
L_08940038:
    ctx.gpr[31] = (0x08940040u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x08940040u) goto L_08940040;
    return;
L_08940040:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 870u, 0x0893FB70u>(ctx, &aot_mem); return;
      }
      goto L_08940048;
    }
L_08940048:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0894060C;
      }
      goto L_0894005C;
    }
L_0894005C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30896)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940074:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[19] = (ctx.gpr[19] & 7u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[4] >> 29u);
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 3u));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089401A4;
      }
      goto L_089400D4;
    }
L_089400D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
      if (branch_taken) {
          goto L_089400F4;
      }
      goto L_089400EC;
    }
L_089400EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08940118;
      }
      goto L_089400F4;
    }
L_089400F4:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    goto L_08940118;
L_08940118:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0894017C;
      }
      goto L_08940120;
    }
L_08940120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894013C;
      }
      goto L_0894012C;
    }
L_0894012C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0894017C;
      }
      goto L_0894013C;
    }
L_0894013C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894014Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 129u, 0x0893884Cu>(ctx, &aot_mem) && ctx.pc == 0x0894014Cu) goto L_0894014C;
    return;
L_0894014C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0894017C;
      }
      goto L_08940154;
    }
L_08940154:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(156));
    ctx.gpr[31] = (0x08940178u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08940178u) goto L_08940178;
    return;
L_08940178:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0894017C;
L_0894017C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089400D4;
      }
      goto L_089401A4;
    }
L_089401A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894060C;
      }
      goto L_089401AC;
    }
L_089401AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940208;
      }
      goto L_089401B8;
    }
L_089401B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089401E0;
      }
      goto L_089401D4;
    }
L_089401D4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089401E0;
L_089401E0:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940210;
      }
      goto L_089401FC;
    }
L_089401FC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08940210;
      }
      goto L_08940208;
    }
L_08940208:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08940210;
L_08940210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894060C;
      }
      goto L_08940218;
    }
L_08940218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089404DC;
      }
      goto L_08940224;
    }
L_08940224:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08940254;
    }
    goto L_08940254;
L_08940254:
    ctx.gpr[4] = (16288u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55676u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089402C4;
      }
      goto L_08940270;
    }
L_08940270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940318;
      }
      goto L_089402C4;
    }
L_089402C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
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
    goto L_08940318;
L_08940318:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089404D4;
      }
      goto L_08940330;
    }
L_08940330:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08940340u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x08940340u) goto L_08940340;
    return;
L_08940340:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6576), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (0u | 125u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(216)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08940370;
      }
      goto L_08940364;
    }
L_08940364:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08940370;
L_08940370:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[6] = (18676u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(616)));
    ctx.gpr[5] = (ctx.gpr[6] | 9216u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (2230u << 16u);
        goto L_089403BC;
    }
    goto L_089403B0;
L_089403B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2230u << 16u);
    goto L_089403BC;
L_089403BC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6564)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08940444;
      }
      goto L_08940414;
    }
L_08940414:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08940420u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08940420u) goto L_08940420;
    return;
L_08940420:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940438;
      }
      goto L_0894042C;
    }
L_0894042C:
    ctx.gpr[31] = (0x08940434u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08940434u) goto L_08940434;
    return;
L_08940434:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08940438;
L_08940438:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08940444;
L_08940444:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08940454u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30328));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08940454u) goto L_08940454;
    return;
L_08940454:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 5000u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08940480u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 372u, 0x0887A178u>(ctx, &aot_mem) && ctx.pc == 0x08940480u) goto L_08940480;
    return;
L_08940480:
    ctx.gpr[31] = (0x08940488u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 478u, 0x0889E6C8u>(ctx, &aot_mem) && ctx.pc == 0x08940488u) goto L_08940488;
    return;
L_08940488:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7552)));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7552), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29992)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089404D4u);
    ctx.gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089404D4u) goto L_089404D4;
    return;
L_089404D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089404E4;
      }
      goto L_089404DC;
    }
L_089404DC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089404E4;
L_089404E4:
    ctx.gpr[31] = (0x089404ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 391u, 0x0893A2B4u>(ctx, &aot_mem) && ctx.pc == 0x089404ECu) goto L_089404EC;
    return;
L_089404EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894060C;
      }
      goto L_089404F4;
    }
L_089404F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940528;
      }
      goto L_0894050C;
    }
L_0894050C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894051Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 396u, 0x0893A308u>(ctx, &aot_mem) && ctx.pc == 0x0894051Cu) goto L_0894051C;
    return;
L_0894051C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0894057C;
      }
      goto L_08940528;
    }
L_08940528:
    ctx.gpr[31] = (0x08940530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08940530u) goto L_08940530;
    return;
L_08940530:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (14673u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08940558u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08940558u) goto L_08940558;
    return;
L_08940558:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894057Cu);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 396u, 0x0893A308u>(ctx, &aot_mem) && ctx.pc == 0x0894057Cu) goto L_0894057C;
    return;
L_0894057C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894060C;
      }
      goto L_08940584;
    }
L_08940584:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089405C0;
    }
    goto L_089405C0;
L_089405C0:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08940604;
      }
      goto L_089405DC;
    }
L_089405DC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940604u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08940604u) goto L_08940604;
    return;
L_08940604:
    ctx.gpr[31] = (0x0894060Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 391u, 0x0893A2B4u>(ctx, &aot_mem) && ctx.pc == 0x0894060Cu) goto L_0894060C;
    return;
L_0894060C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (0u | 23u);
    ctx.gpr[5] = (ctx.gpr[5] & 31u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08940718;
      }
      goto L_08940624;
    }
L_08940624:
    ctx.gpr[31] = (0x0894062Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0894062Cu) goto L_0894062C;
    return;
L_0894062C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940718;
      }
      goto L_08940644;
    }
L_08940644:
    ctx.gpr[31] = (0x0894064Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0894064Cu) goto L_0894064C;
    return;
L_0894064C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940718;
      }
      goto L_08940664;
    }
L_08940664:
    ctx.gpr[31] = (0x0894066Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0894066Cu) goto L_0894066C;
    return;
L_0894066C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940718;
      }
      goto L_08940684;
    }
L_08940684:
    ctx.gpr[31] = (0x0894068Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0894068Cu) goto L_0894068C;
    return;
L_0894068C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940718;
      }
      goto L_089406A4;
    }
L_089406A4:
    ctx.gpr[31] = (0x089406ACu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089406ACu) goto L_089406AC;
    return;
L_089406AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940718;
      }
      goto L_089406D0;
    }
L_089406D0:
    ctx.gpr[31] = (0x089406D8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089406D8u) goto L_089406D8;
    return;
L_089406D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(792)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940718;
      }
      goto L_089406F0;
    }
L_089406F0:
    ctx.gpr[31] = (0x089406F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089406F8u) goto L_089406F8;
    return;
L_089406F8:
    ctx.gpr[9] = (17302u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 39u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08940718u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08940718u) goto L_08940718;
    return;
L_08940718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941734;
      }
      goto L_08940720;
    }
L_08940720:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089408C4;
      }
      goto L_08940730;
    }
L_08940730:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089409E8;
      }
      goto L_08940738;
    }
L_08940738:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089408CC;
      }
      goto L_08940740;
    }
L_08940740:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08940A5C;
      }
      goto L_08940748;
    }
L_08940748:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089408C4;
      }
      goto L_08940750;
    }
L_08940750:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08940AF4;
      }
      goto L_08940758;
    }
L_08940758:
    ctx.gpr[31] = (0x08940760u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x08940760u) goto L_08940760;
    return;
L_08940760:
    ctx.gpr[31] = (0x08940768u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08940768u) goto L_08940768;
    return;
L_08940768:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(800)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08940790u);
    ctx.fpr[22] = ctx.fpr[14] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08940790u) goto L_08940790;
    return;
L_08940790:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(816)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[31] = (0x089407B4u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089407B4u) goto L_089407B4;
    return;
L_089407B4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(836)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x089407D4u);
    ctx.fpr[24] = ctx.fpr[17] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089407D4u) goto L_089407D4;
    return;
L_089407D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(852)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940818;
      }
      goto L_0894080C;
    }
L_0894080C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940854;
      }
      goto L_08940818;
    }
L_08940818:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089408C4;
      }
      goto L_0894082C;
    }
L_0894082C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08940838u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 274u, 0x0893960Cu>(ctx, &aot_mem) && ctx.pc == 0x08940838u) goto L_08940838;
    return;
L_08940838:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089408C4;
      }
      goto L_08940840;
    }
L_08940840:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089408C4;
      }
      goto L_08940854;
    }
L_08940854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089408C4;
      }
      goto L_08940860;
    }
L_08940860:
    ctx.gpr[31] = (0x08940868u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08940868u) goto L_08940868;
    return;
L_08940868:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089408C4;
      }
      goto L_08940870;
    }
L_08940870:
    ctx.gpr[31] = (0x08940878u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 89u, 0x08938628u>(ctx, &aot_mem) && ctx.pc == 0x08940878u) goto L_08940878;
    return;
L_08940878:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089408C4;
      }
      goto L_08940880;
    }
L_08940880:
    ctx.gpr[31] = (0x08940888u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 329u, 0x08939C78u>(ctx, &aot_mem) && ctx.pc == 0x08940888u) goto L_08940888;
    return;
L_08940888:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089408C4;
      }
      goto L_08940890;
    }
L_08940890:
    ctx.gpr[31] = (0x08940898u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08940898u) goto L_08940898;
    return;
L_08940898:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[31] = (0x089408A8u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089408A8u) goto L_089408A8;
    return;
L_089408A8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_089408C4;
L_089408C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941734;
      }
      goto L_089408CC;
    }
L_089408CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089408E4;
      }
      goto L_089408D8;
    }
L_089408D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x089408E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 293u, 0x089397F8u>(ctx, &aot_mem) && ctx.pc == 0x089408E4u) goto L_089408E4;
    return;
L_089408E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08940904;
      }
      goto L_089408F4;
    }
L_089408F4:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940910;
      }
      goto L_08940904;
    }
L_08940904:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08940910;
L_08940910:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08940930;
    }
    goto L_08940930;
L_08940930:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089409D8;
      }
      goto L_08940944;
    }
L_08940944:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940964u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08940964u) goto L_08940964;
    return;
L_08940964:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089409D4;
      }
      goto L_08940970;
    }
L_08940970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894099C;
      }
      goto L_0894097C;
    }
L_0894097C:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089409A0;
      }
      goto L_0894099C;
    }
L_0894099C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_089409A0;
L_089409A0:
    ctx.gpr[31] = (0x089409A8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089409A8u) goto L_089409A8;
    return;
L_089409A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x089409BCu);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089409BCu) goto L_089409BC;
    return;
L_089409BC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089409D8;
      }
      goto L_089409D4;
    }
L_089409D4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_089409D8;
L_089409D8:
    ctx.gpr[31] = (0x089409E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x089409E0u) goto L_089409E0;
    return;
L_089409E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089408C4;
      }
      goto L_089409E8;
    }
L_089409E8:
    ctx.gpr[31] = (0x089409F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089409F0u) goto L_089409F0;
    return;
L_089409F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08940A54;
      }
      goto L_089409FC;
    }
L_089409FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940A54;
      }
      goto L_08940A08;
    }
L_08940A08:
    ctx.gpr[31] = (0x08940A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08940A10u) goto L_08940A10;
    return;
L_08940A10:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08940A1Cu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08940A1Cu) goto L_08940A1C;
    return;
L_08940A1C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08940A30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 491u, 0x0893A7A4u>(ctx, &aot_mem) && ctx.pc == 0x08940A30u) goto L_08940A30;
    return;
L_08940A30:
    ctx.gpr[4] = (17296u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940A54;
      }
      goto L_08940A4C;
    }
L_08940A4C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08940A54;
L_08940A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089408C4;
      }
      goto L_08940A5C;
    }
L_08940A5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08940A78;
      }
      goto L_08940A68;
    }
L_08940A68:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940A84;
      }
      goto L_08940A78;
    }
L_08940A78:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08940A84;
L_08940A84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08940AA8;
    }
    goto L_08940AA8;
L_08940AA8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08940AE4;
      }
      goto L_08940ABC;
    }
L_08940ABC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940AE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08940AE4u) goto L_08940AE4;
    return;
L_08940AE4:
    ctx.gpr[31] = (0x08940AECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x08940AECu) goto L_08940AEC;
    return;
L_08940AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089408C4;
      }
      goto L_08940AF4;
    }
L_08940AF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08940B24;
      }
      goto L_08940B04;
    }
L_08940B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940B24;
      }
      goto L_08940B1C;
    }
L_08940B1C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08940B24;
L_08940B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089408C4;
      }
      goto L_08940B2C;
    }
L_08940B2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08940B54;
      }
      goto L_08940B3C;
    }
L_08940B3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08940B4C;
      }
      goto L_08940B44;
    }
L_08940B44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08940B6C;
      }
      goto L_08940B4C;
    }
L_08940B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941734;
      }
      goto L_08940B54;
    }
L_08940B54:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08940B74;
      }
      goto L_08940B5C;
    }
L_08940B5C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940B4C;
      }
      goto L_08940B64;
    }
L_08940B64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940B7C;
      }
      goto L_08940B6C;
    }
L_08940B6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940B4C;
      }
      goto L_08940B74;
    }
L_08940B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940B4C;
      }
      goto L_08940B7C;
    }
L_08940B7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08940B98;
      }
      goto L_08940B88;
    }
L_08940B88:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940BA4;
      }
      goto L_08940B98;
    }
L_08940B98:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08940BA4;
L_08940BA4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08940BC8;
    }
    goto L_08940BC8;
L_08940BC8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08940C04;
      }
      goto L_08940BDC;
    }
L_08940BDC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940C04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08940C04u) goto L_08940C04;
    return;
L_08940C04:
    ctx.gpr[31] = (0x08940C0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x08940C0Cu) goto L_08940C0C;
    return;
L_08940C0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940B4C;
      }
      goto L_08940C14;
    }
L_08940C14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08940C3C;
      }
      goto L_08940C24;
    }
L_08940C24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08940C34;
      }
      goto L_08940C2C;
    }
L_08940C2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08940C54;
      }
      goto L_08940C34;
    }
L_08940C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941734;
      }
      goto L_08940C3C;
    }
L_08940C3C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08940C5C;
      }
      goto L_08940C44;
    }
L_08940C44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940C34;
      }
      goto L_08940C4C;
    }
L_08940C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940CF0;
      }
      goto L_08940C54;
    }
L_08940C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940C34;
      }
      goto L_08940C5C;
    }
L_08940C5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08940C7C;
      }
      goto L_08940C6C;
    }
L_08940C6C:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940C88;
      }
      goto L_08940C7C;
    }
L_08940C7C:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08940C88;
L_08940C88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08940CA8;
    }
    goto L_08940CA8;
L_08940CA8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08940CE0;
      }
      goto L_08940CBC;
    }
L_08940CBC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940CE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08940CE0u) goto L_08940CE0;
    return;
L_08940CE0:
    ctx.gpr[31] = (0x08940CE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x08940CE8u) goto L_08940CE8;
    return;
L_08940CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940C34;
      }
      goto L_08940CF0;
    }
L_08940CF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08940D0C;
      }
      goto L_08940CFC;
    }
L_08940CFC:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940D18;
      }
      goto L_08940D0C;
    }
L_08940D0C:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08940D18;
L_08940D18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08940D3C;
    }
    goto L_08940D3C;
L_08940D3C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08940D78;
      }
      goto L_08940D50;
    }
L_08940D50:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940D78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08940D78u) goto L_08940D78;
    return;
L_08940D78:
    ctx.gpr[31] = (0x08940D80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x08940D80u) goto L_08940D80;
    return;
L_08940D80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940C34;
      }
      goto L_08940D88;
    }
L_08940D88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08940DB4;
      }
      goto L_08940D98;
    }
L_08940D98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08940DC4;
      }
      goto L_08940DA0;
    }
L_08940DA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08940FAC;
      }
      goto L_08940DA8;
    }
L_08940DA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940DCC;
      }
      goto L_08940DB0;
    }
L_08940DB0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_08940DB4;
L_08940DB4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08940EC0;
      }
      goto L_08940DBC;
    }
L_08940DBC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089411D8;
      }
      goto L_08940DC4;
    }
L_08940DC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941734;
      }
      goto L_08940DCC;
    }
L_08940DCC:
    ctx.gpr[31] = (0x08940DD4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08940DD4u) goto L_08940DD4;
    return;
L_08940DD4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(896)));
    ctx.gpr[31] = (0x08940DE0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08940DE0u) goto L_08940DE0;
    return;
L_08940DE0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08940DF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 491u, 0x0893A7A4u>(ctx, &aot_mem) && ctx.pc == 0x08940DF0u) goto L_08940DF0;
    return;
L_08940DF0:
    ctx.gpr[4] = (17249u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16675u << 16u);
      if (branch_taken) {
          goto L_08940E34;
      }
      goto L_08940E0C;
    }
L_08940E0C:
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940E44;
      }
      goto L_08940E24;
    }
L_08940E24:
    ctx.gpr[31] = (0x08940E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08940E2Cu) goto L_08940E2C;
    return;
L_08940E2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940E44;
      }
      goto L_08940E34;
    }
L_08940E34:
    ctx.gpr[31] = (0x08940E3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 329u, 0x08939C78u>(ctx, &aot_mem) && ctx.pc == 0x08940E3Cu) goto L_08940E3C;
    return;
L_08940E3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940E80;
      }
      goto L_08940E44;
    }
L_08940E44:
    ctx.gpr[31] = (0x08940E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08940E4Cu) goto L_08940E4C;
    return;
L_08940E4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940E8C;
      }
      goto L_08940E54;
    }
L_08940E54:
    ctx.gpr[31] = (0x08940E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08940E5Cu) goto L_08940E5C;
    return;
L_08940E5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08940E68u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 346u, 0x08939E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08940E68u) goto L_08940E68;
    return;
L_08940E68:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08940E74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 460u, 0x0893A62Cu>(ctx, &aot_mem) && ctx.pc == 0x08940E74u) goto L_08940E74;
    return;
L_08940E74:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940E8C;
      }
      goto L_08940E80;
    }
L_08940E80:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08940EB8;
      }
      goto L_08940E8C;
    }
L_08940E8C:
    ctx.gpr[4] = (17817u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940EB8;
      }
      goto L_08940EA8;
    }
L_08940EA8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08940EB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 358u, 0x08939F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08940EB8u) goto L_08940EB8;
    return;
L_08940EB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940DC4;
      }
      goto L_08940EC0;
    }
L_08940EC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08940EE0;
      }
      goto L_08940ED0;
    }
L_08940ED0:
    ctx.gpr[4] = (15627u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 17302u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08940EEC;
      }
      goto L_08940EE0;
    }
L_08940EE0:
    ctx.gpr[4] = (15755u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 17302u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08940EEC;
L_08940EEC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08940F0C;
    }
    goto L_08940F0C;
L_08940F0C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08940F18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 235u, 0x08939268u>(ctx, &aot_mem) && ctx.pc == 0x08940F18u) goto L_08940F18;
    return;
L_08940F18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940F2C;
      }
      goto L_08940F20;
    }
L_08940F20:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08940F9C;
      }
      goto L_08940F2C;
    }
L_08940F2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08940F9C;
      }
      goto L_08940F44;
    }
L_08940F44:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08940F64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08940F64u) goto L_08940F64;
    return;
L_08940F64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08940F70u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 106u, 0x0893C824u>(ctx, &aot_mem) && ctx.pc == 0x08940F70u) goto L_08940F70;
    return;
L_08940F70:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30072));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08940F9Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 547u, 0x0893ABD0u>(ctx, &aot_mem) && ctx.pc == 0x08940F9Cu) goto L_08940F9C;
    return;
L_08940F9C:
    ctx.gpr[31] = (0x08940FA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x08940FA4u) goto L_08940FA4;
    return;
L_08940FA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940DC4;
      }
      goto L_08940FAC;
    }
L_08940FAC:
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
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941008;
      }
      goto L_08940FDC;
    }
L_08940FDC:
    ctx.gpr[31] = (0x08940FE4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08940FE4u) goto L_08940FE4;
    return;
L_08940FE4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(944)));
    ctx.gpr[31] = (0x08940FF0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08940FF0u) goto L_08940FF0;
    return;
L_08940FF0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(964)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08941000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 491u, 0x0893A7A4u>(ctx, &aot_mem) && ctx.pc == 0x08941000u) goto L_08941000;
    return;
L_08941000:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08941014;
      }
      goto L_08941008;
    }
L_08941008:
    ctx.gpr[4] = (32639u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65535u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08941014;
L_08941014:
    ctx.gpr[4] = (16634u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57671u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17096u << 16u);
      if (branch_taken) {
          goto L_08941054;
      }
      goto L_08941030;
    }
L_08941030:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089411D0;
      }
      goto L_08941044;
    }
L_08941044:
    ctx.gpr[31] = (0x0894104Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0894104Cu) goto L_0894104C;
    return;
L_0894104C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089411D0;
      }
      goto L_08941054;
    }
L_08941054:
    ctx.gpr[31] = (0x0894105Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0894105Cu) goto L_0894105C;
    return;
L_0894105C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941190;
      }
      goto L_08941064;
    }
L_08941064:
    ctx.gpr[31] = (0x0894106Cu);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 80u, 0x0893C608u>(ctx, &aot_mem) && ctx.pc == 0x0894106Cu) goto L_0894106C;
    return;
L_0894106C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08941078u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 460u, 0x0893A62Cu>(ctx, &aot_mem) && ctx.pc == 0x08941078u) goto L_08941078;
    return;
L_08941078:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941190;
      }
      goto L_08941084;
    }
L_08941084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089411D0;
      }
      goto L_08941090;
    }
L_08941090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089410A0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089410A0u) goto L_089410A0;
    return;
L_089410A0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089410BCu);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089410BCu) goto L_089410BC;
    return;
L_089410BC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08941188;
      }
      goto L_089410D0;
    }
L_089410D0:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16840u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08941188;
      }
      goto L_089410F4;
    }
L_089410F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(18001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941188;
      }
      goto L_08941114;
    }
L_08941114:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08941154;
      }
      goto L_08941124;
    }
L_08941124:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08941130u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08941130u) goto L_08941130;
    return;
L_08941130:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941148;
      }
      goto L_0894113C;
    }
L_0894113C:
    ctx.gpr[31] = (0x08941144u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08941144u) goto L_08941144;
    return;
L_08941144:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08941148;
L_08941148:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08941154;
L_08941154:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08941164u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30336));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08941164u) goto L_08941164;
    return;
L_08941164:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08941178u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08941178u) goto L_08941178;
    return;
L_08941178:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6568), ctx.gpr[4]);
    goto L_08941188;
L_08941188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089411D0;
      }
      goto L_08941190;
    }
L_08941190:
    ctx.gpr[31] = (0x08941198u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 106u, 0x0893C824u>(ctx, &aot_mem) && ctx.pc == 0x08941198u) goto L_08941198;
    return;
L_08941198:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30072));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089411C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 574u, 0x0893AE28u>(ctx, &aot_mem) && ctx.pc == 0x089411C0u) goto L_089411C0;
    return;
L_089411C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089411D0;
      }
      goto L_089411C8;
    }
L_089411C8:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089411D0;
L_089411D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940DC4;
      }
      goto L_089411D8;
    }
L_089411D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_089411F4;
      }
      goto L_089411E4;
    }
L_089411E4:
    ctx.gpr[4] = (15568u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 58720u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08941200;
      }
      goto L_089411F4;
    }
L_089411F4:
    ctx.gpr[4] = (15731u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46662u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08941200;
L_08941200:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08941224;
    }
    goto L_08941224;
L_08941224:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08941260;
      }
      goto L_08941238;
    }
L_08941238:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08941260u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08941260u) goto L_08941260;
    return;
L_08941260:
    ctx.gpr[31] = (0x08941268u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x08941268u) goto L_08941268;
    return;
L_08941268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940DC4;
      }
      goto L_08941270;
    }
L_08941270:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08941298;
      }
      goto L_08941280;
    }
L_08941280:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089412A8;
      }
      goto L_08941288;
    }
L_08941288:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08941444;
      }
      goto L_08941290;
    }
L_08941290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089412B0;
      }
      goto L_08941298;
    }
L_08941298:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08941398;
      }
      goto L_089412A0;
    }
L_089412A0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089414B4;
      }
      goto L_089412A8;
    }
L_089412A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941734;
      }
      goto L_089412B0;
    }
L_089412B0:
    ctx.gpr[31] = (0x089412B8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089412B8u) goto L_089412B8;
    return;
L_089412B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(976)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x089412E0u);
    ctx.fpr[22] = ctx.fpr[14] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089412E0u) goto L_089412E0;
    return;
L_089412E0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[31] = (0x08941304u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08941304u) goto L_08941304;
    return;
L_08941304:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1012)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08941324u);
    ctx.fpr[24] = ctx.fpr[17] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08941324u) goto L_08941324;
    return;
L_08941324:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
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
          goto L_08941390;
      }
      goto L_0894135C;
    }
L_0894135C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941390;
      }
      goto L_08941368;
    }
L_08941368:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08941378u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 160u, 0x08938B58u>(ctx, &aot_mem) && ctx.pc == 0x08941378u) goto L_08941378;
    return;
L_08941378:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941390;
      }
      goto L_08941380;
    }
L_08941380:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08941390;
L_08941390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089412A8;
      }
      goto L_08941398;
    }
L_08941398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089413B0;
      }
      goto L_089413A4;
    }
L_089413A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x089413B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 293u, 0x089397F8u>(ctx, &aot_mem) && ctx.pc == 0x089413B0u) goto L_089413B0;
    return;
L_089413B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_089413D0;
      }
      goto L_089413C0;
    }
L_089413C0:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089413DC;
      }
      goto L_089413D0;
    }
L_089413D0:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089413DC;
L_089413DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089413FC;
    }
    goto L_089413FC;
L_089413FC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08941434;
      }
      goto L_08941410;
    }
L_08941410:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08941430u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08941430u) goto L_08941430;
    return;
L_08941430:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_08941434;
L_08941434:
    ctx.gpr[31] = (0x0894143Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0894143Cu) goto L_0894143C;
    return;
L_0894143C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089412A8;
      }
      goto L_08941444;
    }
L_08941444:
    ctx.gpr[31] = (0x0894144Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0894144Cu) goto L_0894144C;
    return;
L_0894144C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089414AC;
      }
      goto L_08941458;
    }
L_08941458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089414AC;
      }
      goto L_08941464;
    }
L_08941464:
    ctx.gpr[31] = (0x0894146Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0894146Cu) goto L_0894146C;
    return;
L_0894146C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08941478u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08941478u) goto L_08941478;
    return;
L_08941478:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0894148Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 491u, 0x0893A7A4u>(ctx, &aot_mem) && ctx.pc == 0x0894148Cu) goto L_0894148C;
    return;
L_0894148C:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089414AC;
      }
      goto L_089414A4;
    }
L_089414A4:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089414AC;
L_089414AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089412A8;
      }
      goto L_089414B4;
    }
L_089414B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_089414D0;
      }
      goto L_089414C0;
    }
L_089414C0:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089414DC;
      }
      goto L_089414D0;
    }
L_089414D0:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089414DC;
L_089414DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08941500;
    }
    goto L_08941500;
L_08941500:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894153C;
      }
      goto L_08941514;
    }
L_08941514:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0894153Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0894153Cu) goto L_0894153C;
    return;
L_0894153C:
    ctx.gpr[31] = (0x08941544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x08941544u) goto L_08941544;
    return;
L_08941544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089412A8;
      }
      goto L_0894154C;
    }
L_0894154C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08941574;
      }
      goto L_0894155C;
    }
L_0894155C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08941734;
      }
      goto L_08941564;
    }
L_08941564:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0894158C;
      }
      goto L_0894156C;
    }
L_0894156C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941734;
      }
      goto L_08941574;
    }
L_08941574:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089415F8;
      }
      goto L_0894157C;
    }
L_0894157C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089416A4;
      }
      goto L_08941584;
    }
L_08941584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941734;
      }
      goto L_0894158C;
    }
L_0894158C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089415F0;
      }
      goto L_08941598;
    }
L_08941598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089415A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 129u, 0x0893884Cu>(ctx, &aot_mem) && ctx.pc == 0x089415A8u) goto L_089415A8;
    return;
L_089415A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089415F0;
      }
      goto L_089415B0;
    }
L_089415B0:
    ctx.gpr[31] = (0x089415B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 329u, 0x08939C78u>(ctx, &aot_mem) && ctx.pc == 0x089415B8u) goto L_089415B8;
    return;
L_089415B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089415F0;
      }
      goto L_089415C0;
    }
L_089415C0:
    ctx.gpr[31] = (0x089415C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 235u, 0x08939268u>(ctx, &aot_mem) && ctx.pc == 0x089415C8u) goto L_089415C8;
    return;
L_089415C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089415F0;
      }
      goto L_089415D0;
    }
L_089415D0:
    ctx.gpr[31] = (0x089415D8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089415D8u) goto L_089415D8;
    return;
L_089415D8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_089415F0;
L_089415F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941734;
      }
      goto L_089415F8;
    }
L_089415F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08941618;
      }
      goto L_08941608;
    }
L_08941608:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08941624;
      }
      goto L_08941618;
    }
L_08941618:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08941624;
L_08941624:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08941644;
    }
    goto L_08941644;
L_08941644:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08941694;
      }
      goto L_08941658;
    }
L_08941658:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08941678u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08941678u) goto L_08941678;
    return;
L_08941678:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08941684u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08941684u) goto L_08941684;
    return;
L_08941684:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08941694;
L_08941694:
    ctx.gpr[31] = (0x0894169Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x0894169Cu) goto L_0894169C;
    return;
L_0894169C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941734;
      }
      goto L_089416A4;
    }
L_089416A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_089416C0;
      }
      goto L_089416B0;
    }
L_089416B0:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089416CC;
      }
      goto L_089416C0;
    }
L_089416C0:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089416CC;
L_089416CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_089416F0;
    }
    goto L_089416F0;
L_089416F0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894172C;
      }
      goto L_08941704;
    }
L_08941704:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0894172Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0894172Cu) goto L_0894172C;
    return;
L_0894172C:
    ctx.gpr[31] = (0x08941734u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x08941734u) goto L_08941734;
    return;
L_08941734:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1396)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1404)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1420)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1424)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1432)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1436)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1440)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1456));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941770:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[17] = ctx.fpr[16] + ctx.fpr[17];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[18] = ctx.fpr[13] + ctx.fpr[16];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[17] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
        goto L_08941828;
    }
    goto L_08941828;
L_08941828:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_0894184C;
    }
    goto L_0894184C;
L_0894184C:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[18] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_0894186C;
    }
    goto L_0894186C;
L_0894186C:
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[19] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 99 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
        goto L_0894188C;
    }
    goto L_0894188C;
L_0894188C:
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089418A4;
      }
      goto L_0894189C;
    }
L_0894189C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089418B4;
      }
      goto L_089418A4;
    }
L_089418A4:
    ctx.gpr[31] = (0x089418ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x089418ACu) goto L_089418AC;
    return;
L_089418AC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089418B4;
L_089418B4:
    ctx.gpr[20] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] << 5u);
      if (branch_taken) {
          goto L_08941964;
      }
      goto L_089418C4;
    }
L_089418C4:
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[5] << 2u);
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[4]);
    ctx.gpr[22] = (2227u << 16u);
    goto L_089418D4;
L_089418D4:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_08941954;
      }
      goto L_089418E4;
    }
L_089418E4:
    ctx.gpr[30] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[30] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[30]);
    goto L_089418F4;
L_089418F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[23] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08941910u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 512u, 0x0893A970u>(ctx, &aot_mem) && ctx.pc == 0x08941910u) goto L_08941910;
    return;
L_08941910:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08941920u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 512u, 0x0893A970u>(ctx, &aot_mem) && ctx.pc == 0x08941920u) goto L_08941920;
    return;
L_08941920:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08941930u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 512u, 0x0893A970u>(ctx, &aot_mem) && ctx.pc == 0x08941930u) goto L_08941930;
    return;
L_08941930:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08941940u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 512u, 0x0893A970u>(ctx, &aot_mem) && ctx.pc == 0x08941940u) goto L_08941940;
    return;
L_08941940:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089418F4;
      }
      goto L_08941954;
    }
L_08941954:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_089418D4;
      }
      goto L_08941964;
    }
L_08941964:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08941A5C;
      }
      goto L_08941970;
    }
L_08941970:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941A5C;
      }
      goto L_08941978;
    }
L_08941978:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08941A5C;
      }
      goto L_08941990;
    }
L_08941990:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(210)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08941A5C;
      }
      goto L_089419A0;
    }
L_089419A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = ctx.fpr[17] - ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[18] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[16] = ctx.fpr[19] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08941A5C;
      }
      goto L_08941A10;
    }
L_08941A10:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08941A44;
      }
      goto L_08941A38;
    }
L_08941A38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08941A5C;
      }
      goto L_08941A44;
    }
L_08941A44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08941A5C;
L_08941A5C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941A78;
      }
      goto L_08941A64;
    }
L_08941A64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 512u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_08941A78;
L_08941A78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941A98;
      }
      goto L_08941A84;
    }
L_08941A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08941A98;
L_08941A98:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941ACC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08941B60;
      }
      goto L_08941AE0;
    }
L_08941AE0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30928)));
    jump_target = ctx.gpr[1];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941AF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08941B28;
      }
      goto L_08941B00;
    }
L_08941B00:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_08941B18;
    }
    goto L_08941B08;
L_08941B08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08941B20;
      }
      goto L_08941B10;
    }
L_08941B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941B28;
      }
      goto L_08941B18;
    }
L_08941B18:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941B28;
      }
      goto L_08941B20;
    }
L_08941B20:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08941B28;
L_08941B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941B60;
      }
      goto L_08941B30;
    }
L_08941B30:
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_08941B48;
    }
    goto L_08941B38;
L_08941B38:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08941B58;
      }
      goto L_08941B40;
    }
L_08941B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941B58;
      }
      goto L_08941B48;
    }
L_08941B48:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941B58;
      }
      goto L_08941B50;
    }
L_08941B50:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08941B58;
L_08941B58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941B60;
      }
      goto L_08941B60;
    }
L_08941B60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941B68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11856));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08941BACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 397u, 0x0893A310u>(ctx, &aot_mem) && ctx.pc == 0x08941BACu) goto L_08941BAC;
    return;
L_08941BAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08941BE0;
      }
      goto L_08941BBC;
    }
L_08941BBC:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08941BE0;
L_08941BE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08941C08;
      }
      goto L_08941BE8;
    }
L_08941BE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08941C08;
L_08941C08:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941C20;
      }
      goto L_08941C10;
    }
L_08941C10:
    ctx.gpr[31] = (0x08941C18u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 54u, 0x0893C40Cu>(ctx, &aot_mem) && ctx.pc == 0x08941C18u) goto L_08941C18;
    return;
L_08941C18:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08941C2C;
      }
      goto L_08941C20;
    }
L_08941C20:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08941C2C;
L_08941C2C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08941C88;
      }
      goto L_08941C40;
    }
L_08941C40:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31056)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941C58:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08941C88;
      }
      goto L_08941C60;
    }
L_08941C60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08941C88;
      }
      goto L_08941C70;
    }
L_08941C70:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08941C88;
      }
      goto L_08941C88;
    }
L_08941C88:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08941CA4;
      }
      goto L_08941C94;
    }
L_08941C94:
    ctx.gpr[31] = (0x08941C9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 391u, 0x0893A2B4u>(ctx, &aot_mem) && ctx.pc == 0x08941C9Cu) goto L_08941C9C;
    return;
L_08941C9C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08941CB0;
      }
      goto L_08941CA4;
    }
L_08941CA4:
    ctx.gpr[31] = (0x08941CACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 376u, 0x0893A078u>(ctx, &aot_mem) && ctx.pc == 0x08941CACu) goto L_08941CAC;
    return;
L_08941CAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    goto L_08941CB0;
L_08941CB0:
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08941CC4;
    }
    goto L_08941CC4;
L_08941CC4:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
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
L_08941CE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6720)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[19];
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11856));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    if (ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
        goto L_08941D6C;
    }
    goto L_08941D6C;
L_08941D6C:
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[4]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_08941D80;
    }
    goto L_08941D80;
L_08941D80:
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_fpu_condition((ctx.fpr[4] < ctx.fpr[3]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]));
        goto L_08941D94;
    }
    goto L_08941D94;
L_08941D94:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[3]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
        goto L_08941DAC;
    }
    goto L_08941DAC;
L_08941DAC:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
        goto L_08941DC0;
    }
    goto L_08941DC0;
L_08941DC0:
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_08941DD0;
    }
    goto L_08941DD0;
L_08941DD0:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
        goto L_08941DE8;
    }
    goto L_08941DE8;
L_08941DE8:
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_08941DFC;
    }
    goto L_08941DFC;
L_08941DFC:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[2]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
        goto L_08941E10;
    }
    goto L_08941E10;
L_08941E10:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
        goto L_08941E28;
    }
    goto L_08941E28;
L_08941E28:
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[2]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_08941E3C;
    }
    goto L_08941E3C;
L_08941E3C:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
        goto L_08941E4C;
    }
    goto L_08941E4C;
L_08941E4C:
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[2] + ctx.fpr[1];
    ctx.gpr[7] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[17] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6720)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08941F34u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08941B68;
L_08941F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6720)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-6720), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941F70:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(126)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089422A4;
      }
      goto L_08941F84;
    }
L_08941F84:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894229C;
      }
      goto L_08941F90;
    }
L_08941F90:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942294;
      }
      goto L_08941F9C;
    }
L_08941F9C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894228C;
      }
      goto L_08941FA8;
    }
L_08941FA8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942284;
      }
      goto L_08941FB4;
    }
L_08941FB4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(182)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894227C;
      }
      goto L_08941FC0;
    }
L_08941FC0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942274;
      }
      goto L_08941FCC;
    }
L_08941FCC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(186)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894226C;
      }
      goto L_08941FD8;
    }
L_08941FD8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942264;
      }
      goto L_08941FE4;
    }
L_08941FE4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(190)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894225C;
      }
      goto L_08941FF0;
    }
L_08941FF0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942254;
      }
      goto L_08941FFC;
    }
L_08941FFC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894224C;
      }
      goto L_08942008;
    }
L_08942008:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942244;
      }
      goto L_08942014;
    }
L_08942014:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(198)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894223C;
      }
      goto L_08942020;
    }
L_08942020:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942234;
      }
      goto L_0894202C;
    }
L_0894202C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894222C;
      }
      goto L_08942038;
    }
L_08942038:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(210)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942224;
      }
      goto L_08942044;
    }
L_08942044:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894221C;
      }
      goto L_08942050;
    }
L_08942050:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(130)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942214;
      }
      goto L_0894205C;
    }
L_0894205C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894220C;
      }
      goto L_08942068;
    }
L_08942068:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942204;
      }
      goto L_08942074;
    }
L_08942074:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089421FC;
      }
      goto L_08942080;
    }
L_08942080:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(138)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089421F4;
      }
      goto L_0894208C;
    }
L_0894208C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089421EC;
      }
      goto L_08942098;
    }
L_08942098:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(142)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089421E4;
      }
      goto L_089420A4;
    }
L_089420A4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089421DC;
      }
      goto L_089420B0;
    }
L_089420B0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(146)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089421D4;
      }
      goto L_089420BC;
    }
L_089420BC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089421CC;
      }
      goto L_089420C8;
    }
L_089420C8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(150)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089421C4;
      }
      goto L_089420D4;
    }
L_089420D4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089421BC;
      }
      goto L_089420E0;
    }
L_089420E0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089421B4;
      }
      goto L_089420EC;
    }
L_089420EC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089421AC;
      }
      goto L_089420F8;
    }
L_089420F8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089421A4;
      }
      goto L_08942104;
    }
L_08942104:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(162)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894219C;
      }
      goto L_08942110;
    }
L_08942110:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942194;
      }
      goto L_0894211C;
    }
L_0894211C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(166)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894218C;
      }
      goto L_08942128;
    }
L_08942128:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942184;
      }
      goto L_08942134;
    }
L_08942134:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894217C;
      }
      goto L_08942140;
    }
L_08942140:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08942174;
      }
      goto L_0894214C;
    }
L_0894214C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(174)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894216C;
      }
      goto L_08942158;
    }
L_08942158:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(562)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089422AC;
      }
      goto L_08942164;
    }
L_08942164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_0894216C;
    }
L_0894216C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_08942174;
    }
L_08942174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_0894217C;
    }
L_0894217C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_08942184;
    }
L_08942184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_0894218C;
    }
L_0894218C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_08942194;
    }
L_08942194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_0894219C;
    }
L_0894219C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_089421A4;
    }
L_089421A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_089421AC;
    }
L_089421AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_089421B4;
    }
L_089421B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_089421BC;
    }
L_089421BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_089421C4;
    }
L_089421C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_089421CC;
    }
L_089421CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_089421D4;
    }
L_089421D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_089421DC;
    }
L_089421DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_089421E4;
    }
L_089421E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_089421EC;
    }
L_089421EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_089421F4;
    }
L_089421F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_089421FC;
    }
L_089421FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_08942204;
    }
L_08942204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_0894220C;
    }
L_0894220C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_08942214;
    }
L_08942214:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_0894221C;
    }
L_0894221C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_08942224;
    }
L_08942224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_0894222C;
    }
L_0894222C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_08942234;
    }
L_08942234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_0894223C;
    }
L_0894223C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_08942244;
    }
L_08942244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_0894224C;
    }
L_0894224C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_08942254;
    }
L_08942254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_0894225C;
    }
L_0894225C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_08942264;
    }
L_08942264:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_0894226C;
    }
L_0894226C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_08942274;
    }
L_08942274:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_0894227C;
    }
L_0894227C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_08942284;
    }
L_08942284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_0894228C;
    }
L_0894228C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_08942294;
    }
L_08942294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_0894229C;
    }
L_0894229C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_089422A4;
    }
L_089422A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089422B0;
      }
      goto L_089422AC;
    }
L_089422AC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089422B0;
L_089422B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089422B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11856));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_089422DC;
L_089422DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089422F0;
      }
      goto L_089422E8;
    }
L_089422E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894240C;
      }
      goto L_089422F0;
    }
L_089422F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089422FCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 397u, 0x0893A310u>(ctx, &aot_mem) && ctx.pc == 0x089422FCu) goto L_089422FC;
    return;
L_089422FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942384;
      }
      goto L_08942308;
    }
L_08942308:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942354;
      }
      goto L_08942348;
    }
L_08942348:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08942354;
L_08942354:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942374;
      }
      goto L_08942360;
    }
L_08942360:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08942370u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 390u, 0x0893A1F8u>(ctx, &aot_mem) && ctx.pc == 0x08942370u) goto L_08942370;
    return;
L_08942370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08942374;
L_08942374:
    ctx.gpr[31] = (0x0894237Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0894237Cu) goto L_0894237C;
    return;
L_0894237C:
    ctx.gpr[31] = (0x08942384u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08942384u) goto L_08942384;
    return;
L_08942384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894240C;
      }
      goto L_08942390;
    }
L_08942390:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089423DC;
      }
      goto L_089423D0;
    }
L_089423D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089423DC;
L_089423DC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089423FC;
      }
      goto L_089423E8;
    }
L_089423E8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089423F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 390u, 0x0893A1F8u>(ctx, &aot_mem) && ctx.pc == 0x089423F8u) goto L_089423F8;
    return;
L_089423F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089423FC;
L_089423FC:
    ctx.gpr[31] = (0x08942404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08942404u) goto L_08942404;
    return;
L_08942404:
    ctx.gpr[31] = (0x0894240Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x0894240Cu) goto L_0894240C;
    return;
L_0894240C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_089422DC;
      }
      goto L_0894241C;
    }
L_0894241C:
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
L_08942434:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894249Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 509u, 0x08A0654Cu>(ctx, &aot_mem) && ctx.pc == 0x0894249Cu) goto L_0894249C;
    return;
L_0894249C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[24];
    ctx.gpr[31] = (0x089424C0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 485u, 0x08A05F10u>(ctx, &aot_mem) && ctx.pc == 0x089424C0u) goto L_089424C0;
    return;
L_089424C0:
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x089424D4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(558)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089424D4u) goto L_089424D4;
    return;
L_089424D4:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x089424E0u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x089424E0u) goto L_089424E0;
    return;
L_089424E0:
    ctx.gpr[4] = (16549u << 16u);
    ctx.gpr[18] = (65532u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08942520;
      }
      goto L_08942508;
    }
L_08942508:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(558)));
    ctx.gpr[31] = (0x0894251Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x0894251Cu) goto L_0894251C;
    return;
L_0894251C:
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    goto L_08942520;
L_08942520:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[22] / ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08942564u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08942564u) goto L_08942564;
    return;
L_08942564:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08942578u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08942578u) goto L_08942578;
    return;
L_08942578:
    ctx.gpr[31] = (0x08942580u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08942580u) goto L_08942580;
    return;
L_08942580:
    ctx.gpr[31] = (0x08942588u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08942588u) goto L_08942588;
    return;
L_08942588:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(560)));
    ctx.gpr[31] = (0x089425CCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089425CCu) goto L_089425CC;
    return;
L_089425CC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x089425D8u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x089425D8u) goto L_089425D8;
    return;
L_089425D8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089425FC;
      }
      goto L_089425E4;
    }
L_089425E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(560)));
    ctx.gpr[31] = (0x089425F8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x089425F8u) goto L_089425F8;
    return;
L_089425F8:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    goto L_089425FC;
L_089425FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (16564u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31457u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08942628u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 88u, 0x08938600u>(ctx, &aot_mem) && ctx.pc == 0x08942628u) goto L_08942628;
    return;
L_08942628:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[22] / ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08942684u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08942684u) goto L_08942684;
    return;
L_08942684:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[31] = (0x08942698u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08942698u) goto L_08942698;
    return;
L_08942698:
    ctx.gpr[31] = (0x089426A0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x089426A0u) goto L_089426A0;
    return;
L_089426A0:
    ctx.gpr[31] = (0x089426A8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x089426A8u) goto L_089426A8;
    return;
L_089426A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(562)));
    ctx.gpr[31] = (0x089426F0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089426F0u) goto L_089426F0;
    return;
L_089426F0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 496u);
    ctx.gpr[31] = (0x08942700u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08942700u) goto L_08942700;
    return;
L_08942700:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
        goto L_08942728;
    }
    goto L_0894270C;
L_0894270C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(562)));
    ctx.gpr[31] = (0x08942720u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x08942720u) goto L_08942720;
    return;
L_08942720:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    goto L_08942728;
L_08942728:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (49332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31457u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08942754u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 88u, 0x08938600u>(ctx, &aot_mem) && ctx.pc == 0x08942754u) goto L_08942754;
    return;
L_08942754:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[22] / ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x089427B0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x089427B0u) goto L_089427B0;
    return;
L_089427B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x089427C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x089427C4u) goto L_089427C4;
    return;
L_089427C4:
    ctx.gpr[31] = (0x089427CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x089427CCu) goto L_089427CC;
    return;
L_089427CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089427E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x089427E0u) goto L_089427E0;
    return;
L_089427E0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (65532u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08942820u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08942820u) goto L_08942820;
    return;
L_08942820:
    ctx.gpr[31] = (0x08942828u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08942828u) goto L_08942828;
    return;
L_08942828:
    ctx.gpr[31] = (0x08942830u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08942830u) goto L_08942830;
    return;
L_08942830:
    ctx.gpr[4] = (49216u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49248u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08942890u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 88u, 0x08938600u>(ctx, &aot_mem) && ctx.pc == 0x08942890u) goto L_08942890;
    return;
L_08942890:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089428A8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 88u, 0x08938600u>(ctx, &aot_mem) && ctx.pc == 0x089428A8u) goto L_089428A8;
    return;
L_089428A8:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089428C0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 88u, 0x08938600u>(ctx, &aot_mem) && ctx.pc == 0x089428C0u) goto L_089428C0;
    return;
L_089428C0:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089428D4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089428D4u) goto L_089428D4;
    return;
L_089428D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089428E0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089428E0u) goto L_089428E0;
    return;
L_089428E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089428ECu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089428ECu) goto L_089428EC;
    return;
L_089428EC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(30344));
    ctx.gpr[31] = (0x089428FCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089428FCu) goto L_089428FC;
    return;
L_089428FC:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0894290Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0894290Cu) goto L_0894290C;
    return;
L_0894290C:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[20]);
    ctx.gpr[31] = (0x08942924u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08942924u) goto L_08942924;
    return;
L_08942924:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[20]);
    ctx.gpr[31] = (0x0894293Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0894293Cu) goto L_0894293C;
    return;
L_0894293C:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[20]);
    ctx.gpr[31] = (0x08942954u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08942954u) goto L_08942954;
    return;
L_08942954:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[20]);
    ctx.gpr[31] = (0x0894296Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0894296Cu) goto L_0894296C;
    return;
L_0894296C:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[20]);
    ctx.gpr[31] = (0x08942984u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08942984u) goto L_08942984;
    return;
L_08942984:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[20]);
    ctx.gpr[31] = (0x0894299Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0894299Cu) goto L_0894299C;
    return;
L_0894299C:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089429ACu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x089429ACu) goto L_089429AC;
    return;
L_089429AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.gpr[31] = (0x08942A1Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 87u, 0x089385D4u>(ctx, &aot_mem) && ctx.pc == 0x08942A1Cu) goto L_08942A1C;
    return;
L_08942A1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[0];
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08942A54u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08941CE4;
L_08942A54:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[31] = (0x08942A68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 24u, 0x0893C1D0u>(ctx, &aot_mem) && ctx.pc == 0x08942A68u) goto L_08942A68;
    return;
L_08942A68:
    ctx.gpr[4] = (ctx.gpr[16] << 8u);
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942AC0;
      }
      goto L_08942AAC;
    }
L_08942AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942AC0;
      }
      goto L_08942AB8;
    }
L_08942AB8:
    ctx.gpr[31] = (0x08942AC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08942AC0u) goto L_08942AC0;
    return;
L_08942AC0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942B08:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30284)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30288)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30260)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2228u << 16u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[3] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-30280), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2228u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-30272), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-30276), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30268), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-30256), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942B9C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942BB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08942C28;
      }
      goto L_08942BD4;
    }
L_08942BD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08942BE8;
      }
      goto L_08942BE0;
    }
L_08942BE0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08942BE8;
L_08942BE8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942BF8;
      }
      goto L_08942BF0;
    }
L_08942BF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08942BF8;
L_08942BF8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08942C18;
    }
    goto L_08942C0C;
L_08942C0C:
    ctx.gpr[31] = (0x08942C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 162u, 0x088E8D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08942C14u) goto L_08942C14;
    return;
L_08942C14:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08942C18;
L_08942C18:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942C28;
      }
      goto L_08942C20;
    }
L_08942C20:
    ctx.gpr[31] = (0x08942C28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08942C28u) goto L_08942C28;
    return;
L_08942C28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942C3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08942C64;
      }
      goto L_08942C5C;
    }
L_08942C5C:
    ctx.gpr[31] = (0x08942C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 162u, 0x088E8D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08942C64u) goto L_08942C64;
    return;
L_08942C64:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08942C74u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 654u, 0x08AA3104u>(ctx, &aot_mem) && ctx.pc == 0x08942C74u) goto L_08942C74;
    return;
L_08942C74:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942C90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08942CF0;
      }
      goto L_08942CCC;
    }
L_08942CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[17];
    ctx.gpr[31] = (0x08942CDCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942CDCu) goto L_08942CDC;
    return;
L_08942CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08942CCC;
      }
      goto L_08942CF0;
    }
L_08942CF0:
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
L_08942D10:
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
L_08942D38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08942D48u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08942D48u) goto L_08942D48;
    return;
L_08942D48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942D54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08942DE4;
      }
      goto L_08942D70;
    }
L_08942D70:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18148));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x08942D84u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 227u, 0x08ACCE60u>(ctx, &aot_mem) && ctx.pc == 0x08942D84u) goto L_08942D84;
    return;
L_08942D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942DC4;
      }
      goto L_08942D90;
    }
L_08942D90:
    ctx.gpr[31] = (0x08942D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08942D98u) goto L_08942D98;
    return;
L_08942D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942DC0;
      }
      goto L_08942DA4;
    }
L_08942DA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08942DC0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942DC0u) goto L_08942DC0;
    return;
L_08942DC0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3232), 0u);
    goto L_08942DC4;
L_08942DC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08942DD0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 358u, 0x089A6320u>(ctx, &aot_mem) && ctx.pc == 0x08942DD0u) goto L_08942DD0;
    return;
L_08942DD0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942DE4;
      }
      goto L_08942DDC;
    }
L_08942DDC:
    ctx.gpr[31] = (0x08942DE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 242u, 0x0899D9B8u>(ctx, &aot_mem) && ctx.pc == 0x08942DE4u) goto L_08942DE4;
    return;
L_08942DE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942DF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08942E1Cu);
    ctx.gpr[4] = (0u | 3248u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x08942E1Cu) goto L_08942E1C;
    return;
L_08942E1C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
      if (branch_taken) {
          goto L_08942E38;
      }
      goto L_08942E28;
    }
L_08942E28:
    ctx.gpr[31] = (0x08942E30u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 478u, 0x08946198u>(ctx, &aot_mem) && ctx.pc == 0x08942E30u) goto L_08942E30;
    return;
L_08942E30:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    goto L_08942E38;
L_08942E38:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08942E7Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08942E7Cu) goto L_08942E7C;
    return;
L_08942E7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08942E90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08942E90u) goto L_08942E90;
    return;
L_08942E90:
    ctx.gpr[31] = (0x08942E98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08942E98u) goto L_08942E98;
    return;
L_08942E98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08942EBC;
    }
    goto L_08942EBC;
L_08942EBC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
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
L_08942EE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08942F10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08942F10u) goto L_08942F10;
    return;
L_08942F10:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942F1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08942F4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08942F4Cu) goto L_08942F4C;
    return;
L_08942F4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942F58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (50298u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    goto L_08942FAC;
L_08942FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08942FB8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08942FB8u) goto L_08942FB8;
    return;
L_08942FB8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943054;
      }
      goto L_08942FC4;
    }
L_08942FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x08942FD0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 476u, 0x08A8AE48u>(ctx, &aot_mem) && ctx.pc == 0x08942FD0u) goto L_08942FD0;
    return;
L_08942FD0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0894300C;
      }
      goto L_08942FEC;
    }
L_08942FEC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08942FFC;
      }
      goto L_08942FF4;
    }
L_08942FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0894301C;
      }
      goto L_08942FFC;
    }
L_08942FFC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08942FEC;
      }
      goto L_0894300C;
    }
L_0894300C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0894301C;
      }
      goto L_08943014;
    }
L_08943014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0894301C;
      }
      goto L_0894301C;
    }
L_0894301C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943054;
      }
      goto L_08943024;
    }
L_08943024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x08943034u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08943034u) goto L_08943034;
    return;
L_08943034:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08943054;
L_08943054:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08942FAC;
      }
      goto L_08943064;
    }
L_08943064:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
L_08943084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3229)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089430C8;
      }
      goto L_089430B0;
    }
L_089430B0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089430D0;
      }
      goto L_089430C0;
    }
L_089430C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894326C;
      }
      goto L_089430C8;
    }
L_089430C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943320;
      }
      goto L_089430D0;
    }
L_089430D0:
    ctx.gpr[31] = (0x089430D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 96u, 0x08A983A8u>(ctx, &aot_mem) && ctx.pc == 0x089430D8u) goto L_089430D8;
    return;
L_089430D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08943264;
      }
      goto L_089430E8;
    }
L_089430E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08943108u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08943108u) goto L_08943108;
    return;
L_08943108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943264;
      }
      goto L_08943120;
    }
L_08943120:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08943264;
      }
      goto L_08943128;
    }
L_08943128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (0u | 45u);
      if (branch_taken) {
          goto L_08943264;
      }
      goto L_08943138;
    }
L_08943138:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08943264;
      }
      goto L_08943140;
    }
L_08943140:
    ctx.gpr[31] = (0x08943148u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 859u, 0x08A97538u>(ctx, &aot_mem) && ctx.pc == 0x08943148u) goto L_08943148;
    return;
L_08943148:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08943158u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 868u, 0x08A9759Cu>(ctx, &aot_mem) && ctx.pc == 0x08943158u) goto L_08943158;
    return;
L_08943158:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 2u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08943214;
      }
      goto L_08943170;
    }
L_08943170:
    ctx.gpr[31] = (0x08943178u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 97u, 0x088D48F8u>(ctx, &aot_mem) && ctx.pc == 0x08943178u) goto L_08943178;
    return;
L_08943178:
    ctx.gpr[31] = (0x08943180u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x08943180u) goto L_08943180;
    return;
L_08943180:
    ctx.gpr[31] = (0x08943188u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x08943188u) goto L_08943188;
    return;
L_08943188:
    ctx.gpr[31] = (0x08943190u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 53u, 0x089A03F8u>(ctx, &aot_mem) && ctx.pc == 0x08943190u) goto L_08943190;
    return;
L_08943190:
    ctx.gpr[31] = (0x08943198u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x08943198u) goto L_08943198;
    return;
L_08943198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089431D0;
      }
      goto L_089431A8;
    }
L_089431A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089431C8;
      }
      goto L_089431B4;
    }
L_089431B4:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089431C8;
    }
    goto L_089431BC;
L_089431BC:
    ctx.gpr[31] = (0x089431C4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089431C4u) goto L_089431C4;
    return;
L_089431C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089431C8;
L_089431C8:
    ctx.gpr[31] = (0x089431D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089431D0u) goto L_089431D0;
    return;
L_089431D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089431ECu);
    ctx.gpr[6] = (0u | 147u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089431ECu) goto L_089431EC;
    return;
L_089431EC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08943204u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x08943204u) goto L_08943204;
    return;
L_08943204:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08943264;
      }
      goto L_08943214;
    }
L_08943214:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2950)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0894325C;
      }
      goto L_08943220;
    }
L_08943220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2968)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894325C;
      }
      goto L_0894322C;
    }
L_0894322C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894323Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 60u, 0x089B02E4u>(ctx, &aot_mem) && ctx.pc == 0x0894323Cu) goto L_0894323C;
    return;
L_0894323C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2950), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2968), 0u);
    ctx.gpr[31] = (0x0894324Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 97u, 0x088D48F8u>(ctx, &aot_mem) && ctx.pc == 0x0894324Cu) goto L_0894324C;
    return;
L_0894324C:
    ctx.gpr[31] = (0x08943254u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x08943254u) goto L_08943254;
    return;
L_08943254:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943264;
      }
      goto L_0894325C;
    }
L_0894325C:
    ctx.gpr[31] = (0x08943264u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 93u, 0x089A46D4u>(ctx, &aot_mem) && ctx.pc == 0x08943264u) goto L_08943264;
    return;
L_08943264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943320;
      }
      goto L_0894326C;
    }
L_0894326C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943320;
      }
      goto L_0894327C;
    }
L_0894327C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0894329Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0894329Cu) goto L_0894329C;
    return;
L_0894329C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943320;
      }
      goto L_089432B4;
    }
L_089432B4:
    ctx.gpr[31] = (0x089432BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 78u, 0x08A98308u>(ctx, &aot_mem) && ctx.pc == 0x089432BCu) goto L_089432BC;
    return;
L_089432BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943320;
      }
      goto L_089432C4;
    }
L_089432C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08943320;
      }
      goto L_089432D4;
    }
L_089432D4:
    ctx.gpr[31] = (0x089432DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 97u, 0x088D48F8u>(ctx, &aot_mem) && ctx.pc == 0x089432DCu) goto L_089432DC;
    return;
L_089432DC:
    ctx.gpr[31] = (0x089432E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x089432E4u) goto L_089432E4;
    return;
L_089432E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2950)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08943318;
      }
      goto L_089432F0;
    }
L_089432F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2968)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943318;
      }
      goto L_089432FC;
    }
L_089432FC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894330Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 60u, 0x089B02E4u>(ctx, &aot_mem) && ctx.pc == 0x0894330Cu) goto L_0894330C;
    return;
L_0894330C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2950), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2968), 0u);
      if (branch_taken) {
          goto L_08943320;
      }
      goto L_08943318;
    }
L_08943318:
    ctx.gpr[31] = (0x08943320u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 93u, 0x089A46D4u>(ctx, &aot_mem) && ctx.pc == 0x08943320u) goto L_08943320;
    return;
L_08943320:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943340:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2936)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2940)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08943374;
      }
      goto L_08943358;
    }
L_08943358:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08943374;
L_08943374:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894337C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089433A0;
      }
      goto L_0894338C;
    }
L_0894338C:
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2940), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08943470;
      }
      goto L_089433A0;
    }
L_089433A0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2936)));
    ctx.gpr[5] = (49942u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2944)));
      if (branch_taken) {
          goto L_08943424;
      }
      goto L_089433BC;
    }
L_089433BC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(356)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943424;
      }
      goto L_089433F0;
    }
L_089433F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2995)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08943424;
      }
      goto L_089433FC;
    }
L_089433FC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08943424;
L_08943424:
    ctx.gpr[5] = (17402u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08943470;
      }
      goto L_0894343C;
    }
L_0894343C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2940)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2944), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08943470;
      }
      goto L_08943460;
    }
L_08943460:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2940), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08943470;
L_08943470:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943478:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089434A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 859u, 0x08A97538u>(ctx, &aot_mem) && ctx.pc == 0x089434A4u) goto L_089434A4;
    return;
L_089434A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089434B4u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 868u, 0x08A9759Cu>(ctx, &aot_mem) && ctx.pc == 0x089434B4u) goto L_089434B4;
    return;
L_089434B4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089434D4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 234u, 0x08A1D254u>(ctx, &aot_mem) && ctx.pc == 0x089434D4u) goto L_089434D4;
    return;
L_089434D4:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_08943580;
      }
      goto L_08943500;
    }
L_08943500:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08943548;
      }
      goto L_0894353C;
    }
L_0894353C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1754), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0894354C;
      }
      goto L_08943548;
    }
L_08943548:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1754), static_cast<std::uint8_t>(0u));
    goto L_0894354C;
L_0894354C:
    ctx.gpr[31] = (0x08943554u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 116u, 0x08A984C8u>(ctx, &aot_mem) && ctx.pc == 0x08943554u) goto L_08943554;
    return;
L_08943554:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (17008u << 16u);
      if (branch_taken) {
          goto L_08943580;
      }
      goto L_0894355C;
    }
L_0894355C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08943580;
      }
      goto L_08943570;
    }
L_08943570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08943580;
L_08943580:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089435A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089435A0u) goto L_089435A0;
    return;
L_089435A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943604;
      }
      goto L_089435B8;
    }
L_089435B8:
    ctx.gpr[31] = (0x089435C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 78u, 0x08A98308u>(ctx, &aot_mem) && ctx.pc == 0x089435C0u) goto L_089435C0;
    return;
L_089435C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943604;
      }
      goto L_089435C8;
    }
L_089435C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2950)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089435FC;
      }
      goto L_089435D4;
    }
L_089435D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2968)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089435FC;
      }
      goto L_089435E0;
    }
L_089435E0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089435F0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 60u, 0x089B02E4u>(ctx, &aot_mem) && ctx.pc == 0x089435F0u) goto L_089435F0;
    return;
L_089435F0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2950), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2968), 0u);
      if (branch_taken) {
          goto L_08943604;
      }
      goto L_089435FC;
    }
L_089435FC:
    ctx.gpr[31] = (0x08943604u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 93u, 0x089A46D4u>(ctx, &aot_mem) && ctx.pc == 0x08943604u) goto L_08943604;
    return;
L_08943604:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08943648u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 646u, 0x0894B0C0u>(ctx, &aot_mem) && ctx.pc == 0x08943648u) goto L_08943648;
    return;
L_08943648:
    ctx.gpr[4] = (49942u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2936)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 52429u);
    ctx.gpr[19] = (2232u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[31] = (0x089436A4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 77u, 0x08A98300u>(ctx, &aot_mem) && ctx.pc == 0x089436A4u) goto L_089436A4;
    return;
L_089436A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_089436F0;
      }
      goto L_089436AC;
    }
L_089436AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089436F0;
      }
      goto L_089436BC;
    }
L_089436BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089436F0;
      }
      goto L_089436CC;
    }
L_089436CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u | 60000u);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089436E8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 656u, 0x088875FCu>(ctx, &aot_mem) && ctx.pc == 0x089436E8u) goto L_089436E8;
    return;
L_089436E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894373C;
      }
      goto L_089436F0;
    }
L_089436F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894373C;
      }
      goto L_08943700;
    }
L_08943700:
    ctx.gpr[31] = (0x08943708u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 77u, 0x08A98300u>(ctx, &aot_mem) && ctx.pc == 0x08943708u) goto L_08943708;
    return;
L_08943708:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943720;
      }
      goto L_08943710;
    }
L_08943710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894373C;
      }
      goto L_08943720;
    }
L_08943720:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894372Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 683u, 0x088877D0u>(ctx, &aot_mem) && ctx.pc == 0x0894372Cu) goto L_0894372C;
    return;
L_0894372C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_0894373C;
L_0894373C:
    ctx.gpr[31] = (0x08943744u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 59u, 0x08A98240u>(ctx, &aot_mem) && ctx.pc == 0x08943744u) goto L_08943744;
    return;
L_08943744:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943768;
      }
      goto L_0894374C;
    }
L_0894374C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943768;
      }
      goto L_08943758;
    }
L_08943758:
    ctx.gpr[31] = (0x08943760u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08943760u) goto L_08943760;
    return;
L_08943760:
    ctx.gpr[31] = (0x08943768u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 327u, 0x088EE310u>(ctx, &aot_mem) && ctx.pc == 0x08943768u) goto L_08943768;
    return;
L_08943768:
    ctx.gpr[31] = (0x08943770u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1101u, 0x08A97F90u>(ctx, &aot_mem) && ctx.pc == 0x08943770u) goto L_08943770;
    return;
L_08943770:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08943890;
    }
    goto L_08943778;
L_08943778:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1444)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08943890;
    }
    goto L_089437A0;
L_089437A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1432)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08943820;
      }
      goto L_089437C4;
    }
L_089437C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089437D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089437D8u) goto L_089437D8;
    return;
L_089437D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089437F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089437F8u) goto L_089437F8;
    return;
L_089437F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1444), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089439A4;
      }
      goto L_08943820;
    }
L_08943820:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08943854u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08942D10;
L_08943854:
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08943880u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 186u, 0x088550F0u>(ctx, &aot_mem) && ctx.pc == 0x08943880u) goto L_08943880;
    return;
L_08943880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3212), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089439A4;
      }
      goto L_08943890;
    }
L_08943890:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1444)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089439A4;
      }
      goto L_089438B4;
    }
L_089438B4:
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
        goto L_08943900;
    }
    goto L_089438E8;
L_089438E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894391C;
      }
      goto L_08943900;
    }
L_08943900:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0894391C;
L_0894391C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1444)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089439A4;
      }
      goto L_08943948;
    }
L_08943948:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1432)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089439A4;
      }
      goto L_0894396C;
    }
L_0894396C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 57u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089439A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089439A4u) goto L_089439A4;
    return;
L_089439A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089439C8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 327u, 0x08855A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089439C8u) goto L_089439C8;
    return;
L_089439C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089439E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x08943A28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 859u, 0x08A97538u>(ctx, &aot_mem) && ctx.pc == 0x08943A28u) goto L_08943A28;
    return;
L_08943A28:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08943A38u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 868u, 0x08A9759Cu>(ctx, &aot_mem) && ctx.pc == 0x08943A38u) goto L_08943A38;
    return;
L_08943A38:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[20] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08943ACC;
      }
      goto L_08943A74;
    }
L_08943A74:
    ctx.gpr[31] = (0x08943A7Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08943A7Cu) goto L_08943A7C;
    return;
L_08943A7C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08943AC0;
      }
      goto L_08943AB0;
    }
L_08943AB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2932)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08943AC4;
      }
      goto L_08943AC0;
    }
L_08943AC0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08943AC4;
L_08943AC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943AD0;
      }
      goto L_08943ACC;
    }
L_08943ACC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08943AD0;
L_08943AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08943C88;
    }
    goto L_08943AE0;
L_08943AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943C70;
      }
      goto L_08943AF0;
    }
L_08943AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08943C88;
    }
    goto L_08943B08;
L_08943B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08943C88;
    }
    goto L_08943B1C;
L_08943B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08943B48;
      }
      goto L_08943B2C;
    }
L_08943B2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08943C88;
    }
    goto L_08943B48;
L_08943B48:
    ctx.gpr[31] = (0x08943B50u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(292)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08943B50u) goto L_08943B50;
    return;
L_08943B50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08943B64u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08943B64u) goto L_08943B64;
    return;
L_08943B64:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29884)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29888)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08943B7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08943B7Cu) goto L_08943B7C;
    return;
L_08943B7C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08943B90u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08943B90u) goto L_08943B90;
    return;
L_08943B90:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08943C88;
    }
    goto L_08943B98;
L_08943B98:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08943C88;
    }
    goto L_08943BC8;
L_08943BC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (15502u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64012u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49216u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08943C68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08943C68u) goto L_08943C68;
    return;
L_08943C68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_08943C88;
      }
      goto L_08943C70;
    }
L_08943C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08943C88;
    }
    goto L_08943C80;
L_08943C80:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    goto L_08943C88;
L_08943C88:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08943CA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08943CA4u) goto L_08943CA4;
    return;
L_08943CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943CD4;
      }
      goto L_08943CBC;
    }
L_08943CBC:
    ctx.gpr[31] = (0x08943CC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 116u, 0x08A984C8u>(ctx, &aot_mem) && ctx.pc == 0x08943CC4u) goto L_08943CC4;
    return;
L_08943CC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943CD4;
      }
      goto L_08943CCC;
    }
L_08943CCC:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_08943CD4;
L_08943CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08943CEC;
      }
      goto L_08943CE4;
    }
L_08943CE4:
    ctx.gpr[31] = (0x08943CECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08943CECu) goto L_08943CEC;
    return;
L_08943CEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08943CF8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08943084;
L_08943CF8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943D20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08943E28;
      }
      goto L_08943D5C;
    }
L_08943D5C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943E18;
      }
      goto L_08943D70;
    }
L_08943D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 211u);
      if (branch_taken) {
          goto L_08943E18;
      }
      goto L_08943D80;
    }
L_08943D80:
    ctx.gpr[5] = (0u | 27u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 212u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 213u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 214u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 148u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-29912)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08943DECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 643u, 0x08A96C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08943DECu) goto L_08943DEC;
    return;
L_08943DEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08943E30;
      }
      goto L_08943E10;
    }
L_08943E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943E34;
      }
      goto L_08943E18;
    }
L_08943E18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 6u, 0x0894402Cu>(ctx, &aot_mem); return;
      }
      goto L_08943E28;
    }
L_08943E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 6u, 0x0894402Cu>(ctx, &aot_mem); return;
      }
      goto L_08943E30;
    }
L_08943E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08943E34;
L_08943E34:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 30001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943FB0;
      }
      goto L_08943E40;
    }
L_08943E40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08943E64;
      }
      goto L_08943E48;
    }
L_08943E48:
    ctx.gpr[6] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 13u);
      if (branch_taken) {
          goto L_08943E64;
      }
      goto L_08943E54;
    }
L_08943E54:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08943E64;
      }
      goto L_08943E5C;
    }
L_08943E5C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08943FB0;
      }
      goto L_08943E64;
    }
L_08943E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-29912)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08943E74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08943E74u) goto L_08943E74;
    return;
L_08943E74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 6u, 0x0894402Cu>(ctx, &aot_mem); return;
      }
      goto L_08943E80;
    }
L_08943E80:
    ctx.gpr[31] = (0x08943E88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 339u, 0x089722CCu>(ctx, &aot_mem) && ctx.pc == 0x08943E88u) goto L_08943E88;
    return;
L_08943E88:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (0u | 36u);
      if (branch_taken) {
          goto L_08943EEC;
      }
      goto L_08943E94;
    }
L_08943E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7792)));
    goto L_08943E98;
L_08943E98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943ED8;
      }
      goto L_08943EBC;
    }
L_08943EBC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943ED8;
      }
      goto L_08943ED0;
    }
L_08943ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08943EEC;
      }
      goto L_08943ED8;
    }
L_08943ED8:
    ctx.gpr[31] = (0x08943EE0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 342u, 0x088658A8u>(ctx, &aot_mem) && ctx.pc == 0x08943EE0u) goto L_08943EE0;
    return;
L_08943EE0:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7792)));
        goto L_08943E98;
    }
    goto L_08943EEC;
L_08943EEC:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 6u, 0x0894402Cu>(ctx, &aot_mem); return;
      }
      goto L_08943EF4;
    }
L_08943EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 6u, 0x0894402Cu>(ctx, &aot_mem); return;
      }
      goto L_08943F04;
    }
L_08943F04:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 6u, 0x0894402Cu>(ctx, &aot_mem); return;
      }
      goto L_08943F0C;
    }
L_08943F0C:
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-29880)));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 6u, 0x0894402Cu>(ctx, &aot_mem); return;
      }
      goto L_08943F24;
    }
L_08943F24:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29868)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29872)));
    ctx.gpr[22] = (2228u << 16u);
    goto L_08943F34;
L_08943F34:
    ctx.gpr[31] = (0x08943F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08943F3Cu) goto L_08943F3C;
    return;
L_08943F3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08943F50u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08943F50u) goto L_08943F50;
    return;
L_08943F50:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-29876)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
      if (branch_taken) {
          goto L_08943F34;
      }
      goto L_08943F70;
    }
L_08943F70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[31] = (0x08943F98u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x08943F98u) goto L_08943F98;
    return;
L_08943F98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-29880), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-29876), ctx.gpr[19]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 6u, 0x0894402Cu>(ctx, &aot_mem); return;
      }
      goto L_08943FB0;
    }
L_08943FB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 5u, 0x08944024u>(ctx, &aot_mem); return;
      }
      goto L_08943FBC;
    }
L_08943FBC:
    ctx.gpr[31] = (0x08943FC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 339u, 0x089722CCu>(ctx, &aot_mem) && ctx.pc == 0x08943FC4u) goto L_08943FC4;
    return;
L_08943FC4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (49408u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 2u, 0x08944008u>(ctx, &aot_mem); return;
      }
      goto L_08943FD0;
    }
L_08943FD0:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08943FD4;
L_08943FD4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943FF4;
      }
      goto L_08943FEC;
    }
L_08943FEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[21] = (0u | 1u);
    goto L_08943FF4;
L_08943FF4:
    ctx.gpr[31] = (0x08943FFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 342u, 0x088658A8u>(ctx, &aot_mem) && ctx.pc == 0x08943FFCu) goto L_08943FFC;
    return;
L_08943FFC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08944000u; return;
}

void recomp_unit_0079(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0079_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_79(Runtime &runtime) {
    runtime.register_generated_unit(79u, 0x08940000u, 16384u, &recomp_unit_0079, &recomp_unit_0079_entry);
    runtime.register_function(0x08940000u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894000Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940038u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940040u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940048u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894005Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940074u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940118u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940120u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894012Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894013Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894014Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940154u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940178u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894017Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940208u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940210u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940218u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940224u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940254u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940270u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940318u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940330u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940340u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940364u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940370u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089403B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089403BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940414u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940420u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894042Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940434u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940438u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940444u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940454u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940480u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940488u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894050Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894051Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940528u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940530u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940558u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894057Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940584u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089405C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089405DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940604u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894060Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940624u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894062Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940644u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894064Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940664u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894066Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940684u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894068Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940718u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940720u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940730u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940738u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940740u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940748u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940750u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940758u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940760u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940768u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940790u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894080Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940818u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894082Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940838u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940840u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940854u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940860u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940868u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940870u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940878u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940880u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940888u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940890u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940898u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940904u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940910u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940930u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940944u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940964u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940970u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894097Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894099Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940ABCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940ED0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941000u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941008u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941014u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941030u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941044u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894104Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941054u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894105Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941064u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894106Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941078u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941084u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941090u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941114u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941124u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941130u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894113Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941144u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941148u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941154u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941164u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941178u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941188u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941190u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941198u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941200u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941224u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941238u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941260u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941268u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941270u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941280u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941288u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941290u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941298u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941304u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941324u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894135Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941368u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941378u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941380u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941390u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941398u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941410u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941430u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941434u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894143Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941444u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894144Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941458u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941464u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894146Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941478u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894148Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941500u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941514u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894153Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941544u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894154Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894155Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941564u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894156Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941574u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894157Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941584u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894158Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941598u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941608u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941618u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941624u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941644u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941658u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941678u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941684u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941694u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894169Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941704u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894172Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941734u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941770u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941828u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894184Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894186Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894188Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894189Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941910u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941920u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941930u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941940u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941954u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941964u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941970u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941978u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941990u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941ACCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941AE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941AF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F90u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FD8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942008u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942014u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942020u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894202Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942038u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942044u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942050u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894205Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942068u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942074u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942080u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894208Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942098u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942104u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942110u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894211Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942128u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942134u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942140u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894214Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942158u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942164u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894216Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942174u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894217Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942184u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894218Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942194u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894219Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942204u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894220Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942214u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894221Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942224u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894222Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942234u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894223Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942244u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894224Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942254u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894225Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942264u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894226Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942274u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894227Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942284u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894228Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942294u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894229Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942308u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942348u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942354u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942360u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942370u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942374u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894237Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942384u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942390u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942404u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894240Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894241Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942434u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894249Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942508u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894251Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942520u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942564u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942578u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942580u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942588u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942628u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942684u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942698u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089426A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089426A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089426F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942700u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894270Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942720u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942728u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942754u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089427B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089427C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089427CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089427E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942820u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942828u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942830u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942890u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894290Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942924u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894293Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942954u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894296Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942984u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894299Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089429ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942AACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942AB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942AC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942BB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942BD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942BE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942BE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942BF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942BF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C90u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D90u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E90u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942EBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942EE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894300Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943014u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894301Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943024u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943034u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943054u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943064u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943084u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943108u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943120u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943128u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943138u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943140u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943148u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943158u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943170u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943178u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943180u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943188u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943190u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943198u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943204u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943214u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943220u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894322Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894323Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894324Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943254u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894325Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943264u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894326Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894327Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894329Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894330Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943318u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943320u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943340u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943358u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943374u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894337Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894338Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943424u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894343Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943460u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943470u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943478u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943500u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894353Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943548u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894354Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943554u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894355Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943570u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943580u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943604u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943624u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943648u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943700u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943708u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943710u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943720u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894372Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894373Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943744u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894374Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943758u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943760u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943768u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943770u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943778u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943820u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943854u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943880u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943890u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089438B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089438E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943900u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894391Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943948u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894396Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089439A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089439C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089439E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943AB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943AC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943AC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943ACCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943AD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943AE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943AF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B90u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943BC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943DECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943ED0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943ED8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FFCu, &recomp_unit_0079, "recomp_unit_0079");
}
} // namespace psprecomp
