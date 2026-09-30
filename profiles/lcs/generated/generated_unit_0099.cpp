#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0099[4096] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 8, 9, 0, 10, 0, 0, 11, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 17, 18, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 26, 27, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 38, 39, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45,
    46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 52, 53, 0, 54, 0, 55, 0, 0,
    0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0,
    61, 0, 0, 62, 0, 63, 64, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70,
    0, 0, 71, 0, 0, 72, 0, 73, 74, 75, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0,
    80, 0, 0, 81, 0, 82, 83, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0,
    89, 0, 0, 90, 0, 91, 92, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0,
    99, 0, 100, 101, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 111, 112, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 121, 122, 0, 123, 0, 0, 124,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 130, 131, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 139, 140, 141, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 148, 149, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0,
    0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 162, 163, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 174, 175, 0, 0, 176, 0, 0, 0, 0,
    177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0,
    0, 183, 0, 184, 185, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 194, 195, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0,
    201, 0, 0, 202, 0, 203, 204, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212,
    213, 214, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 221, 222,
    223, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 229,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 236, 0, 237, 0,
    238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    243, 0, 0, 244, 0, 0, 245, 0, 246, 247, 0, 248, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 257, 258, 0, 259, 0, 260, 0, 0, 0, 0, 261,
    0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266,
    0, 0, 267, 0, 268, 269, 0, 270, 0, 0, 271, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 278, 279, 0, 280, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0,
    0, 284, 0, 0, 285, 0, 0, 286, 0, 287, 288, 0, 289, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 294,
    0, 0, 295, 0, 296, 297, 298, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303,
    0, 0, 304, 0, 305, 306, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 316, 317, 318, 0, 0, 319, 0, 0, 0, 0, 320,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 326, 327, 328, 0, 0, 0, 329, 0, 0, 0,
    0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 336, 337,
    0, 338, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 345, 346, 347, 0, 0, 348, 0,
    0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 354, 355, 356, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 363, 364, 365, 0, 0, 366, 0, 0, 0, 0, 367, 0, 368,
    0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0,
    376, 377, 0, 378, 0, 0, 379, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 386, 387, 0, 388, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0,
    392, 0, 0, 393, 0, 0, 394, 0, 395, 396, 0, 397, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402,
    0, 0, 403, 0, 404, 405, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 411, 0,
    0, 412, 0, 413, 414, 415, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0, 424, 425, 426, 0, 0, 427, 0, 0, 0, 0, 428, 429, 0,
    0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 434, 435, 0, 436, 0, 0, 437, 0, 0, 0, 0, 438,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 443, 444, 0, 445, 0, 0, 446, 0, 0, 0,
    0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0,
    0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0,
    0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0,
    0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 463, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471,
    472, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0,
    0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 481, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 490, 0,
    491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0,
    0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 499, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507,
    508, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0,
    0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 517, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525,
    526, 0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531,
    0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 535,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 543,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 546, 0, 547, 0, 0,
    0, 0, 0, 548, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 554,
    0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0,
    0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0,
    0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0,
    576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578,
    0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 584,
    0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 589, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0,
    0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 607, 608, 0, 0, 0, 0, 0, 0, 0,
    0, 609, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 614, 0, 615, 0, 0, 0, 0, 0, 0,
    616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 618, 619, 0, 0, 0, 620, 0, 621, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0,
    0, 0, 0, 624, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0,
    0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 639, 0, 640, 0,
    0, 0, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0,
    0, 646, 0, 0, 647, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 655, 656, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 662, 663, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0,
    0, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 673, 0, 0, 0,
    674, 0, 0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0,
    682, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0,
    0, 687, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 691, 692, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0,
    0, 0, 0, 695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 697, 698, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0,
    701, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0,
    0, 0, 0, 0, 0, 708, 709, 0, 710, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 0,
    0, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 719, 0, 720, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0,
    722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0, 0, 725, 0, 726, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 0, 729, 0, 0, 0,
    730, 0, 731, 0, 0, 0, 732, 0, 733, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 737, 0,
    0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 740, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 745,
    746, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 751, 752,
    0, 753, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0,
    760, 0, 0, 761, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 767, 0, 0, 0, 768, 0, 769,
    0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 772, 0, 773, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0,
    0, 776, 0, 0, 777, 0, 778, 0, 0, 779, 0, 780, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 782, 0, 0, 0, 783, 784, 0, 0,
    0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 789, 790, 0, 791, 0,
    0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 793, 0, 794, 0, 0, 795, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 798, 799, 800, 0, 801, 802, 0, 803, 0, 804, 0, 805, 0, 0, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0, 0,
    808, 809, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 814,
    815, 0, 816, 0, 0, 0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 0, 819, 820, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 822, 0, 0, 0,
    0, 0, 0, 823, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 825, 826, 0, 827, 0, 0, 0, 0, 0, 828, 0, 0, 0, 829, 0, 830, 0,
    831, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 835, 0, 836, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 839, 0, 0, 0, 0, 840, 0, 0, 0, 0, 841,
    0, 842, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 846, 0, 0, 847, 0, 848, 849, 0, 0, 850,
    0, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853, 0,
    854, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 857, 0, 0, 0, 0, 0, 0, 858, 0, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 861, 0, 0,
    0, 0, 0, 0, 862, 0, 863, 0, 0, 0, 0, 0, 864, 0, 0, 865, 0, 0, 0, 866, 0, 867, 0, 0, 0, 868, 0, 869, 0, 0, 0, 0,
    0, 0, 0, 870, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 871, 0, 0, 0,
    0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0, 873, 0, 0, 0, 874, 0, 0, 0, 0, 875, 0, 0, 0, 0, 0, 876, 0, 0, 0, 877, 0,
    0, 0, 0, 0, 878, 0, 0, 0, 879, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 880, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    882, 0, 883, 0, 0, 0, 0, 0, 884, 0, 0, 0, 885, 0, 0, 0, 886, 0, 0, 887, 888, 0, 0, 0, 0, 0, 0, 0, 0, 889, 0, 890,
};
void recomp_unit_0099_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08990000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0099[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08990000;
    case 2u: goto L_08990008;
    case 3u: goto L_0899001C;
    case 4u: goto L_08990030;
    case 5u: goto L_0899003C;
    case 6u: goto L_08990048;
    case 7u: goto L_08990054;
    case 8u: goto L_0899005C;
    case 9u: goto L_08990060;
    case 10u: goto L_08990068;
    case 11u: goto L_08990074;
    case 12u: goto L_08990088;
    case 13u: goto L_0899009C;
    case 14u: goto L_089900A8;
    case 15u: goto L_089900B4;
    case 16u: goto L_089900C0;
    case 17u: goto L_089900C8;
    case 18u: goto L_089900CC;
    case 19u: goto L_089900D0;
    case 20u: goto L_089900DC;
    case 21u: goto L_089900F0;
    case 22u: goto L_08990114;
    case 23u: goto L_08990128;
    case 24u: goto L_08990134;
    case 25u: goto L_08990140;
    case 26u: goto L_08990148;
    case 27u: goto L_0899014C;
    case 28u: goto L_08990150;
    case 29u: goto L_0899015C;
    case 30u: goto L_08990170;
    case 31u: goto L_08990198;
    case 32u: goto L_089901C4;
    case 33u: goto L_089901D8;
    case 34u: goto L_08990200;
    case 35u: goto L_0899020C;
    case 36u: goto L_08990218;
    case 37u: goto L_08990224;
    case 38u: goto L_0899022C;
    case 39u: goto L_08990230;
    case 40u: goto L_08990234;
    case 41u: goto L_08990240;
    case 42u: goto L_08990254;
    case 43u: goto L_0899025C;
    case 44u: goto L_08990270;
    case 45u: goto L_0899027C;
    case 46u: goto L_08990280;
    case 47u: goto L_0899028C;
    case 48u: goto L_089902B4;
    case 49u: goto L_089902C0;
    case 50u: goto L_089902CC;
    case 51u: goto L_089902D8;
    case 52u: goto L_089902E0;
    case 53u: goto L_089902E4;
    case 54u: goto L_089902EC;
    case 55u: goto L_089902F4;
    case 56u: goto L_08990308;
    case 57u: goto L_08990318;
    case 58u: goto L_08990324;
    case 59u: goto L_08990368;
    case 60u: goto L_08990374;
    case 61u: goto L_08990380;
    case 62u: goto L_0899038C;
    case 63u: goto L_08990394;
    case 64u: goto L_08990398;
    case 65u: goto L_089903A0;
    case 66u: goto L_089903A8;
    case 67u: goto L_089903BC;
    case 68u: goto L_089903C4;
    case 69u: goto L_089903E4;
    case 70u: goto L_089903FC;
    case 71u: goto L_08990408;
    case 72u: goto L_08990414;
    case 73u: goto L_0899041C;
    case 74u: goto L_08990420;
    case 75u: goto L_08990424;
    case 76u: goto L_08990434;
    case 77u: goto L_08990448;
    case 78u: goto L_08990468;
    case 79u: goto L_08990474;
    case 80u: goto L_08990480;
    case 81u: goto L_0899048C;
    case 82u: goto L_08990494;
    case 83u: goto L_08990498;
    case 84u: goto L_0899049C;
    case 85u: goto L_089904AC;
    case 86u: goto L_089904C0;
    case 87u: goto L_089904E4;
    case 88u: goto L_089904F4;
    case 89u: goto L_08990500;
    case 90u: goto L_0899050C;
    case 91u: goto L_08990514;
    case 92u: goto L_08990518;
    case 93u: goto L_0899051C;
    case 94u: goto L_0899052C;
    case 95u: goto L_08990540;
    case 96u: goto L_08990554;
    case 97u: goto L_08990568;
    case 98u: goto L_08990574;
    case 99u: goto L_08990580;
    case 100u: goto L_08990588;
    case 101u: goto L_0899058C;
    case 102u: goto L_08990590;
    case 103u: goto L_0899059C;
    case 104u: goto L_089905B0;
    case 105u: goto L_089905D8;
    case 106u: goto L_089905EC;
    case 107u: goto L_08990618;
    case 108u: goto L_08990624;
    case 109u: goto L_08990630;
    case 110u: goto L_0899063C;
    case 111u: goto L_08990644;
    case 112u: goto L_08990648;
    case 113u: goto L_0899064C;
    case 114u: goto L_0899065C;
    case 115u: goto L_08990670;
    case 116u: goto L_08990678;
    case 117u: goto L_08990698;
    case 118u: goto L_089906C4;
    case 119u: goto L_089906D0;
    case 120u: goto L_089906DC;
    case 121u: goto L_089906E4;
    case 122u: goto L_089906E8;
    case 123u: goto L_089906F0;
    case 124u: goto L_089906FC;
    case 125u: goto L_08990710;
    case 126u: goto L_08990724;
    case 127u: goto L_08990730;
    case 128u: goto L_0899073C;
    case 129u: goto L_08990748;
    case 130u: goto L_08990750;
    case 131u: goto L_08990754;
    case 132u: goto L_08990758;
    case 133u: goto L_08990764;
    case 134u: goto L_08990778;
    case 135u: goto L_0899078C;
    case 136u: goto L_08990798;
    case 137u: goto L_089907A4;
    case 138u: goto L_089907B0;
    case 139u: goto L_089907B8;
    case 140u: goto L_089907BC;
    case 141u: goto L_089907C0;
    case 142u: goto L_089907CC;
    case 143u: goto L_089907E0;
    case 144u: goto L_08990804;
    case 145u: goto L_08990814;
    case 146u: goto L_08990820;
    case 147u: goto L_0899082C;
    case 148u: goto L_08990834;
    case 149u: goto L_08990838;
    case 150u: goto L_0899083C;
    case 151u: goto L_08990848;
    case 152u: goto L_0899085C;
    case 153u: goto L_08990884;
    case 154u: goto L_08990898;
    case 155u: goto L_089908B4;
    case 156u: goto L_089908B8;
    case 157u: goto L_089908C4;
    case 158u: goto L_089908F4;
    case 159u: goto L_08990908;
    case 160u: goto L_08990914;
    case 161u: goto L_08990920;
    case 162u: goto L_08990928;
    case 163u: goto L_0899092C;
    case 164u: goto L_08990930;
    case 165u: goto L_0899093C;
    case 166u: goto L_08990950;
    case 167u: goto L_08990958;
    case 168u: goto L_08990968;
    case 169u: goto L_089909AC;
    case 170u: goto L_089909B8;
    case 171u: goto L_089909C4;
    case 172u: goto L_089909D0;
    case 173u: goto L_089909D8;
    case 174u: goto L_089909DC;
    case 175u: goto L_089909E0;
    case 176u: goto L_089909EC;
    case 177u: goto L_08990A00;
    case 178u: goto L_08990A10;
    case 179u: goto L_08990A1C;
    case 180u: goto L_08990A60;
    case 181u: goto L_08990A6C;
    case 182u: goto L_08990A78;
    case 183u: goto L_08990A84;
    case 184u: goto L_08990A8C;
    case 185u: goto L_08990A90;
    case 186u: goto L_08990A94;
    case 187u: goto L_08990AA0;
    case 188u: goto L_08990AB4;
    case 189u: goto L_08990ABC;
    case 190u: goto L_08990ADC;
    case 191u: goto L_08990B08;
    case 192u: goto L_08990B14;
    case 193u: goto L_08990B20;
    case 194u: goto L_08990B28;
    case 195u: goto L_08990B2C;
    case 196u: goto L_08990B34;
    case 197u: goto L_08990B40;
    case 198u: goto L_08990B54;
    case 199u: goto L_08990B68;
    case 200u: goto L_08990B74;
    case 201u: goto L_08990B80;
    case 202u: goto L_08990B8C;
    case 203u: goto L_08990B94;
    case 204u: goto L_08990B98;
    case 205u: goto L_08990B9C;
    case 206u: goto L_08990BA8;
    case 207u: goto L_08990BBC;
    case 208u: goto L_08990BD0;
    case 209u: goto L_08990BDC;
    case 210u: goto L_08990BE8;
    case 211u: goto L_08990BF4;
    case 212u: goto L_08990BFC;
    case 213u: goto L_08990C00;
    case 214u: goto L_08990C04;
    case 215u: goto L_08990C10;
    case 216u: goto L_08990C24;
    case 217u: goto L_08990C48;
    case 218u: goto L_08990C58;
    case 219u: goto L_08990C64;
    case 220u: goto L_08990C70;
    case 221u: goto L_08990C78;
    case 222u: goto L_08990C7C;
    case 223u: goto L_08990C80;
    case 224u: goto L_08990C8C;
    case 225u: goto L_08990CA0;
    case 226u: goto L_08990CC8;
    case 227u: goto L_08990CDC;
    case 228u: goto L_08990CF8;
    case 229u: goto L_08990CFC;
    case 230u: goto L_08990D08;
    case 231u: goto L_08990D38;
    case 232u: goto L_08990D4C;
    case 233u: goto L_08990D58;
    case 234u: goto L_08990D64;
    case 235u: goto L_08990D6C;
    case 236u: goto L_08990D70;
    case 237u: goto L_08990D78;
    case 238u: goto L_08990D80;
    case 239u: goto L_08990D94;
    case 240u: goto L_08990DA4;
    case 241u: goto L_08990DB0;
    case 242u: goto L_08990DF4;
    case 243u: goto L_08990E00;
    case 244u: goto L_08990E0C;
    case 245u: goto L_08990E18;
    case 246u: goto L_08990E20;
    case 247u: goto L_08990E24;
    case 248u: goto L_08990E2C;
    case 249u: goto L_08990E34;
    case 250u: goto L_08990E48;
    case 251u: goto L_08990E58;
    case 252u: goto L_08990E64;
    case 253u: goto L_08990EA8;
    case 254u: goto L_08990EB4;
    case 255u: goto L_08990EC0;
    case 256u: goto L_08990ECC;
    case 257u: goto L_08990ED4;
    case 258u: goto L_08990ED8;
    case 259u: goto L_08990EE0;
    case 260u: goto L_08990EE8;
    case 261u: goto L_08990EFC;
    case 262u: goto L_08990F0C;
    case 263u: goto L_08990F1C;
    case 264u: goto L_08990F60;
    case 265u: goto L_08990F70;
    case 266u: goto L_08990F7C;
    case 267u: goto L_08990F88;
    case 268u: goto L_08990F90;
    case 269u: goto L_08990F94;
    case 270u: goto L_08990F9C;
    case 271u: goto L_08990FA8;
    case 272u: goto L_08990FBC;
    case 273u: goto L_08990FC4;
    case 274u: goto L_08990FE4;
    case 275u: goto L_08991018;
    case 276u: goto L_08991024;
    case 277u: goto L_08991030;
    case 278u: goto L_08991038;
    case 279u: goto L_0899103C;
    case 280u: goto L_08991044;
    case 281u: goto L_08991050;
    case 282u: goto L_08991064;
    case 283u: goto L_08991078;
    case 284u: goto L_08991084;
    case 285u: goto L_08991090;
    case 286u: goto L_0899109C;
    case 287u: goto L_089910A4;
    case 288u: goto L_089910A8;
    case 289u: goto L_089910B0;
    case 290u: goto L_089910BC;
    case 291u: goto L_089910D0;
    case 292u: goto L_089910E4;
    case 293u: goto L_089910F0;
    case 294u: goto L_089910FC;
    case 295u: goto L_08991108;
    case 296u: goto L_08991110;
    case 297u: goto L_08991114;
    case 298u: goto L_08991118;
    case 299u: goto L_08991124;
    case 300u: goto L_08991138;
    case 301u: goto L_0899115C;
    case 302u: goto L_08991170;
    case 303u: goto L_0899117C;
    case 304u: goto L_08991188;
    case 305u: goto L_08991190;
    case 306u: goto L_08991194;
    case 307u: goto L_08991198;
    case 308u: goto L_089911A4;
    case 309u: goto L_089911B8;
    case 310u: goto L_089911E0;
    case 311u: goto L_089911F8;
    case 312u: goto L_08991224;
    case 313u: goto L_08991234;
    case 314u: goto L_08991240;
    case 315u: goto L_0899124C;
    case 316u: goto L_08991254;
    case 317u: goto L_08991258;
    case 318u: goto L_0899125C;
    case 319u: goto L_08991268;
    case 320u: goto L_0899127C;
    case 321u: goto L_08991280;
    case 322u: goto L_089912A4;
    case 323u: goto L_089912B8;
    case 324u: goto L_089912C4;
    case 325u: goto L_089912D0;
    case 326u: goto L_089912D8;
    case 327u: goto L_089912DC;
    case 328u: goto L_089912E0;
    case 329u: goto L_089912F0;
    case 330u: goto L_08991304;
    case 331u: goto L_0899130C;
    case 332u: goto L_0899132C;
    case 333u: goto L_08991358;
    case 334u: goto L_08991364;
    case 335u: goto L_08991370;
    case 336u: goto L_08991378;
    case 337u: goto L_0899137C;
    case 338u: goto L_08991384;
    case 339u: goto L_08991390;
    case 340u: goto L_089913A4;
    case 341u: goto L_089913B8;
    case 342u: goto L_089913C4;
    case 343u: goto L_089913D0;
    case 344u: goto L_089913DC;
    case 345u: goto L_089913E4;
    case 346u: goto L_089913E8;
    case 347u: goto L_089913EC;
    case 348u: goto L_089913F8;
    case 349u: goto L_0899140C;
    case 350u: goto L_08991420;
    case 351u: goto L_0899142C;
    case 352u: goto L_08991438;
    case 353u: goto L_08991444;
    case 354u: goto L_0899144C;
    case 355u: goto L_08991450;
    case 356u: goto L_08991454;
    case 357u: goto L_08991460;
    case 358u: goto L_08991474;
    case 359u: goto L_08991498;
    case 360u: goto L_089914AC;
    case 361u: goto L_089914B8;
    case 362u: goto L_089914C4;
    case 363u: goto L_089914CC;
    case 364u: goto L_089914D0;
    case 365u: goto L_089914D4;
    case 366u: goto L_089914E0;
    case 367u: goto L_089914F4;
    case 368u: goto L_089914FC;
    case 369u: goto L_0899150C;
    case 370u: goto L_08991518;
    case 371u: goto L_08991524;
    case 372u: goto L_08991554;
    case 373u: goto L_08991560;
    case 374u: goto L_0899156C;
    case 375u: goto L_08991578;
    case 376u: goto L_08991580;
    case 377u: goto L_08991584;
    case 378u: goto L_0899158C;
    case 379u: goto L_08991598;
    case 380u: goto L_089915AC;
    case 381u: goto L_089915B4;
    case 382u: goto L_089915D4;
    case 383u: goto L_08991610;
    case 384u: goto L_0899161C;
    case 385u: goto L_08991628;
    case 386u: goto L_08991630;
    case 387u: goto L_08991634;
    case 388u: goto L_0899163C;
    case 389u: goto L_08991648;
    case 390u: goto L_0899165C;
    case 391u: goto L_08991670;
    case 392u: goto L_08991680;
    case 393u: goto L_0899168C;
    case 394u: goto L_08991698;
    case 395u: goto L_089916A0;
    case 396u: goto L_089916A4;
    case 397u: goto L_089916AC;
    case 398u: goto L_089916B8;
    case 399u: goto L_089916CC;
    case 400u: goto L_089916E0;
    case 401u: goto L_089916F0;
    case 402u: goto L_089916FC;
    case 403u: goto L_08991708;
    case 404u: goto L_08991710;
    case 405u: goto L_08991714;
    case 406u: goto L_08991718;
    case 407u: goto L_08991724;
    case 408u: goto L_08991738;
    case 409u: goto L_0899175C;
    case 410u: goto L_0899176C;
    case 411u: goto L_08991778;
    case 412u: goto L_08991784;
    case 413u: goto L_0899178C;
    case 414u: goto L_08991790;
    case 415u: goto L_08991794;
    case 416u: goto L_089917A0;
    case 417u: goto L_089917B4;
    case 418u: goto L_089917DC;
    case 419u: goto L_089917F0;
    case 420u: goto L_08991818;
    case 421u: goto L_0899182C;
    case 422u: goto L_08991838;
    case 423u: goto L_08991844;
    case 424u: goto L_0899184C;
    case 425u: goto L_08991850;
    case 426u: goto L_08991854;
    case 427u: goto L_08991860;
    case 428u: goto L_08991874;
    case 429u: goto L_08991878;
    case 430u: goto L_0899189C;
    case 431u: goto L_089918B0;
    case 432u: goto L_089918BC;
    case 433u: goto L_089918C8;
    case 434u: goto L_089918D0;
    case 435u: goto L_089918D4;
    case 436u: goto L_089918DC;
    case 437u: goto L_089918E8;
    case 438u: goto L_089918FC;
    case 439u: goto L_08991924;
    case 440u: goto L_08991938;
    case 441u: goto L_08991944;
    case 442u: goto L_08991950;
    case 443u: goto L_08991958;
    case 444u: goto L_0899195C;
    case 445u: goto L_08991964;
    case 446u: goto L_08991970;
    case 447u: goto L_08991984;
    case 448u: goto L_0899198C;
    case 449u: goto L_089919D4;
    case 450u: goto L_08991AE4;
    case 451u: goto L_08991AF0;
    case 452u: goto L_08991B08;
    case 453u: goto L_08991B34;
    case 454u: goto L_08991B6C;
    case 455u: goto L_08991B88;
    case 456u: goto L_08991B9C;
    case 457u: goto L_08991BB8;
    case 458u: goto L_08991BE8;
    case 459u: goto L_08991BF0;
    case 460u: goto L_08991C0C;
    case 461u: goto L_08991C20;
    case 462u: goto L_08991C3C;
    case 463u: goto L_08991C40;
    case 464u: goto L_08991C48;
    case 465u: goto L_08991C5C;
    case 466u: goto L_08991C78;
    case 467u: goto L_08991CA8;
    case 468u: goto L_08991CB0;
    case 469u: goto L_08991CCC;
    case 470u: goto L_08991CE0;
    case 471u: goto L_08991CFC;
    case 472u: goto L_08991D00;
    case 473u: goto L_08991D08;
    case 474u: goto L_08991D24;
    case 475u: goto L_08991D34;
    case 476u: goto L_08991D64;
    case 477u: goto L_08991D6C;
    case 478u: goto L_08991D88;
    case 479u: goto L_08991D9C;
    case 480u: goto L_08991DB8;
    case 481u: goto L_08991DBC;
    case 482u: goto L_08991DC4;
    case 483u: goto L_08991DE0;
    case 484u: goto L_08991DF0;
    case 485u: goto L_08991E20;
    case 486u: goto L_08991E28;
    case 487u: goto L_08991E44;
    case 488u: goto L_08991E58;
    case 489u: goto L_08991E74;
    case 490u: goto L_08991E78;
    case 491u: goto L_08991E80;
    case 492u: goto L_08991E94;
    case 493u: goto L_08991EB0;
    case 494u: goto L_08991EE4;
    case 495u: goto L_08991EEC;
    case 496u: goto L_08991F08;
    case 497u: goto L_08991F1C;
    case 498u: goto L_08991F38;
    case 499u: goto L_08991F3C;
    case 500u: goto L_08991F44;
    case 501u: goto L_08991F58;
    case 502u: goto L_08991F74;
    case 503u: goto L_08991FA8;
    case 504u: goto L_08991FB0;
    case 505u: goto L_08991FCC;
    case 506u: goto L_08991FE0;
    case 507u: goto L_08991FFC;
    case 508u: goto L_08992000;
    case 509u: goto L_08992008;
    case 510u: goto L_08992024;
    case 511u: goto L_08992034;
    case 512u: goto L_08992068;
    case 513u: goto L_08992070;
    case 514u: goto L_0899208C;
    case 515u: goto L_089920A0;
    case 516u: goto L_089920BC;
    case 517u: goto L_089920C0;
    case 518u: goto L_089920C8;
    case 519u: goto L_089920E4;
    case 520u: goto L_089920F4;
    case 521u: goto L_08992128;
    case 522u: goto L_08992130;
    case 523u: goto L_0899214C;
    case 524u: goto L_08992160;
    case 525u: goto L_0899217C;
    case 526u: goto L_08992180;
    case 527u: goto L_08992188;
    case 528u: goto L_089921A8;
    case 529u: goto L_089921B8;
    case 530u: goto L_089921E8;
    case 531u: goto L_089921FC;
    case 532u: goto L_08992204;
    case 533u: goto L_08992220;
    case 534u: goto L_0899226C;
    case 535u: goto L_0899227C;
    case 536u: goto L_089922C4;
    case 537u: goto L_089922DC;
    case 538u: goto L_08992310;
    case 539u: goto L_08992338;
    case 540u: goto L_08992348;
    case 541u: goto L_08992350;
    case 542u: goto L_0899236C;
    case 543u: goto L_0899237C;
    case 544u: goto L_089923D0;
    case 545u: goto L_089923DC;
    case 546u: goto L_089923EC;
    case 547u: goto L_089923F4;
    case 548u: goto L_0899240C;
    case 549u: goto L_0899241C;
    case 550u: goto L_08992424;
    case 551u: goto L_08992444;
    case 552u: goto L_08992458;
    case 553u: goto L_08992460;
    case 554u: goto L_0899247C;
    case 555u: goto L_0899248C;
    case 556u: goto L_08992498;
    case 557u: goto L_089924A8;
    case 558u: goto L_089924B8;
    case 559u: goto L_089924C0;
    case 560u: goto L_089924D8;
    case 561u: goto L_08992508;
    case 562u: goto L_08992524;
    case 563u: goto L_08992560;
    case 564u: goto L_08992568;
    case 565u: goto L_08992584;
    case 566u: goto L_089925C0;
    case 567u: goto L_089925C8;
    case 568u: goto L_089925D0;
    case 569u: goto L_089925D8;
    case 570u: goto L_089925F4;
    case 571u: goto L_08992604;
    case 572u: goto L_08992614;
    case 573u: goto L_08992648;
    case 574u: goto L_08992650;
    case 575u: goto L_08992670;
    case 576u: goto L_08992680;
    case 577u: goto L_089926D4;
    case 578u: goto L_089926FC;
    case 579u: goto L_08992704;
    case 580u: goto L_0899271C;
    case 581u: goto L_0899272C;
    case 582u: goto L_08992740;
    case 583u: goto L_08992758;
    case 584u: goto L_0899277C;
    case 585u: goto L_08992784;
    case 586u: goto L_089927A0;
    case 587u: goto L_089927B4;
    case 588u: goto L_089927D0;
    case 589u: goto L_089927D4;
    case 590u: goto L_089927DC;
    case 591u: goto L_089927F8;
    case 592u: goto L_08992808;
    case 593u: goto L_08992818;
    case 594u: goto L_0899284C;
    case 595u: goto L_08992854;
    case 596u: goto L_0899286C;
    case 597u: goto L_08992878;
    case 598u: goto L_089928A4;
    case 599u: goto L_089928C8;
    case 600u: goto L_089928D0;
    case 601u: goto L_089928E8;
    case 602u: goto L_0899291C;
    case 603u: goto L_0899292C;
    case 604u: goto L_08992938;
    case 605u: goto L_08992944;
    case 606u: goto L_08992950;
    case 607u: goto L_0899295C;
    case 608u: goto L_08992960;
    case 609u: goto L_08992984;
    case 610u: goto L_0899298C;
    case 611u: goto L_089929A8;
    case 612u: goto L_089929BC;
    case 613u: goto L_089929D8;
    case 614u: goto L_089929DC;
    case 615u: goto L_089929E4;
    case 616u: goto L_08992A00;
    case 617u: goto L_08992A20;
    case 618u: goto L_08992A2C;
    case 619u: goto L_08992A30;
    case 620u: goto L_08992A40;
    case 621u: goto L_08992A48;
    case 622u: goto L_08992A54;
    case 623u: goto L_08992A74;
    case 624u: goto L_08992A8C;
    case 625u: goto L_08992AA0;
    case 626u: goto L_08992AA8;
    case 627u: goto L_08992AC0;
    case 628u: goto L_08992AC8;
    case 629u: goto L_08992AE4;
    case 630u: goto L_08992AF4;
    case 631u: goto L_08992B40;
    case 632u: goto L_08992B68;
    case 633u: goto L_08992B88;
    case 634u: goto L_08992BAC;
    case 635u: goto L_08992BB8;
    case 636u: goto L_08992BC0;
    case 637u: goto L_08992BD8;
    case 638u: goto L_08992BE8;
    case 639u: goto L_08992BF0;
    case 640u: goto L_08992BF8;
    case 641u: goto L_08992C14;
    case 642u: goto L_08992C24;
    case 643u: goto L_08992C40;
    case 644u: goto L_08992C48;
    case 645u: goto L_08992C64;
    case 646u: goto L_08992C84;
    case 647u: goto L_08992C90;
    case 648u: goto L_08992C94;
    case 649u: goto L_08992CDC;
    case 650u: goto L_08992CEC;
    case 651u: goto L_08992D14;
    case 652u: goto L_08992D1C;
    case 653u: goto L_08992D38;
    case 654u: goto L_08992D58;
    case 655u: goto L_08992D64;
    case 656u: goto L_08992D68;
    case 657u: goto L_08992DB4;
    case 658u: goto L_08992E14;
    case 659u: goto L_08992E1C;
    case 660u: goto L_08992E38;
    case 661u: goto L_08992E58;
    case 662u: goto L_08992E64;
    case 663u: goto L_08992E68;
    case 664u: goto L_08992EEC;
    case 665u: goto L_08992EF4;
    case 666u: goto L_08992F0C;
    case 667u: goto L_08992F18;
    case 668u: goto L_08992F24;
    case 669u: goto L_08992F30;
    case 670u: goto L_08992F38;
    case 671u: goto L_08992F54;
    case 672u: goto L_08992F64;
    case 673u: goto L_08992F70;
    case 674u: goto L_08992F80;
    case 675u: goto L_08992F90;
    case 676u: goto L_08992F98;
    case 677u: goto L_08992FB4;
    case 678u: goto L_08992FC4;
    case 679u: goto L_08992FD0;
    case 680u: goto L_08992FE4;
    case 681u: goto L_08992FF8;
    case 682u: goto L_08993000;
    case 683u: goto L_0899301C;
    case 684u: goto L_0899302C;
    case 685u: goto L_08993038;
    case 686u: goto L_08993060;
    case 687u: goto L_08993084;
    case 688u: goto L_0899308C;
    case 689u: goto L_089930A4;
    case 690u: goto L_089930B4;
    case 691u: goto L_089930C0;
    case 692u: goto L_089930C4;
    case 693u: goto L_089930E8;
    case 694u: goto L_089930F0;
    case 695u: goto L_0899310C;
    case 696u: goto L_08993120;
    case 697u: goto L_0899313C;
    case 698u: goto L_08993140;
    case 699u: goto L_08993148;
    case 700u: goto L_08993178;
    case 701u: goto L_08993180;
    case 702u: goto L_08993190;
    case 703u: goto L_0899319C;
    case 704u: goto L_089931C0;
    case 705u: goto L_089931C8;
    case 706u: goto L_089931E4;
    case 707u: goto L_089931F8;
    case 708u: goto L_08993214;
    case 709u: goto L_08993218;
    case 710u: goto L_08993220;
    case 711u: goto L_0899323C;
    case 712u: goto L_0899324C;
    case 713u: goto L_0899326C;
    case 714u: goto L_08993274;
    case 715u: goto L_08993290;
    case 716u: goto L_089932A0;
    case 717u: goto L_089932AC;
    case 718u: goto L_089932BC;
    case 719u: goto L_089932CC;
    case 720u: goto L_089932D4;
    case 721u: goto L_089932F0;
    case 722u: goto L_08993300;
    case 723u: goto L_08993310;
    case 724u: goto L_08993328;
    case 725u: goto L_08993338;
    case 726u: goto L_08993340;
    case 727u: goto L_08993348;
    case 728u: goto L_08993364;
    case 729u: goto L_08993370;
    case 730u: goto L_08993380;
    case 731u: goto L_08993388;
    case 732u: goto L_08993398;
    case 733u: goto L_089933A0;
    case 734u: goto L_089933BC;
    case 735u: goto L_089933D4;
    case 736u: goto L_089933DC;
    case 737u: goto L_089933F8;
    case 738u: goto L_08993418;
    case 739u: goto L_08993420;
    case 740u: goto L_08993430;
    case 741u: goto L_08993438;
    case 742u: goto L_08993450;
    case 743u: goto L_08993460;
    case 744u: goto L_0899346C;
    case 745u: goto L_0899347C;
    case 746u: goto L_08993480;
    case 747u: goto L_089934A4;
    case 748u: goto L_089934AC;
    case 749u: goto L_089934C8;
    case 750u: goto L_089934DC;
    case 751u: goto L_089934F8;
    case 752u: goto L_089934FC;
    case 753u: goto L_08993504;
    case 754u: goto L_08993514;
    case 755u: goto L_0899351C;
    case 756u: goto L_08993538;
    case 757u: goto L_08993548;
    case 758u: goto L_08993554;
    case 759u: goto L_08993578;
    case 760u: goto L_08993580;
    case 761u: goto L_0899358C;
    case 762u: goto L_0899359C;
    case 763u: goto L_089935A4;
    case 764u: goto L_089935C4;
    case 765u: goto L_089935EC;
    case 766u: goto L_08993658;
    case 767u: goto L_08993664;
    case 768u: goto L_08993674;
    case 769u: goto L_0899367C;
    case 770u: goto L_089936A0;
    case 771u: goto L_089936B0;
    case 772u: goto L_089936BC;
    case 773u: goto L_089936C4;
    case 774u: goto L_089936E4;
    case 775u: goto L_089936F8;
    case 776u: goto L_08993704;
    case 777u: goto L_08993710;
    case 778u: goto L_08993718;
    case 779u: goto L_08993724;
    case 780u: goto L_0899372C;
    case 781u: goto L_0899374C;
    case 782u: goto L_08993760;
    case 783u: goto L_08993770;
    case 784u: goto L_08993774;
    case 785u: goto L_08993798;
    case 786u: goto L_089937A0;
    case 787u: goto L_089937BC;
    case 788u: goto L_089937D0;
    case 789u: goto L_089937EC;
    case 790u: goto L_089937F0;
    case 791u: goto L_089937F8;
    case 792u: goto L_08993818;
    case 793u: goto L_0899382C;
    case 794u: goto L_08993834;
    case 795u: goto L_08993840;
    case 796u: goto L_08993848;
    case 797u: goto L_08993870;
    case 798u: goto L_0899389C;
    case 799u: goto L_089938A0;
    case 800u: goto L_089938A4;
    case 801u: goto L_089938AC;
    case 802u: goto L_089938B0;
    case 803u: goto L_089938B8;
    case 804u: goto L_089938C0;
    case 805u: goto L_089938C8;
    case 806u: goto L_089938E0;
    case 807u: goto L_089938F0;
    case 808u: goto L_08993900;
    case 809u: goto L_08993904;
    case 810u: goto L_08993928;
    case 811u: goto L_08993930;
    case 812u: goto L_0899394C;
    case 813u: goto L_08993960;
    case 814u: goto L_0899397C;
    case 815u: goto L_08993980;
    case 816u: goto L_08993988;
    case 817u: goto L_089939A0;
    case 818u: goto L_089939B0;
    case 819u: goto L_089939C0;
    case 820u: goto L_089939C4;
    case 821u: goto L_089939E8;
    case 822u: goto L_089939F0;
    case 823u: goto L_08993A0C;
    case 824u: goto L_08993A20;
    case 825u: goto L_08993A3C;
    case 826u: goto L_08993A40;
    case 827u: goto L_08993A48;
    case 828u: goto L_08993A60;
    case 829u: goto L_08993A70;
    case 830u: goto L_08993A78;
    case 831u: goto L_08993A80;
    case 832u: goto L_08993A9C;
    case 833u: goto L_08993AAC;
    case 834u: goto L_08993AC0;
    case 835u: goto L_08993B14;
    case 836u: goto L_08993B1C;
    case 837u: goto L_08993B38;
    case 838u: goto L_08993B48;
    case 839u: goto L_08993B54;
    case 840u: goto L_08993B68;
    case 841u: goto L_08993B7C;
    case 842u: goto L_08993B84;
    case 843u: goto L_08993B98;
    case 844u: goto L_08993BBC;
    case 845u: goto L_08993BCC;
    case 846u: goto L_08993BD8;
    case 847u: goto L_08993BE4;
    case 848u: goto L_08993BEC;
    case 849u: goto L_08993BF0;
    case 850u: goto L_08993BFC;
    case 851u: goto L_08993C14;
    case 852u: goto L_08993C30;
    case 853u: goto L_08993C78;
    case 854u: goto L_08993C80;
    case 855u: goto L_08993C9C;
    case 856u: goto L_08993D20;
    case 857u: goto L_08993D28;
    case 858u: goto L_08993D44;
    case 859u: goto L_08993D50;
    case 860u: goto L_08993D6C;
    case 861u: goto L_08993D74;
    case 862u: goto L_08993D90;
    case 863u: goto L_08993D98;
    case 864u: goto L_08993DB0;
    case 865u: goto L_08993DBC;
    case 866u: goto L_08993DCC;
    case 867u: goto L_08993DD4;
    case 868u: goto L_08993DE4;
    case 869u: goto L_08993DEC;
    case 870u: goto L_08993E0C;
    case 871u: goto L_08993E70;
    case 872u: goto L_08993E94;
    case 873u: goto L_08993EAC;
    case 874u: goto L_08993EBC;
    case 875u: goto L_08993ED0;
    case 876u: goto L_08993EE8;
    case 877u: goto L_08993EF8;
    case 878u: goto L_08993F10;
    case 879u: goto L_08993F20;
    case 880u: goto L_08993F4C;
    case 881u: goto L_08993F54;
    case 882u: goto L_08993F80;
    case 883u: goto L_08993F88;
    case 884u: goto L_08993FA0;
    case 885u: goto L_08993FB0;
    case 886u: goto L_08993FC0;
    case 887u: goto L_08993FCC;
    case 888u: goto L_08993FD0;
    case 889u: goto L_08993FF4;
    case 890u: goto L_08993FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08990000:
    ctx.gpr[31] = (0x08990008u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990008u) goto L_08990008;
    return;
L_08990008:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0899001Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0899001Cu) goto L_0899001C;
    return;
