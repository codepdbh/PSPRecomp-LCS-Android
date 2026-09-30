#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0115[4093] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 10, 0, 11, 0,
    12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 27, 0,
    0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34,
    0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 45, 0, 46,
    0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 56, 0,
    0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 63, 0, 64, 0,
    0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 73, 0, 74, 0, 75,
    0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0,
    86, 0, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 91, 92, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0,
    98, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0,
    112, 0, 113, 0, 114, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118,
    0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 125, 126, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0,
    0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 141, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 149, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0,
    0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0,
    0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 176, 0, 0, 0, 177, 0, 178, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0,
    0, 0, 198, 0, 0, 0, 199, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 205,
    0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0,
    214, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 240,
    241, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 254, 0, 255, 0, 0, 256, 0, 257, 0,
    258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269,
    0, 0, 0, 0, 270, 271, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279,
    0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 284, 0, 285, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 294, 0, 0,
    0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 307, 0, 0, 308,
    0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 0, 317, 318, 0, 0, 319, 0, 0, 0,
    0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 325,
    0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 332, 0, 0, 333, 0, 334, 0, 0, 335, 0, 336, 0, 0, 337, 0, 338, 0, 339,
    0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 345,
    0, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    357, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 364, 0,
    0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0,
    0, 372, 0, 0, 373, 0, 0, 374, 0, 375, 0, 0, 376, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 388,
    0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 394,
    0, 0, 395, 0, 396, 0, 397, 0, 398, 0, 0, 0, 0, 399, 0, 400, 0, 0, 401, 0, 402, 0, 0, 403, 0, 404, 0, 0, 405, 0, 406, 0,
    407, 0, 0, 408, 0, 409, 0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 419, 0, 0, 0, 0, 420, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0,
    0, 431, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0, 439, 0, 0, 0, 440, 0,
    0, 441, 0, 0, 442, 0, 443, 0, 444, 0, 445, 0, 0, 446, 0, 0, 447, 0, 448, 0, 0, 449, 0, 450, 0, 0, 451, 0, 0, 452, 0, 453,
    0, 454, 0, 455, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0,
    0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0,
    0, 0, 465, 466, 0, 0, 0, 467, 0, 468, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0,
    0, 473, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 477, 0, 478, 0, 0, 479, 0, 480, 0, 0, 0, 0, 481, 0, 482, 0, 483,
    0, 0, 0, 484, 0, 0, 485, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0,
    0, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 494, 495, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 498,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 501, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0,
    0, 0, 504, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0,
    0, 0, 0, 0, 0, 518, 0, 519, 0, 520, 0, 0, 0, 521, 0, 0, 522, 0, 523, 524, 0, 525, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 530, 531, 0, 532, 0, 533, 534, 0, 0, 0, 0, 0, 0, 535, 0,
    536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0,
    0, 0, 0, 541, 0, 0, 542, 0, 543, 0, 544, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0,
    549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 553, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0,
    561, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 564, 565, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 568, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 571, 572, 0, 0, 573, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 0, 577, 578, 0,
    0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 582, 0, 583, 0, 584, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0,
    0, 587, 588, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 594, 0, 0,
    0, 0, 595, 0, 0, 596, 0, 0, 0, 597, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600,
    0, 0, 601, 0, 0, 602, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0,
    0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 612, 0, 613, 614, 0, 0, 615, 0, 0, 0,
    616, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0,
    0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0,
    631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 640, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 650, 0, 651, 0, 652, 0, 0,
    0, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 655, 0, 0, 0, 656, 0, 657, 0, 0, 658, 0, 659, 0, 0, 660, 661, 0, 662, 0, 0, 0,
    0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 677, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 703, 0, 0, 704, 0,
    0, 0, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 719,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 724, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 730, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736,
    0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    755, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758,
    0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0,
    0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770,
};
void recomp_unit_0115_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089D0000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0115[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D0000;
    case 2u: goto L_089D000C;
    case 3u: goto L_089D0018;
    case 4u: goto L_089D0028;
    case 5u: goto L_089D0038;
    case 6u: goto L_089D0040;
    case 7u: goto L_089D0050;
    case 8u: goto L_089D0060;
    case 9u: goto L_089D0068;
    case 10u: goto L_089D0070;
    case 11u: goto L_089D0078;
    case 12u: goto L_089D0080;
    case 13u: goto L_089D008C;
    case 14u: goto L_089D009C;
    case 15u: goto L_089D00B4;
    case 16u: goto L_089D00C4;
    case 17u: goto L_089D00D0;
    case 18u: goto L_089D00D8;
    case 19u: goto L_089D00FC;
    case 20u: goto L_089D0128;
    case 21u: goto L_089D0134;
    case 22u: goto L_089D0144;
    case 23u: goto L_089D014C;
    case 24u: goto L_089D0154;
    case 25u: goto L_089D0164;
    case 26u: goto L_089D016C;
    case 27u: goto L_089D0178;
    case 28u: goto L_089D0184;
    case 29u: goto L_089D0198;
    case 30u: goto L_089D01A4;
    case 31u: goto L_089D01AC;
    case 32u: goto L_089D01C4;
    case 33u: goto L_089D01EC;
    case 34u: goto L_089D01FC;
    case 35u: goto L_089D0208;
    case 36u: goto L_089D0210;
    case 37u: goto L_089D0228;
    case 38u: goto L_089D0234;
    case 39u: goto L_089D023C;
    case 40u: goto L_089D0244;
    case 41u: goto L_089D0250;
    case 42u: goto L_089D0258;
    case 43u: goto L_089D0260;
    case 44u: goto L_089D0268;
    case 45u: goto L_089D0274;
    case 46u: goto L_089D027C;
    case 47u: goto L_089D0288;
    case 48u: goto L_089D0298;
    case 49u: goto L_089D02A8;
    case 50u: goto L_089D02B0;
    case 51u: goto L_089D02B8;
    case 52u: goto L_089D02C8;
    case 53u: goto L_089D02D8;
    case 54u: goto L_089D02E4;
    case 55u: goto L_089D02EC;
    case 56u: goto L_089D02F8;
    case 57u: goto L_089D0304;
    case 58u: goto L_089D030C;
    case 59u: goto L_089D0328;
    case 60u: goto L_089D0350;
    case 61u: goto L_089D035C;
    case 62u: goto L_089D0368;
    case 63u: goto L_089D0370;
    case 64u: goto L_089D0378;
    case 65u: goto L_089D0390;
    case 66u: goto L_089D039C;
    case 67u: goto L_089D03AC;
    case 68u: goto L_089D03B4;
    case 69u: goto L_089D03BC;
    case 70u: goto L_089D03CC;
    case 71u: goto L_089D03D4;
    case 72u: goto L_089D03DC;
    case 73u: goto L_089D03EC;
    case 74u: goto L_089D03F4;
    case 75u: goto L_089D03FC;
    case 76u: goto L_089D040C;
    case 77u: goto L_089D0414;
    case 78u: goto L_089D041C;
    case 79u: goto L_089D042C;
    case 80u: goto L_089D0434;
    case 81u: goto L_089D043C;
    case 82u: goto L_089D0444;
    case 83u: goto L_089D0458;
    case 84u: goto L_089D0460;
    case 85u: goto L_089D046C;
    case 86u: goto L_089D0480;
    case 87u: goto L_089D048C;
    case 88u: goto L_089D0498;
    case 89u: goto L_089D04A0;
    case 90u: goto L_089D04A8;
    case 91u: goto L_089D04B0;
    case 92u: goto L_089D04B4;
    case 93u: goto L_089D04BC;
    case 94u: goto L_089D04C8;
    case 95u: goto L_089D04D4;
    case 96u: goto L_089D04E0;
    case 97u: goto L_089D04F8;
    case 98u: goto L_089D0500;
    case 99u: goto L_089D0508;
    case 100u: goto L_089D0510;
    case 101u: goto L_089D0518;
    case 102u: goto L_089D0530;
    case 103u: goto L_089D0538;
    case 104u: goto L_089D0540;
    case 105u: goto L_089D0548;
    case 106u: goto L_089D0550;
    case 107u: goto L_089D0558;
    case 108u: goto L_089D0560;
    case 109u: goto L_089D0568;
    case 110u: goto L_089D0570;
    case 111u: goto L_089D0578;
    case 112u: goto L_089D0580;
    case 113u: goto L_089D0588;
    case 114u: goto L_089D0590;
    case 115u: goto L_089D0594;
    case 116u: goto L_089D059C;
    case 117u: goto L_089D05EC;
    case 118u: goto L_089D05FC;
    case 119u: goto L_089D0604;
    case 120u: goto L_089D0614;
    case 121u: goto L_089D061C;
    case 122u: goto L_089D062C;
    case 123u: goto L_089D063C;
    case 124u: goto L_089D0644;
    case 125u: goto L_089D0650;
    case 126u: goto L_089D0654;
    case 127u: goto L_089D065C;
    case 128u: goto L_089D0668;
    case 129u: goto L_089D0670;
    case 130u: goto L_089D0684;
    case 131u: goto L_089D068C;
    case 132u: goto L_089D069C;
    case 133u: goto L_089D06AC;
    case 134u: goto L_089D06C4;
    case 135u: goto L_089D06CC;
    case 136u: goto L_089D0708;
    case 137u: goto L_089D0718;
    case 138u: goto L_089D0724;
    case 139u: goto L_089D0734;
    case 140u: goto L_089D074C;
    case 141u: goto L_089D0754;
    case 142u: goto L_089D0758;
    case 143u: goto L_089D0760;
    case 144u: goto L_089D0788;
    case 145u: goto L_089D0790;
    case 146u: goto L_089D0798;
    case 147u: goto L_089D07AC;
    case 148u: goto L_089D07CC;
    case 149u: goto L_089D07D0;
    case 150u: goto L_089D07DC;
    case 151u: goto L_089D07EC;
    case 152u: goto L_089D07F4;
    case 153u: goto L_089D0804;
    case 154u: goto L_089D080C;
    case 155u: goto L_089D0818;
    case 156u: goto L_089D0820;
    case 157u: goto L_089D0838;
    case 158u: goto L_089D0844;
    case 159u: goto L_089D0854;
    case 160u: goto L_089D0894;
    case 161u: goto L_089D08A0;
    case 162u: goto L_089D08B0;
    case 163u: goto L_089D08BC;
    case 164u: goto L_089D08C4;
    case 165u: goto L_089D08D8;
    case 166u: goto L_089D08E8;
    case 167u: goto L_089D08F8;
    case 168u: goto L_089D0908;
    case 169u: goto L_089D0918;
    case 170u: goto L_089D0924;
    case 171u: goto L_089D0930;
    case 172u: goto L_089D093C;
    case 173u: goto L_089D0950;
    case 174u: goto L_089D0960;
    case 175u: goto L_089D0978;
    case 176u: goto L_089D0988;
    case 177u: goto L_089D0998;
    case 178u: goto L_089D09A0;
    case 179u: goto L_089D09A4;
    case 180u: goto L_089D09B4;
    case 181u: goto L_089D09C4;
    case 182u: goto L_089D09E8;
    case 183u: goto L_089D0A04;
    case 184u: goto L_089D0A14;
    case 185u: goto L_089D0A1C;
    case 186u: goto L_089D0A28;
    case 187u: goto L_089D0A34;
    case 188u: goto L_089D0A48;
    case 189u: goto L_089D0A84;
    case 190u: goto L_089D0A8C;
    case 191u: goto L_089D0A98;
    case 192u: goto L_089D0AAC;
    case 193u: goto L_089D0ABC;
    case 194u: goto L_089D0AC4;
    case 195u: goto L_089D0AD4;
    case 196u: goto L_089D0AE4;
    case 197u: goto L_089D0AF8;
    case 198u: goto L_089D0B08;
    case 199u: goto L_089D0B18;
    case 200u: goto L_089D0B1C;
    case 201u: goto L_089D0B44;
    case 202u: goto L_089D0B5C;
    case 203u: goto L_089D0B68;
    case 204u: goto L_089D0B70;
    case 205u: goto L_089D0B7C;
    case 206u: goto L_089D0B88;
    case 207u: goto L_089D0B94;
    case 208u: goto L_089D0BA4;
    case 209u: goto L_089D0BAC;
    case 210u: goto L_089D0BBC;
    case 211u: goto L_089D0BCC;
    case 212u: goto L_089D0BDC;
    case 213u: goto L_089D0BEC;
    case 214u: goto L_089D0C00;
    case 215u: goto L_089D0C08;
    case 216u: goto L_089D0C18;
    case 217u: goto L_089D0C24;
    case 218u: goto L_089D0C54;
    case 219u: goto L_089D0C80;
    case 220u: goto L_089D0C94;
    case 221u: goto L_089D0C9C;
    case 222u: goto L_089D0CA4;
    case 223u: goto L_089D0CB8;
    case 224u: goto L_089D0CC4;
    case 225u: goto L_089D0CD4;
    case 226u: goto L_089D0CDC;
    case 227u: goto L_089D0CF8;
    case 228u: goto L_089D0D18;
    case 229u: goto L_089D0D28;
    case 230u: goto L_089D0D40;
    case 231u: goto L_089D0D84;
    case 232u: goto L_089D0D90;
    case 233u: goto L_089D0DA0;
    case 234u: goto L_089D0DA8;
    case 235u: goto L_089D0DB4;
    case 236u: goto L_089D0DC0;
    case 237u: goto L_089D0DC8;
    case 238u: goto L_089D0DE0;
    case 239u: goto L_089D0DE8;
    case 240u: goto L_089D0DFC;
    case 241u: goto L_089D0E00;
    case 242u: goto L_089D0E0C;
    case 243u: goto L_089D0E14;
    case 244u: goto L_089D0E1C;
    case 245u: goto L_089D0E24;
    case 246u: goto L_089D0E30;
    case 247u: goto L_089D0E38;
    case 248u: goto L_089D0E60;
    case 249u: goto L_089D0E94;
    case 250u: goto L_089D0EA8;
    case 251u: goto L_089D0EBC;
    case 252u: goto L_089D0EC8;
    case 253u: goto L_089D0ED0;
    case 254u: goto L_089D0EDC;
    case 255u: goto L_089D0EE4;
    case 256u: goto L_089D0EF0;
    case 257u: goto L_089D0EF8;
    case 258u: goto L_089D0F00;
    case 259u: goto L_089D0F10;
    case 260u: goto L_089D0F24;
    case 261u: goto L_089D0F38;
    case 262u: goto L_089D0F44;
    case 263u: goto L_089D0F50;
    case 264u: goto L_089D0F68;
    case 265u: goto L_089D0F70;
    case 266u: goto L_089D0F88;
    case 267u: goto L_089D0FA8;
    case 268u: goto L_089D0FE8;
    case 269u: goto L_089D0FFC;
    case 270u: goto L_089D1010;
    case 271u: goto L_089D1014;
    case 272u: goto L_089D101C;
    case 273u: goto L_089D1024;
    case 274u: goto L_089D102C;
    case 275u: goto L_089D1040;
    case 276u: goto L_089D1048;
    case 277u: goto L_089D1054;
    case 278u: goto L_089D1068;
    case 279u: goto L_089D107C;
    case 280u: goto L_089D1088;
    case 281u: goto L_089D10A0;
    case 282u: goto L_089D10B8;
    case 283u: goto L_089D10DC;
    case 284u: goto L_089D110C;
    case 285u: goto L_089D1114;
    case 286u: goto L_089D111C;
    case 287u: goto L_089D112C;
    case 288u: goto L_089D1138;
    case 289u: goto L_089D1140;
    case 290u: goto L_089D1148;
    case 291u: goto L_089D1150;
    case 292u: goto L_089D115C;
    case 293u: goto L_089D1164;
    case 294u: goto L_089D1174;
    case 295u: goto L_089D1188;
    case 296u: goto L_089D1190;
    case 297u: goto L_089D11A8;
    case 298u: goto L_089D11C4;
    case 299u: goto L_089D11D0;
    case 300u: goto L_089D11DC;
    case 301u: goto L_089D11E4;
    case 302u: goto L_089D11F8;
    case 303u: goto L_089D123C;
    case 304u: goto L_089D124C;
    case 305u: goto L_089D1254;
    case 306u: goto L_089D1264;
    case 307u: goto L_089D1270;
    case 308u: goto L_089D127C;
    case 309u: goto L_089D1288;
    case 310u: goto L_089D1294;
    case 311u: goto L_089D129C;
    case 312u: goto L_089D12AC;
    case 313u: goto L_089D12B8;
    case 314u: goto L_089D12C0;
    case 315u: goto L_089D12C8;
    case 316u: goto L_089D12D0;
    case 317u: goto L_089D12E0;
    case 318u: goto L_089D12E4;
    case 319u: goto L_089D12F0;
    case 320u: goto L_089D1304;
    case 321u: goto L_089D1328;
    case 322u: goto L_089D134C;
    case 323u: goto L_089D135C;
    case 324u: goto L_089D1370;
    case 325u: goto L_089D137C;
    case 326u: goto L_089D1388;
    case 327u: goto L_089D13A0;
    case 328u: goto L_089D13B0;
    case 329u: goto L_089D13FC;
    case 330u: goto L_089D141C;
    case 331u: goto L_089D1424;
    case 332u: goto L_089D1438;
    case 333u: goto L_089D1444;
    case 334u: goto L_089D144C;
    case 335u: goto L_089D1458;
    case 336u: goto L_089D1460;
    case 337u: goto L_089D146C;
    case 338u: goto L_089D1474;
    case 339u: goto L_089D147C;
    case 340u: goto L_089D1490;
    case 341u: goto L_089D149C;
    case 342u: goto L_089D14B4;
    case 343u: goto L_089D14E0;
    case 344u: goto L_089D14F0;
    case 345u: goto L_089D14FC;
    case 346u: goto L_089D1508;
    case 347u: goto L_089D1514;
    case 348u: goto L_089D1524;
    case 349u: goto L_089D1544;
    case 350u: goto L_089D1568;
    case 351u: goto L_089D1578;
    case 352u: goto L_089D1590;
    case 353u: goto L_089D15A0;
    case 354u: goto L_089D15AC;
    case 355u: goto L_089D15C8;
    case 356u: goto L_089D15F0;
    case 357u: goto L_089D1600;
    case 358u: goto L_089D1610;
    case 359u: goto L_089D1618;
    case 360u: goto L_089D162C;
    case 361u: goto L_089D1644;
    case 362u: goto L_089D1668;
    case 363u: goto L_089D1670;
    case 364u: goto L_089D1678;
    case 365u: goto L_089D1688;
    case 366u: goto L_089D1694;
    case 367u: goto L_089D16A4;
    case 368u: goto L_089D16B8;
    case 369u: goto L_089D16C8;
    case 370u: goto L_089D16D0;
    case 371u: goto L_089D16F8;
    case 372u: goto L_089D1704;
    case 373u: goto L_089D1710;
    case 374u: goto L_089D171C;
    case 375u: goto L_089D1724;
    case 376u: goto L_089D1730;
    case 377u: goto L_089D1734;
    case 378u: goto L_089D174C;
    case 379u: goto L_089D1768;
    case 380u: goto L_089D1794;
    case 381u: goto L_089D179C;
    case 382u: goto L_089D17A8;
    case 383u: goto L_089D17B8;
    case 384u: goto L_089D17C0;
    case 385u: goto L_089D17D0;
    case 386u: goto L_089D17D8;
    case 387u: goto L_089D17F0;
    case 388u: goto L_089D17FC;
    case 389u: goto L_089D180C;
    case 390u: goto L_089D1828;
    case 391u: goto L_089D1850;
    case 392u: goto L_089D1868;
    case 393u: goto L_089D1874;
    case 394u: goto L_089D187C;
    case 395u: goto L_089D1888;
    case 396u: goto L_089D1890;
    case 397u: goto L_089D1898;
    case 398u: goto L_089D18A0;
    case 399u: goto L_089D18B4;
    case 400u: goto L_089D18BC;
    case 401u: goto L_089D18C8;
    case 402u: goto L_089D18D0;
    case 403u: goto L_089D18DC;
    case 404u: goto L_089D18E4;
    case 405u: goto L_089D18F0;
    case 406u: goto L_089D18F8;
    case 407u: goto L_089D1900;
    case 408u: goto L_089D190C;
    case 409u: goto L_089D1914;
    case 410u: goto L_089D191C;
    case 411u: goto L_089D1924;
    case 412u: goto L_089D192C;
    case 413u: goto L_089D1934;
    case 414u: goto L_089D193C;
    case 415u: goto L_089D1944;
    case 416u: goto L_089D194C;
    case 417u: goto L_089D1954;
    case 418u: goto L_089D195C;
    case 419u: goto L_089D1960;
    case 420u: goto L_089D1974;
    case 421u: goto L_089D19A0;
    case 422u: goto L_089D19B0;
    case 423u: goto L_089D19B8;
    case 424u: goto L_089D19C0;
    case 425u: goto L_089D19C8;
    case 426u: goto L_089D19D0;
    case 427u: goto L_089D19E0;
    case 428u: goto L_089D19F0;
    case 429u: goto L_089D1A10;
    case 430u: goto L_089D1A60;
    case 431u: goto L_089D1A84;
    case 432u: goto L_089D1A98;
    case 433u: goto L_089D1AA4;
    case 434u: goto L_089D1AB0;
    case 435u: goto L_089D1ABC;
    case 436u: goto L_089D1AC8;
    case 437u: goto L_089D1AD4;
    case 438u: goto L_089D1ADC;
    case 439u: goto L_089D1AE8;
    case 440u: goto L_089D1AF8;
    case 441u: goto L_089D1B04;
    case 442u: goto L_089D1B10;
    case 443u: goto L_089D1B18;
    case 444u: goto L_089D1B20;
    case 445u: goto L_089D1B28;
    case 446u: goto L_089D1B34;
    case 447u: goto L_089D1B40;
    case 448u: goto L_089D1B48;
    case 449u: goto L_089D1B54;
    case 450u: goto L_089D1B5C;
    case 451u: goto L_089D1B68;
    case 452u: goto L_089D1B74;
    case 453u: goto L_089D1B7C;
    case 454u: goto L_089D1B84;
    case 455u: goto L_089D1B8C;
    case 456u: goto L_089D1BA0;
    case 457u: goto L_089D1BAC;
    case 458u: goto L_089D1BD8;
    case 459u: goto L_089D1C20;
    case 460u: goto L_089D1C6C;
    case 461u: goto L_089D1C84;
    case 462u: goto L_089D1C8C;
    case 463u: goto L_089D1CE4;
    case 464u: goto L_089D1CF0;
    case 465u: goto L_089D1D08;
    case 466u: goto L_089D1D0C;
    case 467u: goto L_089D1D1C;
    case 468u: goto L_089D1D24;
    case 469u: goto L_089D1D30;
    case 470u: goto L_089D1D38;
    case 471u: goto L_089D1D68;
    case 472u: goto L_089D1D78;
    case 473u: goto L_089D1D84;
    case 474u: goto L_089D1D8C;
    case 475u: goto L_089D1DA0;
    case 476u: goto L_089D1DB0;
    case 477u: goto L_089D1DBC;
    case 478u: goto L_089D1DC4;
    case 479u: goto L_089D1DD0;
    case 480u: goto L_089D1DD8;
    case 481u: goto L_089D1DEC;
    case 482u: goto L_089D1DF4;
    case 483u: goto L_089D1DFC;
    case 484u: goto L_089D1E0C;
    case 485u: goto L_089D1E18;
    case 486u: goto L_089D1E20;
    case 487u: goto L_089D1E34;
    case 488u: goto L_089D1E64;
    case 489u: goto L_089D1E88;
    case 490u: goto L_089D1E98;
    case 491u: goto L_089D1EA0;
    case 492u: goto L_089D1EB0;
    case 493u: goto L_089D1EBC;
    case 494u: goto L_089D1ECC;
    case 495u: goto L_089D1ED0;
    case 496u: goto L_089D1EDC;
    case 497u: goto L_089D1EE8;
    case 498u: goto L_089D1EFC;
    case 499u: goto L_089D1F24;
    case 500u: goto L_089D1F2C;
    case 501u: goto L_089D1F40;
    case 502u: goto L_089D1F44;
    case 503u: goto L_089D1F64;
    case 504u: goto L_089D1F88;
    case 505u: goto L_089D1F94;
    case 506u: goto L_089D1FA4;
    case 507u: goto L_089D1FB8;
    case 508u: goto L_089D2020;
    case 509u: goto L_089D202C;
    case 510u: goto L_089D2030;
    case 511u: goto L_089D2044;
    case 512u: goto L_089D2064;
    case 513u: goto L_089D20B4;
    case 514u: goto L_089D20C4;
    case 515u: goto L_089D213C;
    case 516u: goto L_089D2150;
    case 517u: goto L_089D2178;
    case 518u: goto L_089D2194;
    case 519u: goto L_089D219C;
    case 520u: goto L_089D21A4;
    case 521u: goto L_089D21B4;
    case 522u: goto L_089D21C0;
    case 523u: goto L_089D21C8;
    case 524u: goto L_089D21CC;
    case 525u: goto L_089D21D4;
    case 526u: goto L_089D21DC;
    case 527u: goto L_089D21F0;
    case 528u: goto L_089D2234;
    case 529u: goto L_089D223C;
    case 530u: goto L_089D2244;
    case 531u: goto L_089D2248;
    case 532u: goto L_089D2250;
    case 533u: goto L_089D2258;
    case 534u: goto L_089D225C;
    case 535u: goto L_089D2278;
    case 536u: goto L_089D2280;
    case 537u: goto L_089D22C0;
    case 538u: goto L_089D22CC;
    case 539u: goto L_089D22EC;
    case 540u: goto L_089D22F4;
    case 541u: goto L_089D230C;
    case 542u: goto L_089D2318;
    case 543u: goto L_089D2320;
    case 544u: goto L_089D2328;
    case 545u: goto L_089D2330;
    case 546u: goto L_089D2348;
    case 547u: goto L_089D2354;
    case 548u: goto L_089D2364;
    case 549u: goto L_089D2380;
    case 550u: goto L_089D2394;
    case 551u: goto L_089D23AC;
    case 552u: goto L_089D23C4;
    case 553u: goto L_089D23CC;
    case 554u: goto L_089D23D0;
    case 555u: goto L_089D2418;
    case 556u: goto L_089D2430;
    case 557u: goto L_089D2438;
    case 558u: goto L_089D2448;
    case 559u: goto L_089D246C;
    case 560u: goto L_089D2474;
    case 561u: goto L_089D2480;
    case 562u: goto L_089D249C;
    case 563u: goto L_089D24A4;
    case 564u: goto L_089D24AC;
    case 565u: goto L_089D24B0;
    case 566u: goto L_089D24BC;
    case 567u: goto L_089D24D4;
    case 568u: goto L_089D2504;
    case 569u: goto L_089D2514;
    case 570u: goto L_089D2520;
    case 571u: goto L_089D2530;
    case 572u: goto L_089D2534;
    case 573u: goto L_089D2540;
    case 574u: goto L_089D254C;
    case 575u: goto L_089D2558;
    case 576u: goto L_089D2564;
    case 577u: goto L_089D2574;
    case 578u: goto L_089D2578;
    case 579u: goto L_089D2584;
    case 580u: goto L_089D25A8;
    case 581u: goto L_089D25B4;
    case 582u: goto L_089D25C4;
    case 583u: goto L_089D25CC;
    case 584u: goto L_089D25D4;
    case 585u: goto L_089D25DC;
    case 586u: goto L_089D25E8;
    case 587u: goto L_089D2604;
    case 588u: goto L_089D2608;
    case 589u: goto L_089D2610;
    case 590u: goto L_089D263C;
    case 591u: goto L_089D2648;
    case 592u: goto L_089D2660;
    case 593u: goto L_089D266C;
    case 594u: goto L_089D2674;
    case 595u: goto L_089D2688;
    case 596u: goto L_089D2694;
    case 597u: goto L_089D26A4;
    case 598u: goto L_089D26A8;
    case 599u: goto L_089D26C4;
    case 600u: goto L_089D26FC;
    case 601u: goto L_089D2708;
    case 602u: goto L_089D2714;
    case 603u: goto L_089D271C;
    case 604u: goto L_089D272C;
    case 605u: goto L_089D274C;
    case 606u: goto L_089D2778;
    case 607u: goto L_089D2784;
    case 608u: goto L_089D27D4;
    case 609u: goto L_089D27E8;
    case 610u: goto L_089D2838;
    case 611u: goto L_089D284C;
    case 612u: goto L_089D2858;
    case 613u: goto L_089D2860;
    case 614u: goto L_089D2864;
    case 615u: goto L_089D2870;
    case 616u: goto L_089D2880;
    case 617u: goto L_089D2884;
    case 618u: goto L_089D2894;
    case 619u: goto L_089D28AC;
    case 620u: goto L_089D28CC;
    case 621u: goto L_089D28E8;
    case 622u: goto L_089D2908;
    case 623u: goto L_089D2924;
    case 624u: goto L_089D2968;
    case 625u: goto L_089D29A8;
    case 626u: goto L_089D29C0;
    case 627u: goto L_089D2A10;
    case 628u: goto L_089D2A18;
    case 629u: goto L_089D2A48;
    case 630u: goto L_089D2A60;
    case 631u: goto L_089D2A80;
    case 632u: goto L_089D2ABC;
    case 633u: goto L_089D2AF8;
    case 634u: goto L_089D2B2C;
    case 635u: goto L_089D2B60;
    case 636u: goto L_089D2B90;
    case 637u: goto L_089D2BBC;
    case 638u: goto L_089D2BE4;
    case 639u: goto L_089D2C14;
    case 640u: goto L_089D2C38;
    case 641u: goto L_089D2C3C;
    case 642u: goto L_089D2C68;
    case 643u: goto L_089D2CBC;
    case 644u: goto L_089D2D08;
    case 645u: goto L_089D2D18;
    case 646u: goto L_089D2D28;
    case 647u: goto L_089D2D30;
    case 648u: goto L_089D2D44;
    case 649u: goto L_089D2D50;
    case 650u: goto L_089D2D64;
    case 651u: goto L_089D2D6C;
    case 652u: goto L_089D2D74;
    case 653u: goto L_089D2D94;
    case 654u: goto L_089D2DA4;
    case 655u: goto L_089D2DAC;
    case 656u: goto L_089D2DBC;
    case 657u: goto L_089D2DC4;
    case 658u: goto L_089D2DD0;
    case 659u: goto L_089D2DD8;
    case 660u: goto L_089D2DE4;
    case 661u: goto L_089D2DE8;
    case 662u: goto L_089D2DF0;
    case 663u: goto L_089D2E04;
    case 664u: goto L_089D2E1C;
    case 665u: goto L_089D2E68;
    case 666u: goto L_089D2EA0;
    case 667u: goto L_089D2EC8;
    case 668u: goto L_089D2EE8;
    case 669u: goto L_089D2F10;
    case 670u: goto L_089D2F50;
    case 671u: goto L_089D2F58;
    case 672u: goto L_089D2FB0;
    case 673u: goto L_089D2FF4;
    case 674u: goto L_089D3028;
    case 675u: goto L_089D3038;
    case 676u: goto L_089D3058;
    case 677u: goto L_089D3078;
    case 678u: goto L_089D30B8;
    case 679u: goto L_089D30C8;
    case 680u: goto L_089D30D0;
    case 681u: goto L_089D30E4;
    case 682u: goto L_089D313C;
    case 683u: goto L_089D3148;
    case 684u: goto L_089D31A0;
    case 685u: goto L_089D31AC;
    case 686u: goto L_089D31D0;
    case 687u: goto L_089D31F4;
    case 688u: goto L_089D3234;
    case 689u: goto L_089D3248;
    case 690u: goto L_089D3250;
    case 691u: goto L_089D3260;
    case 692u: goto L_089D32A0;
    case 693u: goto L_089D32AC;
    case 694u: goto L_089D3310;
    case 695u: goto L_089D3338;
    case 696u: goto L_089D334C;
    case 697u: goto L_089D3354;
    case 698u: goto L_089D336C;
    case 699u: goto L_089D3398;
    case 700u: goto L_089D33B4;
    case 701u: goto L_089D33C0;
    case 702u: goto L_089D33D8;
    case 703u: goto L_089D33EC;
    case 704u: goto L_089D33F8;
    case 705u: goto L_089D3410;
    case 706u: goto L_089D3424;
    case 707u: goto L_089D3430;
    case 708u: goto L_089D3448;
    case 709u: goto L_089D3458;
    case 710u: goto L_089D346C;
    case 711u: goto L_089D34B8;
    case 712u: goto L_089D34CC;
    case 713u: goto L_089D34D4;
    case 714u: goto L_089D3588;
    case 715u: goto L_089D35A0;
    case 716u: goto L_089D35F8;
    case 717u: goto L_089D362C;
    case 718u: goto L_089D3674;
    case 719u: goto L_089D367C;
    case 720u: goto L_089D36C0;
    case 721u: goto L_089D36C8;
    case 722u: goto L_089D370C;
    case 723u: goto L_089D373C;
    case 724u: goto L_089D3784;
    case 725u: goto L_089D378C;
    case 726u: goto L_089D37C8;
    case 727u: goto L_089D37D0;
    case 728u: goto L_089D3814;
    case 729u: goto L_089D3840;
    case 730u: goto L_089D3888;
    case 731u: goto L_089D3890;
    case 732u: goto L_089D38C8;
    case 733u: goto L_089D38D0;
    case 734u: goto L_089D390C;
    case 735u: goto L_089D3938;
    case 736u: goto L_089D397C;
    case 737u: goto L_089D3984;
    case 738u: goto L_089D39B8;
    case 739u: goto L_089D39E0;
    case 740u: goto L_089D3A1C;
    case 741u: goto L_089D3A34;
    case 742u: goto L_089D3A9C;
    case 743u: goto L_089D3AC0;
    case 744u: goto L_089D3AE0;
    case 745u: goto L_089D3B28;
    case 746u: goto L_089D3B30;
    case 747u: goto L_089D3B84;
    case 748u: goto L_089D3BA8;
    case 749u: goto L_089D3BD0;
    case 750u: goto L_089D3C14;
    case 751u: goto L_089D3C1C;
    case 752u: goto L_089D3C70;
    case 753u: goto L_089D3C98;
    case 754u: goto L_089D3CBC;
    case 755u: goto L_089D3D00;
    case 756u: goto L_089D3D08;
    case 757u: goto L_089D3D54;
    case 758u: goto L_089D3D7C;
    case 759u: goto L_089D3DA0;
    case 760u: goto L_089D3DE4;
    case 761u: goto L_089D3E04;
    case 762u: goto L_089D3E0C;
    case 763u: goto L_089D3E78;
    case 764u: goto L_089D3EC8;
    case 765u: goto L_089D3F18;
    case 766u: goto L_089D3F28;
    case 767u: goto L_089D3F4C;
    case 768u: goto L_089D3F70;
    case 769u: goto L_089D3FC0;
    case 770u: goto L_089D3FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D0000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D0068;
      }
      goto L_089D000C;
    }