L_0899001C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[5] = (0u | 164u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08990030u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x08990030u) goto L_08990030;
    return;
L_08990030:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08990068;
      }
      goto L_0899003C;
    }
L_0899003C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08990048u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990048u) goto L_08990048;
    return;
L_08990048:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990060;
      }
      goto L_08990054;
    }
L_08990054:
    ctx.gpr[31] = (0x0899005Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0899005Cu) goto L_0899005C;
    return;
L_0899005C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08990060;
L_08990060:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990068;
L_08990068:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990074u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990074u) goto L_08990074;
    return;
L_08990074:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990088u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990088u) goto L_08990088;
    return;
L_08990088:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0899009Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x0899009Cu) goto L_0899009C;
    return;
L_0899009C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_089900D0;
      }
      goto L_089900A8;
    }
L_089900A8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089900B4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089900B4u) goto L_089900B4;
    return;
L_089900B4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089900CC;
      }
      goto L_089900C0;
    }
L_089900C0:
    ctx.gpr[31] = (0x089900C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089900C8u) goto L_089900C8;
    return;
L_089900C8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089900CC;
L_089900CC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_089900D0;
L_089900D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089900DCu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089900DCu) goto L_089900DC;
    return;
L_089900DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089900F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089900F0u) goto L_089900F0;
    return;