L_089D000C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089D0018u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D1A10;
L_089D0018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_089D0068;
      }
      goto L_089D0028;
    }
L_089D0028:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089D0038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 715u, 0x089CED2Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0038u) goto L_089D0038;
    return;
L_089D0038:
    ctx.gpr[31] = (0x089D0040u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D0040u) goto L_089D0040;
    return;
L_089D0040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_089D0068;
      }
      goto L_089D0050;
    }
L_089D0050:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0060u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8004));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x089D0060u) goto L_089D0060;
    return;
L_089D0060:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D00D8;
      }
      goto L_089D0068;
    }
L_089D0068:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089D0078;
      }
      goto L_089D0070;
    }
L_089D0070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089D009C;
      }
      goto L_089D0078;
    }
L_089D0078:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D008C;
      }
      goto L_089D0080;
    }
L_089D0080:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089D008Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 768u, 0x08883A94u>(ctx, &aot_mem) && ctx.pc == 0x089D008Cu) goto L_089D008C;
    return;
L_089D008C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089D009C;
L_089D009C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D00B4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x089D00B4u) goto L_089D00B4;
    return;
L_089D00B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[31] = (0x089D00C4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 714u, 0x089CED14u>(ctx, &aot_mem) && ctx.pc == 0x089D00C4u) goto L_089D00C4;
    return;