L_089900F0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24580)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[4] = (0u | 240u);
    ctx.gpr[5] = (0u | 152u);
    ctx.gpr[31] = (0x08990114u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x08990114u) goto L_08990114;
    return;
L_08990114:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (17274u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08990150;
      }
      goto L_08990128;
    }
L_08990128:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990134u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990134u) goto L_08990134;
    return;
L_08990134:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899014C;
      }
      goto L_08990140;
    }
L_08990140:
    ctx.gpr[31] = (0x08990148u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990148u) goto L_08990148;
    return;
L_08990148:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899014C;
L_0899014C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08990150;
L_08990150:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x0899015Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0899015Cu) goto L_0899015C;
    return;
L_0899015C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990170u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990170u) goto L_08990170;
    return;
L_08990170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089903BC;
      }
      goto L_08990198;
    }
L_08990198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[5] = (17188u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-21776));
      if (branch_taken) {
          goto L_0899025C;
      }
      goto L_089901C4;
    }
L_089901C4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24576)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089901D8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 113u, 0x088A85F0u>(ctx, &aot_mem) && ctx.pc == 0x089901D8u) goto L_089901D8;
    return;
L_089901D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    ctx.gpr[31] = (0x08990200u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08990200u) goto L_08990200;
    return;
L_08990200:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08990234;
      }
      goto L_0899020C;
    }
L_0899020C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08990218u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990218u) goto L_08990218;
    return;
L_08990218:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990230;
      }
      goto L_08990224;
    }
L_08990224:
    ctx.gpr[31] = (0x0899022Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0899022Cu) goto L_0899022C;
    return;
L_0899022C:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08990230;
L_08990230:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_08990234;
L_08990234:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08990240u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990240u) goto L_08990240;
    return;
L_08990240:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990254u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990254u) goto L_08990254;
    return;
L_08990254:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089903BC;
      }
      goto L_0899025C;
    }
L_0899025C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08990270u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 46u, 0x088A8288u>(ctx, &aot_mem) && ctx.pc == 0x08990270u) goto L_08990270;
    return;
L_08990270:
    ctx.gpr[21] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-21768));
      if (branch_taken) {
          goto L_08990280;
      }
      goto L_0899027C;
    }
L_0899027C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08990280;
L_08990280:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0899028Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 100u, 0x088A8514u>(ctx, &aot_mem) && ctx.pc == 0x0899028Cu) goto L_0899028C;
    return;
L_0899028C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(87)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(85)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x089902B4u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x089902B4u) goto L_089902B4;
    return;
L_089902B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_089902EC;
      }
      goto L_089902C0;
    }
L_089902C0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089902CCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089902CCu) goto L_089902CC;
    return;
L_089902CC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089902E4;
      }
      goto L_089902D8;
    }
L_089902D8:
    ctx.gpr[31] = (0x089902E0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089902E0u) goto L_089902E0;
    return;
L_089902E0:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    goto L_089902E4;
L_089902E4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089902EC;
L_089902EC:
    ctx.gpr[31] = (0x089902F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089902F4u) goto L_089902F4;
    return;
L_089902F4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990308u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990308u) goto L_08990308;
    return;
L_08990308:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990318u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 46u, 0x088A8288u>(ctx, &aot_mem) && ctx.pc == 0x08990318u) goto L_08990318;
    return;
L_08990318:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990324u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 100u, 0x088A8514u>(ctx, &aot_mem) && ctx.pc == 0x08990324u) goto L_08990324;
    return;
L_08990324:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (17200u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(87)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(85)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x08990368u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08990368u) goto L_08990368;
    return;
L_08990368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_089903A0;
      }
      goto L_08990374;
    }
L_08990374:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990380u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990380u) goto L_08990380;
    return;
L_08990380:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990398;
      }
      goto L_0899038C;
    }
L_0899038C:
    ctx.gpr[31] = (0x08990394u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990394u) goto L_08990394;
    return;
L_08990394:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990398;
L_08990398:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089903A0;
L_089903A0:
    ctx.gpr[31] = (0x089903A8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089903A8u) goto L_089903A8;
    return;
L_089903A8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089903BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089903BCu) goto L_089903BC;
    return;
L_089903BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899198C;
      }
      goto L_089903C4;
    }
L_089903C4:
    ctx.gpr[4] = (0u | 47u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089903E4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x089903E4u) goto L_089903E4;
    return;
L_089903E4:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[4] = (17188u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08990424;
      }
      goto L_089903FC;
    }
L_089903FC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990408u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990408u) goto L_08990408;
    return;
L_08990408:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990420;
      }
      goto L_08990414;
    }
L_08990414:
    ctx.gpr[31] = (0x0899041Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0899041Cu) goto L_0899041C;
    return;
L_0899041C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990420;
L_08990420:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08990424;
L_08990424:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990434u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21760));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990434u) goto L_08990434;
    return;
L_08990434:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990448u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990448u) goto L_08990448;
    return;
L_08990448:
    ctx.gpr[4] = (0u | 47u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 75u);
    ctx.gpr[7] = (0u | 151u);
    ctx.gpr[31] = (0x08990468u);
    ctx.gpr[8] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08990468u) goto L_08990468;
    return;
L_08990468:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_0899049C;
      }
      goto L_08990474;
    }
L_08990474:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990480u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990480u) goto L_08990480;
    return;
L_08990480:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990498;
      }
      goto L_0899048C;
    }
L_0899048C:
    ctx.gpr[31] = (0x08990494u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990494u) goto L_08990494;
    return;
L_08990494:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990498;
L_08990498:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0899049C;
L_0899049C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089904ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21752));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089904ACu) goto L_089904AC;
    return;
L_089904AC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089904C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089904C0u) goto L_089904C0;
    return;
L_089904C0:
    ctx.gpr[9] = (17200u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (0u | 47u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089904E4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x089904E4u) goto L_089904E4;
    return;
L_089904E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[4] = (17194u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899051C;
      }
      goto L_089904F4;
    }
L_089904F4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990500u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990500u) goto L_08990500;
    return;
L_08990500:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990518;
      }
      goto L_0899050C;
    }
L_0899050C:
    ctx.gpr[31] = (0x08990514u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990514u) goto L_08990514;
    return;
L_08990514:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990518;
L_08990518:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0899051C;
L_0899051C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899052Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21744));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0899052Cu) goto L_0899052C;
    return;
L_0899052C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990540u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990540u) goto L_08990540;
    return;
L_08990540:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[4] = (0u | 240u);
    ctx.gpr[5] = (0u | 152u);
    ctx.gpr[31] = (0x08990554u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x08990554u) goto L_08990554;
    return;
L_08990554:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (17274u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08990590;
      }
      goto L_08990568;
    }
L_08990568:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990574u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990574u) goto L_08990574;
    return;
L_08990574:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899058C;
      }
      goto L_08990580;
    }
L_08990580:
    ctx.gpr[31] = (0x08990588u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990588u) goto L_08990588;
    return;
L_08990588:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899058C;
L_0899058C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08990590;
L_08990590:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899059Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0899059Cu) goto L_0899059C;
    return;
L_0899059C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089905B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089905B0u) goto L_089905B0;
    return;
L_089905B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08990670;
      }
      goto L_089905D8;
    }
L_089905D8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24576)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089905ECu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 113u, 0x088A85F0u>(ctx, &aot_mem) && ctx.pc == 0x089905ECu) goto L_089905EC;
    return;
L_089905EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[9] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    ctx.gpr[31] = (0x08990618u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08990618u) goto L_08990618;
    return;
L_08990618:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_0899064C;
      }
      goto L_08990624;
    }
L_08990624:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990630u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990630u) goto L_08990630;
    return;
L_08990630:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990648;
      }
      goto L_0899063C;
    }
L_0899063C:
    ctx.gpr[31] = (0x08990644u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990644u) goto L_08990644;
    return;
L_08990644:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990648;
L_08990648:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0899064C;
L_0899064C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899065Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21736));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0899065Cu) goto L_0899065C;
    return;
L_0899065C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08990670u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990670u) goto L_08990670;
    return;
L_08990670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899198C;
      }
      goto L_08990678;
    }
L_08990678:
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08990698u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08990698u) goto L_08990698;
    return;
L_08990698:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21784));
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21800));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-21792));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089906F0;
      }
      goto L_089906C4;
    }
L_089906C4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089906D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089906D0u) goto L_089906D0;
    return;
L_089906D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089906E8;
      }
      goto L_089906DC;
    }
L_089906DC:
    ctx.gpr[31] = (0x089906E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089906E4u) goto L_089906E4;
    return;
L_089906E4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089906E8;
L_089906E8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089906F0;
L_089906F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089906FCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089906FCu) goto L_089906FC;
    return;
L_089906FC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990710u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990710u) goto L_08990710;
    return;
L_08990710:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[5] = (0u | 164u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08990724u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x08990724u) goto L_08990724;
    return;
L_08990724:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08990758;
      }
      goto L_08990730;
    }
L_08990730:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0899073Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0899073Cu) goto L_0899073C;
    return;
L_0899073C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990754;
      }
      goto L_08990748;
    }
L_08990748:
    ctx.gpr[31] = (0x08990750u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990750u) goto L_08990750;
    return;
L_08990750:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990754;
L_08990754:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08990758;
L_08990758:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990764u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990764u) goto L_08990764;
    return;
L_08990764:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990778u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990778u) goto L_08990778;
    return;
L_08990778:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0899078Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x0899078Cu) goto L_0899078C;
    return;
L_0899078C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_089907C0;
      }
      goto L_08990798;
    }
L_08990798:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089907A4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089907A4u) goto L_089907A4;
    return;
L_089907A4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089907BC;
      }
      goto L_089907B0;
    }
L_089907B0:
    ctx.gpr[31] = (0x089907B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089907B8u) goto L_089907B8;
    return;
L_089907B8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089907BC;
L_089907BC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_089907C0;
L_089907C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089907CCu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089907CCu) goto L_089907CC;
    return;
L_089907CC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089907E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089907E0u) goto L_089907E0;
    return;
L_089907E0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24580)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 188u);
    ctx.gpr[31] = (0x08990804u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x08990804u) goto L_08990804;
    return;
L_08990804:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[4] = (17206u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899083C;
      }
      goto L_08990814;
    }
L_08990814:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990820u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990820u) goto L_08990820;
    return;
L_08990820:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990838;
      }
      goto L_0899082C;
    }
L_0899082C:
    ctx.gpr[31] = (0x08990834u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990834u) goto L_08990834;
    return;
L_08990834:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990838;
L_08990838:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0899083C;
L_0899083C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08990848u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990848u) goto L_08990848;
    return;
L_08990848:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0899085Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0899085Cu) goto L_0899085C;
    return;
L_0899085C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08990AB4;
      }
      goto L_08990884;
    }
L_08990884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08990898u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 46u, 0x088A8288u>(ctx, &aot_mem) && ctx.pc == 0x08990898u) goto L_08990898;
    return;
L_08990898:
    ctx.gpr[22] = (2226u << 16u);
    ctx.gpr[21] = (2226u << 16u);
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-21776));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-21768));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21728));
      if (branch_taken) {
          goto L_089908B8;
      }
      goto L_089908B4;
    }
L_089908B4:
    ctx.gpr[16] = (0u | 1u);
    goto L_089908B8;
L_089908B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089908C4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 100u, 0x088A8514u>(ctx, &aot_mem) && ctx.pc == 0x089908C4u) goto L_089908C4;
    return;
L_089908C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[9] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    ctx.gpr[31] = (0x089908F4u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x089908F4u) goto L_089908F4;
    return;
L_089908F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (17274u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08990930;
      }
      goto L_08990908;
    }
L_08990908:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990914u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990914u) goto L_08990914;
    return;
L_08990914:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899092C;
      }
      goto L_08990920;
    }
L_08990920:
    ctx.gpr[31] = (0x08990928u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990928u) goto L_08990928;
    return;
L_08990928:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899092C;
L_0899092C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08990930;
L_08990930:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899093Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0899093Cu) goto L_0899093C;
    return;
L_0899093C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990950u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990950u) goto L_08990950;
    return;
L_08990950:
    ctx.gpr[31] = (0x08990958u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 293u, 0x088A9434u>(ctx, &aot_mem) && ctx.pc == 0x08990958u) goto L_08990958;
    return;
L_08990958:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[31] = (0x08990968u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 101u, 0x088A8530u>(ctx, &aot_mem) && ctx.pc == 0x08990968u) goto L_08990968;
    return;
L_08990968:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (17188u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    ctx.gpr[31] = (0x089909ACu);
    ctx.gpr[4] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x089909ACu) goto L_089909AC;
    return;
L_089909AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_089909E0;
      }
      goto L_089909B8;
    }
L_089909B8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089909C4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089909C4u) goto L_089909C4;
    return;
L_089909C4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089909DC;
      }
      goto L_089909D0;
    }
L_089909D0:
    ctx.gpr[31] = (0x089909D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089909D8u) goto L_089909D8;
    return;
L_089909D8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089909DC;
L_089909DC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_089909E0;
L_089909E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089909ECu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089909ECu) goto L_089909EC;
    return;
L_089909EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990A00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990A00u) goto L_08990A00;
    return;
L_08990A00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990A10u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 46u, 0x088A8288u>(ctx, &aot_mem) && ctx.pc == 0x08990A10u) goto L_08990A10;
    return;
L_08990A10:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990A1Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 100u, 0x088A8514u>(ctx, &aot_mem) && ctx.pc == 0x08990A1Cu) goto L_08990A1C;
    return;
L_08990A1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (17200u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    ctx.gpr[31] = (0x08990A60u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08990A60u) goto L_08990A60;
    return;
L_08990A60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08990A94;
      }
      goto L_08990A6C;
    }
L_08990A6C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990A78u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990A78u) goto L_08990A78;
    return;
L_08990A78:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990A90;
      }
      goto L_08990A84;
    }
L_08990A84:
    ctx.gpr[31] = (0x08990A8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990A8Cu) goto L_08990A8C;
    return;
L_08990A8C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990A90;
L_08990A90:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08990A94;
L_08990A94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990AA0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990AA0u) goto L_08990AA0;
    return;
L_08990AA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990AB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990AB4u) goto L_08990AB4;
    return;
L_08990AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899198C;
      }
      goto L_08990ABC;
    }
L_08990ABC:
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08990ADCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08990ADCu) goto L_08990ADC;
    return;
L_08990ADC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21784));
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21800));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-21792));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08990B34;
      }
      goto L_08990B08;
    }
L_08990B08:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08990B14u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990B14u) goto L_08990B14;
    return;
L_08990B14:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990B2C;
      }
      goto L_08990B20;
    }
L_08990B20:
    ctx.gpr[31] = (0x08990B28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990B28u) goto L_08990B28;
    return;
L_08990B28:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08990B2C;
L_08990B2C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990B34;
L_08990B34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990B40u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990B40u) goto L_08990B40;
    return;
L_08990B40:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990B54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990B54u) goto L_08990B54;
    return;
L_08990B54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[5] = (0u | 164u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08990B68u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x08990B68u) goto L_08990B68;
    return;
L_08990B68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08990B9C;
      }
      goto L_08990B74;
    }
L_08990B74:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990B80u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990B80u) goto L_08990B80;
    return;
L_08990B80:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990B98;
      }
      goto L_08990B8C;
    }
L_08990B8C:
    ctx.gpr[31] = (0x08990B94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990B94u) goto L_08990B94;
    return;
L_08990B94:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990B98;
L_08990B98:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08990B9C;
L_08990B9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990BA8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990BA8u) goto L_08990BA8;
    return;
L_08990BA8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990BBCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990BBCu) goto L_08990BBC;
    return;
L_08990BBC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08990BD0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x08990BD0u) goto L_08990BD0;
    return;
L_08990BD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08990C04;
      }
      goto L_08990BDC;
    }
L_08990BDC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990BE8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990BE8u) goto L_08990BE8;
    return;
L_08990BE8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990C00;
      }
      goto L_08990BF4;
    }
L_08990BF4:
    ctx.gpr[31] = (0x08990BFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990BFCu) goto L_08990BFC;
    return;
L_08990BFC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990C00;
L_08990C00:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08990C04;
L_08990C04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990C10u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990C10u) goto L_08990C10;
    return;
L_08990C10:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990C24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990C24u) goto L_08990C24;
    return;
L_08990C24:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24580)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 188u);
    ctx.gpr[31] = (0x08990C48u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x08990C48u) goto L_08990C48;
    return;
L_08990C48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[4] = (17206u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08990C80;
      }
      goto L_08990C58;
    }
L_08990C58:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990C64u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990C64u) goto L_08990C64;
    return;
L_08990C64:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990C7C;
      }
      goto L_08990C70;
    }
L_08990C70:
    ctx.gpr[31] = (0x08990C78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990C78u) goto L_08990C78;
    return;
L_08990C78:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990C7C;
L_08990C7C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08990C80;
L_08990C80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08990C8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990C8Cu) goto L_08990C8C;
    return;
L_08990C8C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990CA0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990CA0u) goto L_08990CA0;
    return;
L_08990CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08990FBC;
      }
      goto L_08990CC8;
    }
L_08990CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08990CDCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 46u, 0x088A8288u>(ctx, &aot_mem) && ctx.pc == 0x08990CDCu) goto L_08990CDC;
    return;
L_08990CDC:
    ctx.gpr[22] = (2226u << 16u);
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[17] = (2226u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-21776));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-21768));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-21728));
      if (branch_taken) {
          goto L_08990CFC;
      }
      goto L_08990CF8;
    }
L_08990CF8:
    ctx.gpr[20] = (0u | 1u);
    goto L_08990CFC;