L_089D00C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D00D0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 68u, 0x08884448u>(ctx, &aot_mem) && ctx.pc == 0x089D00D0u) goto L_089D00D0;
    return;
L_089D00D0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_089D00D8;
L_089D00D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D00FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 41 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 278u);
      if (branch_taken) {
          goto L_089D014C;
      }
      goto L_089D0128;
    }
L_089D0128:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D016C;
      }
      goto L_089D0134;
    }
L_089D0134:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0144u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7976));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x089D0144u) goto L_089D0144;
    return;
L_089D0144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D01AC;
      }
      goto L_089D014C;
    }
L_089D014C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D0134;
      }
      goto L_089D0154;
    }
L_089D0154:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0164u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 785u, 0x089CF32Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0164u) goto L_089D0164;
    return;
L_089D0164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D01AC;
      }
      goto L_089D016C;
    }
L_089D016C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089D0178u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D0178u) goto L_089D0178;
    return;
L_089D0178:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0184u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D0708;
L_089D0184:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x089D0198u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 699u, 0x089CEC00u>(ctx, &aot_mem) && ctx.pc == 0x089D0198u) goto L_089D0198;
    return;
L_089D0198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089D01A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 715u, 0x0888362Cu>(ctx, &aot_mem) && ctx.pc == 0x089D01A4u) goto L_089D01A4;
    return;
L_089D01A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D01AC;
      }
      goto L_089D01AC;
    }
L_089D01AC:
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
L_089D01C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D01ECu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    goto L_089D00FC;
L_089D01EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 92 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 124 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D023C;
      }
      goto L_089D01FC;
    }
L_089D01FC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D0228;
      }
      goto L_089D0208;
    }
L_089D0208:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_089D0234;
      }
      goto L_089D0210;
    }
L_089D0210:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7784)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0228:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D027C;
      }
      goto L_089D0234;
    }
L_089D0234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D030C;
      }
      goto L_089D023C;
    }
L_089D023C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 287u);
      if (branch_taken) {
          goto L_089D0258;
      }
      goto L_089D0244;
    }
L_089D0244:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 123 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D0234;
      }
      goto L_089D0250;
    }
L_089D0250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D02EC;
      }
      goto L_089D0258;
    }
L_089D0258:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D0234;
      }
      goto L_089D0260;
    }
L_089D0260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D02EC;
      }
      goto L_089D0268;
    }
L_089D0268:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0274u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 845u, 0x089CF978u>(ctx, &aot_mem) && ctx.pc == 0x089D0274u) goto L_089D0274;
    return;
L_089D0274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0304;
      }
      goto L_089D027C;
    }
L_089D027C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0288u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 773u, 0x08883AF0u>(ctx, &aot_mem) && ctx.pc == 0x089D0288u) goto L_089D0288;
    return;
L_089D0288:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0298u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 850u, 0x089CF9E8u>(ctx, &aot_mem) && ctx.pc == 0x089D0298u) goto L_089D0298;
    return;
L_089D0298:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D02A8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 30u, 0x088841BCu>(ctx, &aot_mem) && ctx.pc == 0x089D02A8u) goto L_089D02A8;
    return;
L_089D02A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0304;
      }
      goto L_089D02B0;
    }
L_089D02B0:
    ctx.gpr[31] = (0x089D02B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D02B8u) goto L_089D02B8;
    return;
L_089D02B8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D02C8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 718u, 0x089CED68u>(ctx, &aot_mem) && ctx.pc == 0x089D02C8u) goto L_089D02C8;
    return;
L_089D02C8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D02D8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 823u, 0x08883DC0u>(ctx, &aot_mem) && ctx.pc == 0x089D02D8u) goto L_089D02D8;
    return;
L_089D02D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D02E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 924u, 0x089CFF40u>(ctx, &aot_mem) && ctx.pc == 0x089D02E4u) goto L_089D02E4;
    return;
L_089D02E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0304;
      }
      goto L_089D02EC;
    }
L_089D02EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D02F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 768u, 0x08883A94u>(ctx, &aot_mem) && ctx.pc == 0x089D02F8u) goto L_089D02F8;
    return;
L_089D02F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0304u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 924u, 0x089CFF40u>(ctx, &aot_mem) && ctx.pc == 0x089D0304u) goto L_089D0304;
    return;
L_089D0304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D01EC;
      }
      goto L_089D030C;
    }
L_089D030C:
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
L_089D0328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 263 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 288 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D0370;
      }
      goto L_089D0350;
    }
L_089D0350:
    ctx.gpr[5] = (0u | 123u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D0460;
      }
      goto L_089D035C;
    }
L_089D035C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0368u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D1A10;
L_089D0368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D046C;
      }
      goto L_089D0370;
    }
L_089D0370:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-263));
      if (branch_taken) {
          goto L_089D0460;
      }
      goto L_089D0378;
    }
L_089D0378:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7704)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089D039Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 707u, 0x08883550u>(ctx, &aot_mem) && ctx.pc == 0x089D039Cu) goto L_089D039C;
    return;
L_089D039C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x089D03ACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 714u, 0x089CED14u>(ctx, &aot_mem) && ctx.pc == 0x089D03ACu) goto L_089D03AC;
    return;
L_089D03AC:
    ctx.gpr[31] = (0x089D03B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D03B4u) goto L_089D03B4;
    return;
L_089D03B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D046C;
      }
      goto L_089D03BC;
    }
L_089D03BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D03CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 715u, 0x089CED2Cu>(ctx, &aot_mem) && ctx.pc == 0x089D03CCu) goto L_089D03CC;
    return;
L_089D03CC:
    ctx.gpr[31] = (0x089D03D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D03D4u) goto L_089D03D4;
    return;
L_089D03D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D046C;
      }
      goto L_089D03DC;
    }
L_089D03DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089D03ECu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 714u, 0x089CED14u>(ctx, &aot_mem) && ctx.pc == 0x089D03ECu) goto L_089D03EC;
    return;
L_089D03EC:
    ctx.gpr[31] = (0x089D03F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D03F4u) goto L_089D03F4;
    return;
L_089D03F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D046C;
      }
      goto L_089D03FC;
    }
L_089D03FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089D040Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 714u, 0x089CED14u>(ctx, &aot_mem) && ctx.pc == 0x089D040Cu) goto L_089D040C;
    return;
L_089D040C:
    ctx.gpr[31] = (0x089D0414u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D0414u) goto L_089D0414;
    return;
L_089D0414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D046C;
      }
      goto L_089D041C;
    }
L_089D041C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x089D042Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 714u, 0x089CED14u>(ctx, &aot_mem) && ctx.pc == 0x089D042Cu) goto L_089D042C;
    return;
L_089D042C:
    ctx.gpr[31] = (0x089D0434u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D0434u) goto L_089D0434;
    return;
L_089D0434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D046C;
      }
      goto L_089D043C;
    }