L_08990CFC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990D08u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 100u, 0x088A8514u>(ctx, &aot_mem) && ctx.pc == 0x08990D08u) goto L_08990D08;
    return;
L_08990D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[9] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(99)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    ctx.gpr[31] = (0x08990D38u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08990D38u) goto L_08990D38;
    return;
L_08990D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (17274u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08990D78;
      }
      goto L_08990D4C;
    }
L_08990D4C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08990D58u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990D58u) goto L_08990D58;
    return;
L_08990D58:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990D70;
      }
      goto L_08990D64;
    }
L_08990D64:
    ctx.gpr[31] = (0x08990D6Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990D6Cu) goto L_08990D6C;
    return;
L_08990D6C:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08990D70;
L_08990D70:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08990D78;
L_08990D78:
    ctx.gpr[31] = (0x08990D80u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990D80u) goto L_08990D80;
    return;
L_08990D80:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990D94u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990D94u) goto L_08990D94;
    return;
L_08990D94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990DA4u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 46u, 0x088A8288u>(ctx, &aot_mem) && ctx.pc == 0x08990DA4u) goto L_08990DA4;
    return;
L_08990DA4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990DB0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 100u, 0x088A8514u>(ctx, &aot_mem) && ctx.pc == 0x08990DB0u) goto L_08990DB0;
    return;
L_08990DB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (17188u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(99)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    ctx.gpr[31] = (0x08990DF4u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08990DF4u) goto L_08990DF4;
    return;
L_08990DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08990E2C;
      }
      goto L_08990E00;
    }
L_08990E00:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08990E0Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990E0Cu) goto L_08990E0C;
    return;
L_08990E0C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990E24;
      }
      goto L_08990E18;
    }
L_08990E18:
    ctx.gpr[31] = (0x08990E20u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990E20u) goto L_08990E20;
    return;
L_08990E20:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08990E24;
L_08990E24:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08990E2C;
L_08990E2C:
    ctx.gpr[31] = (0x08990E34u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990E34u) goto L_08990E34;
    return;
L_08990E34:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990E48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990E48u) goto L_08990E48;
    return;
L_08990E48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990E58u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 46u, 0x088A8288u>(ctx, &aot_mem) && ctx.pc == 0x08990E58u) goto L_08990E58;
    return;
L_08990E58:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990E64u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 101u, 0x088A8530u>(ctx, &aot_mem) && ctx.pc == 0x08990E64u) goto L_08990E64;
    return;
L_08990E64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (17200u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(99)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    ctx.gpr[31] = (0x08990EA8u);
    ctx.gpr[4] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08990EA8u) goto L_08990EA8;
    return;
L_08990EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08990EE0;
      }
      goto L_08990EB4;
    }
L_08990EB4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990EC0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990EC0u) goto L_08990EC0;
    return;
L_08990EC0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990ED8;
      }
      goto L_08990ECC;
    }
L_08990ECC:
    ctx.gpr[31] = (0x08990ED4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990ED4u) goto L_08990ED4;
    return;
L_08990ED4:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    goto L_08990ED8;
L_08990ED8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08990EE0;
L_08990EE0:
    ctx.gpr[31] = (0x08990EE8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990EE8u) goto L_08990EE8;
    return;
L_08990EE8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990EFCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990EFCu) goto L_08990EFC;
    return;
L_08990EFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08990F0Cu);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 46u, 0x088A8288u>(ctx, &aot_mem) && ctx.pc == 0x08990F0Cu) goto L_08990F0C;
    return;
L_08990F0C:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[31] = (0x08990F1Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 101u, 0x088A8530u>(ctx, &aot_mem) && ctx.pc == 0x08990F1Cu) goto L_08990F1C;
    return;
L_08990F1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (17212u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(99)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    ctx.gpr[31] = (0x08990F60u);
    ctx.gpr[4] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08990F60u) goto L_08990F60;
    return;
L_08990F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[5] = (17206u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08990F9C;
      }
      goto L_08990F70;
    }
L_08990F70:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990F7Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08990F7Cu) goto L_08990F7C;
    return;
L_08990F7C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990F94;
      }
      goto L_08990F88;
    }
L_08990F88:
    ctx.gpr[31] = (0x08990F90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08990F90u) goto L_08990F90;
    return;
L_08990F90:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990F94;
L_08990F94:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08990F9C;
L_08990F9C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[31] = (0x08990FA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21720));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990FA8u) goto L_08990FA8;
    return;
L_08990FA8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08990FBCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08990FBCu) goto L_08990FBC;
    return;
L_08990FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899198C;
      }
      goto L_08990FC4;
    }
L_08990FC4:
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08990FE4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08990FE4u) goto L_08990FE4;
    return;
L_08990FE4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21784));
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21800));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-21792));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08991044;
      }
      goto L_08991018;
    }
L_08991018:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08991024u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08991024u) goto L_08991024;
    return;
L_08991024:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899103C;
      }
      goto L_08991030;
    }
L_08991030:
    ctx.gpr[31] = (0x08991038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08991038u) goto L_08991038;
    return;
L_08991038:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0899103C;
L_0899103C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991044;
L_08991044:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991050u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991050u) goto L_08991050;
    return;
L_08991050:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991064u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991064u) goto L_08991064;
    return;
L_08991064:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[5] = (0u | 164u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08991078u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x08991078u) goto L_08991078;
    return;
L_08991078:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_089910B0;
      }
      goto L_08991084;
    }
L_08991084:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08991090u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08991090u) goto L_08991090;
    return;
L_08991090:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089910A8;
      }
      goto L_0899109C;
    }
L_0899109C:
    ctx.gpr[31] = (0x089910A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089910A4u) goto L_089910A4;
    return;
L_089910A4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089910A8;
L_089910A8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089910B0;
L_089910B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089910BCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089910BCu) goto L_089910BC;
    return;
L_089910BC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089910D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089910D0u) goto L_089910D0;
    return;
L_089910D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089910E4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x089910E4u) goto L_089910E4;
    return;
L_089910E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08991118;
      }
      goto L_089910F0;
    }
L_089910F0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089910FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089910FCu) goto L_089910FC;
    return;
L_089910FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991114;
      }
      goto L_08991108;
    }
L_08991108:
    ctx.gpr[31] = (0x08991110u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08991110u) goto L_08991110;
    return;
L_08991110:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991114;
L_08991114:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08991118;
L_08991118:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991124u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991124u) goto L_08991124;
    return;
L_08991124:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991138u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991138u) goto L_08991138;
    return;
L_08991138:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24580)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[4] = (0u | 240u);
    ctx.gpr[5] = (0u | 152u);
    ctx.gpr[31] = (0x0899115Cu);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x0899115Cu) goto L_0899115C;
    return;
L_0899115C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (17274u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08991198;
      }
      goto L_08991170;
    }
L_08991170:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0899117Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0899117Cu) goto L_0899117C;
    return;
L_0899117C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991194;
      }
      goto L_08991188;
    }
L_08991188:
    ctx.gpr[31] = (0x08991190u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08991190u) goto L_08991190;
    return;
L_08991190:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991194;
L_08991194:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08991198;
L_08991198:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x089911A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089911A4u) goto L_089911A4;
    return;
L_089911A4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089911B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089911B8u) goto L_089911B8;
    return;
L_089911B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 164u);
      if (branch_taken) {
          goto L_08991280;
      }
      goto L_089911E0;
    }
L_089911E0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24576)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089911F8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 113u, 0x088A85F0u>(ctx, &aot_mem) && ctx.pc == 0x089911F8u) goto L_089911F8;
    return;
L_089911F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[9] = (17188u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(103)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(101)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(102)));
    ctx.gpr[31] = (0x08991224u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08991224u) goto L_08991224;
    return;
L_08991224:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[19] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21776));
      if (branch_taken) {
          goto L_0899125C;
      }
      goto L_08991234;
    }
L_08991234:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08991240u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08991240u) goto L_08991240;
    return;
L_08991240:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991258;
      }
      goto L_0899124C;
    }
L_0899124C:
    ctx.gpr[31] = (0x08991254u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08991254u) goto L_08991254;
    return;
L_08991254:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991258;
L_08991258:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0899125C;
L_0899125C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991268u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991268u) goto L_08991268;
    return;
L_08991268:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0899127Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0899127Cu) goto L_0899127C;
    return;
L_0899127C:
    ctx.gpr[16] = (0u | 176u);
    goto L_08991280;
L_08991280:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (0u | 51u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 75u);
    ctx.gpr[7] = (0u | 151u);
    ctx.gpr[31] = (0x089912A4u);
    ctx.gpr[8] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x089912A4u) goto L_089912A4;
    return;
L_089912A4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_089912E0;
      }
      goto L_089912B8;
    }
L_089912B8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089912C4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089912C4u) goto L_089912C4;
    return;
L_089912C4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089912DC;
      }
      goto L_089912D0;
    }
L_089912D0:
    ctx.gpr[31] = (0x089912D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089912D8u) goto L_089912D8;
    return;
L_089912D8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089912DC;
L_089912DC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_089912E0;
L_089912E0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089912F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21712));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089912F0u) goto L_089912F0;
    return;
L_089912F0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08991304u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991304u) goto L_08991304;
    return;
L_08991304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899198C;
      }
      goto L_0899130C;
    }
L_0899130C:
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0899132Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x0899132Cu) goto L_0899132C;
    return;
L_0899132C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21784));
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21800));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-21792));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08991384;
      }
      goto L_08991358;
    }
L_08991358:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08991364u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08991364u) goto L_08991364;
    return;
L_08991364:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899137C;
      }
      goto L_08991370;
    }
L_08991370:
    ctx.gpr[31] = (0x08991378u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08991378u) goto L_08991378;
    return;
L_08991378:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0899137C;
L_0899137C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991384;
L_08991384:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991390u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991390u) goto L_08991390;
    return;
L_08991390:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089913A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089913A4u) goto L_089913A4;
    return;
L_089913A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[5] = (0u | 164u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089913B8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x089913B8u) goto L_089913B8;
    return;
L_089913B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_089913EC;
      }
      goto L_089913C4;
    }
L_089913C4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089913D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089913D0u) goto L_089913D0;
    return;
L_089913D0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089913E8;
      }
      goto L_089913DC;
    }
L_089913DC:
    ctx.gpr[31] = (0x089913E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089913E4u) goto L_089913E4;
    return;
L_089913E4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089913E8;
L_089913E8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_089913EC;
L_089913EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089913F8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089913F8u) goto L_089913F8;
    return;
L_089913F8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0899140Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0899140Cu) goto L_0899140C;
    return;
L_0899140C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08991420u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x08991420u) goto L_08991420;
    return;
L_08991420:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08991454;
      }
      goto L_0899142C;
    }
L_0899142C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08991438u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08991438u) goto L_08991438;
    return;
L_08991438:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991450;
      }
      goto L_08991444;
    }
L_08991444:
    ctx.gpr[31] = (0x0899144Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0899144Cu) goto L_0899144C;
    return;
L_0899144C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991450;
L_08991450:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08991454;
L_08991454:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991460u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991460u) goto L_08991460;
    return;
L_08991460:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991474u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991474u) goto L_08991474;
    return;
L_08991474:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24580)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[4] = (0u | 240u);
    ctx.gpr[5] = (0u | 152u);
    ctx.gpr[31] = (0x08991498u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x08991498u) goto L_08991498;
    return;
L_08991498:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (17274u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089914D4;
      }
      goto L_089914AC;
    }
L_089914AC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089914B8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089914B8u) goto L_089914B8;
    return;
L_089914B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089914D0;
      }
      goto L_089914C4;
    }
L_089914C4:
    ctx.gpr[31] = (0x089914CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089914CCu) goto L_089914CC;
    return;
L_089914CC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089914D0;
L_089914D0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_089914D4;
L_089914D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x089914E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089914E0u) goto L_089914E0;
    return;
L_089914E0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089914F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089914F4u) goto L_089914F4;
    return;
L_089914F4:
    ctx.gpr[31] = (0x089914FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 287u, 0x088A93FCu>(ctx, &aot_mem) && ctx.pc == 0x089914FCu) goto L_089914FC;
    return;
L_089914FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089915AC;
      }
      goto L_0899150C;
    }
L_0899150C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08991518u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 287u, 0x088A93FCu>(ctx, &aot_mem) && ctx.pc == 0x08991518u) goto L_08991518;
    return;
L_08991518:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08991524u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 113u, 0x088A85F0u>(ctx, &aot_mem) && ctx.pc == 0x08991524u) goto L_08991524;
    return;
L_08991524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(107)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(105)));
    ctx.gpr[9] = (17188u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(106)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[31] = (0x08991554u);
    ctx.gpr[4] = (0u | 53u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08991554u) goto L_08991554;
    return;
L_08991554:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_0899158C;
      }
      goto L_08991560;
    }
L_08991560:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0899156Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0899156Cu) goto L_0899156C;
    return;
L_0899156C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991584;
      }
      goto L_08991578;
    }
L_08991578:
    ctx.gpr[31] = (0x08991580u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08991580u) goto L_08991580;
    return;
L_08991580:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991584;
L_08991584:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[5] = (2226u << 16u);
    goto L_0899158C;
L_0899158C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991598u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21704));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991598u) goto L_08991598;
    return;
L_08991598:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089915ACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089915ACu) goto L_089915AC;
    return;
L_089915AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899198C;
      }
      goto L_089915B4;
    }
L_089915B4:
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x089915D4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x089915D4u) goto L_089915D4;
    return;
L_089915D4:
    ctx.gpr[5] = (17274u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21784));
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-21800));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-21792));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899163C;
      }
      goto L_08991610;
    }
L_08991610:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0899161Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0899161Cu) goto L_0899161C;
    return;
L_0899161C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991634;
      }
      goto L_08991628;
    }
L_08991628:
    ctx.gpr[31] = (0x08991630u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08991630u) goto L_08991630;
    return;
L_08991630:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08991634;
L_08991634:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899163C;
L_0899163C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991648u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991648u) goto L_08991648;
    return;
L_08991648:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0899165Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0899165Cu) goto L_0899165C;
    return;
L_0899165C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[5] = (0u | 164u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08991670u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x08991670u) goto L_08991670;
    return;
L_08991670:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[4] = (17182u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089916AC;
      }
      goto L_08991680;
    }
L_08991680:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0899168Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0899168Cu) goto L_0899168C;
    return;
L_0899168C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089916A4;
      }
      goto L_08991698;
    }
L_08991698:
    ctx.gpr[31] = (0x089916A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089916A0u) goto L_089916A0;
    return;
L_089916A0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089916A4;
L_089916A4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089916AC;
L_089916AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089916B8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089916B8u) goto L_089916B8;
    return;
L_089916B8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089916CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089916CCu) goto L_089916CC;
    return;
L_089916CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089916E0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x089916E0u) goto L_089916E0;
    return;
L_089916E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[4] = (17194u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08991718;
      }
      goto L_089916F0;
    }
L_089916F0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089916FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089916FCu) goto L_089916FC;
    return;