L_089D043C:
    ctx.gpr[31] = (0x089D0444u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D0444u) goto L_089D0444;
    return;
L_089D0444:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0458u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 906u, 0x089CFE00u>(ctx, &aot_mem) && ctx.pc == 0x089D0458u) goto L_089D0458;
    return;
L_089D0458:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D046C;
      }
      goto L_089D0460;
    }
L_089D0460:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D046Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D01C4;
L_089D046C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0480:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 46 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 270u);
      if (branch_taken) {
          goto L_089D04A0;
      }
      goto L_089D048C;
    }
L_089D048C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 45 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D04B0;
      }
      goto L_089D0498;
    }
L_089D0498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_089D04B4;
      }
      goto L_089D04A0;
    }
L_089D04A0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D0498;
      }
      goto L_089D04A8;
    }
L_089D04A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089D04B4;
      }
      goto L_089D04B0;
    }
L_089D04B0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089D04B4;
L_089D04B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D04BC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 257 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 286 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D0510;
      }
      goto L_089D04C8;
    }
L_089D04C8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 63 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 94u);
      if (branch_taken) {
          goto L_089D0500;
      }
      goto L_089D04D4;
    }
L_089D04D4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 42 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-42));
      if (branch_taken) {
          goto L_089D04F8;
      }
      goto L_089D04E0;
    }
L_089D04E0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7600)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D04F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 14u);
      if (branch_taken) {
          goto L_089D0594;
      }
      goto L_089D0500;
    }
L_089D0500:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D04F8;
      }
      goto L_089D0508;
    }
L_089D0508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_089D0594;
      }
      goto L_089D0510;
    }
L_089D0510:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-257));
      if (branch_taken) {
          goto L_089D04F8;
      }
      goto L_089D0518;
    }
L_089D0518:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7512)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D0594;
      }
      goto L_089D0538;
    }
L_089D0538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089D0594;
      }
      goto L_089D0540;
    }
L_089D0540:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_089D0594;
      }
      goto L_089D0548;
    }
L_089D0548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_089D0594;
      }
      goto L_089D0550;
    }
L_089D0550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_089D0594;
      }
      goto L_089D0558;
    }
L_089D0558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_089D0594;
      }
      goto L_089D0560;
    }
L_089D0560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 7u);
      if (branch_taken) {
          goto L_089D0594;
      }
      goto L_089D0568;
    }
L_089D0568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_089D0594;
      }
      goto L_089D0570;
    }
L_089D0570:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_089D0594;
      }
      goto L_089D0578;
    }
L_089D0578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_089D0594;
      }
      goto L_089D0580;
    }
L_089D0580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_089D0594;
      }
      goto L_089D0588;
    }
L_089D0588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 12u);
      if (branch_taken) {
          goto L_089D0594;
      }
      goto L_089D0590;
    }
L_089D0590:
    ctx.gpr[2] = (0u | 13u);
    goto L_089D0594;
L_089D0594:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D059C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[21] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 201 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-27944));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089D05FC;
      }
      goto L_089D05EC;
    }
L_089D05EC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D05FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7956));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x089D05FCu) goto L_089D05FC;
    return;
L_089D05FC:
    ctx.gpr[31] = (0x089D0604u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089D0480;
L_089D0604:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D0644;
      }
      goto L_089D0614;
    }
L_089D0614:
    ctx.gpr[31] = (0x089D061Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D061Cu) goto L_089D061C;
    return;
L_089D061C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D062Cu);
    ctx.gpr[6] = (0u | 8u);
    goto L_089D059C;
L_089D062C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D063Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 32u, 0x088841F0u>(ctx, &aot_mem) && ctx.pc == 0x089D063Cu) goto L_089D063C;
    return;
L_089D063C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089D0654;
      }
      goto L_089D0644;
    }
L_089D0644:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0650u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D0328;
L_089D0650:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089D0654;
L_089D0654:
    ctx.gpr[31] = (0x089D065Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089D04BC;
L_089D065C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 14u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089D0668;
L_089D0668:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    ctx.gpr[22] = (ctx.gpr[19] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_089D06CC;
      }
      goto L_089D0670;
    }
L_089D0670:
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D06CC;
      }
      goto L_089D0684;
    }
L_089D0684:
    ctx.gpr[31] = (0x089D068Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D068Cu) goto L_089D068C;
    return;
L_089D068C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D069Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 44u, 0x088842C4u>(ctx, &aot_mem) && ctx.pc == 0x089D069Cu) goto L_089D069C;
    return;
L_089D069C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D06ACu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_089D059C;
L_089D06AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D06C4u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 81u, 0x088845CCu>(ctx, &aot_mem) && ctx.pc == 0x089D06C4u) goto L_089D06C4;
    return;
L_089D06C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089D0668;
      }
      goto L_089D06CC;
    }
L_089D06CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0718u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D059C;
L_089D0718:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0724:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-260));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(29) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0754;
      }
      goto L_089D0734;
    }
L_089D0734:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7392)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D074C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089D0758;
      }
      goto L_089D0754;
    }
L_089D0754:
    ctx.gpr[2] = (0u | 0u);
    goto L_089D0758;
L_089D0758:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0760:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0788u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 806u, 0x089CF4CCu>(ctx, &aot_mem) && ctx.pc == 0x089D0788u) goto L_089D0788;
    return;
L_089D0788:
    ctx.gpr[31] = (0x089D0790u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D1974;
L_089D0790:
    ctx.gpr[31] = (0x089D0798u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 807u, 0x089CF4F4u>(ctx, &aot_mem) && ctx.pc == 0x089D0798u) goto L_089D0798;
    return;
L_089D0798:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D07AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089D0818;
      }
      goto L_089D07CC;
    }
L_089D07CC:
    ctx.gpr[8] = (0u | 8u);
    goto L_089D07D0;
L_089D07D0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089D080C;
      }
      goto L_089D07DC;
    }
L_089D07DC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089D07F4;
      }
      goto L_089D07EC;
    }
L_089D07EC:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    goto L_089D07F4;
L_089D07F4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089D080C;
      }
      goto L_089D0804;
    }
L_089D0804:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_089D080C;
L_089D080C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D07D0;
      }
      goto L_089D0818;
    }
L_089D0818:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0844;
      }
      goto L_089D0820;
    }
L_089D0820:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089D0838u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x089D0838u) goto L_089D0838;
    return;
L_089D0838:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0844u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 687u, 0x08883358u>(ctx, &aot_mem) && ctx.pc == 0x089D0844u) goto L_089D0844;
    return;
L_089D0844:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089D08A0;
      }
      goto L_089D0894;
    }
L_089D0894:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D08B0;
      }
      goto L_089D08A0;
    }
L_089D08A0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D08B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7932));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x089D08B0u) goto L_089D08B0;
    return;
L_089D08B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D08BCu);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 690u, 0x089CEB88u>(ctx, &aot_mem) && ctx.pc == 0x089D08BCu) goto L_089D08BC;
    return;
L_089D08BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0918;
      }
      goto L_089D08C4;
    }
L_089D08C4:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D08D8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089D01C4;
L_089D08D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D08F8;
      }
      goto L_089D08E8;
    }
L_089D08E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D08F8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_089D07AC;
L_089D08F8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089D0908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D0854;
L_089D0908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D09A4;
      }
      goto L_089D0918;
    }
L_089D0918:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0924u);
    ctx.gpr[5] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 695u, 0x089CEBBCu>(ctx, &aot_mem) && ctx.pc == 0x089D0924u) goto L_089D0924;
    return;
L_089D0924:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0930u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 917u, 0x089CFECCu>(ctx, &aot_mem) && ctx.pc == 0x089D0930u) goto L_089D0930;
    return;
L_089D0930:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089D0978;
      }
      goto L_089D093C;
    }
L_089D093C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0950u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 788u, 0x089CF38Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0950u) goto L_089D0950;
    return;
L_089D0950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089D09A0;
      }
      goto L_089D0960;
    }
L_089D0960:
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089D09A0;
      }
      goto L_089D0978;
    }
L_089D0978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089D0988u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 711u, 0x088835B0u>(ctx, &aot_mem) && ctx.pc == 0x089D0988u) goto L_089D0988;
    return;
L_089D0988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089D0998u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 803u, 0x08883C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0998u) goto L_089D0998;
    return;
L_089D0998:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D09C4;
      }
      goto L_089D09A0;
    }
L_089D09A0:
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_089D09A4;
L_089D09A4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x089D09B4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 714u, 0x089CED14u>(ctx, &aot_mem) && ctx.pc == 0x089D09B4u) goto L_089D09B4;
    return;
L_089D09B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089D09C4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 803u, 0x08883C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089D09C4u) goto L_089D09C4;
    return;
L_089D09C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D09E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0A04u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_089D0708;
L_089D0A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D0A1C;
      }
      goto L_089D0A14;
    }
L_089D0A14:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089D0A1C;
L_089D0A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089D0A28u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 840u, 0x08883F84u>(ctx, &aot_mem) && ctx.pc == 0x089D0A28u) goto L_089D0A28;
    return;
L_089D0A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089D0A34u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08883224u>(ctx, &aot_mem) && ctx.pc == 0x089D0A34u) goto L_089D0A34;
    return;
L_089D0A34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0A48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0A84u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D0A84u) goto L_089D0A84;
    return;
L_089D0A84:
    ctx.gpr[31] = (0x089D0A8Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 614u, 0x08882DBCu>(ctx, &aot_mem) && ctx.pc == 0x089D0A8Cu) goto L_089D0A8C;
    return;
L_089D0A8C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089D0A98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 625u, 0x08882EF4u>(ctx, &aot_mem) && ctx.pc == 0x089D0A98u) goto L_089D0A98;
    return;
L_089D0A98:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(436));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0AACu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_089D0708;
L_089D0AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D0AC4;
      }
      goto L_089D0ABC;
    }
L_089D0ABC:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    goto L_089D0AC4;
L_089D0AC4:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089D0AD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 4u, 0x0888402Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0AD4u) goto L_089D0AD4;
    return;
L_089D0AD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(452));
    ctx.gpr[31] = (0x089D0AE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 672u, 0x08883264u>(ctx, &aot_mem) && ctx.pc == 0x089D0AE4u) goto L_089D0AE4;
    return;
L_089D0AE4:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
      if (branch_taken) {
          goto L_089D0B08;
      }
      goto L_089D0AF8;
    }
L_089D0AF8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0B08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7916));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x089D0B08u) goto L_089D0B08;
    return;
L_089D0B08:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
      if (branch_taken) {
          goto L_089D0B44;
      }
      goto L_089D0B18;
    }
L_089D0B18:
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_089D0B1C;
L_089D0B1C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D0B1C;
      }
      goto L_089D0B44;
    }
L_089D0B44:
    ctx.gpr[30] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(456));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0B5Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 806u, 0x089CF4CCu>(ctx, &aot_mem) && ctx.pc == 0x089D0B5Cu) goto L_089D0B5C;
    return;
L_089D0B5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0B68u);
    ctx.gpr[5] = (0u | 259u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 695u, 0x089CEBBCu>(ctx, &aot_mem) && ctx.pc == 0x089D0B68u) goto L_089D0B68;
    return;
L_089D0B68:
    ctx.gpr[31] = (0x089D0B70u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 625u, 0x08882EF4u>(ctx, &aot_mem) && ctx.pc == 0x089D0B70u) goto L_089D0B70;
    return;
L_089D0B70:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089D0B7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D0760;
L_089D0B7C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0B88u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08883224u>(ctx, &aot_mem) && ctx.pc == 0x089D0B88u) goto L_089D0B88;
    return;
L_089D0B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
      if (branch_taken) {
          goto L_089D0BA4;
      }
      goto L_089D0B94;
    }
L_089D0B94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    goto L_089D0BA4;
L_089D0BA4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089D0BBC;
      }
      goto L_089D0BAC;
    }
L_089D0BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    goto L_089D0BBC;
L_089D0BBC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_089D0BEC;
      }
      goto L_089D0BCC;
    }
L_089D0BCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0BDCu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 69u, 0x08884464u>(ctx, &aot_mem) && ctx.pc == 0x089D0BDCu) goto L_089D0BDC;
    return;
L_089D0BDC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D0BCC;
      }
      goto L_089D0BEC;
    }
L_089D0BEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 262u);
    ctx.gpr[6] = (0u | 277u);
    ctx.gpr[31] = (0x089D0C00u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 699u, 0x089CEC00u>(ctx, &aot_mem) && ctx.pc == 0x089D0C00u) goto L_089D0C00;
    return;
L_089D0C00:
    ctx.gpr[31] = (0x089D0C08u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 807u, 0x089CF4F4u>(ctx, &aot_mem) && ctx.pc == 0x089D0C08u) goto L_089D0C08;
    return;
L_089D0C08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0C18u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 664u, 0x088831D0u>(ctx, &aot_mem) && ctx.pc == 0x089D0C18u) goto L_089D0C18;
    return;
L_089D0C18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[31] = (0x089D0C24u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08883224u>(ctx, &aot_mem) && ctx.pc == 0x089D0C24u) goto L_089D0C24;
    return;
L_089D0C24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0C54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0C80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 625u, 0x08882EF4u>(ctx, &aot_mem) && ctx.pc == 0x089D0C80u) goto L_089D0C80;
    return;
L_089D0C80:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0C94u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 806u, 0x089CF4CCu>(ctx, &aot_mem) && ctx.pc == 0x089D0C94u) goto L_089D0C94;
    return;
L_089D0C94:
    ctx.gpr[31] = (0x089D0C9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D0C9Cu) goto L_089D0C9C;
    return;
L_089D0C9C:
    ctx.gpr[31] = (0x089D0CA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D0760;
L_089D0CA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 276u);
    ctx.gpr[6] = (0u | 272u);
    ctx.gpr[31] = (0x089D0CB8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 699u, 0x089CEC00u>(ctx, &aot_mem) && ctx.pc == 0x089D0CB8u) goto L_089D0CB8;
    return;
L_089D0CB8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089D0CC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D09E8;
L_089D0CC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0CD4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 664u, 0x088831D0u>(ctx, &aot_mem) && ctx.pc == 0x089D0CD4u) goto L_089D0CD4;
    return;
L_089D0CD4:
    ctx.gpr[31] = (0x089D0CDCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 807u, 0x089CF4F4u>(ctx, &aot_mem) && ctx.pc == 0x089D0CDCu) goto L_089D0CDC;
    return;