L_089916FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991714;
      }
      goto L_08991708;
    }
L_08991708:
    ctx.gpr[31] = (0x08991710u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08991710u) goto L_08991710;
    return;
L_08991710:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991714;
L_08991714:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08991718;
L_08991718:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991724u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991724u) goto L_08991724;
    return;
L_08991724:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991738u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991738u) goto L_08991738;
    return;
L_08991738:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24580)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-24584)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 188u);
    ctx.gpr[31] = (0x0899175Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x08988140u>(ctx, &aot_mem) && ctx.pc == 0x0899175Cu) goto L_0899175C;
    return;
L_0899175C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[4] = (17206u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08991794;
      }
      goto L_0899176C;
    }
L_0899176C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08991778u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08991778u) goto L_08991778;
    return;
L_08991778:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991790;
      }
      goto L_08991784;
    }
L_08991784:
    ctx.gpr[31] = (0x0899178Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0899178Cu) goto L_0899178C;
    return;
L_0899178C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991790;
L_08991790:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08991794;
L_08991794:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x089917A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089917A0u) goto L_089917A0;
    return;
L_089917A0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089917B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089917B4u) goto L_089917B4;
    return;
L_089917B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 152u);
      if (branch_taken) {
          goto L_08991878;
      }
      goto L_089917DC;
    }
L_089917DC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24576)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089917F0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 113u, 0x088A85F0u>(ctx, &aot_mem) && ctx.pc == 0x089917F0u) goto L_089917F0;
    return;
L_089917F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(111)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(109)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(110)));
    ctx.gpr[31] = (0x08991818u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08991818u) goto L_08991818;
    return;
L_08991818:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[19] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21776));
      if (branch_taken) {
          goto L_08991854;
      }
      goto L_0899182C;
    }
L_0899182C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08991838u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08991838u) goto L_08991838;
    return;
L_08991838:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991850;
      }
      goto L_08991844;
    }
L_08991844:
    ctx.gpr[31] = (0x0899184Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0899184Cu) goto L_0899184C;
    return;
L_0899184C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08991850;
L_08991850:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08991854;
L_08991854:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991860u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991860u) goto L_08991860;
    return;
L_08991860:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08991874u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991874u) goto L_08991874;
    return;
L_08991874:
    ctx.gpr[16] = (0u | 164u);
    goto L_08991878;
L_08991878:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (0u | 50u);
    ctx.gpr[5] = (0u | 255u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[7] = (0u | 151u);
    ctx.gpr[31] = (0x0899189Cu);
    ctx.gpr[8] = (0u | 75u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x0899189Cu) goto L_0899189C;
    return;
L_0899189C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_089918DC;
      }
      goto L_089918B0;
    }
L_089918B0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089918BCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089918BCu) goto L_089918BC;
    return;
L_089918BC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089918D4;
      }
      goto L_089918C8;
    }
L_089918C8:
    ctx.gpr[31] = (0x089918D0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089918D0u) goto L_089918D0;
    return;
L_089918D0:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_089918D4;
L_089918D4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089918DC;
L_089918DC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[31] = (0x089918E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21696));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089918E8u) goto L_089918E8;
    return;
L_089918E8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089918FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x089918FCu) goto L_089918FC;
    return;
L_089918FC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (0u | 52u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08991924u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x08991924u) goto L_08991924;
    return;
L_08991924:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08991964;
      }
      goto L_08991938;
    }
L_08991938:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08991944u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08991944u) goto L_08991944;
    return;
L_08991944:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899195C;
      }
      goto L_08991950;
    }
L_08991950:
    ctx.gpr[31] = (0x08991958u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08991958u) goto L_08991958;
    return;
L_08991958:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899195C;
L_0899195C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08991964;
L_08991964:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[31] = (0x08991970u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21688));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991970u) goto L_08991970;
    return;
L_08991970:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08991984u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08991984u) goto L_08991984;
    return;
L_08991984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899198C;
      }
      goto L_0899198C;
    }
L_0899198C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089919D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25268)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25272)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] | 14571u);
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-25264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (2228u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25244)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[3] = (2228u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25232)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-25236)));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25228), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25220), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2228u << 16u);
    ctx.gpr[12] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-25256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-25260), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[7] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2228u << 16u);
    ctx.gpr[3] = (ctx.gpr[7] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-25252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-25248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2228u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-25240), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[25] = (2228u << 16u);
    ctx.gpr[17] = (2277u << 16u);
    ctx.gpr[18] = (2221u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7232));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(13928));
    ctx.gpr[5] = (0u | 70u);
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-25224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08991AE4u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-25216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08991AE4u) goto L_08991AE4;
    return;
L_08991AE4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08991AF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24528));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08991AF0u) goto L_08991AF0;
    return;
L_08991AF0:
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
L_08991B08:
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
L_08991B34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-592));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1205));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(99) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 98u, 0x08994848u>(ctx, &aot_mem); return;
      }
      goto L_08991B6C;
    }
L_08991B6C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1205));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-21240)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991B88:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08991B9Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08991B9Cu) goto L_08991B9C;
    return;
L_08991B9C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08991BB8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08991BB8u) goto L_08991BB8;
    return;
L_08991BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08991BF0;
      }
      goto L_08991BE8;
    }
L_08991BE8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991C40;
      }
      goto L_08991BF0;
    }
L_08991BF0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08991C20;
    }
    goto L_08991C0C;
L_08991C0C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991C40;
      }
      goto L_08991C20;
    }
L_08991C20:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991C40;
      }
      goto L_08991C3C;
    }
L_08991C3C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08991C40;
L_08991C40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08991C48;
    }
L_08991C48:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08991C5Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08991C5Cu) goto L_08991C5C;
    return;
L_08991C5C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08991C78u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08991C78u) goto L_08991C78;
    return;
L_08991C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08991CB0;
      }
      goto L_08991CA8;
    }
L_08991CA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991D00;
      }
      goto L_08991CB0;
    }
L_08991CB0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08991CE0;
    }
    goto L_08991CCC;
L_08991CCC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991D00;
      }
      goto L_08991CE0;
    }
L_08991CE0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991D00;
      }
      goto L_08991CFC;
    }
L_08991CFC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08991D00;
L_08991D00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08991D08;
    }
L_08991D08:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08991D24u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08991D24u) goto L_08991D24;
    return;
L_08991D24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08991D34u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08991D34u) goto L_08991D34;
    return;
L_08991D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08991D6C;
      }
      goto L_08991D64;
    }
L_08991D64:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991DBC;
      }
      goto L_08991D6C;
    }
L_08991D6C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08991D9C;
    }
    goto L_08991D88;
L_08991D88:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991DBC;
      }
      goto L_08991D9C;
    }
L_08991D9C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991DBC;
      }
      goto L_08991DB8;
    }
L_08991DB8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08991DBC;
L_08991DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08991DC4;
    }
L_08991DC4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08991DE0u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08991DE0u) goto L_08991DE0;
    return;
L_08991DE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08991DF0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08991DF0u) goto L_08991DF0;
    return;
L_08991DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08991E28;
      }
      goto L_08991E20;
    }
L_08991E20:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991E78;
      }
      goto L_08991E28;
    }
L_08991E28:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08991E58;
    }
    goto L_08991E44;
L_08991E44:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991E78;
      }
      goto L_08991E58;
    }
L_08991E58:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991E78;
      }
      goto L_08991E74;
    }
L_08991E74:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08991E78;
L_08991E78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08991E80;
    }
L_08991E80:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08991E94u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08991E94u) goto L_08991E94;
    return;
L_08991E94:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08991EB0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08991EB0u) goto L_08991EB0;
    return;
L_08991EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08991EEC;
      }
      goto L_08991EE4;
    }
L_08991EE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991F3C;
      }
      goto L_08991EEC;
    }
L_08991EEC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08991F1C;
    }
    goto L_08991F08;
L_08991F08:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08991F3C;
      }
      goto L_08991F1C;
    }
L_08991F1C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991F3C;
      }
      goto L_08991F38;
    }
L_08991F38:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08991F3C;
L_08991F3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08991F44;
    }
L_08991F44:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08991F58u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08991F58u) goto L_08991F58;
    return;
L_08991F58:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08991F74u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08991F74u) goto L_08991F74;
    return;
L_08991F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08991FB0;
      }
      goto L_08991FA8;
    }
L_08991FA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08992000;
      }
      goto L_08991FB0;
    }
L_08991FB0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08991FE0;
    }
    goto L_08991FCC;
L_08991FCC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08992000;
      }
      goto L_08991FE0;
    }
L_08991FE0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08992000;
      }
      goto L_08991FFC;
    }
L_08991FFC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08992000;
L_08992000:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992008;
    }
L_08992008:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08992024u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992024u) goto L_08992024;
    return;
L_08992024:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08992034u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08992034u) goto L_08992034;
    return;
L_08992034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08992070;
      }
      goto L_08992068;
    }
L_08992068:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089920C0;
      }
      goto L_08992070;
    }
L_08992070:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089920A0;
    }
    goto L_0899208C;
L_0899208C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089920C0;
      }
      goto L_089920A0;
    }
L_089920A0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089920C0;
      }
      goto L_089920BC;
    }
L_089920BC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089920C0;
L_089920C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089920C8;
    }
L_089920C8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089920E4u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089920E4u) goto L_089920E4;
    return;
L_089920E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089920F4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089920F4u) goto L_089920F4;
    return;
L_089920F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08992130;
      }
      goto L_08992128;
    }
L_08992128:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08992180;
      }
      goto L_08992130;
    }
L_08992130:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08992160;
    }
    goto L_0899214C;
L_0899214C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08992180;
      }
      goto L_08992160;
    }
L_08992160:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08992180;
      }
      goto L_0899217C;
    }
L_0899217C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08992180;
L_08992180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992188;
    }
L_08992188:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089921A8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089921A8u) goto L_089921A8;
    return;
L_089921A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089921B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089921B8u) goto L_089921B8;
    return;
L_089921B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1400)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x089921E8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 138u, 0x08A81708u>(ctx, &aot_mem) && ctx.pc == 0x089921E8u) goto L_089921E8;
    return;
L_089921E8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089921FCu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089921FCu) goto L_089921FC;
    return;
L_089921FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992204;
    }
L_08992204:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08992220u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992220u) goto L_08992220;
    return;
L_08992220:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0899226Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 39u, 0x089783C4u>(ctx, &aot_mem) && ctx.pc == 0x0899226Cu) goto L_0899226C;
    return;
L_0899226C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089922C4;
      }
      goto L_0899227C;
    }
L_0899227C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08992338;
      }
      goto L_089922C4;
    }
L_089922C4:
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x089922DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 704u, 0x089777A8u>(ctx, &aot_mem) && ctx.pc == 0x089922DCu) goto L_089922DC;
    return;
L_089922DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08992310u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 704u, 0x089777A8u>(ctx, &aot_mem) && ctx.pc == 0x08992310u) goto L_08992310;
    return;
L_08992310:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08992338;
L_08992338:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992348u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08992348u) goto L_08992348;
    return;
L_08992348:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992350;
    }
L_08992350:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0899236Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899236Cu) goto L_0899236C;
    return;
L_0899236C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0899237Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0899237Cu) goto L_0899237C;
    return;
L_0899237C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089923EC;
      }
      goto L_089923D0;
    }
L_089923D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089923EC;
      }
      goto L_089923DC;
    }
L_089923DC:
    ctx.gpr[4] = (15969u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089923EC;
L_089923EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089923F4;
    }
L_089923F4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899240Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899240Cu) goto L_0899240C;
    return;
L_0899240C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x0899241Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29200), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 905u, 0x089CBD4Cu>(ctx, &aot_mem) && ctx.pc == 0x0899241Cu) goto L_0899241C;
    return;
L_0899241C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992424;
    }
L_08992424:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08992444u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08992444u) goto L_08992444;
    return;
L_08992444:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08992458u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 542u, 0x08AE73F8u>(ctx, &aot_mem) && ctx.pc == 0x08992458u) goto L_08992458;
    return;
L_08992458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992460;
    }
L_08992460:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0899247Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899247Cu) goto L_0899247C;
    return;
L_0899247C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0899248Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0899248Cu) goto L_0899248C;
    return;
L_0899248C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089924A8;
      }
      goto L_08992498;
    }
L_08992498:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089924B8;
      }
      goto L_089924A8;
    }
L_089924A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089924B8;
L_089924B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089924C0;
    }
L_089924C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089924D8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089924D8u) goto L_089924D8;
    return;
L_089924D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992508;
    }
L_08992508:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08992524u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992524u) goto L_08992524;
    return;
L_08992524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08992560u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08992560u) goto L_08992560;
    return;
L_08992560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992568;
    }
L_08992568:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08992584u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992584u) goto L_08992584;
    return;
L_08992584:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x089925C0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 119u, 0x089E89B4u>(ctx, &aot_mem) && ctx.pc == 0x089925C0u) goto L_089925C0;
    return;
L_089925C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089925C8;
    }
L_089925C8:
    ctx.gpr[31] = (0x089925D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 126u, 0x089E8A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089925D0u) goto L_089925D0;
    return;
L_089925D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089925D8;
    }
L_089925D8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089925F4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089925F4u) goto L_089925F4;
    return;
L_089925F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x08992604u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08992604u) goto L_08992604;
    return;
L_08992604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08992614u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08992614u) goto L_08992614;
    return;
L_08992614:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x08992648u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08992648u) goto L_08992648;
    return;
L_08992648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992650;
    }
L_08992650:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08992670u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992670u) goto L_08992670;
    return;
L_08992670:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08992680u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08992680u) goto L_08992680;
    return;
L_08992680:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089926D4u);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089926D4u) goto L_089926D4;
    return;
L_089926D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089926FCu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089926FCu) goto L_089926FC;
    return;
L_089926FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992704;
    }
L_08992704:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899271Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899271Cu) goto L_0899271C;
    return;
L_0899271C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0899272Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0899272Cu) goto L_0899272C;
    return;
L_0899272C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (ctx.gpr[6] & 32768u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08992758;
      }
      goto L_08992740;
    }
L_08992740:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(412)));
    ctx.gpr[7] = (65535u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32767));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(412), ctx.gpr[6]);
    goto L_08992758;
L_08992758:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08992784;
      }
      goto L_0899277C;
    }
L_0899277C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089927D4;
      }
      goto L_08992784;
    }
L_08992784:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089927B4;
    }
    goto L_089927A0;
L_089927A0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089927D4;
      }
      goto L_089927B4;
    }
L_089927B4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089927D4;
      }
      goto L_089927D0;
    }
L_089927D0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089927D4;
L_089927D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089927DC;
    }
L_089927DC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089927F8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089927F8u) goto L_089927F8;
    return;
L_089927F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x08992808u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08992808u) goto L_08992808;
    return;
L_08992808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08992818u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08992818u) goto L_08992818;
    return;
L_08992818:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 46u);
    ctx.gpr[31] = (0x0899284Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x0899284Cu) goto L_0899284C;
    return;
L_0899284C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992854;
    }
L_08992854:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899286Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899286Cu) goto L_0899286C;
    return;
L_0899286C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089928A4;
      }
      goto L_08992878;
    }
L_08992878:
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1668), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7128), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 230u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7132), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7168), 0u);
      if (branch_taken) {
          goto L_089928C8;
      }
      goto L_089928A4;
    }
L_089928A4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1668), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7128), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7132), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7168), ctx.gpr[4]);
    goto L_089928C8;
L_089928C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089928D0;
    }
L_089928D0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089928E8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089928E8u) goto L_089928E8;
    return;
L_089928E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08992960;
      }
      goto L_0899291C;
    }
L_0899291C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08992960;
      }
      goto L_0899292C;
    }
L_0899292C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08992938u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08992938u) goto L_08992938;
    return;
L_08992938:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899295C;
      }
      goto L_08992944;
    }
L_08992944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08992950u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08992950u) goto L_08992950;
    return;
L_08992950:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08992960;
      }
      goto L_0899295C;
    }
L_0899295C:
    ctx.gpr[18] = (0u | 1u);
    goto L_08992960;
L_08992960:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_0899298C;
      }
      goto L_08992984;
    }
L_08992984:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_089929DC;
      }
      goto L_0899298C;
    }
L_0899298C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089929BC;
    }
    goto L_089929A8;
L_089929A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089929DC;
      }
      goto L_089929BC;
    }
L_089929BC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089929DC;
      }
      goto L_089929D8;
    }
L_089929D8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089929DC;
L_089929DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089929E4;
    }
L_089929E4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08992A00u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992A00u) goto L_08992A00;
    return;
L_08992A00:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08992A30;
      }
      goto L_08992A20;
    }
L_08992A20:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08992A2Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08992A2Cu) goto L_08992A2C;
    return;
L_08992A2C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08992A30;
L_08992A30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08992A40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x08992A40u) goto L_08992A40;
    return;
L_08992A40:
    ctx.gpr[31] = (0x08992A48u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x08992A48u) goto L_08992A48;
    return;
L_08992A48:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
      if (branch_taken) {
          goto L_08992A54;
      }
      goto L_08992A54;
    }
L_08992A54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08992A74u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 5u, 0x0896803Cu>(ctx, &aot_mem) && ctx.pc == 0x08992A74u) goto L_08992A74;
    return;
L_08992A74:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08992A8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 79u, 0x0896854Cu>(ctx, &aot_mem) && ctx.pc == 0x08992A8Cu) goto L_08992A8C;
    return;
L_08992A8C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992AA0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08992AA0u) goto L_08992AA0;
    return;
L_08992AA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992AA8;
    }
L_08992AA8:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08992AC0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992AC0u) goto L_08992AC0;
    return;
L_08992AC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992AC8;
    }
L_08992AC8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08992AE4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992AE4u) goto L_08992AE4;
    return;
L_08992AE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08992AF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08992AF4u) goto L_08992AF4;
    return;
L_08992AF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08992B68;
      }
      goto L_08992B40;
    }
L_08992B40:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08992B40;
      }
      goto L_08992B68;
    }
L_08992B68:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08992BAC;
      }
      goto L_08992B88;
    }
L_08992B88:
    ctx.gpr[4] = (16585u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08992B88;
      }
      goto L_08992BAC;
    }
L_08992BAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x08992BB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 152u, 0x0880CB20u>(ctx, &aot_mem) && ctx.pc == 0x08992BB8u) goto L_08992BB8;
    return;
L_08992BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992BC0;
    }
L_08992BC0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08992BD8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992BD8u) goto L_08992BD8;
    return;
L_08992BD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08992BE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08992BE8u) goto L_08992BE8;
    return;
L_08992BE8:
    ctx.gpr[31] = (0x08992BF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 153u, 0x0880CB28u>(ctx, &aot_mem) && ctx.pc == 0x08992BF0u) goto L_08992BF0;
    return;
L_08992BF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992BF8;
    }
L_08992BF8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08992C14u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992C14u) goto L_08992C14;
    return;
L_08992C14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08992C24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08992C24u) goto L_08992C24;
    return;
L_08992C24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08992C40u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 154u, 0x0880CB38u>(ctx, &aot_mem) && ctx.pc == 0x08992C40u) goto L_08992C40;
    return;
L_08992C40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992C48;
    }
L_08992C48:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08992C64u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992C64u) goto L_08992C64;
    return;
L_08992C64:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08992C94;
      }
      goto L_08992C84;
    }
L_08992C84:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08992C90u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08992C90u) goto L_08992C90;
    return;
L_08992C90:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08992C94;
L_08992C94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[10] = (18804u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (ctx.gpr[10] | 9214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08992CDCu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 409u, 0x08975B18u>(ctx, &aot_mem) && ctx.pc == 0x08992CDCu) goto L_08992CDC;
    return;
L_08992CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x08992CECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 704u, 0x089777A8u>(ctx, &aot_mem) && ctx.pc == 0x08992CECu) goto L_08992CEC;
    return;
L_08992CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992D14u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08992D14u) goto L_08992D14;
    return;
L_08992D14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992D1C;
    }
L_08992D1C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08992D38u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992D38u) goto L_08992D38;
    return;
L_08992D38:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08992D68;
      }
      goto L_08992D58;
    }
L_08992D58:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08992D64u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08992D64u) goto L_08992D64;
    return;
L_08992D64:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08992D68;
L_08992D68:
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (18804u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08992DB4u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 409u, 0x08975B18u>(ctx, &aot_mem) && ctx.pc == 0x08992DB4u) goto L_08992DB4;
    return;
L_08992DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[6] = (ctx.gpr[2] << 2u);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992E14u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08992E14u) goto L_08992E14;
    return;
L_08992E14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992E1C;
    }
L_08992E1C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x08992E38u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992E38u) goto L_08992E38;
    return;
L_08992E38:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08992E68;
      }
      goto L_08992E58;
    }
L_08992E58:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08992E64u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08992E64u) goto L_08992E64;
    return;
L_08992E64:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08992E68;
L_08992E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (15948u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (17174u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[11] = (ctx.gpr[3] & 255u);
    ctx.gpr[31] = (0x08992EECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08992EECu) goto L_08992EEC;
    return;
L_08992EEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992EF4;
    }
L_08992EF4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08992F0Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992F0Cu) goto L_08992F0C;
    return;
L_08992F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08992F24;
      }
      goto L_08992F18;
    }
L_08992F18:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16183), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08992F30;
      }
      goto L_08992F24;
    }
L_08992F24:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16183), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08992F30;
L_08992F30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992F38;
    }
L_08992F38:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08992F54u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992F54u) goto L_08992F54;
    return;
L_08992F54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08992F64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08992F64u) goto L_08992F64;
    return;
L_08992F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08992F80;
      }
      goto L_08992F70;
    }
L_08992F70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08992F90;
      }
      goto L_08992F80;
    }
L_08992F80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08992F90;
L_08992F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08992F98;
    }
L_08992F98:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08992FB4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08992FB4u) goto L_08992FB4;
    return;
L_08992FB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08992FC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08992FC4u) goto L_08992FC4;
    return;
L_08992FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08992FE4;
      }
      goto L_08992FD0;
    }
L_08992FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08992FF8;
      }
      goto L_08992FE4;
    }
L_08992FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_08992FF8;
L_08992FF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993000;
    }
L_08993000:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0899301Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899301Cu) goto L_0899301C;
    return;
L_0899301C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0899302Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0899302Cu) goto L_0899302C;
    return;
L_0899302C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08993060;
      }
      goto L_08993038;
    }
L_08993038:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08993084;
      }
      goto L_08993060;
    }
L_08993060:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08993084;
L_08993084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_0899308C;
    }
L_0899308C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089930A4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089930A4u) goto L_089930A4;
    return;
L_089930A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089930B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089930B4u) goto L_089930B4;
    return;
L_089930B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(266)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089930C4;
      }
      goto L_089930C0;
    }
L_089930C0:
    ctx.gpr[4] = (0u | 1u);
    goto L_089930C4;
L_089930C4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089930F0;
      }
      goto L_089930E8;
    }
L_089930E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08993140;
      }
      goto L_089930F0;
    }
L_089930F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08993120;
    }
    goto L_0899310C;
L_0899310C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08993140;
      }
      goto L_08993120;
    }
L_08993120:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993140;
      }
      goto L_0899313C;
    }
L_0899313C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08993140;
L_08993140:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993148;
    }
L_08993148:
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
    ctx.gpr[31] = (0x08993178u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 462u, 0x089D70D4u>(ctx, &aot_mem) && ctx.pc == 0x08993178u) goto L_08993178;
    return;
L_08993178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993180;
    }
L_08993180:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7127)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0899319C;
      }
      goto L_08993190;
    }
L_08993190:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7127), static_cast<std::uint8_t>(0u));
    goto L_0899319C;
L_0899319C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089931C8;
      }
      goto L_089931C0;
    }
L_089931C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08993218;
      }
      goto L_089931C8;
    }
L_089931C8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089931F8;
    }
    goto L_089931E4;
L_089931E4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08993218;
      }
      goto L_089931F8;
    }
L_089931F8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993218;
      }
      goto L_08993214;
    }
L_08993214:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08993218;
L_08993218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993220;
    }
L_08993220:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899323Cu);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899323Cu) goto L_0899323C;
    return;
L_0899323C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0899324Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0899324Cu) goto L_0899324C;
    return;
L_0899324C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1212)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0899326Cu);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0899326Cu) goto L_0899326C;
    return;
L_0899326C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993274;
    }
L_08993274:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08993290u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993290u) goto L_08993290;
    return;
L_08993290:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089932A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089932A0u) goto L_089932A0;
    return;
L_089932A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089932BC;
      }
      goto L_089932AC;
    }
L_089932AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089932CC;
      }
      goto L_089932BC;
    }
L_089932BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089932CC;
L_089932CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089932D4;
    }
L_089932D4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089932F0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089932F0u) goto L_089932F0;
    return;
L_089932F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993300u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08993300u) goto L_08993300;
    return;
L_08993300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(417), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993310;
    }
L_08993310:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993328u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993328u) goto L_08993328;
    return;
L_08993328:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993338u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08993338u) goto L_08993338;
    return;
L_08993338:
    ctx.gpr[31] = (0x08993340u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 160u, 0x0880CBD0u>(ctx, &aot_mem) && ctx.pc == 0x08993340u) goto L_08993340;
    return;
L_08993340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993348;
    }
L_08993348:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08993364u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993364u) goto L_08993364;
    return;
L_08993364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993388;
      }
      goto L_08993370;
    }
L_08993370:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08993380u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 198u, 0x08864DF8u>(ctx, &aot_mem) && ctx.pc == 0x08993380u) goto L_08993380;
    return;
L_08993380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08993398;
      }
      goto L_08993388;
    }
L_08993388:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08993398u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 198u, 0x08864DF8u>(ctx, &aot_mem) && ctx.pc == 0x08993398u) goto L_08993398;
    return;
L_08993398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089933A0;
    }
L_089933A0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089933BCu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089933BCu) goto L_089933BC;
    return;
L_089933BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x089933D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 196u, 0x08864DD4u>(ctx, &aot_mem) && ctx.pc == 0x089933D4u) goto L_089933D4;
    return;
L_089933D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089933DC;
    }
L_089933DC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089933F8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089933F8u) goto L_089933F8;
    return;
L_089933F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08993418u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 348u, 0x089860B8u>(ctx, &aot_mem) && ctx.pc == 0x08993418u) goto L_08993418;
    return;
L_08993418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993420;
    }
L_08993420:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08993430u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F11Cu>(ctx, &aot_mem) && ctx.pc == 0x08993430u) goto L_08993430;
    return;
L_08993430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993438;
    }
L_08993438:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993450u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993450u) goto L_08993450;
    return;
L_08993450:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993460u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08993460u) goto L_08993460;
    return;
L_08993460:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08993480;
      }
      goto L_0899346C;
    }
L_0899346C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993480;
      }
      goto L_0899347C;
    }
L_0899347C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08993480;
L_08993480:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089934AC;
      }
      goto L_089934A4;
    }
L_089934A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089934FC;
      }
      goto L_089934AC;
    }
L_089934AC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089934DC;
    }
    goto L_089934C8;
L_089934C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089934FC;
      }
      goto L_089934DC;
    }
L_089934DC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089934FC;
      }
      goto L_089934F8;
    }
L_089934F8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089934FC;
L_089934FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993504;
    }
L_08993504:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08993514u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 6u, 0x08880074u>(ctx, &aot_mem) && ctx.pc == 0x08993514u) goto L_08993514;
    return;
L_08993514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_0899351C;
    }
L_0899351C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08993538u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993538u) goto L_08993538;
    return;
L_08993538:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993548u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08993548u) goto L_08993548;
    return;
L_08993548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08993580;
      }
      goto L_08993554;
    }
L_08993554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08993578u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 656u, 0x088875FCu>(ctx, &aot_mem) && ctx.pc == 0x08993578u) goto L_08993578;
    return;
L_08993578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899359C;
      }
      goto L_08993580;
    }
L_08993580:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899358Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 683u, 0x088877D0u>(ctx, &aot_mem) && ctx.pc == 0x0899358Cu) goto L_0899358C;
    return;
L_0899358C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_0899359C;
L_0899359C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089935A4;
    }
L_089935A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089935C4u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089935C4u) goto L_089935C4;
    return;
L_089935C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x089935ECu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089935ECu) goto L_089935EC;
    return;
L_089935EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(272), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(274), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(276), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(278), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(280), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(282), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(284), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(286), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(288), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(290), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(292), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993658u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 221u, 0x0887171Cu>(ctx, &aot_mem) && ctx.pc == 0x08993658u) goto L_08993658;
    return;
L_08993658:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08993674;
      }
      goto L_08993664;
    }
L_08993664:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x08993674u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21612));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08993674u) goto L_08993674;
    return;
L_08993674:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089936BC;
      }
      goto L_0899367C;
    }
L_0899367C:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(290));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x089936A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 341u, 0x08871F10u>(ctx, &aot_mem) && ctx.pc == 0x089936A0u) goto L_089936A0;
    return;
L_089936A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x089936B0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 251u, 0x08871908u>(ctx, &aot_mem) && ctx.pc == 0x089936B0u) goto L_089936B0;
    return;
L_089936B0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0899367C;
      }
      goto L_089936BC;
    }
L_089936BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089936C4;
    }
L_089936C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089936E4u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089936E4u) goto L_089936E4;
    return;
L_089936E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x089936F8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089936F8u) goto L_089936F8;
    return;
L_089936F8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08993718;
      }
      goto L_08993704;
    }
L_08993704:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    ctx.gpr[31] = (0x08993710u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08993710u) goto L_08993710;
    return;
L_08993710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08993724;
      }
      goto L_08993718;
    }