L_089D0CDC:
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
L_089D0CF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0D18u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D0708;
L_089D0D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089D0D28u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 768u, 0x08883A94u>(ctx, &aot_mem) && ctx.pc == 0x089D0D28u) goto L_089D0D28;
    return;
L_089D0D28:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0D40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0D84u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 728u, 0x089CEED0u>(ctx, &aot_mem) && ctx.pc == 0x089D0D84u) goto L_089D0D84;
    return;
L_089D0D84:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089D0D90u);
    ctx.gpr[5] = (0u | 259u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 695u, 0x089CEBBCu>(ctx, &aot_mem) && ctx.pc == 0x089D0D90u) goto L_089D0D90;
    return;
L_089D0D90:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089D0DA0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 806u, 0x089CF4CCu>(ctx, &aot_mem) && ctx.pc == 0x089D0DA0u) goto L_089D0DA0;
    return;
L_089D0DA0:
    ctx.gpr[31] = (0x089D0DA8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 625u, 0x08882EF4u>(ctx, &aot_mem) && ctx.pc == 0x089D0DA8u) goto L_089D0DA8;
    return;
L_089D0DA8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089D0DB4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089D0760;
L_089D0DB4:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089D0DC0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08883224u>(ctx, &aot_mem) && ctx.pc == 0x089D0DC0u) goto L_089D0DC0;
    return;
L_089D0DC0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_089D0DE8;
      }
      goto L_089D0DC8;
    }
L_089D0DC8:
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089D0DE0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 79u, 0x0888459Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0DE0u) goto L_089D0DE0;
    return;
L_089D0DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089D0E00;
      }
      goto L_089D0DE8;
    }
L_089D0DE8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089D0DFCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x089D0DFCu) goto L_089D0DFC;
    return;
L_089D0DFC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089D0E00;
L_089D0E00:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089D0E0Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 68u, 0x08884448u>(ctx, &aot_mem) && ctx.pc == 0x089D0E0Cu) goto L_089D0E0C;
    return;
L_089D0E0C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089D0E24;
      }
      goto L_089D0E14;
    }
L_089D0E14:
    ctx.gpr[31] = (0x089D0E1Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 614u, 0x08882DBCu>(ctx, &aot_mem) && ctx.pc == 0x089D0E1Cu) goto L_089D0E1C;
    return;
L_089D0E1C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089D0E24;
L_089D0E24:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0E30u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 664u, 0x088831D0u>(ctx, &aot_mem) && ctx.pc == 0x089D0E30u) goto L_089D0E30;
    return;
L_089D0E30:
    ctx.gpr[31] = (0x089D0E38u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 807u, 0x089CF4F4u>(ctx, &aot_mem) && ctx.pc == 0x089D0E38u) goto L_089D0E38;
    return;
L_089D0E38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0E60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0E94u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 725u, 0x089CEE48u>(ctx, &aot_mem) && ctx.pc == 0x089D0E94u) goto L_089D0E94;
    return;
L_089D0E94:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089D0EA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7884));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 735u, 0x089CEF88u>(ctx, &aot_mem) && ctx.pc == 0x089D0EA8u) goto L_089D0EA8;
    return;
L_089D0EA8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089D0EBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7872));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 735u, 0x089CEF88u>(ctx, &aot_mem) && ctx.pc == 0x089D0EBCu) goto L_089D0EBC;
    return;
L_089D0EBC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0EC8u);
    ctx.gpr[5] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 695u, 0x089CEBBCu>(ctx, &aot_mem) && ctx.pc == 0x089D0EC8u) goto L_089D0EC8;
    return;
L_089D0EC8:
    ctx.gpr[31] = (0x089D0ED0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D0CF8;
L_089D0ED0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0EDCu);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 695u, 0x089CEBBCu>(ctx, &aot_mem) && ctx.pc == 0x089D0EDCu) goto L_089D0EDC;
    return;
L_089D0EDC:
    ctx.gpr[31] = (0x089D0EE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D0CF8;
L_089D0EE4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0EF0u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 690u, 0x089CEB88u>(ctx, &aot_mem) && ctx.pc == 0x089D0EF0u) goto L_089D0EF0;
    return;
L_089D0EF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0F10;
      }
      goto L_089D0EF8;
    }
L_089D0EF8:
    ctx.gpr[31] = (0x089D0F00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D0CF8;
L_089D0F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D0F50;
      }
      goto L_089D0F10;
    }
L_089D0F10:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089D0F24u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 707u, 0x08883550u>(ctx, &aot_mem) && ctx.pc == 0x089D0F24u) goto L_089D0F24;
    return;
L_089D0F24:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089D0F38u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 79u, 0x0888459Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0F38u) goto L_089D0F38;
    return;
L_089D0F38:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D0F44u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 687u, 0x08883358u>(ctx, &aot_mem) && ctx.pc == 0x089D0F44u) goto L_089D0F44;
    return;
L_089D0F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_089D0F50;
L_089D0F50:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x089D0F68u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x089D0F68u) goto L_089D0F68;
    return;
L_089D0F68:
    ctx.gpr[31] = (0x089D0F70u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 614u, 0x08882DBCu>(ctx, &aot_mem) && ctx.pc == 0x089D0F70u) goto L_089D0F70;
    return;
L_089D0F70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[31] = (0x089D0F88u);
    ctx.gpr[8] = (0u | 1u);
    goto L_089D0D40;
L_089D0F88:
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
L_089D0FA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0FE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7860));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 735u, 0x089CEF88u>(ctx, &aot_mem) && ctx.pc == 0x089D0FE8u) goto L_089D0FE8;
    return;
L_089D0FE8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0FFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7844));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 735u, 0x089CEF88u>(ctx, &aot_mem) && ctx.pc == 0x089D0FFCu) goto L_089D0FFC;
    return;
L_089D0FFC:
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1010u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 725u, 0x089CEE48u>(ctx, &aot_mem) && ctx.pc == 0x089D1010u) goto L_089D1010;
    return;
L_089D1010:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D1014;
L_089D1014:
    ctx.gpr[31] = (0x089D101Cu);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 690u, 0x089CEB88u>(ctx, &aot_mem) && ctx.pc == 0x089D101Cu) goto L_089D101C;
    return;
L_089D101C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1048;
      }
      goto L_089D1024;
    }
L_089D1024:
    ctx.gpr[31] = (0x089D102Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 709u, 0x089CECCCu>(ctx, &aot_mem) && ctx.pc == 0x089D102Cu) goto L_089D102C;
    return;
L_089D102C:
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1040u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 725u, 0x089CEE48u>(ctx, &aot_mem) && ctx.pc == 0x089D1040u) goto L_089D1040;
    return;
L_089D1040:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089D1014;
      }
      goto L_089D1048;
    }
L_089D1048:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1054u);
    ctx.gpr[5] = (0u | 267u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 695u, 0x089CEBBCu>(ctx, &aot_mem) && ctx.pc == 0x089D1054u) goto L_089D1054;
    return;
L_089D1054:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1068u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 917u, 0x089CFECCu>(ctx, &aot_mem) && ctx.pc == 0x089D1068u) goto L_089D1068;
    return;
L_089D1068:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089D107Cu);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 788u, 0x089CF38Cu>(ctx, &aot_mem) && ctx.pc == 0x089D107Cu) goto L_089D107C;
    return;
L_089D107C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D1088u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 681u, 0x088832F4u>(ctx, &aot_mem) && ctx.pc == 0x089D1088u) goto L_089D1088;
    return;
L_089D1088:
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D10A0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 79u, 0x0888459Cu>(ctx, &aot_mem) && ctx.pc == 0x089D10A0u) goto L_089D10A0;
    return;
L_089D10A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D10B8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_089D0D40;
L_089D10B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D10DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D110Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 806u, 0x089CF4CCu>(ctx, &aot_mem) && ctx.pc == 0x089D110Cu) goto L_089D110C;
    return;
L_089D110C:
    ctx.gpr[31] = (0x089D1114u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D1114u) goto L_089D1114;
    return;
L_089D1114:
    ctx.gpr[31] = (0x089D111Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 709u, 0x089CECCCu>(ctx, &aot_mem) && ctx.pc == 0x089D111Cu) goto L_089D111C;
    return;
L_089D111C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 267u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089D1140;
      }
      goto L_089D112C;
    }
L_089D112C:
    ctx.gpr[6] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 44u);
      if (branch_taken) {
          goto L_089D1150;
      }
      goto L_089D1138;
    }
L_089D1138:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089D1164;
      }
      goto L_089D1140;
    }
L_089D1140:
    ctx.gpr[31] = (0x089D1148u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D0FA8;
L_089D1148:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1174;
      }
      goto L_089D1150;
    }
L_089D1150:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D115Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_089D0E60;
L_089D115C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1174;
      }
      goto L_089D1164;
    }
L_089D1164:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D1174u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7832));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x089D1174u) goto L_089D1174;
    return;
L_089D1174:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 262u);
    ctx.gpr[6] = (0u | 264u);
    ctx.gpr[31] = (0x089D1188u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 699u, 0x089CEC00u>(ctx, &aot_mem) && ctx.pc == 0x089D1188u) goto L_089D1188;
    return;
L_089D1188:
    ctx.gpr[31] = (0x089D1190u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 807u, 0x089CF4F4u>(ctx, &aot_mem) && ctx.pc == 0x089D1190u) goto L_089D1190;
    return;
L_089D1190:
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
L_089D11A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D11C4u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D11C4u) goto L_089D11C4;
    return;
L_089D11C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D11D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D09E8;
L_089D11D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D11DCu);
    ctx.gpr[5] = (0u | 274u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 695u, 0x089CEBBCu>(ctx, &aot_mem) && ctx.pc == 0x089D11DCu) goto L_089D11DC;
    return;
L_089D11DC:
    ctx.gpr[31] = (0x089D11E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D0760;
L_089D11E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D11F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D123Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_089D11A8;
L_089D123C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (0u | 261u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089D1288;
      }
      goto L_089D124C;
    }
L_089D124C:
    ctx.gpr[31] = (0x089D1254u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 614u, 0x08882DBCu>(ctx, &aot_mem) && ctx.pc == 0x089D1254u) goto L_089D1254;
    return;
L_089D1254:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D1264u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 672u, 0x08883264u>(ctx, &aot_mem) && ctx.pc == 0x089D1264u) goto L_089D1264;
    return;
L_089D1264:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089D1270u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08883224u>(ctx, &aot_mem) && ctx.pc == 0x089D1270u) goto L_089D1270;
    return;
L_089D1270:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D127Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_089D11A8;
L_089D127C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089D124C;
      }
      goto L_089D1288;
    }
L_089D1288:
    ctx.gpr[5] = (0u | 260u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D12D0;
      }
      goto L_089D1294;
    }
L_089D1294:
    ctx.gpr[31] = (0x089D129Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 614u, 0x08882DBCu>(ctx, &aot_mem) && ctx.pc == 0x089D129Cu) goto L_089D129C;
    return;
L_089D129C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D12ACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 672u, 0x08883264u>(ctx, &aot_mem) && ctx.pc == 0x089D12ACu) goto L_089D12AC;
    return;
L_089D12AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089D12B8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08883224u>(ctx, &aot_mem) && ctx.pc == 0x089D12B8u) goto L_089D12B8;
    return;
L_089D12B8:
    ctx.gpr[31] = (0x089D12C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D12C0u) goto L_089D12C0;
    return;
L_089D12C0:
    ctx.gpr[31] = (0x089D12C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D0760;
L_089D12C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089D12E4;
      }
      goto L_089D12D0;
    }
L_089D12D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D12E0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 672u, 0x08883264u>(ctx, &aot_mem) && ctx.pc == 0x089D12E0u) goto L_089D12E0;
    return;
L_089D12E0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089D12E4;
L_089D12E4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D12F0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08883224u>(ctx, &aot_mem) && ctx.pc == 0x089D12F0u) goto L_089D12F0;
    return;
L_089D12F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 262u);
    ctx.gpr[6] = (0u | 266u);
    ctx.gpr[31] = (0x089D1304u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 699u, 0x089CEC00u>(ctx, &aot_mem) && ctx.pc == 0x089D1304u) goto L_089D1304;
    return;
L_089D1304:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D134Cu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 709u, 0x089CECCCu>(ctx, &aot_mem) && ctx.pc == 0x089D134Cu) goto L_089D134C;
    return;
L_089D134C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089D135Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 725u, 0x089CEE48u>(ctx, &aot_mem) && ctx.pc == 0x089D135Cu) goto L_089D135C;
    return;
L_089D135C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D1370u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 714u, 0x089CED14u>(ctx, &aot_mem) && ctx.pc == 0x089D1370u) goto L_089D1370;
    return;
L_089D1370:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D137Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 687u, 0x08883358u>(ctx, &aot_mem) && ctx.pc == 0x089D137Cu) goto L_089D137C;
    return;
L_089D137C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1388u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 728u, 0x089CEED0u>(ctx, &aot_mem) && ctx.pc == 0x089D1388u) goto L_089D1388;
    return;
L_089D1388:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D13A0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 906u, 0x089CFE00u>(ctx, &aot_mem) && ctx.pc == 0x089D13A0u) goto L_089D13A0;
    return;
L_089D13A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D13B0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 803u, 0x08883C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089D13B0u) goto L_089D13B0;
    return;
L_089D13B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
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
L_089D13FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    goto L_089D141C;
L_089D141C:
    ctx.gpr[31] = (0x089D1424u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 709u, 0x089CECCCu>(ctx, &aot_mem) && ctx.pc == 0x089D1424u) goto L_089D1424;
    return;
L_089D1424:
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1438u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 725u, 0x089CEE48u>(ctx, &aot_mem) && ctx.pc == 0x089D1438u) goto L_089D1438;
    return;
L_089D1438:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1444u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 690u, 0x089CEB88u>(ctx, &aot_mem) && ctx.pc == 0x089D1444u) goto L_089D1444;
    return;
L_089D1444:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D141C;
      }
      goto L_089D144C;
    }
L_089D144C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1458u);
    ctx.gpr[5] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 690u, 0x089CEB88u>(ctx, &aot_mem) && ctx.pc == 0x089D1458u) goto L_089D1458;
    return;
L_089D1458:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1474;
      }
      goto L_089D1460;
    }
L_089D1460:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D146Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 917u, 0x089CFECCu>(ctx, &aot_mem) && ctx.pc == 0x089D146Cu) goto L_089D146C;
    return;
L_089D146C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089D147C;
      }
      goto L_089D1474;
    }
L_089D1474:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089D147C;
L_089D147C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D1490u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 788u, 0x089CF38Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1490u) goto L_089D1490;
    return;
L_089D1490:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D149Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 728u, 0x089CEED0u>(ctx, &aot_mem) && ctx.pc == 0x089D149Cu) goto L_089D149C;
    return;
L_089D149C:
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
L_089D14B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D14E0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 785u, 0x089CF32Cu>(ctx, &aot_mem) && ctx.pc == 0x089D14E0u) goto L_089D14E0;
    return;
L_089D14E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089D1508;
      }
      goto L_089D14F0;
    }
L_089D14F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D14FCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 845u, 0x089CF978u>(ctx, &aot_mem) && ctx.pc == 0x089D14FCu) goto L_089D14FC;
    return;
L_089D14FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089D14F0;
      }
      goto L_089D1508;
    }
L_089D1508:
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D1524;
      }
      goto L_089D1514;
    }
L_089D1514:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D1524u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 845u, 0x089CF978u>(ctx, &aot_mem) && ctx.pc == 0x089D1524u) goto L_089D1524;
    return;
L_089D1524:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_089D1544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1568u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D1568u) goto L_089D1568;
    return;
L_089D1568:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1578u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089D14B4;
L_089D1578:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089D1590u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 906u, 0x089CFE00u>(ctx, &aot_mem) && ctx.pc == 0x089D1590u) goto L_089D1590;
    return;
L_089D1590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D15A0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 803u, 0x08883C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089D15A0u) goto L_089D15A0;
    return;
L_089D15A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089D15ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 68u, 0x08884448u>(ctx, &aot_mem) && ctx.pc == 0x089D15ACu) goto L_089D15AC;
    return;
L_089D15AC:
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
L_089D15C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D15F0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D01C4;
L_089D15F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D1618;
      }
      goto L_089D1600;
    }
L_089D1600:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D1610u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 711u, 0x088835B0u>(ctx, &aot_mem) && ctx.pc == 0x089D1610u) goto L_089D1610;
    return;
L_089D1610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D162C;
      }
      goto L_089D1618;
    }
L_089D1618:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D162Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_089D0854;
L_089D162C:
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
L_089D1644:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1668u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D1668u) goto L_089D1668;
    return;
L_089D1668:
    ctx.gpr[31] = (0x089D1670u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089D0724;
L_089D1670:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1688;
      }
      goto L_089D1678;
    }
L_089D1678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D1694;
      }
      goto L_089D1688;
    }
L_089D1688:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089D1734;
      }
      goto L_089D1694;
    }
L_089D1694:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D16A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 917u, 0x089CFECCu>(ctx, &aot_mem) && ctx.pc == 0x089D16A4u) goto L_089D16A4;
    return;
L_089D16A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089D1704;
      }
      goto L_089D16B8;
    }
L_089D16B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D16C8u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 711u, 0x088835B0u>(ctx, &aot_mem) && ctx.pc == 0x089D16C8u) goto L_089D16C8;
    return;
L_089D16C8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089D16F8;
      }
      goto L_089D16D0;
    }
L_089D16D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 26u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089D16F8;
L_089D16F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1734;
      }
      goto L_089D1704;
    }
L_089D1704:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D1724;
      }
      goto L_089D1710;
    }
L_089D1710:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D171Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 773u, 0x08883AF0u>(ctx, &aot_mem) && ctx.pc == 0x089D171Cu) goto L_089D171C;
    return;
L_089D171C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089D1734;
      }
      goto L_089D1724;
    }
L_089D1724:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D1730u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 768u, 0x08883A94u>(ctx, &aot_mem) && ctx.pc == 0x089D1730u) goto L_089D1730;
    return;
L_089D1730:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    goto L_089D1734;
L_089D1734:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D174Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x089D174Cu) goto L_089D174C;
    return;
L_089D174C:
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
L_089D1768:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1794u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D1794u) goto L_089D1794;
    return;
L_089D1794:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D17B8;
      }
      goto L_089D179C;
    }
L_089D179C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D17B8;
      }
      goto L_089D17A8;
    }
L_089D17A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D1794;
      }
      goto L_089D17B8;
    }
L_089D17B8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D17D0;
      }
      goto L_089D17C0;
    }
L_089D17C0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D17D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7808));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x089D17D0u) goto L_089D17D0;
    return;
L_089D17D0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D17F0;
      }
      goto L_089D17D8;
    }
L_089D17D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 33u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089D17F0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x089D17F0u) goto L_089D17F0;
    return;
L_089D17F0:
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089D17FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 614u, 0x08882DBCu>(ctx, &aot_mem) && ctx.pc == 0x089D17FCu) goto L_089D17FC;
    return;
L_089D17FC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D180Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 672u, 0x08883264u>(ctx, &aot_mem) && ctx.pc == 0x089D180Cu) goto L_089D180C;
    return;
L_089D180C:
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
L_089D1828:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-258));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D1954;
      }
      goto L_089D1850;
    }
L_089D1850:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7272)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1868:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1874u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D11F8;
L_089D1874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1960;
      }
      goto L_089D187C;
    }
L_089D187C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1888u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D0A48;
L_089D1888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1960;
      }
      goto L_089D1890;
    }
L_089D1890:
    ctx.gpr[31] = (0x089D1898u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D1898u) goto L_089D1898;
    return;
L_089D1898:
    ctx.gpr[31] = (0x089D18A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D0760;
L_089D18A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 262u);
    ctx.gpr[6] = (0u | 259u);
    ctx.gpr[31] = (0x089D18B4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 699u, 0x089CEC00u>(ctx, &aot_mem) && ctx.pc == 0x089D18B4u) goto L_089D18B4;
    return;
L_089D18B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1960;
      }
      goto L_089D18BC;
    }
L_089D18BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D18C8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D10DC;
L_089D18C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1960;
      }
      goto L_089D18D0;
    }
L_089D18D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D18DCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D0C54;
L_089D18DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1960;
      }
      goto L_089D18E4;
    }
L_089D18E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D18F0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D1544;
L_089D18F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1960;
      }
      goto L_089D18F8;
    }
L_089D18F8:
    ctx.gpr[31] = (0x089D1900u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 679u, 0x089CEA98u>(ctx, &aot_mem) && ctx.pc == 0x089D1900u) goto L_089D1900;
    return;
L_089D1900:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D190Cu);
    ctx.gpr[5] = (0u | 265u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 690u, 0x089CEB88u>(ctx, &aot_mem) && ctx.pc == 0x089D190Cu) goto L_089D190C;
    return;
L_089D190C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1924;
      }
      goto L_089D1914;
    }
L_089D1914:
    ctx.gpr[31] = (0x089D191Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D1328;
L_089D191C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D192C;
      }
      goto L_089D1924;
    }
L_089D1924:
    ctx.gpr[31] = (0x089D192Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D13FC;
L_089D192C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1960;
      }
      goto L_089D1934;
    }
L_089D1934:
    ctx.gpr[31] = (0x089D193Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D1644;
L_089D193C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089D1960;
      }
      goto L_089D1944;
    }
L_089D1944:
    ctx.gpr[31] = (0x089D194Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D1768;
L_089D194C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089D1960;
      }
      goto L_089D1954;
    }
L_089D1954:
    ctx.gpr[31] = (0x089D195Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D15C8;
L_089D195C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089D1960;
L_089D1960:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1974:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 201 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D19B0;
      }
      goto L_089D19A0;
    }
L_089D19A0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D19B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7956));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 553u, 0x08AAECB0u>(ctx, &aot_mem) && ctx.pc == 0x089D19B0u) goto L_089D19B0;
    return;
L_089D19B0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D19F0;
      }
      goto L_089D19B8;
    }
L_089D19B8:
    ctx.gpr[31] = (0x089D19C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089D0724;
L_089D19C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D19F0;
      }
      goto L_089D19C8;
    }
L_089D19C8:
    ctx.gpr[31] = (0x089D19D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D1828;
L_089D19D0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D19E0u);
    ctx.gpr[5] = (0u | 59u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 690u, 0x089CEB88u>(ctx, &aot_mem) && ctx.pc == 0x089D19E0u) goto L_089D19E0;
    return;
L_089D19E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089D19B0;
      }
      goto L_089D19F0;
    }
L_089D19F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1A10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1A60u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 77u, 0x08884564u>(ctx, &aot_mem) && ctx.pc == 0x089D1A60u) goto L_089D1A60;
    return;
L_089D1A60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x089D1A84u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 714u, 0x089CED14u>(ctx, &aot_mem) && ctx.pc == 0x089D1A84u) goto L_089D1A84;
    return;
L_089D1A84:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089D1A98u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 714u, 0x089CED14u>(ctx, &aot_mem) && ctx.pc == 0x089D1A98u) goto L_089D1A98;
    return;
L_089D1A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089D1AA4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 768u, 0x08883A94u>(ctx, &aot_mem) && ctx.pc == 0x089D1AA4u) goto L_089D1AA4;
    return;
L_089D1AA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1AB0u);
    ctx.gpr[5] = (0u | 123u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 695u, 0x089CEBBCu>(ctx, &aot_mem) && ctx.pc == 0x089D1AB0u) goto L_089D1AB0;
    return;
L_089D1AB0:
    ctx.gpr[19] = (0u | 125u);
    ctx.gpr[18] = (0u | 278u);
    ctx.gpr[17] = (0u | 61u);
    goto L_089D1ABC;
L_089D1ABC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1AC8u);
    ctx.gpr[5] = (0u | 59u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 690u, 0x089CEB88u>(ctx, &aot_mem) && ctx.pc == 0x089D1AC8u) goto L_089D1AC8;
    return;
L_089D1AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089D1ADC;
      }
      goto L_089D1AD4;
    }
L_089D1AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1B8C;
      }
      goto L_089D1ADC;
    }
L_089D1ADC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089D1AE8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 867u, 0x089CFB50u>(ctx, &aot_mem) && ctx.pc == 0x089D1AE8u) goto L_089D1AE8;
    return;
L_089D1AE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 92 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1B18;
      }
      goto L_089D1AF8;
    }
L_089D1AF8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1B5C;
      }
      goto L_089D1B04;
    }
L_089D1B04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1B10u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 855u, 0x089CFA3Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1B10u) goto L_089D1B10;
    return;
L_089D1B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1B68;
      }
      goto L_089D1B18;
    }
L_089D1B18:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089D1B5C;
      }
      goto L_089D1B20;
    }
L_089D1B20:
    ctx.gpr[31] = (0x089D1B28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 684u, 0x089CEB00u>(ctx, &aot_mem) && ctx.pc == 0x089D1B28u) goto L_089D1B28;
    return;
L_089D1B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089D1B48;
      }
      goto L_089D1B34;
    }
L_089D1B34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1B40u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 887u, 0x089CFCACu>(ctx, &aot_mem) && ctx.pc == 0x089D1B40u) goto L_089D1B40;
    return;
L_089D1B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1B54;
      }
      goto L_089D1B48;
    }
L_089D1B48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1B54u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 855u, 0x089CFA3Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1B54u) goto L_089D1B54;
    return;
L_089D1B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1B68;
      }
      goto L_089D1B5C;
    }
L_089D1B5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1B68u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 887u, 0x089CFCACu>(ctx, &aot_mem) && ctx.pc == 0x089D1B68u) goto L_089D1B68;
    return;
L_089D1B68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1B74u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 690u, 0x089CEB88u>(ctx, &aot_mem) && ctx.pc == 0x089D1B74u) goto L_089D1B74;
    return;
L_089D1B74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089D1ABC;
      }
      goto L_089D1B7C;
    }
L_089D1B7C:
    ctx.gpr[31] = (0x089D1B84u);
    ctx.gpr[5] = (0u | 59u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 690u, 0x089CEB88u>(ctx, &aot_mem) && ctx.pc == 0x089D1B84u) goto L_089D1B84;
    return;
L_089D1B84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1ABC;
      }
      goto L_089D1B8C;
    }
L_089D1B8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 125u);
    ctx.gpr[6] = (0u | 123u);
    ctx.gpr[31] = (0x089D1BA0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 699u, 0x089CEC00u>(ctx, &aot_mem) && ctx.pc == 0x089D1BA0u) goto L_089D1BA0;
    return;
L_089D1BA0:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089D1BACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 875u, 0x089CFBE4u>(ctx, &aot_mem) && ctx.pc == 0x089D1BACu) goto L_089D1BAC;
    return;
L_089D1BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32767));
    ctx.gpr[17] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[31] = (0x089D1BD8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 171u, 0x08A59040u>(ctx, &aot_mem) && ctx.pc == 0x089D1BD8u) goto L_089D1BD8;
    return;
L_089D1BD8:
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] << 15u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-32705));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089D1C20u);
    ctx.gpr[17] = (ctx.gpr[7] & ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 174u, 0x08A5906Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1C20u) goto L_089D1C20;
    return;
L_089D1C20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] & 32704u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1C6C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1C84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1C8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1CE4u);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089D1CE4u) goto L_089D1CE4;
    return;
L_089D1CE4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[5] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_089D1D0C;
      }
      goto L_089D1CF0;
    }
L_089D1CF0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D1D08u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_089D1FB8;
L_089D1D08:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_089D1D0C;
L_089D1D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D1D38;
      }
      goto L_089D1D1C;
    }
L_089D1D1C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D1D30;
      }
      goto L_089D1D24;
    }
L_089D1D24:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089D1D30;
L_089D1D30:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D1E34;
      }
      goto L_089D1D38;
    }
L_089D1D38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089D1D78;
      }
      goto L_089D1D68;
    }
L_089D1D68:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089D1D84;
      }
      goto L_089D1D78;
    }
L_089D1D78:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_089D1D84;
L_089D1D84:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1DC4;
      }
      goto L_089D1D8C;
    }
L_089D1D8C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[31] = (0x089D1DA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x089D1DA0u) goto L_089D1DA0;
    return;
L_089D1DA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_089D1DC4;
      }
      goto L_089D1DB0;
    }
L_089D1DB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D1DBCu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x089D1DBCu) goto L_089D1DBC;
    return;
L_089D1DBC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_089D1DC4;
L_089D1DC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D1DD8;
      }
      goto L_089D1DD0;
    }
L_089D1DD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089D1DF4;
      }
      goto L_089D1DD8;
    }
L_089D1DD8:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D1DECu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x089D1DECu) goto L_089D1DEC;
    return;
L_089D1DEC:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089D1DF4;
L_089D1DF4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D1E0C;
      }
      goto L_089D1DFC;
    }
L_089D1DFC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D1DFC;
      }
      goto L_089D1E0C;
    }