L_08993718:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    ctx.gpr[31] = (0x08993724u);
    ctx.gpr[5] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08993724u) goto L_08993724;
    return;
L_08993724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_0899372C;
    }
L_0899372C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899374Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x0899374Cu) goto L_0899374C;
    return;
L_0899374C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08993760u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x08993760u) goto L_08993760;
    return;
L_08993760:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08993774;
      }
      goto L_08993770;
    }
L_08993770:
    ctx.gpr[4] = (0u | 1u);
    goto L_08993774;
L_08993774:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089937A0;
      }
      goto L_08993798;
    }
L_08993798:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089937F0;
      }
      goto L_089937A0;
    }
L_089937A0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089937D0;
    }
    goto L_089937BC;
L_089937BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089937F0;
      }
      goto L_089937D0;
    }
L_089937D0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089937F0;
      }
      goto L_089937EC;
    }
L_089937EC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089937F0;
L_089937F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089937F8;
    }
L_089937F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993818u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08993818u) goto L_08993818;
    return;
L_08993818:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x0899382Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x0899382Cu) goto L_0899382C;
    return;
L_0899382C:
    ctx.gpr[31] = (0x08993834u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x08993834u) goto L_08993834;
    return;
L_08993834:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08993848;
      }
      goto L_08993840;
    }
L_08993840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089938A4;
      }
      goto L_08993848;
    }
L_08993848:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7564)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7564)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089938A0;
      }
      goto L_08993870;
    }
L_08993870:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7568)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7568)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089938A4;
      }
      goto L_0899389C;
    }
L_0899389C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089938A0;
L_089938A0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089938A4;
L_089938A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089938C0;
      }
      goto L_089938AC;
    }
L_089938AC:
    ctx.gpr[4] = (2226u << 16u);
    goto L_089938B0;
L_089938B0:
    ctx.gpr[31] = (0x089938B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21648));
    goto L_08991B08;
L_089938B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_089938B0;
      }
      goto L_089938C0;
    }
L_089938C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_089938C8;
    }
L_089938C8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089938E0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089938E0u) goto L_089938E0;
    return;
L_089938E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089938F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089938F0u) goto L_089938F0;
    return;
L_089938F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08993904;
      }
      goto L_08993900;
    }
L_08993900:
    ctx.gpr[4] = (0u | 1u);
    goto L_08993904;
L_08993904:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08993930;
      }
      goto L_08993928;
    }
L_08993928:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08993980;
      }
      goto L_08993930;
    }
L_08993930:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08993960;
    }
    goto L_0899394C;
L_0899394C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08993980;
      }
      goto L_08993960;
    }
L_08993960:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993980;
      }
      goto L_0899397C;
    }
L_0899397C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08993980;
L_08993980:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993988;
    }
L_08993988:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089939A0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089939A0u) goto L_089939A0;
    return;
L_089939A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089939B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089939B0u) goto L_089939B0;
    return;
L_089939B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089939C4;
      }
      goto L_089939C0;
    }
L_089939C0:
    ctx.gpr[4] = (0u | 1u);
    goto L_089939C4;
L_089939C4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089939F0;
      }
      goto L_089939E8;
    }
L_089939E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08993A40;
      }
      goto L_089939F0;
    }
L_089939F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08993A20;
    }
    goto L_08993A0C;
L_08993A0C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08993A40;
      }
      goto L_08993A20;
    }
L_08993A20:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993A40;
      }
      goto L_08993A3C;
    }
L_08993A3C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08993A40;
L_08993A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993A48;
    }
L_08993A48:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993A60u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993A60u) goto L_08993A60;
    return;
L_08993A60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993A70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08993A70u) goto L_08993A70;
    return;
L_08993A70:
    ctx.gpr[31] = (0x08993A78u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 60u, 0x0888868Cu>(ctx, &aot_mem) && ctx.pc == 0x08993A78u) goto L_08993A78;
    return;
L_08993A78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993A80;
    }
L_08993A80:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08993A9Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993A9Cu) goto L_08993A9C;
    return;
L_08993A9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993AACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08993AACu) goto L_08993AAC;
    return;
L_08993AAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08993AC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08993AC0u) goto L_08993AC0;
    return;
L_08993AC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[17];
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08993B14u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 179u, 0x089A4C54u>(ctx, &aot_mem) && ctx.pc == 0x08993B14u) goto L_08993B14;
    return;
L_08993B14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993B1C;
    }
L_08993B1C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08993B38u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993B38u) goto L_08993B38;
    return;
L_08993B38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993B48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08993B48u) goto L_08993B48;
    return;
L_08993B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08993B68;
      }
      goto L_08993B54;
    }
L_08993B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08993B7C;
      }
      goto L_08993B68;
    }
L_08993B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_08993B7C;
L_08993B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993B84;
    }
L_08993B84:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08993B98u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08993B98u) goto L_08993B98;
    return;
L_08993B98:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (ctx.gpr[2] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08993BBCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993BBCu) goto L_08993BBC;
    return;
L_08993BBC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08993BFC;
    }
    goto L_08993BCC;
L_08993BCC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08993BD8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08993BD8u) goto L_08993BD8;
    return;
L_08993BD8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993BF0;
      }
      goto L_08993BE4;
    }
L_08993BE4:
    ctx.gpr[31] = (0x08993BECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08993BECu) goto L_08993BEC;
    return;
L_08993BEC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08993BF0;
L_08993BF0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08993BFC;
L_08993BFC:
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08993C14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08993C14u) goto L_08993C14;
    return;
L_08993C14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08993C30u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08993C30u) goto L_08993C30;
    return;
L_08993C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] & 65535u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08993C78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 390u, 0x08AC6C68u>(ctx, &aot_mem) && ctx.pc == 0x08993C78u) goto L_08993C78;
    return;
L_08993C78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993C80;
    }
L_08993C80:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 13u);
    ctx.gpr[31] = (0x08993C9Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993C9Cu) goto L_08993C9C;
    return;
L_08993C9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(312));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(328));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.gpr[31] = (0x08993D20u);
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 405u, 0x08AE9BA4u>(ctx, &aot_mem) && ctx.pc == 0x08993D20u) goto L_08993D20;
    return;
L_08993D20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993D28;
    }
L_08993D28:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08993D44u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993D44u) goto L_08993D44;
    return;
L_08993D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993D74;
      }
      goto L_08993D50;
    }
L_08993D50:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993D6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 276u, 0x08A7D738u>(ctx, &aot_mem) && ctx.pc == 0x08993D6Cu) goto L_08993D6C;
    return;
L_08993D6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08993D90;
      }
      goto L_08993D74;
    }
L_08993D74:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08993D90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 276u, 0x08A7D738u>(ctx, &aot_mem) && ctx.pc == 0x08993D90u) goto L_08993D90;
    return;
L_08993D90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993D98;
    }
L_08993D98:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993DB0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993DB0u) goto L_08993DB0;
    return;
L_08993DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993DD4;
      }
      goto L_08993DBC;
    }
L_08993DBC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[31] = (0x08993DCCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 280u, 0x08A7D76Cu>(ctx, &aot_mem) && ctx.pc == 0x08993DCCu) goto L_08993DCC;
    return;
L_08993DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08993DE4;
      }
      goto L_08993DD4;
    }
L_08993DD4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[31] = (0x08993DE4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 280u, 0x08A7D76Cu>(ctx, &aot_mem) && ctx.pc == 0x08993DE4u) goto L_08993DE4;
    return;
L_08993DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993DEC;
    }
L_08993DEC:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993E0Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993E0Cu) goto L_08993E0C;
    return;
L_08993E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(300)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(312)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(316)));
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[31] = (0x08993E70u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08993E70u) goto L_08993E70;
    return;
L_08993E70:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(300), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(308), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(316), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993E94;
    }
L_08993E94:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08993EACu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993EACu) goto L_08993EAC;
    return;
L_08993EAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993EBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08993EBCu) goto L_08993EBC;
    return;
L_08993EBC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08993F54;
      }
      goto L_08993ED0;
    }
L_08993ED0:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08993EF8;
      }
      goto L_08993EE8;
    }
L_08993EE8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08993F20;
      }
      goto L_08993EF8;
    }
L_08993EF8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08993F20;
      }
      goto L_08993F10;
    }
L_08993F10:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08993F20;
L_08993F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(296));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08993F4Cu);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08993F4Cu) goto L_08993F4C;
    return;
L_08993F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08993F80;
      }
      goto L_08993F54;
    }
L_08993F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(296));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08993F80u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08993F80u) goto L_08993F80;
    return;
L_08993F80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 99u, 0x0899484Cu>(ctx, &aot_mem); return;
      }
      goto L_08993F88;
    }
L_08993F88:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08993FA0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08993FA0u) goto L_08993FA0;
    return;
L_08993FA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08993FB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08993FB0u) goto L_08993FB0;
    return;
L_08993FB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08993FD0;
      }
      goto L_08993FC0;
    }
L_08993FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08993FD0;
      }
      goto L_08993FCC;
    }
L_08993FCC:
    ctx.gpr[5] = (0u | 1u);
    goto L_08993FD0;
L_08993FD0:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08993FFC;
      }
      goto L_08993FF4;
    }
L_08993FF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 5u, 0x0899404Cu>(ctx, &aot_mem); return;
      }
      goto L_08993FFC;
    }
L_08993FFC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.pc = 0x08994000u; return;
}

void recomp_unit_0099(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0099_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_99(Runtime &runtime) {
    runtime.register_generated_unit(99u, 0x08990000u, 16384u, &recomp_unit_0099, &recomp_unit_0099_entry);
    runtime.register_function(0x08990000u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990008u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899001Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990030u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899003Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990048u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990054u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899005Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990060u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990068u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990074u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990088u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899009Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990114u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990128u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990134u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990140u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990148u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899014Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990150u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899015Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990170u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990198u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990200u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899020Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990218u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990224u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899022Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990230u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990234u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990240u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990254u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899025Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990270u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899027Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990280u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899028Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990308u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990318u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990324u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990368u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990374u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990380u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899038Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990394u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990398u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089903A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089903A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089903BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089903C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089903E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089903FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990408u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990414u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899041Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990420u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990424u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990434u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990448u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990468u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990474u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990480u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899048Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990494u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990498u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899049Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089904ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089904C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089904E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089904F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990500u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899050Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990514u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990518u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899051Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899052Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990540u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990554u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990568u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990574u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990580u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990588u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899058Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990590u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899059Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990618u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990624u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990630u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899063Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990644u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990648u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899064Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899065Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990670u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990678u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990698u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990710u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990724u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990730u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899073Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990748u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990750u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990754u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990758u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990764u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990778u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899078Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990798u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990804u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990814u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990820u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899082Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990834u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990838u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899083Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990848u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899085Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990884u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990898u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990908u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990914u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990920u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990928u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899092Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990930u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899093Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990950u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990958u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990968u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A00u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A10u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A60u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A84u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A8Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990AA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990AB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990ABCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990ADCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B08u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B68u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B74u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B8Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BDCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C00u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C04u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C10u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C24u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C7Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C8Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CC8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CDCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CF8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D08u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D38u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D4Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990DA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990DB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990DF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E00u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E18u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E24u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990ECCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990ED4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990ED8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EE0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F60u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F7Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990FA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990FBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990FC4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990FE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991018u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991024u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991030u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991038u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899103Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991044u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991050u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991064u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991078u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991084u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991090u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899109Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991108u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991110u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991114u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991118u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991124u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991138u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899115Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991170u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899117Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991188u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991190u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991194u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991198u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991224u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991234u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991240u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899124Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991254u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991258u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899125Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991268u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899127Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991280u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991304u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899130Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899132Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991358u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991364u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991370u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991378u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899137Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991384u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991390u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899140Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991420u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899142Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991438u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991444u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899144Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991450u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991454u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991460u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991474u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991498u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899150Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991518u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991524u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991554u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991560u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899156Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991578u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991580u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991584u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899158Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991598u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089915ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089915B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089915D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991610u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899161Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991628u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991630u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991634u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899163Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991648u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899165Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991670u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991680u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899168Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991698u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991708u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991710u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991714u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991718u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991724u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991738u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899175Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899176Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991778u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991784u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899178Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991790u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991794u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089917A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089917B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089917DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089917F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991818u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899182Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991838u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991844u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899184Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991850u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991854u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991860u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991874u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991878u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899189Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089918B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089918BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089918C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089918D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089918D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089918DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089918E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089918FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991924u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991938u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991944u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991950u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991958u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899195Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991964u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991970u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991984u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899198Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089919D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991AE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991AF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991B08u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991B34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991B6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991B88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991B9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991BB8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991BE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991BF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C3Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C5Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CCCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CE0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D00u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D08u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D24u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DB8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DC4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DE0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E44u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E74u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991EB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991EE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991EECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F08u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F38u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F3Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F44u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F74u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FCCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FE0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992000u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992008u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992024u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992034u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992068u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992070u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899208Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992128u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992130u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899214Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992160u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899217Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992180u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992188u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992204u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992220u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899226Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899227Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089922C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089922DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992310u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992338u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992348u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992350u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899236Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899237Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089923D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089923DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089923ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089923F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899240Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899241Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992424u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992444u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992458u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992460u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899247Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899248Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992498u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992508u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992524u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992560u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992568u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992584u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089925C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089925C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089925D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089925D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089925F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992604u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992614u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992648u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992650u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992670u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992680u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089926D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089926FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992704u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899271Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899272Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992740u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992758u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899277Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992784u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992808u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992818u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899284Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992854u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899286Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992878u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089928A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089928C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089928D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089928E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899291Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899292Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992938u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992944u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992950u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899295Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992960u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992984u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899298Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089929A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089929BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089929D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089929DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089929E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A00u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A74u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A8Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AC8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B68u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992BACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992BB8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992BC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992BD8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992BE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992BF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992BF8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C24u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C84u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992CDCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992CECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D38u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D68u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992DB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E38u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E68u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992EECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992EF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F18u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F24u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F38u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FC4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FF8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993000u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899301Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899302Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993038u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993060u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993084u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899308Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899310Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993120u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899313Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993140u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993148u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993178u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993180u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993190u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899319Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993214u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993218u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993220u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899323Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899324Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899326Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993274u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993290u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993300u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993310u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993328u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993338u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993340u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993348u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993364u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993370u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993380u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993388u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993398u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993418u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993420u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993430u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993438u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993450u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993460u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899346Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899347Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993480u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993504u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993514u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899351Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993538u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993548u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993554u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993578u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993580u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899358Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899359Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089935A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089935C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089935ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993658u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993664u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993674u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899367Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089936A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089936B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089936BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089936C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089936E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089936F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993704u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993710u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993718u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993724u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899372Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899374Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993760u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993770u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993774u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993798u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993818u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899382Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993834u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993840u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993848u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993870u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899389Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993900u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993904u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993928u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993930u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899394Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993960u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899397Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993980u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993988u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A3Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A60u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993AACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993AC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B38u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B68u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B7Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B84u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BCCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BD8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D44u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D50u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D74u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DCCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DD4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993EACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993EBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993ED0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993EE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993EF8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F10u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F4Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FCCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FFCu, &recomp_unit_0099, "recomp_unit_0099");
}
} // namespace psprecomp