L_089D1E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089D1E20;
      }
      goto L_089D1E18;
    }
L_089D1E18:
    ctx.gpr[31] = (0x089D1E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x089D1E20u) goto L_089D1E20;
    return;
L_089D1E20:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_089D1E34;
L_089D1E34:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1E64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D1EE8;
      }
      goto L_089D1E88;
    }
L_089D1E88:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D1EDC;
      }
      goto L_089D1E98;
    }
L_089D1E98:
    ctx.gpr[31] = (0x089D1EA0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x089D1EA0u) goto L_089D1EA0;
    return;
L_089D1EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D1ED0;
      }
      goto L_089D1EB0;
    }
L_089D1EB0:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089D1ED0;
      }
      goto L_089D1EBC;
    }
L_089D1EBC:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x089D1ECCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x089D1ECCu) goto L_089D1ECC;
    return;
L_089D1ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_089D1ED0;
L_089D1ED0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D1EE8;
      }
      goto L_089D1EDC;
    }
L_089D1EDC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D1E88;
      }
      goto L_089D1EE8;
    }
L_089D1EE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1EFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D1F44;
      }
      goto L_089D1F24;
    }
L_089D1F24:
    ctx.gpr[31] = (0x089D1F2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x089D1F2Cu) goto L_089D1F2C;
    return;
L_089D1F2C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D1F24;
      }
      goto L_089D1F40;
    }
L_089D1F40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089D1F44;
L_089D1F44:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1F64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D1FA4;
      }
      goto L_089D1F88;
    }
L_089D1F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089D1F94u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D2044;
L_089D1F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D1F88;
      }
      goto L_089D1FA4;
    }
L_089D1FA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1FB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[8] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[8] >> 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D2030;
      }
      goto L_089D2020;
    }
L_089D2020:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089D202Cu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089D202Cu) goto L_089D202C;
    return;
L_089D202C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089D2030;
L_089D2030:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2044:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (16179u << 16u);
      if (branch_taken) {
          goto L_089D20B4;
      }
      goto L_089D2064;
    }
L_089D2064:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(53)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (17096u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[10] = (0u | 128u);
    ctx.gpr[11] = (0u | 128u);
    ctx.gpr[31] = (0x089D20B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x089D20B4u) goto L_089D20B4;
    return;
L_089D20B4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D20C4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27908)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27912)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-27904), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-27896), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-27900), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-27892), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-27888), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D213C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D2150u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 41u, 0x08A28764u>(ctx, &aot_mem) && ctx.pc == 0x089D2150u) goto L_089D2150;
    return;
L_089D2150:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D21DC;
      }
      goto L_089D2194;
    }
L_089D2194:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_089D21CC;
      }
      goto L_089D219C;
    }
L_089D219C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_089D21CC;
      }
      goto L_089D21A4;
    }
L_089D21A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_089D21CC;
      }
      goto L_089D21B4;
    }
L_089D21B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_089D21CC;
    }
    goto L_089D21C0;
L_089D21C0:
    ctx.gpr[31] = (0x089D21C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089D21C8u) goto L_089D21C8;
    return;
L_089D21C8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_089D21CC;
L_089D21CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D21DC;
      }
      goto L_089D21D4;
    }
L_089D21D4:
    ctx.gpr[31] = (0x089D21DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x089D21DCu) goto L_089D21DC;
    return;
L_089D21DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D21F0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27824));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17680), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17676), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17672), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-144));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[6] = (0u | 69u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    goto L_089D2234;
L_089D2234:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2244;
      }
      goto L_089D223C;
    }
L_089D223C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(84), 0u);
      if (branch_taken) {
          goto L_089D2248;
      }
      goto L_089D2244;
    }
L_089D2244:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    goto L_089D2248;
L_089D2248:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089D2258;
      }
      goto L_089D2250;
    }
L_089D2250:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(80), 0u);
      if (branch_taken) {
          goto L_089D225C;
      }
      goto L_089D2258;
    }
L_089D2258:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    goto L_089D225C;
L_089D225C:
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(144));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 70 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_089D2234;
      }
      goto L_089D2278;
    }
L_089D2278:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D22C0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089D2784;
L_089D22C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D22CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D2318;
      }
      goto L_089D22EC;
    }
L_089D22EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089D2354;
      }
      goto L_089D22F4;
    }
L_089D22F4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17680));
    ctx.gpr[31] = (0x089D230Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17672));
    goto L_089D25A8;
L_089D230C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089D2354;
      }
      goto L_089D2318;
    }
L_089D2318:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D2330;
      }
      goto L_089D2320;
    }
L_089D2320:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2354;
      }
      goto L_089D2328;
    }
L_089D2328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2354;
      }
      goto L_089D2330;
    }
L_089D2330:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17676));
    ctx.gpr[31] = (0x089D2348u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17672));
    goto L_089D25A8;
L_089D2348:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089D2354;
      }
      goto L_089D2354;
    }
L_089D2354:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2232u << 16u);
        goto L_089D23D0;
    }
    goto L_089D2380;
L_089D2380:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089D23D0;
      }
      goto L_089D2394;
    }
L_089D2394:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17676));
    ctx.gpr[31] = (0x089D23ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17672));
    goto L_089D25A8;
L_089D23AC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089D23D0;
      }
      goto L_089D23C4;
    }
L_089D23C4:
    ctx.gpr[31] = (0x089D23CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D26C4;
L_089D23CC:
    ctx.gpr[4] = (2232u << 16u);
    goto L_089D23D0;
L_089D23D0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D2438;
      }
      goto L_089D2418;
    }
L_089D2418:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17676));
    ctx.gpr[31] = (0x089D2430u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17680));
    goto L_089D25A8;
L_089D2430:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089D2438;
L_089D2438:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17680)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2480;
      }
      goto L_089D246C;
    }
L_089D246C:
    ctx.gpr[31] = (0x089D2474u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    goto L_089D2C68;
L_089D2474:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D246C;
      }
      goto L_089D2480;
    }
L_089D2480:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17676)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 31u);
      if (branch_taken) {
          goto L_089D24BC;
      }
      goto L_089D249C;
    }
L_089D249C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089D24B0;
      }
      goto L_089D24A4;
    }
L_089D24A4:
    ctx.gpr[31] = (0x089D24ACu);
    // nop
    goto L_089D2364;
L_089D24AC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    goto L_089D24B0;
L_089D24B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D249C;
      }
      goto L_089D24BC;
    }
L_089D24BC:
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
L_089D24D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-17680)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_089D2540;
      }
      goto L_089D2504;
    }
L_089D2504:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-17680));
    ctx.gpr[16] = (0u | 3u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-17672));
    goto L_089D2514;
L_089D2514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089D2534;
      }
      goto L_089D2520;
    }
L_089D2520:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D2530u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089D25A8;
L_089D2530:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[16]));
    goto L_089D2534;
L_089D2534:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2514;
      }
      goto L_089D2540;
    }
L_089D2540:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-17676)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_089D2584;
      }
      goto L_089D254C;
    }
L_089D254C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-17676));
    ctx.gpr[16] = (0u | 3u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-17672));
    goto L_089D2558;
L_089D2558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089D2578;
      }
      goto L_089D2564;
    }
L_089D2564:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D2574u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089D25A8;
L_089D2574:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[16]));
    goto L_089D2578;
L_089D2578:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2558;
      }
      goto L_089D2584;
    }
L_089D2584:
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
L_089D25A8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089D25CC;
      }
      goto L_089D25B4;
    }
L_089D25B4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D25E8;
      }
      goto L_089D25C4;
    }
L_089D25C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(84), 0u);
      if (branch_taken) {
          goto L_089D25E8;
      }
      goto L_089D25CC;
    }
L_089D25CC:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D25DC;
      }
      goto L_089D25D4;
    }
L_089D25D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(80), 0u);
      if (branch_taken) {
          goto L_089D25E8;
      }
      goto L_089D25DC;
    }
L_089D25DC:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    goto L_089D25E8;
L_089D25E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2608;
      }
      goto L_089D2604;
    }
L_089D2604:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    goto L_089D2608;
L_089D2608:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-17744));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    goto L_089D263C;
L_089D263C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D2694;
      }
      goto L_089D2648;
    }
L_089D2648:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x089D2660u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x08864708u>(ctx, &aot_mem) && ctx.pc == 0x089D2660u) goto L_089D2660;
    return;
L_089D2660:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089D2674;
      }
      goto L_089D266C;
    }
L_089D266C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D26A8;
      }
      goto L_089D2674;
    }
L_089D2674:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D2688u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 99u, 0x08864748u>(ctx, &aot_mem) && ctx.pc == 0x089D2688u) goto L_089D2688;
    return;
L_089D2688:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089D26A8;
      }
      goto L_089D2694;
    }
L_089D2694:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089D263C;
      }
      goto L_089D26A4;
    }
L_089D26A4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089D26A8;
L_089D26A8:
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
L_089D26C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-17744));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7827));
    goto L_089D26FC;
L_089D26FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089D271C;
      }
      goto L_089D2708;
    }
L_089D2708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089D2714u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 97u, 0x08864728u>(ctx, &aot_mem) && ctx.pc == 0x089D2714u) goto L_089D2714;
    return;
L_089D2714:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    goto L_089D271C;
L_089D271C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089D26FC;
      }
      goto L_089D272C;
    }
L_089D272C:
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
L_089D274C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (2205u << 16u);
    ctx.gpr[5] = (0u | 70u);
    ctx.gpr[6] = (0u | 144u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27824));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D2778u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8568));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x089D2778u) goto L_089D2778;
    return;
L_089D2778:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2784:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17672)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[9] & 255u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089D284C;
      }
      goto L_089D27D4;
    }
L_089D27D4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17672));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17680));
    ctx.gpr[31] = (0x089D27E8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_089D25A8;
L_089D27E8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(88), 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089D2860;
      }
      goto L_089D2838;
    }
L_089D2838:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089D2864;
      }
      goto L_089D284C;
    }
L_089D284C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089D2858u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7176));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089D2858u) goto L_089D2858;
    return;
L_089D2858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D2C3C;
      }
      goto L_089D2860;
    }
L_089D2860:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(92), 0u);
    goto L_089D2864;
L_089D2864:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2880;
      }
      goto L_089D2870;
    }
L_089D2870:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(136));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089D2884;
      }
      goto L_089D2880;
    }
L_089D2880:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(139), static_cast<std::uint8_t>(0u));
    goto L_089D2884;
L_089D2884:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[20] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2894;
    }
L_089D2894:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[20]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7128)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D28AC:
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D28CC;
    }
L_089D28CC:
    ctx.gpr[5] = (0u | 31u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D28E8;
    }
L_089D28E8:
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2908;
    }
L_089D2908:
    ctx.gpr[5] = (0u | 31u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2924;
    }
L_089D2924:
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(136));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2968;
    }
L_089D2968:
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D29A8;
    }
L_089D29A8:
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D29C0;
    }
L_089D29C0:
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D2A10u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089D2610;
L_089D2A10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2A18;
    }
L_089D2A18:
    ctx.gpr[4] = (0u | 81u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2A48;
    }
L_089D2A48:
    ctx.gpr[5] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2A60;
    }
L_089D2A60:
    ctx.gpr[4] = (0u | 26u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2A80;
    }
L_089D2A80:
    ctx.gpr[5] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2ABC;
    }
L_089D2ABC:
    ctx.gpr[5] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2AF8;
    }
L_089D2AF8:
    ctx.gpr[5] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2B2C;
    }
L_089D2B2C:
    ctx.gpr[5] = (0u | 21u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2B60;
    }
L_089D2B60:
    ctx.gpr[5] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2B90;
    }
L_089D2B90:
    ctx.gpr[5] = (0u | 58u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2BBC;
    }
L_089D2BBC:
    ctx.gpr[5] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2BE4;
    }
L_089D2BE4:
    ctx.gpr[5] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2C14;
    }
L_089D2C14:
    ctx.gpr[5] = (0u | 41u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D2C38;
      }
      goto L_089D2C38;
    }
L_089D2C38:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    goto L_089D2C3C;
L_089D2C3C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2C68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1312));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1260), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1264), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1268), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1272), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1276), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1280), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1284), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1288), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1292), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1296), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1300), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1304), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D2D74;
      }
      goto L_089D2CBC;
    }
L_089D2CBC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D2D74;
      }
      goto L_089D2D08;
    }
L_089D2D08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(140)));
    ctx.gpr[16] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-17680));
      if (branch_taken) {
          goto L_089D2D50;
      }
      goto L_089D2D18;
    }
L_089D2D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D2D30;
      }
      goto L_089D2D28;
    }
L_089D2D28:
    ctx.gpr[31] = (0x089D2D30u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_089D26C4;
L_089D2D30:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089D2D44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17672));
    goto L_089D25A8;
L_089D2D44:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089D2D6C;
      }
      goto L_089D2D50;
    }
L_089D2D50:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089D2D64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17676));
    goto L_089D25A8;
L_089D2D64:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089D2D6C;
L_089D2D6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 121u, 0x089D5250u>(ctx, &aot_mem); return;
      }
      goto L_089D2D74;
    }
L_089D2D74:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(106)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(105)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(106)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 116u, 0x089D51F4u>(ctx, &aot_mem); return;
      }
      goto L_089D2D94;
    }
L_089D2D94:
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(141))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2DBC;
      }
      goto L_089D2DA4;
    }
L_089D2DA4:
    ctx.gpr[31] = (0x089D2DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089D2DACu) goto L_089D2DAC;
    return;
L_089D2DAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(141))))));
    ctx.gpr[5] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    goto L_089D2DBC;
L_089D2DBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2DD0;
      }
      goto L_089D2DC4;
    }
L_089D2DC4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(141))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_089D2DF0;
      }
      goto L_089D2DD0;
    }
L_089D2DD0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(141))))));
        goto L_089D2DE8;
    }
    goto L_089D2DD8;
L_089D2DD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(141))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089D2DF0;
      }
      goto L_089D2DE4;
    }
L_089D2DE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(141))))));
    goto L_089D2DE8;
L_089D2DE8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 115u, 0x089D51F0u>(ctx, &aot_mem); return;
      }
      goto L_089D2DF0;
    }
L_089D2DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 96u, 0x089D504Cu>(ctx, &aot_mem); return;
      }
      goto L_089D2E04;
    }
L_089D2E04:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7040)));
    jump_target = ctx.gpr[1];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2E1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15436u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089D2E68u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D2E68u) goto L_089D2E68;
    return;
L_089D2E68:
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (0u | 13u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D2EA0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x089D2EA0u) goto L_089D2EA0;
    return;
L_089D2EA0:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (16160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089D2EC8u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D2EC8u) goto L_089D2EC8;
    return;
L_089D2EC8:
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D2EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D2EE8u) goto L_089D2EE8;
    return;
L_089D2EE8:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089D2F10u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D2F10u) goto L_089D2F10;
    return;
L_089D2F10:
    ctx.fpr[14] = ctx.fpr[20] - ctx.fpr[24];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 57u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D2F50u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x089D2F50u) goto L_089D2F50;
    return;
L_089D2F50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 115u, 0x089D51F0u>(ctx, &aot_mem); return;
      }
      goto L_089D2F58;
    }
L_089D2F58:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (15436u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089D2FB0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D2FB0u) goto L_089D2FB0;
    return;
L_089D2FB0:
    ctx.fpr[15] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 13u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D2FF4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x089D2FF4u) goto L_089D2FF4;
    return;
L_089D2FF4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (48928u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (16160u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    goto L_089D3028;
L_089D3028:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089D3038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3038u) goto L_089D3038;
    return;
L_089D3038:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3058u) goto L_089D3058;
    return;
L_089D3058:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3078u) goto L_089D3078;
    return;
L_089D3078:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 57u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D30B8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x089D30B8u) goto L_089D30B8;
    return;
L_089D30B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D3028;
      }
      goto L_089D30C8;
    }
L_089D30C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 115u, 0x089D51F0u>(ctx, &aot_mem); return;
      }
      goto L_089D30D0;
    }
L_089D30D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_089D3148;
      }
      goto L_089D30E4;
    }
L_089D30E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 40u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D313Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x089D313Cu) goto L_089D313C;
    return;
L_089D313C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3248;
      }
      goto L_089D3148;
    }
L_089D3148:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3248;
      }
      goto L_089D31A0;
    }
L_089D31A0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x089D31ACu);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D31ACu) goto L_089D31AC;
    return;
L_089D31AC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x089D31D0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D31D0u) goto L_089D31D0;
    return;
L_089D31D0:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[31] = (0x089D31F4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D31F4u) goto L_089D31F4;
    return;
L_089D31F4:
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (0u | 58u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[31] = (0x089D3234u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x089D3234u) goto L_089D3234;
    return;
L_089D3234:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D31A0;
      }
      goto L_089D3248;
    }
L_089D3248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 115u, 0x089D51F0u>(ctx, &aot_mem); return;
      }
      goto L_089D3250;
    }
L_089D3250:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_089D32AC;
      }
      goto L_089D3260;
    }
L_089D3260:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(132)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 40u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D32A0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x089D32A0u) goto L_089D32A0;
    return;
L_089D32A0:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D334C;
      }
      goto L_089D32AC;
    }
L_089D32AC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D334C;
      }
      goto L_089D3310;
    }
L_089D3310:
    ctx.gpr[4] = (0u | 58u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D3338u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x089D3338u) goto L_089D3338;
    return;
L_089D3338:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D3310;
      }
      goto L_089D334C;
    }
L_089D334C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 115u, 0x089D51F0u>(ctx, &aot_mem); return;
      }
      goto L_089D3354;
    }
L_089D3354:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D34CC;
      }
      goto L_089D336C;
    }
L_089D336C:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17660)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17664)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17652)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[22] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17656)));
    goto L_089D3398;
L_089D3398:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D33D8;
      }
      goto L_089D33B4;
    }
L_089D33B4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x089D33C0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D33C0u) goto L_089D33C0;
    return;
L_089D33C0:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089D33D8;
L_089D33D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D3410;
      }
      goto L_089D33EC;
    }
L_089D33EC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x089D33F8u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D33F8u) goto L_089D33F8;
    return;
L_089D33F8:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089D3410;
L_089D3410:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D3448;
      }
      goto L_089D3424;
    }
L_089D3424:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x089D3430u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3430u) goto L_089D3430;
    return;
L_089D3430:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089D3448;
L_089D3448:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1188), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x089D3458u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089D3458u) goto L_089D3458;
    return;
L_089D3458:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D346Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089D346Cu) goto L_089D346C;
    return;
L_089D346C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D34B8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x089D34B8u) goto L_089D34B8;
    return;
L_089D34B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1188)));
      if (branch_taken) {
          goto L_089D3398;
      }
      goto L_089D34CC;
    }
L_089D34CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 115u, 0x089D51F0u>(ctx, &aot_mem); return;
      }
      goto L_089D34D4;
    }
L_089D34D4:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(306), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 196u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(307), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15779u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1160), ctx.gpr[4]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(2512));
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(6608));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1184), ctx.gpr[30]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1180), ctx.gpr[23]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(136));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089D3588;
L_089D3588:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1196), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089D35A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D35A0u) goto L_089D35A0;
    return;
L_089D35A0:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D35F8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089D35F8u) goto L_089D35F8;
    return;
L_089D35F8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D362Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D362Cu) goto L_089D362C;
    return;
L_089D362C:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3674u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089D3674u) goto L_089D3674;
    return;
L_089D3674:
    ctx.gpr[31] = (0x089D367Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D367Cu) goto L_089D367C;
    return;
L_089D367C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1228), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D36C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089D36C0u) goto L_089D36C0;
    return;
L_089D36C0:
    ctx.gpr[31] = (0x089D36C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D36C8u) goto L_089D36C8;
    return;
L_089D36C8:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[20] + ctx.fpr[12];
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1224)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D370Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089D370Cu) goto L_089D370C;
    return;
L_089D370C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D373Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D373Cu) goto L_089D373C;
    return;
L_089D373C:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3784u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089D3784u) goto L_089D3784;
    return;
L_089D3784:
    ctx.gpr[31] = (0x089D378Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D378Cu) goto L_089D378C;
    return;
L_089D378C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1228)));
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D37C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089D37C8u) goto L_089D37C8;
    return;
L_089D37C8:
    ctx.gpr[31] = (0x089D37D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D37D0u) goto L_089D37D0;
    return;
L_089D37D0:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[20] + ctx.fpr[12];
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1236), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D3814u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089D3814u) goto L_089D3814;
    return;
L_089D3814:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3840u) goto L_089D3840;
    return;
L_089D3840:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3888u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089D3888u) goto L_089D3888;
    return;
L_089D3888:
    ctx.gpr[31] = (0x089D3890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3890u) goto L_089D3890;
    return;
L_089D3890:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1228)));
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D38C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089D38C8u) goto L_089D38C8;
    return;
L_089D38C8:
    ctx.gpr[31] = (0x089D38D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D38D0u) goto L_089D38D0;
    return;
L_089D38D0:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[20] + ctx.fpr[12];
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D390Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089D390Cu) goto L_089D390C;
    return;
L_089D390C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3938u) goto L_089D3938;
    return;
L_089D3938:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D397Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089D397Cu) goto L_089D397C;
    return;
L_089D397C:
    ctx.gpr[31] = (0x089D3984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3984u) goto L_089D3984;
    return;
L_089D3984:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D39B8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089D39B8u) goto L_089D39B8;
    return;
L_089D39B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1160)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(360));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1160), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1216)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
      if (branch_taken) {
          goto L_089D3588;
      }
      goto L_089D39E0;
    }
L_089D39E0:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[4] = (48768u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1180)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    goto L_089D3A1C;
L_089D3A1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(720)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(720)));
    ctx.gpr[31] = (0x089D3A34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3A34u) goto L_089D3A34;
    return;
L_089D3A34:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1196), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[26] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1228), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089D3A9Cu);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3A9Cu) goto L_089D3A9C;
    return;
L_089D3A9C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3AC0u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3AC0u) goto L_089D3AC0;
    return;
L_089D3AC0:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3AE0u) goto L_089D3AE0;
    return;
L_089D3AE0:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3B28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089D3B28u) goto L_089D3B28;
    return;
L_089D3B28:
    ctx.gpr[31] = (0x089D3B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3B30u) goto L_089D3B30;
    return;
L_089D3B30:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1236), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089D3B84u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3B84u) goto L_089D3B84;
    return;
L_089D3B84:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[30] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3BA8u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3BA8u) goto L_089D3BA8;
    return;
L_089D3BA8:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[30] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3BD0u) goto L_089D3BD0;
    return;
L_089D3BD0:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3C14u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089D3C14u) goto L_089D3C14;
    return;
L_089D3C14:
    ctx.gpr[31] = (0x089D3C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3C1Cu) goto L_089D3C1C;
    return;
L_089D3C1C:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089D3C70u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3C70u) goto L_089D3C70;
    return;
L_089D3C70:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3C98u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3C98u) goto L_089D3C98;
    return;
L_089D3C98:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3CBCu) goto L_089D3CBC;
    return;
L_089D3CBC:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1224)));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3D00u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089D3D00u) goto L_089D3D00;
    return;
L_089D3D00:
    ctx.gpr[31] = (0x089D3D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3D08u) goto L_089D3D08;
    return;
L_089D3D08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089D3D54u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3D54u) goto L_089D3D54;
    return;
L_089D3D54:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3D7Cu);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3D7Cu) goto L_089D3D7C;
    return;
L_089D3D7C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3DA0u) goto L_089D3DA0;
    return;
L_089D3DA0:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3DE4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089D3DE4u) goto L_089D3DE4;
    return;
L_089D3DE4:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(720));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(720));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 1 ? 1u : 0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1208)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
      if (branch_taken) {
          goto L_089D3A1C;
      }
      goto L_089D3E04;
    }
L_089D3E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 115u, 0x089D51F0u>(ctx, &aot_mem); return;
      }
      goto L_089D3E0C;
    }
L_089D3E0C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(464), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(465), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(466), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 196u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(467), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16416u << 16u);
    ctx.gpr[31] = (0x089D3E78u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3E78u) goto L_089D3E78;
    return;
L_089D3E78:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1156), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[5] + static_cast<std::uint32_t>(2512));
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(6608));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1184), ctx.gpr[30]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1180), ctx.gpr[23]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(136));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089D3EC8;
L_089D3EC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D3F18u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089D3F18u) goto L_089D3F18;
    return;
L_089D3F18:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089D3F28u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3F28u) goto L_089D3F28;
    return;
L_089D3F28:
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[30] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3F4Cu);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3F4Cu) goto L_089D3F4C;
    return;
L_089D3F4C:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = ctx.fpr[30] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3F70u) goto L_089D3F70;
    return;
L_089D3F70:
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1240)));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3FC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089D3FC0u) goto L_089D3FC0;
    return;
L_089D3FC0:
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3FF0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x089D3FF0u) goto L_089D3FF0;
    return;
L_089D3FF0:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.pc = 0x089D4000u; return;
}

void recomp_unit_0115(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0115_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_115(Runtime &runtime) {
    runtime.register_generated_unit(115u, 0x089D0000u, 16384u, &recomp_unit_0115, &recomp_unit_0115_entry);
    runtime.register_function(0x089D0000u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D000Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0018u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0028u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0038u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0040u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0050u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0060u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0068u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0070u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0078u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0080u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D008Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D009Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0128u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0134u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0144u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D014Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0154u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0164u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D016Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0178u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0184u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0198u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0208u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0210u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0228u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0234u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D023Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0244u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0250u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0258u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0260u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0268u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0274u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D027Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0288u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0298u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0304u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D030Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0328u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0350u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D035Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0368u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0370u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0378u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0390u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D039Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D040Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0414u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D041Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D042Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0434u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D043Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0444u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0458u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0460u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D046Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0480u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D048Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0498u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0500u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0508u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0510u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0518u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0530u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0538u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0540u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0548u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0550u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0558u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0560u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0568u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0570u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0578u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0580u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0588u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0590u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0594u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D059Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0604u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0614u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D061Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D062Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D063Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0644u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0650u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0654u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D065Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0668u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0670u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0684u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D068Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D069Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0708u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0718u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0724u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0734u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D074Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0754u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0758u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0760u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0788u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0790u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0798u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0804u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D080Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0818u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0820u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0838u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0844u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0854u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0894u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0908u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0918u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0924u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0930u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D093Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0950u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0960u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0978u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0988u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0998u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A14u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0ABCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BCCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E14u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0ED0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1010u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1014u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D101Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1024u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D102Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1040u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1048u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1054u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1068u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D107Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1088u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D110Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1114u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D111Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D112Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1138u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1140u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1148u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1150u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D115Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1164u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1174u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1188u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1190u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D123Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D124Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1254u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1264u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1270u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D127Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1288u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1294u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D129Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1304u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1328u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D134Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D135Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1370u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D137Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1388u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D141Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1424u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1438u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1444u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D144Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1458u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1460u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D146Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1474u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D147Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1490u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D149Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1508u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1514u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1524u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1544u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1568u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1578u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1590u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1600u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1610u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1618u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D162Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1644u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1668u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1670u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1678u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1688u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1694u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1704u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1710u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D171Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1724u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1730u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1734u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D174Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1768u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1794u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D179Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D180Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1828u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1850u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1868u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1874u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D187Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1888u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1890u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1898u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1900u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D190Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1914u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D191Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1924u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D192Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1934u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D193Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1944u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D194Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1954u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D195Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1960u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1974u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1ABCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1ADCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1CE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1CF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1ECCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1ED0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2020u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D202Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2030u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2044u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2064u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D213Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2150u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2178u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2194u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D219Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2234u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D223Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2244u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2248u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2250u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2258u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D225Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2278u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2280u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D230Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2318u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2320u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2328u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2330u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2348u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2354u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2364u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2380u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2394u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2418u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2430u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2438u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2448u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D246Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2474u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2480u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D249Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2504u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2514u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2520u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2530u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2534u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2540u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D254Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2558u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2564u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2574u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2578u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2584u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2604u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2608u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2610u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D263Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2648u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2660u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D266Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2674u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2688u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2694u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2708u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2714u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D271Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D272Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D274Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2778u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2784u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2838u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D284Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2858u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2860u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2864u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2870u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2880u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2884u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2894u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D28ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D28CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D28E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2908u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2924u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2968u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2ABCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C14u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3028u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3038u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3058u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3078u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D313Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3148u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3234u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3248u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3250u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3260u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3310u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3338u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D334Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3354u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D336Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3398u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3410u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3424u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3430u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3448u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3458u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D346Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3588u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D35A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D35F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D362Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3674u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D367Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D370Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D373Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3784u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D378Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D37C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D37D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3814u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3840u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3888u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3890u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D38C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D38D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D390Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3938u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D397Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3984u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D39B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D39E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3AC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3AE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C14u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3CBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3DA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3DE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3EC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FF0u, &recomp_unit_0115, "recomp_unit_0115");
}
} // namespace psprecomp
