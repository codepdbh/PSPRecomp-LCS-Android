#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0181[4092] = {
    1, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8,
    0, 0, 9, 0, 10, 11, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 18, 19,
    20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 27, 28, 0, 29, 0, 0, 30, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 36, 37, 0, 0, 38, 0, 0, 0, 0, 39, 40, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 46, 47, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 54, 55, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 64, 65, 0, 66, 0, 0, 67, 0, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 72, 73, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    80, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 84, 85, 86, 0, 87, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0,
    0, 93, 94, 95, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 0, 102, 103, 104, 0, 105, 0, 106,
    0, 107, 0, 108, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 116, 117, 0, 118, 0,
    119, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0,
    128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0,
    137, 0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0,
    0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0,
    0, 156, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 201,
    0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0,
    210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 220, 0, 221,
    0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 228, 229, 230, 0, 0, 231,
    0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 236, 237, 0, 238, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 245, 0, 246, 247, 0, 0, 248, 249, 0, 250, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 255, 0,
    0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 0, 266, 0, 0, 0, 0, 267, 0, 268,
    0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 278, 0,
    279, 0, 280, 0, 281, 0, 282, 0, 283, 284, 0, 0, 285, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293,
    0, 294, 295, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0,
    307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 321, 0, 0, 0, 322,
    0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0,
    336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 350,
    351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0,
    360, 0, 0, 361, 0, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 367, 0, 0, 368, 0, 0, 369,
    0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 383, 384, 0, 0, 385, 0, 0, 386,
    0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0,
    397, 0, 398, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 401, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 405, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 419,
    0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 0, 426, 0, 427, 0, 0,
    0, 428, 0, 0, 0, 0, 0, 429, 0, 430, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0,
    0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 441, 442, 0, 443, 0, 444, 0, 0, 0, 445, 0, 0, 0,
    446, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0,
    453, 0, 0, 454, 0, 0, 455, 0, 456, 457, 0, 458, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0,
    0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 467, 468, 0, 469, 0, 0, 0, 0, 0, 470,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0,
    0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 475, 0, 476, 477, 0, 478, 0, 479, 0, 0, 0, 480, 0, 481, 482, 0, 0, 483, 0, 484, 0, 485,
    0, 0, 0, 486, 0, 0, 487, 0, 488, 489, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 0, 0, 0, 494, 0, 495, 0, 496, 0, 0, 0, 497,
    0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0,
    504, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0,
    0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 517, 0, 518, 0, 519, 0, 520, 0, 0, 0, 521, 0, 522, 0, 523, 0, 0, 0,
    524, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 531,
    0, 532, 0, 0, 0, 533, 0, 534, 0, 0, 0, 535, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 539, 0, 0, 540, 0, 0, 0, 0,
    541, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 548, 0, 549, 0,
    0, 0, 550, 0, 0, 0, 0, 551, 0, 552, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0,
    557, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 561, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0,
    566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 0, 0, 0, 0,
    574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 579, 0, 0,
    0, 0, 0, 0, 580, 0, 581, 582, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 587, 0, 588, 0, 0,
    0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 591, 0, 592, 0, 0, 593, 0, 0, 594, 0, 595, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0,
    0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 0, 602, 0, 0, 603,
    0, 604, 605, 606, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 611, 612, 613, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 617, 0,
    618, 619, 620, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 626, 627, 0, 628, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0,
    0, 0, 631, 0, 0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 641,
    0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 646, 0, 647,
    0, 0, 648, 0, 649, 0, 0, 650, 0, 0, 651, 0, 0, 652, 653, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0,
    657, 0, 0, 0, 0, 658, 0, 659, 0, 0, 660, 0, 661, 0, 0, 662, 0, 663, 0, 664, 0, 665, 0, 0, 0, 0, 666, 0, 667, 0, 668, 0,
    0, 669, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 672, 0, 0, 673, 0, 0, 674, 0, 675, 676, 0, 677, 0, 678, 0, 0, 679, 0, 680, 0,
    0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 684, 0,
    0, 685, 0, 0, 0, 0, 0, 686, 0, 687, 0, 688, 0, 0, 689, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 692, 0, 0, 693, 0, 0, 694,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0,
    0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 701, 0, 0, 0, 702, 0, 703, 0, 0, 704, 0, 0, 0, 0, 705, 0,
    0, 706, 0, 0, 707, 0, 0, 708, 0, 0, 709, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 712, 0,
    0, 713, 0, 714, 0, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 717, 0, 0, 718, 0, 0, 719, 0, 720, 0, 721, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 724, 0, 0, 0, 0,
    725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 730,
    0, 731, 0, 0, 0, 732, 733, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0,
    0, 736, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    738, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 742, 0, 0, 743, 744,
    745, 0, 746, 0, 0, 0, 747, 0, 748, 0, 0, 0, 749, 0, 0, 750, 751, 752, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 756,
    0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0,
    759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 762, 0, 763, 0, 0, 764, 0, 765, 0, 0, 766, 0, 767, 0, 768,
    0, 0, 0, 0, 769, 770, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0,
    0, 0, 774, 0, 775, 776, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 781, 0, 782, 783, 0, 784,
    0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 786, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 792, 0, 793, 0, 794, 0, 0, 0, 795, 0, 0, 0, 796, 0, 0,
    0, 797, 0, 0, 0, 798, 0, 0, 799, 0, 800, 0, 801, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 808, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 810, 811, 0, 812, 0, 0, 813, 0, 814, 0, 0, 815, 0, 816, 0, 817, 0, 0, 0, 0, 0, 818,
    819, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 823, 0, 0, 824, 0,
    825, 0, 826, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 832,
    833, 0, 0, 0, 0, 0, 834, 0, 0, 835, 836, 0, 837, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 840, 0, 841, 0, 842, 0, 0, 0, 0,
    0, 843, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 848, 849, 0, 0, 0, 0, 0, 850,
    0, 0, 851, 852, 0, 853, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0,
    0, 856, 0, 0, 0, 857, 0, 0, 0, 858, 0, 0, 859, 0, 860, 0, 861, 0, 0, 0, 862, 0, 0, 0, 863, 0, 0, 0, 864, 0, 0, 0,
    865, 0, 0, 866, 0, 867, 0, 868, 869, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 871, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 872, 0, 873, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 874, 0, 875, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 876, 0, 877, 878, 0, 0, 879, 0, 880, 0, 881, 0, 882, 0, 883, 0, 884, 885, 0, 0, 0, 886, 887, 0, 0, 0, 888, 0, 0,
    0, 0, 889, 0, 890, 0, 891, 0, 892, 0, 893, 0, 894, 0, 895, 0, 896, 0, 897, 0, 898, 0, 899, 0, 0, 0, 0, 0, 0, 0, 900, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 901, 0, 0, 0, 0, 902, 0, 0, 903, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 904,
    0, 905, 0, 906, 0, 0, 0, 0, 907, 0, 0, 0, 908, 0, 0, 0, 909, 0, 910, 911, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 912, 0, 913, 914, 0, 915, 0, 916, 0, 917, 0, 918, 0, 919, 0, 920, 921, 0, 0, 0, 922, 923, 0, 0, 0, 924,
};
void recomp_unit_0181_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AD8000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0181[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AD8000;
    case 2u: goto L_08AD8010;
    case 3u: goto L_08AD8014;
    case 4u: goto L_08AD8034;
    case 5u: goto L_08AD8074;
    case 6u: goto L_08AD80E4;
    case 7u: goto L_08AD80F0;
    case 8u: goto L_08AD80FC;
    case 9u: goto L_08AD8108;
    case 10u: goto L_08AD8110;
    case 11u: goto L_08AD8114;
    case 12u: goto L_08AD811C;
    case 13u: goto L_08AD8128;
    case 14u: goto L_08AD8134;
    case 15u: goto L_08AD8158;
    case 16u: goto L_08AD8164;
    case 17u: goto L_08AD8170;
    case 18u: goto L_08AD8178;
    case 19u: goto L_08AD817C;
    case 20u: goto L_08AD8180;
    case 21u: goto L_08AD818C;
    case 22u: goto L_08AD81A0;
    case 23u: goto L_08AD81A8;
    case 24u: goto L_08AD81B4;
    case 25u: goto L_08AD81C0;
    case 26u: goto L_08AD81CC;
    case 27u: goto L_08AD81D4;
    case 28u: goto L_08AD81D8;
    case 29u: goto L_08AD81E0;
    case 30u: goto L_08AD81EC;
    case 31u: goto L_08AD81F8;
    case 32u: goto L_08AD821C;
    case 33u: goto L_08AD8228;
    case 34u: goto L_08AD8234;
    case 35u: goto L_08AD823C;
    case 36u: goto L_08AD8240;
    case 37u: goto L_08AD8244;
    case 38u: goto L_08AD8250;
    case 39u: goto L_08AD8264;
    case 40u: goto L_08AD8268;
    case 41u: goto L_08AD8288;
    case 42u: goto L_08AD82C8;
    case 43u: goto L_08AD8330;
    case 44u: goto L_08AD833C;
    case 45u: goto L_08AD8348;
    case 46u: goto L_08AD8350;
    case 47u: goto L_08AD8354;
    case 48u: goto L_08AD835C;
    case 49u: goto L_08AD8368;
    case 50u: goto L_08AD8374;
    case 51u: goto L_08AD83A0;
    case 52u: goto L_08AD83AC;
    case 53u: goto L_08AD83B8;
    case 54u: goto L_08AD83C0;
    case 55u: goto L_08AD83C4;
    case 56u: goto L_08AD83C8;
    case 57u: goto L_08AD83D4;
    case 58u: goto L_08AD83E8;
    case 59u: goto L_08AD840C;
    case 60u: goto L_08AD844C;
    case 61u: goto L_08AD84B4;
    case 62u: goto L_08AD84C0;
    case 63u: goto L_08AD84CC;
    case 64u: goto L_08AD84D4;
    case 65u: goto L_08AD84D8;
    case 66u: goto L_08AD84E0;
    case 67u: goto L_08AD84EC;
    case 68u: goto L_08AD84F8;
    case 69u: goto L_08AD8524;
    case 70u: goto L_08AD8530;
    case 71u: goto L_08AD853C;
    case 72u: goto L_08AD8544;
    case 73u: goto L_08AD8548;
    case 74u: goto L_08AD854C;
    case 75u: goto L_08AD8558;
    case 76u: goto L_08AD856C;
    case 77u: goto L_08AD8590;
    case 78u: goto L_08AD85D0;
    case 79u: goto L_08AD85F8;
    case 80u: goto L_08AD8600;
    case 81u: goto L_08AD8604;
    case 82u: goto L_08AD8610;
    case 83u: goto L_08AD861C;
    case 84u: goto L_08AD8630;
    case 85u: goto L_08AD8634;
    case 86u: goto L_08AD8638;
    case 87u: goto L_08AD8640;
    case 88u: goto L_08AD8648;
    case 89u: goto L_08AD8650;
    case 90u: goto L_08AD865C;
    case 91u: goto L_08AD8664;
    case 92u: goto L_08AD8670;
    case 93u: goto L_08AD8684;
    case 94u: goto L_08AD8688;
    case 95u: goto L_08AD868C;
    case 96u: goto L_08AD8694;
    case 97u: goto L_08AD869C;
    case 98u: goto L_08AD86A8;
    case 99u: goto L_08AD86BC;
    case 100u: goto L_08AD86C4;
    case 101u: goto L_08AD86D0;
    case 102u: goto L_08AD86E4;
    case 103u: goto L_08AD86E8;
    case 104u: goto L_08AD86EC;
    case 105u: goto L_08AD86F4;
    case 106u: goto L_08AD86FC;
    case 107u: goto L_08AD8704;
    case 108u: goto L_08AD870C;
    case 109u: goto L_08AD8714;
    case 110u: goto L_08AD8720;
    case 111u: goto L_08AD872C;
    case 112u: goto L_08AD8740;
    case 113u: goto L_08AD8748;
    case 114u: goto L_08AD8754;
    case 115u: goto L_08AD8768;
    case 116u: goto L_08AD876C;
    case 117u: goto L_08AD8770;
    case 118u: goto L_08AD8778;
    case 119u: goto L_08AD8780;
    case 120u: goto L_08AD8788;
    case 121u: goto L_08AD8790;
    case 122u: goto L_08AD8798;
    case 123u: goto L_08AD87B4;
    case 124u: goto L_08AD87BC;
    case 125u: goto L_08AD87D4;
    case 126u: goto L_08AD87DC;
    case 127u: goto L_08AD87F8;
    case 128u: goto L_08AD8800;
    case 129u: goto L_08AD8808;
    case 130u: goto L_08AD881C;
    case 131u: goto L_08AD8834;
    case 132u: goto L_08AD883C;
    case 133u: goto L_08AD884C;
    case 134u: goto L_08AD8858;
    case 135u: goto L_08AD8864;
    case 136u: goto L_08AD8870;
    case 137u: goto L_08AD8880;
    case 138u: goto L_08AD888C;
    case 139u: goto L_08AD8894;
    case 140u: goto L_08AD88A4;
    case 141u: goto L_08AD88B0;
    case 142u: goto L_08AD88C0;
    case 143u: goto L_08AD88CC;
    case 144u: goto L_08AD88DC;
    case 145u: goto L_08AD88E8;
    case 146u: goto L_08AD88F8;
    case 147u: goto L_08AD8904;
    case 148u: goto L_08AD8914;
    case 149u: goto L_08AD8920;
    case 150u: goto L_08AD8930;
    case 151u: goto L_08AD893C;
    case 152u: goto L_08AD894C;
    case 153u: goto L_08AD8958;
    case 154u: goto L_08AD8968;
    case 155u: goto L_08AD8974;
    case 156u: goto L_08AD8984;
    case 157u: goto L_08AD898C;
    case 158u: goto L_08AD89A4;
    case 159u: goto L_08AD89C0;
    case 160u: goto L_08AD89D8;
    case 161u: goto L_08AD8A24;
    case 162u: goto L_08AD8A40;
    case 163u: goto L_08AD8A5C;
    case 164u: goto L_08AD8AA8;
    case 165u: goto L_08AD8AC4;
    case 166u: goto L_08AD8AE0;
    case 167u: goto L_08AD8B2C;
    case 168u: goto L_08AD8B48;
    case 169u: goto L_08AD8B64;
    case 170u: goto L_08AD8BBC;
    case 171u: goto L_08AD8BD8;
    case 172u: goto L_08AD8BF8;
    case 173u: goto L_08AD8C58;
    case 174u: goto L_08AD8C74;
    case 175u: goto L_08AD8CA0;
    case 176u: goto L_08AD8CBC;
    case 177u: goto L_08AD8CF0;
    case 178u: goto L_08AD8D0C;
    case 179u: goto L_08AD8D40;
    case 180u: goto L_08AD8D5C;
    case 181u: goto L_08AD8D84;
    case 182u: goto L_08AD8DE4;
    case 183u: goto L_08AD8E00;
    case 184u: goto L_08AD8E2C;
    case 185u: goto L_08AD8E48;
    case 186u: goto L_08AD8E70;
    case 187u: goto L_08AD8ED0;
    case 188u: goto L_08AD8EEC;
    case 189u: goto L_08AD8F18;
    case 190u: goto L_08AD8F34;
    case 191u: goto L_08AD8F5C;
    case 192u: goto L_08AD8FB8;
    case 193u: goto L_08AD8FD4;
    case 194u: goto L_08AD8FF4;
    case 195u: goto L_08AD9010;
    case 196u: goto L_08AD9034;
    case 197u: goto L_08AD9050;
    case 198u: goto L_08AD9064;
    case 199u: goto L_08AD906C;
    case 200u: goto L_08AD9074;
    case 201u: goto L_08AD907C;
    case 202u: goto L_08AD9090;
    case 203u: goto L_08AD9098;
    case 204u: goto L_08AD90AC;
    case 205u: goto L_08AD90B4;
    case 206u: goto L_08AD90C8;
    case 207u: goto L_08AD90D0;
    case 208u: goto L_08AD90E4;
    case 209u: goto L_08AD90EC;
    case 210u: goto L_08AD9100;
    case 211u: goto L_08AD910C;
    case 212u: goto L_08AD9180;
    case 213u: goto L_08AD918C;
    case 214u: goto L_08AD91A4;
    case 215u: goto L_08AD91AC;
    case 216u: goto L_08AD91B4;
    case 217u: goto L_08AD91CC;
    case 218u: goto L_08AD91D4;
    case 219u: goto L_08AD91DC;
    case 220u: goto L_08AD91F4;
    case 221u: goto L_08AD91FC;
    case 222u: goto L_08AD9204;
    case 223u: goto L_08AD921C;
    case 224u: goto L_08AD9224;
    case 225u: goto L_08AD9248;
    case 226u: goto L_08AD9254;
    case 227u: goto L_08AD9260;
    case 228u: goto L_08AD9268;
    case 229u: goto L_08AD926C;
    case 230u: goto L_08AD9270;
    case 231u: goto L_08AD927C;
    case 232u: goto L_08AD9290;
    case 233u: goto L_08AD929C;
    case 234u: goto L_08AD92A8;
    case 235u: goto L_08AD92B4;
    case 236u: goto L_08AD92BC;
    case 237u: goto L_08AD92C0;
    case 238u: goto L_08AD92C8;
    case 239u: goto L_08AD92D0;
    case 240u: goto L_08AD92DC;
    case 241u: goto L_08AD930C;
    case 242u: goto L_08AD9330;
    case 243u: goto L_08AD9338;
    case 244u: goto L_08AD934C;
    case 245u: goto L_08AD9394;
    case 246u: goto L_08AD939C;
    case 247u: goto L_08AD93A0;
    case 248u: goto L_08AD93AC;
    case 249u: goto L_08AD93B0;
    case 250u: goto L_08AD93B8;
    case 251u: goto L_08AD93CC;
    case 252u: goto L_08AD93D8;
    case 253u: goto L_08AD93E4;
    case 254u: goto L_08AD93F0;
    case 255u: goto L_08AD93F8;
    case 256u: goto L_08AD940C;
    case 257u: goto L_08AD941C;
    case 258u: goto L_08AD942C;
    case 259u: goto L_08AD9434;
    case 260u: goto L_08AD9440;
    case 261u: goto L_08AD9494;
    case 262u: goto L_08AD94BC;
    case 263u: goto L_08AD94C4;
    case 264u: goto L_08AD94CC;
    case 265u: goto L_08AD94D4;
    case 266u: goto L_08AD94E0;
    case 267u: goto L_08AD94F4;
    case 268u: goto L_08AD94FC;
    case 269u: goto L_08AD9508;
    case 270u: goto L_08AD951C;
    case 271u: goto L_08AD9524;
    case 272u: goto L_08AD9530;
    case 273u: goto L_08AD9540;
    case 274u: goto L_08AD954C;
    case 275u: goto L_08AD9560;
    case 276u: goto L_08AD9568;
    case 277u: goto L_08AD9570;
    case 278u: goto L_08AD9578;
    case 279u: goto L_08AD9580;
    case 280u: goto L_08AD9588;
    case 281u: goto L_08AD9590;
    case 282u: goto L_08AD9598;
    case 283u: goto L_08AD95A0;
    case 284u: goto L_08AD95A4;
    case 285u: goto L_08AD95B0;
    case 286u: goto L_08AD95C4;
    case 287u: goto L_08AD95CC;
    case 288u: goto L_08AD95D4;
    case 289u: goto L_08AD95DC;
    case 290u: goto L_08AD95E4;
    case 291u: goto L_08AD95EC;
    case 292u: goto L_08AD95F4;
    case 293u: goto L_08AD95FC;
    case 294u: goto L_08AD9604;
    case 295u: goto L_08AD9608;
    case 296u: goto L_08AD9614;
    case 297u: goto L_08AD962C;
    case 298u: goto L_08AD9638;
    case 299u: goto L_08AD9640;
    case 300u: goto L_08AD9648;
    case 301u: goto L_08AD9650;
    case 302u: goto L_08AD9658;
    case 303u: goto L_08AD9660;
    case 304u: goto L_08AD9668;
    case 305u: goto L_08AD9670;
    case 306u: goto L_08AD9678;
    case 307u: goto L_08AD9680;
    case 308u: goto L_08AD9688;
    case 309u: goto L_08AD9690;
    case 310u: goto L_08AD9698;
    case 311u: goto L_08AD96A0;
    case 312u: goto L_08AD96A8;
    case 313u: goto L_08AD96B0;
    case 314u: goto L_08AD96B8;
    case 315u: goto L_08AD96C0;
    case 316u: goto L_08AD96C8;
    case 317u: goto L_08AD96D0;
    case 318u: goto L_08AD96D8;
    case 319u: goto L_08AD96E0;
    case 320u: goto L_08AD96E8;
    case 321u: goto L_08AD96EC;
    case 322u: goto L_08AD96FC;
    case 323u: goto L_08AD9714;
    case 324u: goto L_08AD9720;
    case 325u: goto L_08AD9728;
    case 326u: goto L_08AD9730;
    case 327u: goto L_08AD9738;
    case 328u: goto L_08AD9740;
    case 329u: goto L_08AD9748;
    case 330u: goto L_08AD9750;
    case 331u: goto L_08AD9758;
    case 332u: goto L_08AD9760;
    case 333u: goto L_08AD9768;
    case 334u: goto L_08AD9770;
    case 335u: goto L_08AD9778;
    case 336u: goto L_08AD9780;
    case 337u: goto L_08AD9788;
    case 338u: goto L_08AD9790;
    case 339u: goto L_08AD9798;
    case 340u: goto L_08AD97A0;
    case 341u: goto L_08AD97A8;
    case 342u: goto L_08AD97B0;
    case 343u: goto L_08AD97B8;
    case 344u: goto L_08AD97C0;
    case 345u: goto L_08AD97C8;
    case 346u: goto L_08AD97D0;
    case 347u: goto L_08AD97D4;
    case 348u: goto L_08AD97E4;
    case 349u: goto L_08AD97F4;
    case 350u: goto L_08AD97FC;
    case 351u: goto L_08AD9800;
    case 352u: goto L_08AD9808;
    case 353u: goto L_08AD9834;
    case 354u: goto L_08AD9848;
    case 355u: goto L_08AD9868;
    case 356u: goto L_08AD9874;
    case 357u: goto L_08AD98D0;
    case 358u: goto L_08AD98EC;
    case 359u: goto L_08AD98F8;
    case 360u: goto L_08AD9900;
    case 361u: goto L_08AD990C;
    case 362u: goto L_08AD991C;
    case 363u: goto L_08AD9928;
    case 364u: goto L_08AD9934;
    case 365u: goto L_08AD994C;
    case 366u: goto L_08AD995C;
    case 367u: goto L_08AD9964;
    case 368u: goto L_08AD9970;
    case 369u: goto L_08AD997C;
    case 370u: goto L_08AD998C;
    case 371u: goto L_08AD9994;
    case 372u: goto L_08AD999C;
    case 373u: goto L_08AD99B0;
    case 374u: goto L_08AD99C0;
    case 375u: goto L_08AD99C8;
    case 376u: goto L_08AD99D0;
    case 377u: goto L_08AD99F0;
    case 378u: goto L_08AD9A1C;
    case 379u: goto L_08AD9A28;
    case 380u: goto L_08AD9A30;
    case 381u: goto L_08AD9A3C;
    case 382u: goto L_08AD9A48;
    case 383u: goto L_08AD9A60;
    case 384u: goto L_08AD9A64;
    case 385u: goto L_08AD9A70;
    case 386u: goto L_08AD9A7C;
    case 387u: goto L_08AD9A88;
    case 388u: goto L_08AD9A90;
    case 389u: goto L_08AD9AA8;
    case 390u: goto L_08AD9AB0;
    case 391u: goto L_08AD9AC0;
    case 392u: goto L_08AD9ACC;
    case 393u: goto L_08AD9ADC;
    case 394u: goto L_08AD9AE4;
    case 395u: goto L_08AD9AEC;
    case 396u: goto L_08AD9AF4;
    case 397u: goto L_08AD9B00;
    case 398u: goto L_08AD9B08;
    case 399u: goto L_08AD9B18;
    case 400u: goto L_08AD9B24;
    case 401u: goto L_08AD9B38;
    case 402u: goto L_08AD9B3C;
    case 403u: goto L_08AD9B5C;
    case 404u: goto L_08AD9B70;
    case 405u: goto L_08AD9B78;
    case 406u: goto L_08AD9B98;
    case 407u: goto L_08AD9BA0;
    case 408u: goto L_08AD9BB4;
    case 409u: goto L_08AD9BBC;
    case 410u: goto L_08AD9BDC;
    case 411u: goto L_08AD9BE4;
    case 412u: goto L_08AD9C0C;
    case 413u: goto L_08AD9C18;
    case 414u: goto L_08AD9C24;
    case 415u: goto L_08AD9C34;
    case 416u: goto L_08AD9C4C;
    case 417u: goto L_08AD9C58;
    case 418u: goto L_08AD9C64;
    case 419u: goto L_08AD9C7C;
    case 420u: goto L_08AD9C8C;
    case 421u: goto L_08AD9CC0;
    case 422u: goto L_08AD9CC8;
    case 423u: goto L_08AD9CD0;
    case 424u: goto L_08AD9CD8;
    case 425u: goto L_08AD9CE0;
    case 426u: goto L_08AD9CEC;
    case 427u: goto L_08AD9CF4;
    case 428u: goto L_08AD9D04;
    case 429u: goto L_08AD9D1C;
    case 430u: goto L_08AD9D24;
    case 431u: goto L_08AD9D2C;
    case 432u: goto L_08AD9D38;
    case 433u: goto L_08AD9D50;
    case 434u: goto L_08AD9D58;
    case 435u: goto L_08AD9D74;
    case 436u: goto L_08AD9D88;
    case 437u: goto L_08AD9D9C;
    case 438u: goto L_08AD9DAC;
    case 439u: goto L_08AD9DB8;
    case 440u: goto L_08AD9DC4;
    case 441u: goto L_08AD9DCC;
    case 442u: goto L_08AD9DD0;
    case 443u: goto L_08AD9DD8;
    case 444u: goto L_08AD9DE0;
    case 445u: goto L_08AD9DF0;
    case 446u: goto L_08AD9E00;
    case 447u: goto L_08AD9E10;
    case 448u: goto L_08AD9E24;
    case 449u: goto L_08AD9E48;
    case 450u: goto L_08AD9E58;
    case 451u: goto L_08AD9E68;
    case 452u: goto L_08AD9E74;
    case 453u: goto L_08AD9E80;
    case 454u: goto L_08AD9E8C;
    case 455u: goto L_08AD9E98;
    case 456u: goto L_08AD9EA0;
    case 457u: goto L_08AD9EA4;
    case 458u: goto L_08AD9EAC;
    case 459u: goto L_08AD9EB4;
    case 460u: goto L_08AD9EC8;
    case 461u: goto L_08AD9EF4;
    case 462u: goto L_08AD9F10;
    case 463u: goto L_08AD9F18;
    case 464u: goto L_08AD9F28;
    case 465u: goto L_08AD9F34;
    case 466u: goto L_08AD9F40;
    case 467u: goto L_08AD9F58;
    case 468u: goto L_08AD9F5C;
    case 469u: goto L_08AD9F64;
    case 470u: goto L_08AD9F7C;
    case 471u: goto L_08AD9FE0;
    case 472u: goto L_08AD9FF8;
    case 473u: goto L_08ADA010;
    case 474u: goto L_08ADA018;
    case 475u: goto L_08ADA028;
    case 476u: goto L_08ADA030;
    case 477u: goto L_08ADA034;
    case 478u: goto L_08ADA03C;
    case 479u: goto L_08ADA044;
    case 480u: goto L_08ADA054;
    case 481u: goto L_08ADA05C;
    case 482u: goto L_08ADA060;
    case 483u: goto L_08ADA06C;
    case 484u: goto L_08ADA074;
    case 485u: goto L_08ADA07C;
    case 486u: goto L_08ADA08C;
    case 487u: goto L_08ADA098;
    case 488u: goto L_08ADA0A0;
    case 489u: goto L_08ADA0A4;
    case 490u: goto L_08ADA0AC;
    case 491u: goto L_08ADA0B4;
    case 492u: goto L_08ADA0BC;
    case 493u: goto L_08ADA0C8;
    case 494u: goto L_08ADA0DC;
    case 495u: goto L_08ADA0E4;
    case 496u: goto L_08ADA0EC;
    case 497u: goto L_08ADA0FC;
    case 498u: goto L_08ADA114;
    case 499u: goto L_08ADA11C;
    case 500u: goto L_08ADA130;
    case 501u: goto L_08ADA148;
    case 502u: goto L_08ADA150;
    case 503u: goto L_08ADA164;
    case 504u: goto L_08ADA180;
    case 505u: goto L_08ADA188;
    case 506u: goto L_08ADA198;
    case 507u: goto L_08ADA1AC;
    case 508u: goto L_08ADA1B4;
    case 509u: goto L_08ADA1C8;
    case 510u: goto L_08ADA1E8;
    case 511u: goto L_08ADA208;
    case 512u: goto L_08ADA218;
    case 513u: goto L_08ADA228;
    case 514u: goto L_08ADA240;
    case 515u: goto L_08ADA298;
    case 516u: goto L_08ADA2A4;
    case 517u: goto L_08ADA2B8;
    case 518u: goto L_08ADA2C0;
    case 519u: goto L_08ADA2C8;
    case 520u: goto L_08ADA2D0;
    case 521u: goto L_08ADA2E0;
    case 522u: goto L_08ADA2E8;
    case 523u: goto L_08ADA2F0;
    case 524u: goto L_08ADA300;
    case 525u: goto L_08ADA314;
    case 526u: goto L_08ADA31C;
    case 527u: goto L_08ADA32C;
    case 528u: goto L_08ADA340;
    case 529u: goto L_08ADA358;
    case 530u: goto L_08ADA360;
    case 531u: goto L_08ADA37C;
    case 532u: goto L_08ADA384;
    case 533u: goto L_08ADA394;
    case 534u: goto L_08ADA39C;
    case 535u: goto L_08ADA3AC;
    case 536u: goto L_08ADA3B4;
    case 537u: goto L_08ADA3C4;
    case 538u: goto L_08ADA3D8;
    case 539u: goto L_08ADA3E0;
    case 540u: goto L_08ADA3EC;
    case 541u: goto L_08ADA400;
    case 542u: goto L_08ADA418;
    case 543u: goto L_08ADA420;
    case 544u: goto L_08ADA43C;
    case 545u: goto L_08ADA444;
    case 546u: goto L_08ADA460;
    case 547u: goto L_08ADA468;
    case 548u: goto L_08ADA470;
    case 549u: goto L_08ADA478;
    case 550u: goto L_08ADA488;
    case 551u: goto L_08ADA49C;
    case 552u: goto L_08ADA4A4;
    case 553u: goto L_08ADA4B0;
    case 554u: goto L_08ADA4C4;
    case 555u: goto L_08ADA4DC;
    case 556u: goto L_08ADA4E4;
    case 557u: goto L_08ADA500;
    case 558u: goto L_08ADA508;
    case 559u: goto L_08ADA524;
    case 560u: goto L_08ADA52C;
    case 561u: goto L_08ADA534;
    case 562u: goto L_08ADA544;
    case 563u: goto L_08ADA554;
    case 564u: goto L_08ADA570;
    case 565u: goto L_08ADA578;
    case 566u: goto L_08ADA580;
    case 567u: goto L_08ADA588;
    case 568u: goto L_08ADA5AC;
    case 569u: goto L_08ADA5B4;
    case 570u: goto L_08ADA5BC;
    case 571u: goto L_08ADA5D8;
    case 572u: goto L_08ADA5E0;
    case 573u: goto L_08ADA5E8;
    case 574u: goto L_08ADA600;
    case 575u: goto L_08ADA640;
    case 576u: goto L_08ADA648;
    case 577u: goto L_08ADA664;
    case 578u: goto L_08ADA66C;
    case 579u: goto L_08ADA674;
    case 580u: goto L_08ADA690;
    case 581u: goto L_08ADA698;
    case 582u: goto L_08ADA69C;
    case 583u: goto L_08ADA6B0;
    case 584u: goto L_08ADA6C0;
    case 585u: goto L_08ADA6D4;
    case 586u: goto L_08ADA6E4;
    case 587u: goto L_08ADA6EC;
    case 588u: goto L_08ADA6F4;
    case 589u: goto L_08ADA714;
    case 590u: goto L_08ADA724;
    case 591u: goto L_08ADA728;
    case 592u: goto L_08ADA730;
    case 593u: goto L_08ADA73C;
    case 594u: goto L_08ADA748;
    case 595u: goto L_08ADA750;
    case 596u: goto L_08ADA760;
    case 597u: goto L_08ADA76C;
    case 598u: goto L_08ADA78C;
    case 599u: goto L_08ADA7C0;
    case 600u: goto L_08ADA7C8;
    case 601u: goto L_08ADA7E4;
    case 602u: goto L_08ADA7F0;
    case 603u: goto L_08ADA7FC;
    case 604u: goto L_08ADA804;
    case 605u: goto L_08ADA808;
    case 606u: goto L_08ADA80C;
    case 607u: goto L_08ADA818;
    case 608u: goto L_08ADA824;
    case 609u: goto L_08ADA830;
    case 610u: goto L_08ADA83C;
    case 611u: goto L_08ADA844;
    case 612u: goto L_08ADA848;
    case 613u: goto L_08ADA84C;
    case 614u: goto L_08ADA854;
    case 615u: goto L_08ADA860;
    case 616u: goto L_08ADA86C;
    case 617u: goto L_08ADA878;
    case 618u: goto L_08ADA880;
    case 619u: goto L_08ADA884;
    case 620u: goto L_08ADA888;
    case 621u: goto L_08ADA890;
    case 622u: goto L_08ADA89C;
    case 623u: goto L_08ADA8A8;
    case 624u: goto L_08ADA8B4;
    case 625u: goto L_08ADA8C0;
    case 626u: goto L_08ADA8C8;
    case 627u: goto L_08ADA8CC;
    case 628u: goto L_08ADA8D4;
    case 629u: goto L_08ADA8DC;
    case 630u: goto L_08ADA8E4;
    case 631u: goto L_08ADA908;
    case 632u: goto L_08ADA914;
    case 633u: goto L_08ADA91C;
    case 634u: goto L_08ADA924;
    case 635u: goto L_08ADA92C;
    case 636u: goto L_08ADA934;
    case 637u: goto L_08ADA93C;
    case 638u: goto L_08ADA944;
    case 639u: goto L_08ADA94C;
    case 640u: goto L_08ADA974;
    case 641u: goto L_08ADA97C;
    case 642u: goto L_08ADA984;
    case 643u: goto L_08ADA9C4;
    case 644u: goto L_08ADA9E4;
    case 645u: goto L_08ADA9EC;
    case 646u: goto L_08ADA9F4;
    case 647u: goto L_08ADA9FC;
    case 648u: goto L_08ADAA08;
    case 649u: goto L_08ADAA10;
    case 650u: goto L_08ADAA1C;
    case 651u: goto L_08ADAA28;
    case 652u: goto L_08ADAA34;
    case 653u: goto L_08ADAA38;
    case 654u: goto L_08ADAA44;
    case 655u: goto L_08ADAA70;
    case 656u: goto L_08ADAA78;
    case 657u: goto L_08ADAA80;
    case 658u: goto L_08ADAA94;
    case 659u: goto L_08ADAA9C;
    case 660u: goto L_08ADAAA8;
    case 661u: goto L_08ADAAB0;
    case 662u: goto L_08ADAABC;
    case 663u: goto L_08ADAAC4;
    case 664u: goto L_08ADAACC;
    case 665u: goto L_08ADAAD4;
    case 666u: goto L_08ADAAE8;
    case 667u: goto L_08ADAAF0;
    case 668u: goto L_08ADAAF8;
    case 669u: goto L_08ADAB04;
    case 670u: goto L_08ADAB1C;
    case 671u: goto L_08ADAB24;
    case 672u: goto L_08ADAB30;
    case 673u: goto L_08ADAB3C;
    case 674u: goto L_08ADAB48;
    case 675u: goto L_08ADAB50;
    case 676u: goto L_08ADAB54;
    case 677u: goto L_08ADAB5C;
    case 678u: goto L_08ADAB64;
    case 679u: goto L_08ADAB70;
    case 680u: goto L_08ADAB78;
    case 681u: goto L_08ADAB9C;
    case 682u: goto L_08ADABAC;
    case 683u: goto L_08ADABE4;
    case 684u: goto L_08ADABF8;
    case 685u: goto L_08ADAC04;
    case 686u: goto L_08ADAC1C;
    case 687u: goto L_08ADAC24;
    case 688u: goto L_08ADAC2C;
    case 689u: goto L_08ADAC38;
    case 690u: goto L_08ADAC4C;
    case 691u: goto L_08ADAC54;
    case 692u: goto L_08ADAC64;
    case 693u: goto L_08ADAC70;
    case 694u: goto L_08ADAC7C;
    case 695u: goto L_08ADACA4;
    case 696u: goto L_08ADACE8;
    case 697u: goto L_08ADAD0C;
    case 698u: goto L_08ADADB8;
    case 699u: goto L_08ADAE64;
    case 700u: goto L_08ADAEBC;
    case 701u: goto L_08ADAEC0;
    case 702u: goto L_08ADAED0;
    case 703u: goto L_08ADAED8;
    case 704u: goto L_08ADAEE4;
    case 705u: goto L_08ADAEF8;
    case 706u: goto L_08ADAF04;
    case 707u: goto L_08ADAF10;
    case 708u: goto L_08ADAF1C;
    case 709u: goto L_08ADAF28;
    case 710u: goto L_08ADAF34;
    case 711u: goto L_08ADAF60;
    case 712u: goto L_08ADAF78;
    case 713u: goto L_08ADAF84;
    case 714u: goto L_08ADAF8C;
    case 715u: goto L_08ADAF9C;
    case 716u: goto L_08ADAFA8;
    case 717u: goto L_08ADB018;
    case 718u: goto L_08ADB024;
    case 719u: goto L_08ADB030;
    case 720u: goto L_08ADB038;
    case 721u: goto L_08ADB040;
    case 722u: goto L_08ADB048;
    case 723u: goto L_08ADB060;
    case 724u: goto L_08ADB06C;
    case 725u: goto L_08ADB080;
    case 726u: goto L_08ADB098;
    case 727u: goto L_08ADB0C0;
    case 728u: goto L_08ADB0CC;
    case 729u: goto L_08ADB0E0;
    case 730u: goto L_08ADB0FC;
    case 731u: goto L_08ADB104;
    case 732u: goto L_08ADB114;
    case 733u: goto L_08ADB118;
    case 734u: goto L_08ADB11C;
    case 735u: goto L_08ADB178;
    case 736u: goto L_08ADB184;
    case 737u: goto L_08ADB18C;
    case 738u: goto L_08ADB280;
    case 739u: goto L_08ADB28C;
    case 740u: goto L_08ADB354;
    case 741u: goto L_08ADB35C;
    case 742u: goto L_08ADB36C;
    case 743u: goto L_08ADB378;
    case 744u: goto L_08ADB37C;
    case 745u: goto L_08ADB380;
    case 746u: goto L_08ADB388;
    case 747u: goto L_08ADB398;
    case 748u: goto L_08ADB3A0;
    case 749u: goto L_08ADB3B0;
    case 750u: goto L_08ADB3BC;
    case 751u: goto L_08ADB3C0;
    case 752u: goto L_08ADB3C4;
    case 753u: goto L_08ADB3CC;
    case 754u: goto L_08ADB3E0;
    case 755u: goto L_08ADB3F0;
    case 756u: goto L_08ADB3FC;
    case 757u: goto L_08ADB404;
    case 758u: goto L_08ADB474;
    case 759u: goto L_08ADB480;
    case 760u: goto L_08ADB4B4;
    case 761u: goto L_08ADB4BC;
    case 762u: goto L_08ADB4C4;
    case 763u: goto L_08ADB4CC;
    case 764u: goto L_08ADB4D8;
    case 765u: goto L_08ADB4E0;
    case 766u: goto L_08ADB4EC;
    case 767u: goto L_08ADB4F4;
    case 768u: goto L_08ADB4FC;
    case 769u: goto L_08ADB510;
    case 770u: goto L_08ADB514;
    case 771u: goto L_08ADB530;
    case 772u: goto L_08ADB5A0;
    case 773u: goto L_08ADB5F8;
    case 774u: goto L_08ADB608;
    case 775u: goto L_08ADB610;
    case 776u: goto L_08ADB614;
    case 777u: goto L_08ADB61C;
    case 778u: goto L_08ADB630;
    case 779u: goto L_08ADB648;
    case 780u: goto L_08ADB658;
    case 781u: goto L_08ADB668;
    case 782u: goto L_08ADB670;
    case 783u: goto L_08ADB674;
    case 784u: goto L_08ADB67C;
    case 785u: goto L_08ADB690;
    case 786u: goto L_08ADB6A8;
    case 787u: goto L_08ADB6B4;
    case 788u: goto L_08ADB708;
    case 789u: goto L_08ADB718;
    case 790u: goto L_08ADB728;
    case 791u: goto L_08ADB738;
    case 792u: goto L_08ADB744;
    case 793u: goto L_08ADB74C;
    case 794u: goto L_08ADB754;
    case 795u: goto L_08ADB764;
    case 796u: goto L_08ADB774;
    case 797u: goto L_08ADB784;
    case 798u: goto L_08ADB794;
    case 799u: goto L_08ADB7A0;
    case 800u: goto L_08ADB7A8;
    case 801u: goto L_08ADB7B0;
    case 802u: goto L_08ADB7B4;
    case 803u: goto L_08ADB7E4;
    case 804u: goto L_08ADB7EC;
    case 805u: goto L_08ADB824;
    case 806u: goto L_08ADB82C;
    case 807u: goto L_08ADB860;
    case 808u: goto L_08ADB868;
    case 809u: goto L_08ADB8A0;
    case 810u: goto L_08ADB8A8;
    case 811u: goto L_08ADB8AC;
    case 812u: goto L_08ADB8B4;
    case 813u: goto L_08ADB8C0;
    case 814u: goto L_08ADB8C8;
    case 815u: goto L_08ADB8D4;
    case 816u: goto L_08ADB8DC;
    case 817u: goto L_08ADB8E4;
    case 818u: goto L_08ADB8FC;
    case 819u: goto L_08ADB900;
    case 820u: goto L_08ADB910;
    case 821u: goto L_08ADB980;
    case 822u: goto L_08ADB9DC;
    case 823u: goto L_08ADB9EC;
    case 824u: goto L_08ADB9F8;
    case 825u: goto L_08ADBA00;
    case 826u: goto L_08ADBA08;
    case 827u: goto L_08ADBA20;
    case 828u: goto L_08ADBA40;
    case 829u: goto L_08ADBA50;
    case 830u: goto L_08ADBA60;
    case 831u: goto L_08ADBA70;
    case 832u: goto L_08ADBA7C;
    case 833u: goto L_08ADBA80;
    case 834u: goto L_08ADBA98;
    case 835u: goto L_08ADBAA4;
    case 836u: goto L_08ADBAA8;
    case 837u: goto L_08ADBAB0;
    case 838u: goto L_08ADBAC0;
    case 839u: goto L_08ADBAD0;
    case 840u: goto L_08ADBADC;
    case 841u: goto L_08ADBAE4;
    case 842u: goto L_08ADBAEC;
    case 843u: goto L_08ADBB04;
    case 844u: goto L_08ADBB24;
    case 845u: goto L_08ADBB34;
    case 846u: goto L_08ADBB44;
    case 847u: goto L_08ADBB54;
    case 848u: goto L_08ADBB60;
    case 849u: goto L_08ADBB64;
    case 850u: goto L_08ADBB7C;
    case 851u: goto L_08ADBB88;
    case 852u: goto L_08ADBB8C;
    case 853u: goto L_08ADBB94;
    case 854u: goto L_08ADBBA0;
    case 855u: goto L_08ADBBF4;
    case 856u: goto L_08ADBC04;
    case 857u: goto L_08ADBC14;
    case 858u: goto L_08ADBC24;
    case 859u: goto L_08ADBC30;
    case 860u: goto L_08ADBC38;
    case 861u: goto L_08ADBC40;
    case 862u: goto L_08ADBC50;
    case 863u: goto L_08ADBC60;
    case 864u: goto L_08ADBC70;
    case 865u: goto L_08ADBC80;
    case 866u: goto L_08ADBC8C;
    case 867u: goto L_08ADBC94;
    case 868u: goto L_08ADBC9C;
    case 869u: goto L_08ADBCA0;
    case 870u: goto L_08ADBCD0;
    case 871u: goto L_08ADBCD8;
    case 872u: goto L_08ADBD10;
    case 873u: goto L_08ADBD18;
    case 874u: goto L_08ADBD4C;
    case 875u: goto L_08ADBD54;
    case 876u: goto L_08ADBD8C;
    case 877u: goto L_08ADBD94;
    case 878u: goto L_08ADBD98;
    case 879u: goto L_08ADBDA4;
    case 880u: goto L_08ADBDAC;
    case 881u: goto L_08ADBDB4;
    case 882u: goto L_08ADBDBC;
    case 883u: goto L_08ADBDC4;
    case 884u: goto L_08ADBDCC;
    case 885u: goto L_08ADBDD0;
    case 886u: goto L_08ADBDE0;
    case 887u: goto L_08ADBDE4;
    case 888u: goto L_08ADBDF4;
    case 889u: goto L_08ADBE08;
    case 890u: goto L_08ADBE10;
    case 891u: goto L_08ADBE18;
    case 892u: goto L_08ADBE20;
    case 893u: goto L_08ADBE28;
    case 894u: goto L_08ADBE30;
    case 895u: goto L_08ADBE38;
    case 896u: goto L_08ADBE40;
    case 897u: goto L_08ADBE48;
    case 898u: goto L_08ADBE50;
    case 899u: goto L_08ADBE58;
    case 900u: goto L_08ADBE78;
    case 901u: goto L_08ADBEA0;
    case 902u: goto L_08ADBEB4;
    case 903u: goto L_08ADBEC0;
    case 904u: goto L_08ADBEFC;
    case 905u: goto L_08ADBF04;
    case 906u: goto L_08ADBF0C;
    case 907u: goto L_08ADBF20;
    case 908u: goto L_08ADBF30;
    case 909u: goto L_08ADBF40;
    case 910u: goto L_08ADBF48;
    case 911u: goto L_08ADBF4C;
    case 912u: goto L_08ADBF88;
    case 913u: goto L_08ADBF90;
    case 914u: goto L_08ADBF94;
    case 915u: goto L_08ADBF9C;
    case 916u: goto L_08ADBFA4;
    case 917u: goto L_08ADBFAC;
    case 918u: goto L_08ADBFB4;
    case 919u: goto L_08ADBFBC;
    case 920u: goto L_08ADBFC4;
    case 921u: goto L_08ADBFC8;
    case 922u: goto L_08ADBFD8;
    case 923u: goto L_08ADBFDC;
    case 924u: goto L_08ADBFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AD8000:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD8010u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD8010u) goto L_08AD8010;
    return;
L_08AD8010:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    goto L_08AD8014;
L_08AD8014:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD8034u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD8AE0;
L_08AD8034:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AD8074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-25491)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD81A8;
      }
      goto L_08AD80E4;
    }
L_08AD80E4:
    ctx.gpr[21] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8648));
      if (branch_taken) {
          goto L_08AD811C;
      }
      goto L_08AD80F0;
    }
L_08AD80F0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AD80FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD80FCu) goto L_08AD80FC;
    return;
L_08AD80FC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8114;
      }
      goto L_08AD8108;
    }
L_08AD8108:
    ctx.gpr[31] = (0x08AD8110u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD8110u) goto L_08AD8110;
    return;
L_08AD8110:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    goto L_08AD8114;
L_08AD8114:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    goto L_08AD811C;
L_08AD811C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD8128u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD8128u) goto L_08AD8128;
    return;
L_08AD8128:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD8134u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AD8134u) goto L_08AD8134;
    return;
L_08AD8134:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD8180;
      }
      goto L_08AD8158;
    }
L_08AD8158:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD8164u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8164u) goto L_08AD8164;
    return;
L_08AD8164:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD817C;
      }
      goto L_08AD8170;
    }
L_08AD8170:
    ctx.gpr[31] = (0x08AD8178u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD8178u) goto L_08AD8178;
    return;
L_08AD8178:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD817C;
L_08AD817C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    goto L_08AD8180;
L_08AD8180:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD818Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD818Cu) goto L_08AD818C;
    return;
L_08AD818C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD81A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD81A0u) goto L_08AD81A0;
    return;
L_08AD81A0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AD8268;
      }
      goto L_08AD81A8;
    }
L_08AD81A8:
    ctx.gpr[21] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8640));
      if (branch_taken) {
          goto L_08AD81E0;
      }
      goto L_08AD81B4;
    }
L_08AD81B4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AD81C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD81C0u) goto L_08AD81C0;
    return;
L_08AD81C0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD81D8;
      }
      goto L_08AD81CC;
    }
L_08AD81CC:
    ctx.gpr[31] = (0x08AD81D4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD81D4u) goto L_08AD81D4;
    return;
L_08AD81D4:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    goto L_08AD81D8;
L_08AD81D8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    goto L_08AD81E0;
L_08AD81E0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD81ECu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD81ECu) goto L_08AD81EC;
    return;
L_08AD81EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD81F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AD81F8u) goto L_08AD81F8;
    return;
L_08AD81F8:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD8244;
      }
      goto L_08AD821C;
    }
L_08AD821C:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD8228u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8228u) goto L_08AD8228;
    return;
L_08AD8228:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8240;
      }
      goto L_08AD8234;
    }
L_08AD8234:
    ctx.gpr[31] = (0x08AD823Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD823Cu) goto L_08AD823C;
    return;
L_08AD823C:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD8240;
L_08AD8240:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    goto L_08AD8244;
L_08AD8244:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD8250u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD8250u) goto L_08AD8250;
    return;
L_08AD8250:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD8264u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD8264u) goto L_08AD8264;
    return;
L_08AD8264:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    goto L_08AD8268;
L_08AD8268:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD8288u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD89D8;
L_08AD8288:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AD82C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16904u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8632));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD835C;
      }
      goto L_08AD8330;
    }
L_08AD8330:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD833Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD833Cu) goto L_08AD833C;
    return;
L_08AD833C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8354;
      }
      goto L_08AD8348;
    }
L_08AD8348:
    ctx.gpr[31] = (0x08AD8350u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD8350u) goto L_08AD8350;
    return;
L_08AD8350:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD8354;
L_08AD8354:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD835C;
L_08AD835C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD8368u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD8368u) goto L_08AD8368;
    return;
L_08AD8368:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD8374u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AD8374u) goto L_08AD8374;
    return;
L_08AD8374:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD83C8;
      }
      goto L_08AD83A0;
    }
L_08AD83A0:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD83ACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD83ACu) goto L_08AD83AC;
    return;
L_08AD83AC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD83C4;
      }
      goto L_08AD83B8;
    }
L_08AD83B8:
    ctx.gpr[31] = (0x08AD83C0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD83C0u) goto L_08AD83C0;
    return;
L_08AD83C0:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD83C4;
L_08AD83C4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    goto L_08AD83C8;
L_08AD83C8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD83D4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD83D4u) goto L_08AD83D4;
    return;
L_08AD83D4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD83E8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD83E8u) goto L_08AD83E8;
    return;
L_08AD83E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD840Cu);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD8F5C;
L_08AD840C:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AD844C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16904u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8624));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD84E0;
      }
      goto L_08AD84B4;
    }
L_08AD84B4:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD84C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD84C0u) goto L_08AD84C0;
    return;
L_08AD84C0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD84D8;
      }
      goto L_08AD84CC;
    }
L_08AD84CC:
    ctx.gpr[31] = (0x08AD84D4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD84D4u) goto L_08AD84D4;
    return;
L_08AD84D4:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD84D8;
L_08AD84D8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD84E0;
L_08AD84E0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD84ECu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD84ECu) goto L_08AD84EC;
    return;
L_08AD84EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD84F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AD84F8u) goto L_08AD84F8;
    return;
L_08AD84F8:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD854C;
      }
      goto L_08AD8524;
    }
L_08AD8524:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD8530u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8530u) goto L_08AD8530;
    return;
L_08AD8530:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8548;
      }
      goto L_08AD853C;
    }
L_08AD853C:
    ctx.gpr[31] = (0x08AD8544u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD8544u) goto L_08AD8544;
    return;
L_08AD8544:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD8548;
L_08AD8548:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    goto L_08AD854C;
L_08AD854C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD8558u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD8558u) goto L_08AD8558;
    return;
L_08AD8558:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD856Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD856Cu) goto L_08AD856C;
    return;
L_08AD856C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD8590u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD8F5C;
L_08AD8590:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AD85D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD8604;
      }
      goto L_08AD85F8;
    }
L_08AD85F8:
    ctx.gpr[31] = (0x08AD8600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8600u) goto L_08AD8600;
    return;
L_08AD8600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    goto L_08AD8604;
L_08AD8604:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD8630;
      }
      goto L_08AD8610;
    }
L_08AD8610:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08AD8634;
    }
    goto L_08AD861C;
L_08AD861C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AD8638;
      }
      goto L_08AD8630;
    }
L_08AD8630:
    ctx.gpr[5] = (0u | 1u);
    goto L_08AD8634;
L_08AD8634:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08AD8638;
L_08AD8638:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8778;
      }
      goto L_08AD8640;
    }
L_08AD8640:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD865C;
      }
      goto L_08AD8648;
    }
L_08AD8648:
    ctx.gpr[31] = (0x08AD8650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8650u) goto L_08AD8650;
    return;
L_08AD8650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD865C;
L_08AD865C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD8684;
      }
      goto L_08AD8664;
    }
L_08AD8664:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08AD8688;
    }
    goto L_08AD8670;
L_08AD8670:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (2209u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-26624));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08AD868C;
      }
      goto L_08AD8684;
    }
L_08AD8684:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AD8688;
L_08AD8688:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08AD868C;
L_08AD868C:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_08AD86EC;
    }
    goto L_08AD8694;
L_08AD8694:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD86BC;
      }
      goto L_08AD869C;
    }
L_08AD869C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD86BC;
      }
      goto L_08AD86A8;
    }
L_08AD86A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-26616));
    if (ctx.gpr[8] == ctx.gpr[6]) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_08AD86EC;
    }
    goto L_08AD86BC;
L_08AD86BC:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08AD86E8;
    }
    goto L_08AD86C4;
L_08AD86C4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08AD86E8;
    }
    goto L_08AD86D0;
L_08AD86D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (2209u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25968));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AD86EC;
      }
      goto L_08AD86E4;
    }
L_08AD86E4:
    ctx.gpr[5] = (0u | 1u);
    goto L_08AD86E8;
L_08AD86E8:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08AD86EC;
L_08AD86EC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8778;
      }
      goto L_08AD86F4;
    }
L_08AD86F4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
        goto L_08AD870C;
    }
    goto L_08AD86FC;
L_08AD86FC:
    ctx.gpr[31] = (0x08AD8704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8704u) goto L_08AD8704;
    return;
L_08AD8704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
    goto L_08AD870C;
L_08AD870C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD8768;
      }
      goto L_08AD8714;
    }
L_08AD8714:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8740;
      }
      goto L_08AD8720;
    }
L_08AD8720:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8740;
      }
      goto L_08AD872C;
    }
L_08AD872C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (2209u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-25292));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08AD876C;
    }
    goto L_08AD8740;
L_08AD8740:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
        goto L_08AD8770;
    }
    goto L_08AD8748;
L_08AD8748:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
        goto L_08AD8770;
    }
    goto L_08AD8754;
L_08AD8754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25300));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08AD8770;
      }
      goto L_08AD8768;
    }
L_08AD8768:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AD876C;
L_08AD876C:
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08AD8770;
L_08AD8770:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8834;
      }
      goto L_08AD8778;
    }
L_08AD8778:
    ctx.gpr[31] = (0x08AD8780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08AD8780u) goto L_08AD8780;
    return;
L_08AD8780:
    ctx.gpr[31] = (0x08AD8788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8788u) goto L_08AD8788;
    return;
L_08AD8788:
    ctx.gpr[31] = (0x08AD8790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8790u) goto L_08AD8790;
    return;
L_08AD8790:
    ctx.gpr[31] = (0x08AD8798u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8798u) goto L_08AD8798;
    return;
L_08AD8798:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD87B4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD87B4u) goto L_08AD87B4;
    return;
L_08AD87B4:
    ctx.gpr[31] = (0x08AD87BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AD87BCu) goto L_08AD87BC;
    return;
L_08AD87BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD87D4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD87D4u) goto L_08AD87D4;
    return;
L_08AD87D4:
    ctx.gpr[31] = (0x08AD87DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 236u, 0x08A55118u>(ctx, &aot_mem) && ctx.pc == 0x08AD87DCu) goto L_08AD87DC;
    return;
L_08AD87DC:
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x08AD87F8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD87F8u) goto L_08AD87F8;
    return;
L_08AD87F8:
    ctx.gpr[31] = (0x08AD8800u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AD8800u) goto L_08AD8800;
    return;
L_08AD8800:
    ctx.gpr[31] = (0x08AD8808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08AD8808u) goto L_08AD8808;
    return;
L_08AD8808:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1368)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[7] = (ctx.gpr[17] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD898C;
      }
      goto L_08AD881C;
    }
L_08AD881C:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8144)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD89C0;
      }
      goto L_08AD883C;
    }
L_08AD883C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD884Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 656u, 0x08AD7358u>(ctx, &aot_mem) && ctx.pc == 0x08AD884Cu) goto L_08AD884C;
    return;
L_08AD884C:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD898C;
      }
      goto L_08AD8858;
    }
L_08AD8858:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8870;
      }
      goto L_08AD8864;
    }
L_08AD8864:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD888C;
      }
      goto L_08AD8870;
    }
L_08AD8870:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD8880u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 674u, 0x08AD74DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8880u) goto L_08AD8880;
    return;
L_08AD8880:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD898C;
      }
      goto L_08AD888C;
    }
L_08AD888C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD89C0;
      }
      goto L_08AD8894;
    }
L_08AD8894:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD88A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 692u, 0x08AD7660u>(ctx, &aot_mem) && ctx.pc == 0x08AD88A4u) goto L_08AD88A4;
    return;
L_08AD88A4:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD898C;
      }
      goto L_08AD88B0;
    }
L_08AD88B0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD88C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 710u, 0x08AD77C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD88C0u) goto L_08AD88C0;
    return;
L_08AD88C0:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD898C;
      }
      goto L_08AD88CC;
    }
L_08AD88CC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD88DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 728u, 0x08AD794Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD88DCu) goto L_08AD88DC;
    return;
L_08AD88DC:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD898C;
      }
      goto L_08AD88E8;
    }
L_08AD88E8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD88F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 746u, 0x08AD7AE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD88F8u) goto L_08AD88F8;
    return;
L_08AD88F8:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD898C;
      }
      goto L_08AD8904;
    }
L_08AD8904:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD8914u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 764u, 0x08AD7C84u>(ctx, &aot_mem) && ctx.pc == 0x08AD8914u) goto L_08AD8914;
    return;
L_08AD8914:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD898C;
      }
      goto L_08AD8920;
    }
L_08AD8920:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD8930u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 782u, 0x08AD7E20u>(ctx, &aot_mem) && ctx.pc == 0x08AD8930u) goto L_08AD8930;
    return;
L_08AD8930:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD898C;
      }
      goto L_08AD893C;
    }
L_08AD893C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD894Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD8074;
L_08AD894C:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD898C;
      }
      goto L_08AD8958;
    }
L_08AD8958:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD8968u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD82C8;
L_08AD8968:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
      if (branch_taken) {
          goto L_08AD898C;
      }
      goto L_08AD8974;
    }
L_08AD8974:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD8984u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD844C;
L_08AD8984:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    goto L_08AD898C;
L_08AD898C:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1364), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1372)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD89C0;
      }
      goto L_08AD89A4;
    }
L_08AD89A4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 477u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1368)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1364), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), ctx.gpr[4]);
    goto L_08AD89C0;
L_08AD89C0:
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
L_08AD89D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(1276));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[9] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8A24u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8A24u) goto L_08AD8A24;
    return;
L_08AD8A24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8A40u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8A40u) goto L_08AD8A40;
    return;
L_08AD8A40:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8A5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(1272));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[9] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8AA8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8AA8u) goto L_08AD8AA8;
    return;
L_08AD8AA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8AC4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8AC4u) goto L_08AD8AC4;
    return;
L_08AD8AC4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8AE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(1308));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[9] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8B2Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8B2Cu) goto L_08AD8B2C;
    return;
L_08AD8B2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8B48u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8B48u) goto L_08AD8B48;
    return;
L_08AD8B48:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8B64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[9] = (16768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(1312));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[9] = (16816u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8BBCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8BBCu) goto L_08AD8BBC;
    return;
L_08AD8BBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8BD8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8BD8u) goto L_08AD8BD8;
    return;
L_08AD8BD8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1292));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8C58u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8C58u) goto L_08AD8C58;
    return;
L_08AD8C58:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8C74u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8C74u) goto L_08AD8C74;
    return;
L_08AD8C74:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[24];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1300));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD8CA0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8CA0u) goto L_08AD8CA0;
    return;
L_08AD8CA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8CBCu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8CBCu) goto L_08AD8CBC;
    return;
L_08AD8CBC:
    ctx.gpr[4] = (16904u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1320));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD8CF0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8CF0u) goto L_08AD8CF0;
    return;
L_08AD8CF0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD8D0Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8D0Cu) goto L_08AD8D0C;
    return;
L_08AD8D0C:
    ctx.gpr[4] = (16972u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1280));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD8D40u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8D40u) goto L_08AD8D40;
    return;
L_08AD8D40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD8D5Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8D5Cu) goto L_08AD8D5C;
    return;
L_08AD8D5C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8D84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1288));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8DE4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8DE4u) goto L_08AD8DE4;
    return;
L_08AD8DE4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8E00u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8E00u) goto L_08AD8E00;
    return;
L_08AD8E00:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[24];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1296));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD8E2Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8E2Cu) goto L_08AD8E2C;
    return;
L_08AD8E2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8E48u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8E48u) goto L_08AD8E48;
    return;
L_08AD8E48:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8E70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1320));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8ED0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8ED0u) goto L_08AD8ED0;
    return;
L_08AD8ED0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8EECu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8EECu) goto L_08AD8EEC;
    return;
L_08AD8EEC:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[24];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1280));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD8F18u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8F18u) goto L_08AD8F18;
    return;
L_08AD8F18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8F34u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8F34u) goto L_08AD8F34;
    return;
L_08AD8F34:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8F5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1292));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD8FB8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8FB8u) goto L_08AD8FB8;
    return;
L_08AD8FB8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD8FD4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8FD4u) goto L_08AD8FD4;
    return;
L_08AD8FD4:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[24];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1300));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AD8FF4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8FF4u) goto L_08AD8FF4;
    return;
L_08AD8FF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AD9010u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9010u) goto L_08AD9010;
    return;
L_08AD9010:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16241u << 16u);
      if (branch_taken) {
          goto L_08AD9100;
      }
      goto L_08AD9050;
    }
L_08AD9050:
    ctx.gpr[5] = (ctx.gpr[5] | 60293u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD9098;
      }
      goto L_08AD9064;
    }
L_08AD9064:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AD90D0;
      }
      goto L_08AD906C;
    }
L_08AD906C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD90B4;
      }
      goto L_08AD9074;
    }
L_08AD9074:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AD90EC;
      }
      goto L_08AD907C;
    }
L_08AD907C:
    ctx.gpr[4] = (16129u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 1573u);
    ctx.gpr[31] = (0x08AD9090u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9090u) goto L_08AD9090;
    return;
L_08AD9090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9100;
      }
      goto L_08AD9098;
    }
L_08AD9098:
    ctx.gpr[4] = (16089u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 5767u);
    ctx.gpr[31] = (0x08AD90ACu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD90ACu) goto L_08AD90AC;
    return;
L_08AD90AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9100;
      }
      goto L_08AD90B4;
    }
L_08AD90B4:
    ctx.gpr[4] = (16081u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 6607u);
    ctx.gpr[31] = (0x08AD90C8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD90C8u) goto L_08AD90C8;
    return;
L_08AD90C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9100;
      }
      goto L_08AD90D0;
    }
L_08AD90D0:
    ctx.gpr[4] = (16101u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 38064u);
    ctx.gpr[31] = (0x08AD90E4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD90E4u) goto L_08AD90E4;
    return;
L_08AD90E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9100;
      }
      goto L_08AD90EC;
    }
L_08AD90EC:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08AD9100u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9100u) goto L_08AD9100;
    return;
L_08AD9100:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD910C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[10]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[18] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AD91DC;
      }
      goto L_08AD9180;
    }
L_08AD9180:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD91B4;
      }
      goto L_08AD918C;
    }
L_08AD918C:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD91A4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD91A4u) goto L_08AD91A4;
    return;
L_08AD91A4:
    ctx.gpr[31] = (0x08AD91ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AD91ACu) goto L_08AD91AC;
    return;
L_08AD91AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD91FC;
      }
      goto L_08AD91B4;
    }
L_08AD91B4:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD91CCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD91CCu) goto L_08AD91CC;
    return;
L_08AD91CC:
    ctx.gpr[31] = (0x08AD91D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AD91D4u) goto L_08AD91D4;
    return;
L_08AD91D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD91FC;
      }
      goto L_08AD91DC;
    }
L_08AD91DC:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (0u | 253u);
    ctx.gpr[6] = (0u | 179u);
    ctx.gpr[31] = (0x08AD91F4u);
    ctx.gpr[7] = (0u | 54u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD91F4u) goto L_08AD91F4;
    return;
L_08AD91F4:
    ctx.gpr[31] = (0x08AD91FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AD91FCu) goto L_08AD91FC;
    return;
L_08AD91FC:
    ctx.gpr[31] = (0x08AD9204u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9204u) goto L_08AD9204;
    return;
L_08AD9204:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AD921Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD921Cu) goto L_08AD921C;
    return;
L_08AD921C:
    ctx.gpr[31] = (0x08AD9224u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 236u, 0x08A55118u>(ctx, &aot_mem) && ctx.pc == 0x08AD9224u) goto L_08AD9224;
    return;
L_08AD9224:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08AD9270;
      }
      goto L_08AD9248;
    }
L_08AD9248:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AD9254u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9254u) goto L_08AD9254;
    return;
L_08AD9254:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD926C;
      }
      goto L_08AD9260;
    }
L_08AD9260:
    ctx.gpr[31] = (0x08AD9268u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD9268u) goto L_08AD9268;
    return;
L_08AD9268:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AD926C;
L_08AD926C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08AD9270;
L_08AD9270:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD927Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD927Cu) goto L_08AD927C;
    return;
L_08AD927C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AD9290u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9290u) goto L_08AD9290;
    return;
L_08AD9290:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD92C8;
      }
      goto L_08AD929C;
    }
L_08AD929C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AD92A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD92A8u) goto L_08AD92A8;
    return;
L_08AD92A8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD92C0;
      }
      goto L_08AD92B4;
    }
L_08AD92B4:
    ctx.gpr[31] = (0x08AD92BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD92BCu) goto L_08AD92BC;
    return;
L_08AD92BC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AD92C0;
L_08AD92C0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD92C8;
L_08AD92C8:
    ctx.gpr[31] = (0x08AD92D0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD92D0u) goto L_08AD92D0;
    return;
L_08AD92D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD92DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AD92DCu) goto L_08AD92DC;
    return;
L_08AD92DC:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD930C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5944), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9330u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 103u, 0x08864790u>(ctx, &aot_mem) && ctx.pc == 0x08AD9330u) goto L_08AD9330;
    return;
L_08AD9330:
    ctx.gpr[31] = (0x08AD9338u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD934C;
L_08AD9338:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD934C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25452)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[16] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25488)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-5872));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD939C;
      }
      goto L_08AD9394;
    }
L_08AD9394:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08AD93A0;
      }
      goto L_08AD939C;
    }
L_08AD939C:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(0u));
    goto L_08AD93A0;
L_08AD93A0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25489)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AD93B0;
      }
      goto L_08AD93AC;
    }
L_08AD93AC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25489), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AD93B0;
L_08AD93B0:
    ctx.gpr[31] = (0x08AD93B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 93u, 0x088646E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD93B8u) goto L_08AD93B8;
    return;
L_08AD93B8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x08AD93CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 627u, 0x08AD70E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD93CCu) goto L_08AD93CC;
    return;
L_08AD93CC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD93D8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD99F0;
L_08AD93D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD93E4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 113u, 0x08864820u>(ctx, &aot_mem) && ctx.pc == 0x08AD93E4u) goto L_08AD93E4;
    return;
L_08AD93E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD93F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 117u, 0x08864858u>(ctx, &aot_mem) && ctx.pc == 0x08AD93F0u) goto L_08AD93F0;
    return;
L_08AD93F0:
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08AD93F8;
L_08AD93F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD93F8;
      }
      goto L_08AD940C;
    }
L_08AD940C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[31] = (0x08AD941Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 148u, 0x08864AA0u>(ctx, &aot_mem) && ctx.pc == 0x08AD941Cu) goto L_08AD941C;
    return;
L_08AD941C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AD9440;
      }
      goto L_08AD942C;
    }
L_08AD942C:
    ctx.gpr[31] = (0x08AD9434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 320u, 0x088456DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9434u) goto L_08AD9434;
    return;
L_08AD9434:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AD9440;
L_08AD9440:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1668), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7128), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7132), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(7168), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25504), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-24624), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-24622), static_cast<std::uint8_t>(0u));
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
L_08AD9494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1132), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25518), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25650)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD94CC;
      }
      goto L_08AD94BC;
    }
L_08AD94BC:
    ctx.gpr[31] = (0x08AD94C4u);
    ctx.gpr[5] = (0u | 11u);
    goto L_08AD9BE4;
L_08AD94C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD94D4;
      }
      goto L_08AD94CC;
    }
L_08AD94CC:
    ctx.gpr[31] = (0x08AD94D4u);
    ctx.gpr[5] = (0u | 12u);
    goto L_08AD9BE4;
L_08AD94D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD94E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD94F4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25531), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 165u, 0x088B0E74u>(ctx, &aot_mem) && ctx.pc == 0x08AD94F4u) goto L_08AD94F4;
    return;
L_08AD94F4:
    ctx.gpr[31] = (0x08AD94FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 501u, 0x088B2370u>(ctx, &aot_mem) && ctx.pc == 0x08AD94FCu) goto L_08AD94FC;
    return;
L_08AD94FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9508:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD951Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 891u, 0x08A9B2BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD951Cu) goto L_08AD951C;
    return;
L_08AD951C:
    ctx.gpr[31] = (0x08AD9524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 297u, 0x088B1588u>(ctx, &aot_mem) && ctx.pc == 0x08AD9524u) goto L_08AD9524;
    return;
L_08AD9524:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 299u, 0x088B15C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9540u) goto L_08AD9540;
    return;
L_08AD9540:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD954C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(321)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD95A0;
      }
      goto L_08AD9560;
    }
L_08AD9560:
    ctx.gpr[31] = (0x08AD9568u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD9568u) goto L_08AD9568;
    return;
L_08AD9568:
    ctx.gpr[31] = (0x08AD9570u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 150u, 0x08A9863Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9570u) goto L_08AD9570;
    return;
L_08AD9570:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9590;
      }
      goto L_08AD9578;
    }
L_08AD9578:
    ctx.gpr[31] = (0x08AD9580u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD9580u) goto L_08AD9580;
    return;
L_08AD9580:
    ctx.gpr[31] = (0x08AD9588u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 672u, 0x08A96D78u>(ctx, &aot_mem) && ctx.pc == 0x08AD9588u) goto L_08AD9588;
    return;
L_08AD9588:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9598;
      }
      goto L_08AD9590;
    }
L_08AD9590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD95A4;
      }
      goto L_08AD9598;
    }
L_08AD9598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD95A4;
      }
      goto L_08AD95A0;
    }
L_08AD95A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD95A4;
L_08AD95A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD95B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(321)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9604;
      }
      goto L_08AD95C4;
    }
L_08AD95C4:
    ctx.gpr[31] = (0x08AD95CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD95CCu) goto L_08AD95CC;
    return;
L_08AD95CC:
    ctx.gpr[31] = (0x08AD95D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 157u, 0x08A98694u>(ctx, &aot_mem) && ctx.pc == 0x08AD95D4u) goto L_08AD95D4;
    return;
L_08AD95D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD95F4;
      }
      goto L_08AD95DC;
    }
L_08AD95DC:
    ctx.gpr[31] = (0x08AD95E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD95E4u) goto L_08AD95E4;
    return;
L_08AD95E4:
    ctx.gpr[31] = (0x08AD95ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 682u, 0x08A96DD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD95ECu) goto L_08AD95EC;
    return;
L_08AD95EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD95FC;
      }
      goto L_08AD95F4;
    }
L_08AD95F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD9608;
      }
      goto L_08AD95FC;
    }
L_08AD95FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9608;
      }
      goto L_08AD9604;
    }
L_08AD9604:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD9608;
L_08AD9608:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9614:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(321)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD96E8;
      }
      goto L_08AD962C;
    }
L_08AD962C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD96A8;
      }
      goto L_08AD9638;
    }
L_08AD9638:
    ctx.gpr[31] = (0x08AD9640u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD9640u) goto L_08AD9640;
    return;
L_08AD9640:
    ctx.gpr[31] = (0x08AD9648u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x08A986ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD9648u) goto L_08AD9648;
    return;
L_08AD9648:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD96A0;
      }
      goto L_08AD9650;
    }
L_08AD9650:
    ctx.gpr[31] = (0x08AD9658u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD9658u) goto L_08AD9658;
    return;
L_08AD9658:
    ctx.gpr[31] = (0x08AD9660u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 692u, 0x08A96E30u>(ctx, &aot_mem) && ctx.pc == 0x08AD9660u) goto L_08AD9660;
    return;
L_08AD9660:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD96A0;
      }
      goto L_08AD9668;
    }
L_08AD9668:
    ctx.gpr[31] = (0x08AD9670u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD9670u) goto L_08AD9670;
    return;
L_08AD9670:
    ctx.gpr[31] = (0x08AD9678u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 171u, 0x08A98744u>(ctx, &aot_mem) && ctx.pc == 0x08AD9678u) goto L_08AD9678;
    return;
L_08AD9678:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD96A0;
      }
      goto L_08AD9680;
    }
L_08AD9680:
    ctx.gpr[31] = (0x08AD9688u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD9688u) goto L_08AD9688;
    return;
L_08AD9688:
    ctx.gpr[31] = (0x08AD9690u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 712u, 0x08A96EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9690u) goto L_08AD9690;
    return;
L_08AD9690:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD96A0;
      }
      goto L_08AD9698;
    }
L_08AD9698:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1156), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD96A8;
      }
      goto L_08AD96A0;
    }
L_08AD96A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD96EC;
      }
      goto L_08AD96A8;
    }
L_08AD96A8:
    ctx.gpr[31] = (0x08AD96B0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD96B0u) goto L_08AD96B0;
    return;
L_08AD96B0:
    ctx.gpr[31] = (0x08AD96B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x08A986ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD96B8u) goto L_08AD96B8;
    return;
L_08AD96B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD96D8;
      }
      goto L_08AD96C0;
    }
L_08AD96C0:
    ctx.gpr[31] = (0x08AD96C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD96C8u) goto L_08AD96C8;
    return;
L_08AD96C8:
    ctx.gpr[31] = (0x08AD96D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 692u, 0x08A96E30u>(ctx, &aot_mem) && ctx.pc == 0x08AD96D0u) goto L_08AD96D0;
    return;
L_08AD96D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD96E0;
      }
      goto L_08AD96D8;
    }
L_08AD96D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD96EC;
      }
      goto L_08AD96E0;
    }
L_08AD96E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD96EC;
      }
      goto L_08AD96E8;
    }
L_08AD96E8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD96EC;
L_08AD96EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD96FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(321)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD97D0;
      }
      goto L_08AD9714;
    }
L_08AD9714:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9790;
      }
      goto L_08AD9720;
    }
L_08AD9720:
    ctx.gpr[31] = (0x08AD9728u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD9728u) goto L_08AD9728;
    return;
L_08AD9728:
    ctx.gpr[31] = (0x08AD9730u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 171u, 0x08A98744u>(ctx, &aot_mem) && ctx.pc == 0x08AD9730u) goto L_08AD9730;
    return;
L_08AD9730:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9788;
      }
      goto L_08AD9738;
    }
L_08AD9738:
    ctx.gpr[31] = (0x08AD9740u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD9740u) goto L_08AD9740;
    return;
L_08AD9740:
    ctx.gpr[31] = (0x08AD9748u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 712u, 0x08A96EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9748u) goto L_08AD9748;
    return;
L_08AD9748:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9788;
      }
      goto L_08AD9750;
    }
L_08AD9750:
    ctx.gpr[31] = (0x08AD9758u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD9758u) goto L_08AD9758;
    return;
L_08AD9758:
    ctx.gpr[31] = (0x08AD9760u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x08A986ECu>(ctx, &aot_mem) && ctx.pc == 0x08AD9760u) goto L_08AD9760;
    return;
L_08AD9760:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9788;
      }
      goto L_08AD9768;
    }
L_08AD9768:
    ctx.gpr[31] = (0x08AD9770u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD9770u) goto L_08AD9770;
    return;
L_08AD9770:
    ctx.gpr[31] = (0x08AD9778u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 692u, 0x08A96E30u>(ctx, &aot_mem) && ctx.pc == 0x08AD9778u) goto L_08AD9778;
    return;
L_08AD9778:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9788;
      }
      goto L_08AD9780;
    }
L_08AD9780:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1156), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD9790;
      }
      goto L_08AD9788;
    }
L_08AD9788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD97D4;
      }
      goto L_08AD9790;
    }
L_08AD9790:
    ctx.gpr[31] = (0x08AD9798u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD9798u) goto L_08AD9798;
    return;
L_08AD9798:
    ctx.gpr[31] = (0x08AD97A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 171u, 0x08A98744u>(ctx, &aot_mem) && ctx.pc == 0x08AD97A0u) goto L_08AD97A0;
    return;
L_08AD97A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD97C0;
      }
      goto L_08AD97A8;
    }
L_08AD97A8:
    ctx.gpr[31] = (0x08AD97B0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AD97B0u) goto L_08AD97B0;
    return;
L_08AD97B0:
    ctx.gpr[31] = (0x08AD97B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 712u, 0x08A96EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD97B8u) goto L_08AD97B8;
    return;
L_08AD97B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD97C8;
      }
      goto L_08AD97C0;
    }
L_08AD97C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD97D4;
      }
      goto L_08AD97C8;
    }
L_08AD97C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD97D4;
      }
      goto L_08AD97D0;
    }
L_08AD97D0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD97D4;
L_08AD97D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD97E4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD97FC;
      }
      goto L_08AD97F4;
    }
L_08AD97F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9800;
      }
      goto L_08AD97FC;
    }
L_08AD97FC:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_08AD9800;
L_08AD9800:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9808:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1157), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD99D0;
      }
      goto L_08AD9834;
    }
L_08AD9834:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26208));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD99D0;
      }
      goto L_08AD9848;
    }
L_08AD9848:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AD9868u);
    ctx.gpr[10] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 248u, 0x089C111Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9868u) goto L_08AD9868;
    return;
L_08AD9868:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08AD9874u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 315u, 0x089C15E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9874u) goto L_08AD9874;
    return;
L_08AD9874:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(321), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-50));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[4] = (0u | 999u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (17174u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (17110u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1373), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1374), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AD98D0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1376), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 529u, 0x08A964D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD98D0u) goto L_08AD98D0;
    return;
L_08AD98D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-9999));
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AD991C;
      }
      goto L_08AD98EC;
    }
L_08AD98EC:
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_08AD991C;
      }
      goto L_08AD98F8;
    }
L_08AD98F8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD991C;
      }
      goto L_08AD9900;
    }
L_08AD9900:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD991C;
      }
      goto L_08AD990C;
    }
L_08AD990C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1424), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AD991Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 514u, 0x08A96424u>(ctx, &aot_mem) && ctx.pc == 0x08AD991Cu) goto L_08AD991C;
    return;
L_08AD991C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-25468)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AD9934;
      }
      goto L_08AD9928;
    }
L_08AD9928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25464)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AD994C;
      }
      goto L_08AD9934;
    }
L_08AD9934:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25460)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-25468), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25456)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-25464), ctx.gpr[4]);
    goto L_08AD994C;
L_08AD994C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9964;
      }
      goto L_08AD995C;
    }
L_08AD995C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AD9964;
L_08AD9964:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1420), 0u);
    ctx.gpr[31] = (0x08AD9970u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADA97C;
L_08AD9970:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AD997Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 188u, 0x08864D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD997Cu) goto L_08AD997C;
    return;
L_08AD997C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25471), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25471))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD9994;
      }
      goto L_08AD998C;
    }
L_08AD998C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD99B0;
      }
      goto L_08AD9994;
    }
L_08AD9994:
    ctx.gpr[31] = (0x08AD999Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08AD999Cu) goto L_08AD999C;
    return;
L_08AD999C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25471), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AD99B0;
L_08AD99B0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9460));
    ctx.gpr[31] = (0x08AD99C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 183u, 0x088B8FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD99C0u) goto L_08AD99C0;
    return;
L_08AD99C0:
    ctx.gpr[31] = (0x08AD99C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 183u, 0x088B8FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD99C8u) goto L_08AD99C8;
    return;
L_08AD99C8:
    ctx.gpr[31] = (0x08AD99D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 170u, 0x08AE4E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD99D0u) goto L_08AD99D0;
    return;
L_08AD99D0:
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
L_08AD99F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD9B3C;
      }
      goto L_08AD9A1C;
    }
L_08AD9A1C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD9A28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8616));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 537u, 0x08AD68D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9A28u) goto L_08AD9A28;
    return;
L_08AD9A28:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9A64;
      }
      goto L_08AD9A30;
    }
L_08AD9A30:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD9A3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8584));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 537u, 0x08AD68D4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9A3Cu) goto L_08AD9A3C;
    return;
L_08AD9A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[31] = (0x08AD9A48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 369u, 0x0894E1D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9A48u) goto L_08AD9A48;
    return;
L_08AD9A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[31] = (0x08AD9A60u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9A60u) goto L_08AD9A60;
    return;
L_08AD9A60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1168), 0u);
    goto L_08AD9A64;
L_08AD9A64:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD9A70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8552));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9A70u) goto L_08AD9A70;
    return;
L_08AD9A70:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08AD9A7C;
L_08AD9A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1168)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9A90;
      }
      goto L_08AD9A88;
    }
L_08AD9A88:
    ctx.gpr[31] = (0x08AD9A90u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 369u, 0x0894E1D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9A90u) goto L_08AD9A90;
    return;
L_08AD9A90:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1168), 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1160), 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 39 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD9A7C;
      }
      goto L_08AD9AA8;
    }
L_08AD9AA8:
    ctx.gpr[31] = (0x08AD9AB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 656u, 0x0892FE94u>(ctx, &aot_mem) && ctx.pc == 0x08AD9AB0u) goto L_08AD9AB0;
    return;
L_08AD9AB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AD9AC0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 603u, 0x0892FAACu>(ctx, &aot_mem) && ctx.pc == 0x08AD9AC0u) goto L_08AD9AC0;
    return;
L_08AD9AC0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD9ACCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8540));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892F99Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9ACCu) goto L_08AD9ACC;
    return;
L_08AD9ACC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD9B00;
      }
      goto L_08AD9ADC;
    }
L_08AD9ADC:
    ctx.gpr[31] = (0x08AD9AE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 660u, 0x0892FEDCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9AE4u) goto L_08AD9AE4;
    return;
L_08AD9AE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD9B00;
      }
      goto L_08AD9AEC;
    }
L_08AD9AEC:
    ctx.gpr[31] = (0x08AD9AF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 656u, 0x0892FE94u>(ctx, &aot_mem) && ctx.pc == 0x08AD9AF4u) goto L_08AD9AF4;
    return;
L_08AD9AF4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD9B00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 611u, 0x0892FB40u>(ctx, &aot_mem) && ctx.pc == 0x08AD9B00u) goto L_08AD9B00;
    return;
L_08AD9B00:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9B38;
      }
      goto L_08AD9B08;
    }
L_08AD9B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD9B24;
      }
      goto L_08AD9B18;
    }
L_08AD9B18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD9B24u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AD9BE4;
L_08AD9B24:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AD9B38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8720));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 117u, 0x0883C8A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9B38u) goto L_08AD9B38;
    return;
L_08AD9B38:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1164), static_cast<std::uint8_t>(0u));
    goto L_08AD9B3C;
L_08AD9B3C:
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
L_08AD9B5C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (0u | 640u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (17440u << 16u);
      if (branch_taken) {
          goto L_08AD9B78;
      }
      goto L_08AD9B70;
    }
L_08AD9B70:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AD9B98;
      }
      goto L_08AD9B78;
    }
L_08AD9B78:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08AD9B98;
      }
      goto L_08AD9B98;
    }
L_08AD9B98:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9BA0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (0u | 448u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (17376u << 16u);
      if (branch_taken) {
          goto L_08AD9BBC;
      }
      goto L_08AD9BB4;
    }
L_08AD9BB4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AD9BDC;
      }
      goto L_08AD9BBC;
    }
L_08AD9BBC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08AD9BDC;
      }
      goto L_08AD9BDC;
    }
L_08AD9BDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9BE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1380)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 12u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD9C24;
      }
      goto L_08AD9C0C;
    }
L_08AD9C0C:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD9C24;
      }
      goto L_08AD9C18;
    }
L_08AD9C18:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25517), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AD9C24;
L_08AD9C24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD9C34u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1396), ctx.gpr[5]);
    goto L_08ADA97C;
L_08AD9C34:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1380), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1384), 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD9C58;
      }
      goto L_08AD9C4C;
    }
L_08AD9C4C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25531), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AD9C58;
L_08AD9C58:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[31] = (0x08AD9C64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AD9EF4;
L_08AD9C64:
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
L_08AD9C7C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(300), 0u);
    ctx.gpr[5] = (0u | 300u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1360), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9C8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9CC0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9CC0u) goto L_08AD9CC0;
    return;
L_08AD9CC0:
    ctx.gpr[31] = (0x08AD9CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08AD9CC8u) goto L_08AD9CC8;
    return;
L_08AD9CC8:
    ctx.gpr[31] = (0x08AD9CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 203u, 0x08A54E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9CD0u) goto L_08AD9CD0;
    return;
L_08AD9CD0:
    ctx.gpr[31] = (0x08AD9CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 223u, 0x08A5500Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9CD8u) goto L_08AD9CD8;
    return;
L_08AD9CD8:
    ctx.gpr[31] = (0x08AD9CE0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AD9CE0u) goto L_08AD9CE0;
    return;
L_08AD9CE0:
    ctx.gpr[4] = (17367u << 16u);
    ctx.gpr[31] = (0x08AD9CECu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x08AD9CECu) goto L_08AD9CEC;
    return;
L_08AD9CEC:
    ctx.gpr[31] = (0x08AD9CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9CF4u) goto L_08AD9CF4;
    return;
L_08AD9CF4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9D04u);
    ctx.gpr[5] = (0u | 255u);
    goto L_08AD97E4;
L_08AD9D04:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AD9D1Cu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9D1Cu) goto L_08AD9D1C;
    return;
L_08AD9D1C:
    ctx.gpr[31] = (0x08AD9D24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AD9D24u) goto L_08AD9D24;
    return;
L_08AD9D24:
    ctx.gpr[31] = (0x08AD9D2Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9D2Cu) goto L_08AD9D2C;
    return;
L_08AD9D2C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9D38u);
    ctx.gpr[5] = (0u | 255u);
    goto L_08AD97E4;
L_08AD9D38:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD9D50u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9D50u) goto L_08AD9D50;
    return;
L_08AD9D50:
    ctx.gpr[31] = (0x08AD9D58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD9D58u) goto L_08AD9D58;
    return;
L_08AD9D58:
    ctx.gpr[4] = (16058u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34854u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16202u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49283u);
    ctx.gpr[31] = (0x08AD9D74u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9D74u) goto L_08AD9D74;
    return;
L_08AD9D74:
    ctx.gpr[5] = (17312u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9D88u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AD9B5C;
L_08AD9D88:
    ctx.gpr[5] = (17159u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9D9Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AD9BA0;
L_08AD9D9C:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD9DD8;
      }
      goto L_08AD9DAC;
    }
L_08AD9DAC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AD9DB8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9DB8u) goto L_08AD9DB8;
    return;
L_08AD9DB8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9DD0;
      }
      goto L_08AD9DC4;
    }
L_08AD9DC4:
    ctx.gpr[31] = (0x08AD9DCCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD9DCCu) goto L_08AD9DCC;
    return;
L_08AD9DCC:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08AD9DD0;
L_08AD9DD0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AD9DD8;
L_08AD9DD8:
    ctx.gpr[31] = (0x08AD9DE0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9DE0u) goto L_08AD9DE0;
    return;
L_08AD9DE0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD9DF0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 637u, 0x08A57420u>(ctx, &aot_mem) && ctx.pc == 0x08AD9DF0u) goto L_08AD9DF0;
    return;
L_08AD9DF0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9E48;
      }
      goto L_08AD9E00;
    }
L_08AD9E00:
    ctx.gpr[5] = (17216u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9E10u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AD9BA0;
L_08AD9E10:
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9E24u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AD9BA0;
L_08AD9E24:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
      if (branch_taken) {
          goto L_08AD9E68;
      }
      goto L_08AD9E48;
    }
L_08AD9E48:
    ctx.gpr[5] = (17206u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9E58u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AD9BA0;
L_08AD9E58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    goto L_08AD9E68;
L_08AD9E68:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9E74u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AD9B5C;
L_08AD9E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD9EAC;
      }
      goto L_08AD9E80;
    }
L_08AD9E80:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AD9E8Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9E8Cu) goto L_08AD9E8C;
    return;
L_08AD9E8C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9EA4;
      }
      goto L_08AD9E98;
    }
L_08AD9E98:
    ctx.gpr[31] = (0x08AD9EA0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AD9EA0u) goto L_08AD9EA0;
    return;
L_08AD9EA0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08AD9EA4;
L_08AD9EA4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD9EAC;
L_08AD9EAC:
    ctx.gpr[31] = (0x08AD9EB4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9EB4u) goto L_08AD9EB4;
    return;
L_08AD9EB4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AD9EC8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9EC8u) goto L_08AD9EC8;
    return;
L_08AD9EC8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9EF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9F10u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1388), static_cast<std::uint8_t>(0u));
    goto L_08ADA97C;
L_08AD9F10:
    ctx.gpr[31] = (0x08AD9F18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD9C7C;
L_08AD9F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD9F64;
      }
      goto L_08AD9F28;
    }
L_08AD9F28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(311)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9F64;
      }
      goto L_08AD9F34;
    }
L_08AD9F34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(306)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9F64;
      }
      goto L_08AD9F40;
    }
L_08AD9F40:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25488)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25489)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AD9F5C;
      }
      goto L_08AD9F58;
    }
L_08AD9F58:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25489), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AD9F5C;
L_08AD9F5C:
    ctx.gpr[31] = (0x08AD9F64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADA544;
L_08AD9F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9F7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA228;
      }
      goto L_08AD9FE0;
    }
L_08AD9FE0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8096)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9FF8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08ADA010u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25492), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08ADA974;
L_08ADA010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA228;
      }
      goto L_08ADA018;
    }
L_08ADA018:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA034;
      }
      goto L_08ADA028;
    }
L_08ADA028:
    ctx.gpr[31] = (0x08ADA030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x08ADA030u) goto L_08ADA030;
    return;
L_08ADA030:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20624)));
    goto L_08ADA034;
L_08ADA034:
    ctx.gpr[31] = (0x08ADA03Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 157u, 0x08838A28u>(ctx, &aot_mem) && ctx.pc == 0x08ADA03Cu) goto L_08ADA03C;
    return;
L_08ADA03C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA114;
      }
      goto L_08ADA044;
    }
L_08ADA044:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20624)));
    ctx.gpr[16] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7827));
      if (branch_taken) {
          goto L_08ADA060;
      }
      goto L_08ADA054;
    }
L_08ADA054:
    ctx.gpr[31] = (0x08ADA05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x08ADA05Cu) goto L_08ADA05C;
    return;
L_08ADA05C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20624)));
    goto L_08ADA060;
L_08ADA060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA074;
      }
      goto L_08ADA06C;
    }
L_08ADA06C:
    ctx.gpr[31] = (0x08ADA074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x08ADA074u) goto L_08ADA074;
    return;
L_08ADA074:
    ctx.gpr[31] = (0x08ADA07Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20624)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x08ADA07Cu) goto L_08ADA07C;
    return;
L_08ADA07C:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08ADA08Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 38u, 0x0883822Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA08Cu) goto L_08ADA08C;
    return;
L_08ADA08C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA0A4;
      }
      goto L_08ADA098;
    }
L_08ADA098:
    ctx.gpr[31] = (0x08ADA0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x08ADA0A0u) goto L_08ADA0A0;
    return;
L_08ADA0A0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20624)));
    goto L_08ADA0A4;
L_08ADA0A4:
    ctx.gpr[31] = (0x08ADA0ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x08ADA0ACu) goto L_08ADA0AC;
    return;
L_08ADA0AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA0E4;
      }
      goto L_08ADA0B4;
    }
L_08ADA0B4:
    ctx.gpr[31] = (0x08ADA0BCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 72u, 0x088BC420u>(ctx, &aot_mem) && ctx.pc == 0x08ADA0BCu) goto L_08ADA0BC;
    return;
L_08ADA0BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADA0C8u);
    ctx.gpr[5] = (0u | 65u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 190u, 0x08864D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA0C8u) goto L_08ADA0C8;
    return;
L_08ADA0C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 65u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ADA0DCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 144u, 0x08864A54u>(ctx, &aot_mem) && ctx.pc == 0x08ADA0DCu) goto L_08ADA0DC;
    return;
L_08ADA0DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA114;
      }
      goto L_08ADA0E4;
    }
L_08ADA0E4:
    ctx.gpr[31] = (0x08ADA0ECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 72u, 0x088BC420u>(ctx, &aot_mem) && ctx.pc == 0x08ADA0ECu) goto L_08ADA0EC;
    return;
L_08ADA0EC:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25471))))));
    ctx.gpr[31] = (0x08ADA0FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 190u, 0x08864D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA0FCu) goto L_08ADA0FC;
    return;
L_08ADA0FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25471))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08ADA114u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 144u, 0x08864A54u>(ctx, &aot_mem) && ctx.pc == 0x08ADA114u) goto L_08ADA114;
    return;
L_08ADA114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA228;
      }
      goto L_08ADA11C;
    }
L_08ADA11C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25491)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25491), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ADA228;
      }
      goto L_08ADA130;
    }
L_08ADA130:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25490)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08ADA148u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25490), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08ADA974;
L_08ADA148:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA228;
      }
      goto L_08ADA150;
    }
L_08ADA150:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25526)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25526), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ADA228;
      }
      goto L_08ADA164;
    }
L_08ADA164:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25527)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25527), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25527)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA1AC;
      }
      goto L_08ADA180;
    }
L_08ADA180:
    ctx.gpr[31] = (0x08ADA188u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADA188u) goto L_08ADA188;
    return;
L_08ADA188:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 300u);
    ctx.gpr[31] = (0x08ADA198u);
    ctx.gpr[6] = (0u | 150u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 645u, 0x08A96C48u>(ctx, &aot_mem) && ctx.pc == 0x08ADA198u) goto L_08ADA198;
    return;
L_08ADA198:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28900), ctx.gpr[4]);
    goto L_08ADA1AC;
L_08ADA1AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA228;
      }
      goto L_08ADA1B4;
    }
L_08ADA1B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25651)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25651), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08ADA228;
      }
      goto L_08ADA1C8;
    }
L_08ADA1C8:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25652)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(25652), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADA1E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADA1E8u) goto L_08ADA1E8;
    return;
L_08ADA1E8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25652)));
    ctx.gpr[4] = (ctx.gpr[4] & 65534u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08ADA208u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADA208u) goto L_08ADA208;
    return;
L_08ADA208:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1156), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ADA228;
      }
      goto L_08ADA218;
    }
L_08ADA218:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25520)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25520), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08ADA228;
L_08ADA228:
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
L_08ADA240:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 15 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA2C0;
      }
      goto L_08ADA298;
    }
L_08ADA298:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA394;
      }
      goto L_08ADA2A4;
    }
L_08ADA2A4:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADA2E8;
      }
      goto L_08ADA2B8;
    }
L_08ADA2B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA300;
      }
      goto L_08ADA2C0;
    }
L_08ADA2C0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA39C;
      }
      goto L_08ADA2C8;
    }
L_08ADA2C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA394;
      }
      goto L_08ADA2D0;
    }
L_08ADA2D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25480)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA470;
      }
      goto L_08ADA2E0;
    }
L_08ADA2E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA488;
      }
      goto L_08ADA2E8;
    }
L_08ADA2E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADA300;
      }
      goto L_08ADA2F0;
    }
L_08ADA2F0:
    ctx.gpr[4] = (0u | 384u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25496), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADA340;
      }
      goto L_08ADA300;
    }
L_08ADA300:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (0u | 384u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADA32C;
      }
      goto L_08ADA314;
    }
L_08ADA314:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADA32C;
      }
      goto L_08ADA31C;
    }
L_08ADA31C:
    ctx.gpr[4] = (0u | 128u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25496), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADA340;
      }
      goto L_08ADA32C;
    }
L_08ADA32C:
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25496), ctx.gpr[4]);
    goto L_08ADA340;
L_08ADA340:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (0u | 128u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA360;
      }
      goto L_08ADA358;
    }
L_08ADA358:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25496)));
    goto L_08ADA360;
L_08ADA360:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25496), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 384u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA384;
      }
      goto L_08ADA37C;
    }
L_08ADA37C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25496)));
    goto L_08ADA384;
L_08ADA384:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25496), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADA394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADA974;
L_08ADA394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA534;
      }
      goto L_08ADA39C;
    }
L_08ADA39C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25476)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA3C4;
      }
      goto L_08ADA3AC;
    }
L_08ADA3AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADA3C4;
      }
      goto L_08ADA3B4;
    }
L_08ADA3B4:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25476), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADA400;
      }
      goto L_08ADA3C4;
    }
L_08ADA3C4:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25476)));
    ctx.gpr[4] = (0u | 127u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADA3EC;
      }
      goto L_08ADA3D8;
    }
L_08ADA3D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADA3EC;
      }
      goto L_08ADA3E0;
    }
L_08ADA3E0:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25476), 0u);
      if (branch_taken) {
          goto L_08ADA400;
      }
      goto L_08ADA3EC;
    }
L_08ADA3EC:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25476)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25476), ctx.gpr[4]);
    goto L_08ADA400;
L_08ADA400:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25476)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA420;
      }
      goto L_08ADA418;
    }
L_08ADA418:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25476)));
    goto L_08ADA420;
L_08ADA420:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25476), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA444;
      }
      goto L_08ADA43C;
    }
L_08ADA43C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25476)));
    goto L_08ADA444;
L_08ADA444:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25476), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08ADA460u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 109u, 0x088647E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA460u) goto L_08ADA460;
    return;
L_08ADA460:
    ctx.gpr[31] = (0x08ADA468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADA974;
L_08ADA468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA394;
      }
      goto L_08ADA470;
    }
L_08ADA470:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADA488;
      }
      goto L_08ADA478;
    }
L_08ADA478:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25480), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADA4C4;
      }
      goto L_08ADA488;
    }
L_08ADA488:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25480)));
    ctx.gpr[4] = (0u | 127u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADA4B0;
      }
      goto L_08ADA49C;
    }
L_08ADA49C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADA4B0;
      }
      goto L_08ADA4A4;
    }
L_08ADA4A4:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25480), 0u);
      if (branch_taken) {
          goto L_08ADA4C4;
      }
      goto L_08ADA4B0;
    }
L_08ADA4B0:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25480)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25480), ctx.gpr[4]);
    goto L_08ADA4C4;
L_08ADA4C4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25480)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA4E4;
      }
      goto L_08ADA4DC;
    }
L_08ADA4DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25480)));
    goto L_08ADA4E4;
L_08ADA4E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25480), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA508;
      }
      goto L_08ADA500;
    }
L_08ADA500:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25480)));
    goto L_08ADA508;
L_08ADA508:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25480), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08ADA524u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 105u, 0x088647B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA524u) goto L_08ADA524;
    return;
L_08ADA524:
    ctx.gpr[31] = (0x08ADA52Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADA974;
L_08ADA52C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA394;
      }
      goto L_08ADA534;
    }
L_08ADA534:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA544:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25519), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA554:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1157)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADA69C;
      }
      goto L_08ADA570;
    }
L_08ADA570:
    ctx.gpr[31] = (0x08ADA578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 375u, 0x089C18D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA578u) goto L_08ADA578;
    return;
L_08ADA578:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA69C;
      }
      goto L_08ADA580;
    }
L_08ADA580:
    ctx.gpr[31] = (0x08ADA588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 542u, 0x08AB2F78u>(ctx, &aot_mem) && ctx.pc == 0x08ADA588u) goto L_08ADA588;
    return;
L_08ADA588:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA5ACu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 407u, 0x08A7F278u>(ctx, &aot_mem) && ctx.pc == 0x08ADA5ACu) goto L_08ADA5AC;
    return;
L_08ADA5AC:
    ctx.gpr[31] = (0x08ADA5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 561u, 0x08AB327Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA5B4u) goto L_08ADA5B4;
    return;
L_08ADA5B4:
    ctx.gpr[31] = (0x08ADA5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 542u, 0x08AB2F78u>(ctx, &aot_mem) && ctx.pc == 0x08ADA5BCu) goto L_08ADA5BC;
    return;
L_08ADA5BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA5D8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 407u, 0x08A7F278u>(ctx, &aot_mem) && ctx.pc == 0x08ADA5D8u) goto L_08ADA5D8;
    return;
L_08ADA5D8:
    ctx.gpr[31] = (0x08ADA5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 561u, 0x08AB327Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA5E0u) goto L_08ADA5E0;
    return;
L_08ADA5E0:
    ctx.gpr[31] = (0x08ADA5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 529u, 0x08AB2EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA5E8u) goto L_08ADA5E8;
    return;
L_08ADA5E8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 512u);
    ctx.gpr[7] = (0u | 320u);
    ctx.gpr[31] = (0x08ADA600u);
    ctx.gpr[8] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 712u, 0x08AB3F64u>(ctx, &aot_mem) && ctx.pc == 0x08ADA600u) goto L_08ADA600;
    return;
L_08ADA600:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17392u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[31] = (0x08ADA640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 866u, 0x08AD3774u>(ctx, &aot_mem) && ctx.pc == 0x08ADA640u) goto L_08ADA640;
    return;
L_08ADA640:
    ctx.gpr[31] = (0x08ADA648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 542u, 0x08AB2F78u>(ctx, &aot_mem) && ctx.pc == 0x08ADA648u) goto L_08ADA648;
    return;
L_08ADA648:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA664u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 407u, 0x08A7F278u>(ctx, &aot_mem) && ctx.pc == 0x08ADA664u) goto L_08ADA664;
    return;
L_08ADA664:
    ctx.gpr[31] = (0x08ADA66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 561u, 0x08AB327Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA66Cu) goto L_08ADA66C;
    return;
L_08ADA66C:
    ctx.gpr[31] = (0x08ADA674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 542u, 0x08AB2F78u>(ctx, &aot_mem) && ctx.pc == 0x08ADA674u) goto L_08ADA674;
    return;
L_08ADA674:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA690u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 407u, 0x08A7F278u>(ctx, &aot_mem) && ctx.pc == 0x08ADA690u) goto L_08ADA690;
    return;
L_08ADA690:
    ctx.gpr[31] = (0x08ADA698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 561u, 0x08AB327Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA698u) goto L_08ADA698;
    return;
L_08ADA698:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1157), static_cast<std::uint8_t>(0u));
    goto L_08ADA69C;
L_08ADA69C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA6B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25526)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA6C0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[2] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25524)));
      if (branch_taken) {
          goto L_08ADA6EC;
      }
      goto L_08ADA6D4;
    }
L_08ADA6D4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[2] != ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
        goto L_08ADA6E4;
    }
    goto L_08ADA6E4;
L_08ADA6E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADA6EC;
      }
      goto L_08ADA6EC;
    }
L_08ADA6EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA6F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADA714u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x08ADA714u) goto L_08ADA714;
    return;
L_08ADA714:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADA76C;
      }
      goto L_08ADA724;
    }
L_08ADA724:
    ctx.gpr[7] = (0u | 126u);
    goto L_08ADA728;
L_08ADA728:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ADA750;
      }
      goto L_08ADA730;
    }
L_08ADA730:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ADA760;
      }
      goto L_08ADA73C;
    }
L_08ADA73C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ADA73C;
      }
      goto L_08ADA748;
    }
L_08ADA748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA760;
      }
      goto L_08ADA750;
    }
L_08ADA750:
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08ADA760;
L_08ADA760:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA728;
      }
      goto L_08ADA76C;
    }
L_08ADA76C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA78C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-28896)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA94C;
      }
      goto L_08ADA7C0;
    }
L_08ADA7C0:
    ctx.gpr[31] = (0x08ADA7C8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28896), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B314u>(ctx, &aot_mem) && ctx.pc == 0x08ADA7C8u) goto L_08ADA7C8;
    return;
L_08ADA7C8:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[20] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADA80C;
      }
      goto L_08ADA7E4;
    }
L_08ADA7E4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA7F0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA7F0u) goto L_08ADA7F0;
    return;
L_08ADA7F0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA808;
      }
      goto L_08ADA7FC;
    }
L_08ADA7FC:
    ctx.gpr[31] = (0x08ADA804u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08ADA804u) goto L_08ADA804;
    return;
L_08ADA804:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08ADA808;
L_08ADA808:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_08ADA80C;
L_08ADA80C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADA818u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 394u, 0x089139ACu>(ctx, &aot_mem) && ctx.pc == 0x08ADA818u) goto L_08ADA818;
    return;
L_08ADA818:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA84C;
      }
      goto L_08ADA824;
    }
L_08ADA824:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA830u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA830u) goto L_08ADA830;
    return;
L_08ADA830:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA848;
      }
      goto L_08ADA83C;
    }
L_08ADA83C:
    ctx.gpr[31] = (0x08ADA844u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08ADA844u) goto L_08ADA844;
    return;
L_08ADA844:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08ADA848;
L_08ADA848:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_08ADA84C;
L_08ADA84C:
    ctx.gpr[31] = (0x08ADA854u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 401u, 0x08913A68u>(ctx, &aot_mem) && ctx.pc == 0x08ADA854u) goto L_08ADA854;
    return;
L_08ADA854:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA888;
      }
      goto L_08ADA860;
    }
L_08ADA860:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA86Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA86Cu) goto L_08ADA86C;
    return;
L_08ADA86C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA884;
      }
      goto L_08ADA878;
    }
L_08ADA878:
    ctx.gpr[31] = (0x08ADA880u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08ADA880u) goto L_08ADA880;
    return;
L_08ADA880:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08ADA884;
L_08ADA884:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_08ADA888;
L_08ADA888:
    ctx.gpr[31] = (0x08ADA890u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 436u, 0x08913CC8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA890u) goto L_08ADA890;
    return;
L_08ADA890:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA8DC;
      }
      goto L_08ADA89C;
    }
L_08ADA89C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08ADA8D4;
      }
      goto L_08ADA8A8;
    }
L_08ADA8A8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08ADA8B4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA8B4u) goto L_08ADA8B4;
    return;
L_08ADA8B4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA8CC;
      }
      goto L_08ADA8C0;
    }
L_08ADA8C0:
    ctx.gpr[31] = (0x08ADA8C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08ADA8C8u) goto L_08ADA8C8;
    return;
L_08ADA8C8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08ADA8CC;
L_08ADA8CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ADA8D4;
L_08ADA8D4:
    ctx.gpr[31] = (0x08ADA8DCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 479u, 0x08913F90u>(ctx, &aot_mem) && ctx.pc == 0x08ADA8DCu) goto L_08ADA8DC;
    return;
L_08ADA8DC:
    ctx.gpr[31] = (0x08ADA8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 720u, 0x0891B328u>(ctx, &aot_mem) && ctx.pc == 0x08ADA8E4u) goto L_08ADA8E4;
    return;
L_08ADA8E4:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-29195), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-29194), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25444)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA94C;
      }
      goto L_08ADA908;
    }
L_08ADA908:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ADA934;
      }
      goto L_08ADA914;
    }
L_08ADA914:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ADA93C;
      }
      goto L_08ADA91C;
    }
L_08ADA91C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ADA944;
      }
      goto L_08ADA924;
    }
L_08ADA924:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08ADA944;
      }
      goto L_08ADA92C;
    }
L_08ADA92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA94C;
      }
      goto L_08ADA934;
    }
L_08ADA934:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-29195), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08ADA94C;
      }
      goto L_08ADA93C;
    }
L_08ADA93C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-29194), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08ADA94C;
      }
      goto L_08ADA944;
    }
L_08ADA944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA94C;
      }
      goto L_08ADA94C;
    }
L_08ADA94C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA974:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA97C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1416), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA984:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-608));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADA9C4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADA9C4u) goto L_08ADA9C4;
    return;
L_08ADA9C4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25588));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ADA9FC;
      }
      goto L_08ADA9E4;
    }
L_08ADA9E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08ADAA34;
      }
      goto L_08ADA9EC;
    }
L_08ADA9EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08ADAA1C;
      }
      goto L_08ADA9F4;
    }
L_08ADA9F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADAA38;
      }
      goto L_08ADA9FC;
    }
L_08ADA9FC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADAA28;
      }
      goto L_08ADAA08;
    }
L_08ADAA08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAA34;
      }
      goto L_08ADAA10;
    }
L_08ADAA10:
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADAA38;
      }
      goto L_08ADAA1C;
    }
L_08ADAA1C:
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADAA38;
      }
      goto L_08ADAA28;
    }
L_08ADAA28:
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADAA38;
      }
      goto L_08ADAA34;
    }
L_08ADAA34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08ADAA38;
L_08ADAA38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[4] = (16041u << 16u);
      if (branch_taken) {
          goto L_08ADABAC;
      }
      goto L_08ADAA44;
    }
L_08ADAA44:
    ctx.gpr[4] = (ctx.gpr[4] | 37645u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[21] = (2227u << 16u);
    goto L_08ADAA70;
L_08ADAA70:
    ctx.gpr[31] = (0x08ADAA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08ADAA78u) goto L_08ADAA78;
    return;
L_08ADAA78:
    ctx.gpr[31] = (0x08ADAA80u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAA80u) goto L_08ADAA80;
    return;
L_08ADAA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADAA94u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAA94u) goto L_08ADAA94;
    return;
L_08ADAA94:
    ctx.gpr[31] = (0x08ADAA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x08ADAA9Cu) goto L_08ADAA9C;
    return;
L_08ADAA9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAAE8;
      }
      goto L_08ADAAA8;
    }
L_08ADAAA8:
    ctx.gpr[31] = (0x08ADAAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADAAB0u) goto L_08ADAAB0;
    return;
L_08ADAAB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ADAAE8;
      }
      goto L_08ADAABC;
    }
L_08ADAABC:
    ctx.gpr[31] = (0x08ADAAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADAAC4u) goto L_08ADAAC4;
    return;
L_08ADAAC4:
    ctx.gpr[31] = (0x08ADAACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 203u, 0x08A54E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAACCu) goto L_08ADAACC;
    return;
L_08ADAACC:
    ctx.gpr[31] = (0x08ADAAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 223u, 0x08A5500Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAAD4u) goto L_08ADAAD4;
    return;
L_08ADAAD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADAAE8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAAE8u) goto L_08ADAAE8;
    return;
L_08ADAAE8:
    ctx.gpr[31] = (0x08ADAAF0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAAF0u) goto L_08ADAAF0;
    return;
L_08ADAAF0:
    ctx.gpr[31] = (0x08ADAAF8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08ADAAF8u) goto L_08ADAAF8;
    return;
L_08ADAAF8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08ADAB04u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADAB04u) goto L_08ADAB04;
    return;
L_08ADAB04:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08ADAB1Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADAB1Cu) goto L_08ADAB1C;
    return;
L_08ADAB1C:
    ctx.gpr[31] = (0x08ADAB24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08ADAB24u) goto L_08ADAB24;
    return;
L_08ADAB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
        goto L_08ADAB5C;
    }
    goto L_08ADAB30;
L_08ADAB30:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08ADAB3Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAB3Cu) goto L_08ADAB3C;
    return;
L_08ADAB3C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAB54;
      }
      goto L_08ADAB48;
    }
L_08ADAB48:
    ctx.gpr[31] = (0x08ADAB50u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08ADAB50u) goto L_08ADAB50;
    return;
L_08ADAB50:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08ADAB54;
L_08ADAB54:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24700), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24700)));
    goto L_08ADAB5C;
L_08ADAB5C:
    ctx.gpr[31] = (0x08ADAB64u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADAB64u) goto L_08ADAB64;
    return;
L_08ADAB64:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ADAB70u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x08ADAB70u) goto L_08ADAB70;
    return;
L_08ADAB70:
    ctx.gpr[31] = (0x08ADAB78u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 348u, 0x08879F60u>(ctx, &aot_mem) && ctx.pc == 0x08ADAB78u) goto L_08ADAB78;
    return;
L_08ADAB78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08ADAB9Cu);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADAB9Cu) goto L_08ADAB9C;
    return;
L_08ADAB9C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ADAA70;
      }
      goto L_08ADABAC;
    }
L_08ADABAC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADABE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAC24;
      }
      goto L_08ADABF8;
    }
L_08ADABF8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1373)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAC2C;
      }
      goto L_08ADAC04;
    }
L_08ADAC04:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1373), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADAC1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADAC1Cu) goto L_08ADAC1C;
    return;
L_08ADAC1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAC2C;
      }
      goto L_08ADAC24;
    }
L_08ADAC24:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1373), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08ADAC2C;
L_08ADAC2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADAC38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_08ADAC54;
      }
      goto L_08ADAC4C;
    }
L_08ADAC4C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ADAC70;
      }
      goto L_08ADAC54;
    }
L_08ADAC54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08ADAC64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 146u, 0x08864A80u>(ctx, &aot_mem) && ctx.pc == 0x08ADAC64u) goto L_08ADAC64;
    return;
L_08ADAC64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08ADAC70u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AD99F0;
L_08ADAC70:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADAC7C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADACA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADACE8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADAD0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[19];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[1] - ctx.fpr[3];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[4] - ctx.fpr[5];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[6] - ctx.fpr[7];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADADB8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = ctx.fpr[18] + ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[0] + ctx.fpr[19];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[14];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = ctx.fpr[18] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADAE64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAEC0;
      }
      goto L_08ADAEBC;
    }
L_08ADAEBC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    goto L_08ADAEC0;
L_08ADAEC0:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(306), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08ADAED0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ADA78C;
L_08ADAED0:
    ctx.gpr[31] = (0x08ADAED8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 647u, 0x08ADE738u>(ctx, &aot_mem) && ctx.pc == 0x08ADAED8u) goto L_08ADAED8;
    return;
L_08ADAED8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 194u, 0x08ADCA40u>(ctx, &aot_mem); return;
      }
      goto L_08ADAEE4;
    }
L_08ADAEE4:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25200));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x08ADAEF8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AD9808;
L_08ADAEF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(321)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 7u);
      if (branch_taken) {
          goto L_08ADAF1C;
      }
      goto L_08ADAF04;
    }
L_08ADAF04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADAF10u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 372u, 0x088B619Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAF10u) goto L_08ADAF10;
    return;
L_08ADAF10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADAF1Cu);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 373u, 0x088B61A4u>(ctx, &aot_mem) && ctx.pc == 0x08ADAF1Cu) goto L_08ADAF1C;
    return;
L_08ADAF1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 113u, 0x08ADC6E0u>(ctx, &aot_mem); return;
      }
      goto L_08ADAF28;
    }
L_08ADAF28:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 113u, 0x08ADC6E0u>(ctx, &aot_mem); return;
      }
      goto L_08ADAF34;
    }
L_08ADAF34:
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6872)));
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[30] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[22] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08ADAF78;
      }
      goto L_08ADAF60;
    }
L_08ADAF60:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6872), ctx.gpr[5]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6868));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6868), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08ADAF78;
L_08ADAF78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1374)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB024;
      }
      goto L_08ADAF84;
    }
L_08ADAF84:
    ctx.gpr[31] = (0x08ADAF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADAF8Cu) goto L_08ADAF8C;
    return;
L_08ADAF8C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2232u << 16u);
      if (branch_taken) {
          goto L_08ADAFA8;
      }
      goto L_08ADAF9C;
    }
L_08ADAF9C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27580)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1376), ctx.gpr[4]);
    goto L_08ADAFA8;
L_08ADAFA8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1374), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08ADB018u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 775u, 0x08967A30u>(ctx, &aot_mem) && ctx.pc == 0x08ADB018u) goto L_08ADB018;
    return;
L_08ADB018:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6868));
    ctx.gpr[31] = (0x08ADB024u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 785u, 0x08967BE0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB024u) goto L_08ADB024;
    return;
L_08ADB024:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08ADB030u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB030u) goto L_08ADB030;
    return;
L_08ADB030:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB06C;
      }
      goto L_08ADB038;
    }
L_08ADB038:
    ctx.gpr[31] = (0x08ADB040u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 205u, 0x089D5974u>(ctx, &aot_mem) && ctx.pc == 0x08ADB040u) goto L_08ADB040;
    return;
L_08ADB040:
    ctx.gpr[31] = (0x08ADB048u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 205u, 0x089D5974u>(ctx, &aot_mem) && ctx.pc == 0x08ADB048u) goto L_08ADB048;
    return;
L_08ADB048:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08ADB060u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08ADB060u) goto L_08ADB060;
    return;
L_08ADB060:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADB06Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08ADB06Cu) goto L_08ADB06C;
    return;
L_08ADB06C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADB354;
      }
      goto L_08ADB080;
    }
L_08ADB080:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27580)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1200));
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB354;
      }
      goto L_08ADB098;
    }
L_08ADB098:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1200));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[6] = (17352u << 16u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (2232u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08ADB0CC;
      }
      goto L_08ADB0C0;
    }
L_08ADB0C0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_08ADB0CC;
L_08ADB0CC:
    ctx.gpr[4] = (17558u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    ctx.gpr[31] = (0x08ADB0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 586u, 0x08AD6CACu>(ctx, &aot_mem) && ctx.pc == 0x08ADB0E0u) goto L_08ADB0E0;
    return;
L_08ADB0E0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[0];
      if (branch_taken) {
          goto L_08ADB104;
      }
      goto L_08ADB0FC;
    }
L_08ADB0FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADB118;
      }
      goto L_08ADB104;
    }
L_08ADB104:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
        goto L_08ADB11C;
    }
    goto L_08ADB114;
L_08ADB114:
    ctx.gpr[23] = (0u | 1u);
    goto L_08ADB118;
L_08ADB118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    goto L_08ADB11C;
L_08ADB11C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08ADB178u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 775u, 0x08967A30u>(ctx, &aot_mem) && ctx.pc == 0x08ADB178u) goto L_08ADB178;
    return;
L_08ADB178:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[31] = (0x08ADB184u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 785u, 0x08967BE0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB184u) goto L_08ADB184;
    return;
L_08ADB184:
    ctx.gpr[31] = (0x08ADB18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 205u, 0x089D5974u>(ctx, &aot_mem) && ctx.pc == 0x08ADB18Cu) goto L_08ADB18C;
    return;
L_08ADB18C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6868)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6868));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[18];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[6]);
    ctx.gpr[31] = (0x08ADB280u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08ADB280u) goto L_08ADB280;
    return;
L_08ADB280:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08ADB28Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08ADB28Cu) goto L_08ADB28C;
    return;
L_08ADB28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = ctx.fpr[15] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    goto L_08ADB354;
L_08ADB354:
    ctx.gpr[31] = (0x08ADB35Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADB35Cu) goto L_08ADB35C;
    return;
L_08ADB35C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB37C;
      }
      goto L_08ADB36C;
    }
L_08ADB36C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADB380;
      }
      goto L_08ADB378;
    }
L_08ADB378:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADB37C;
L_08ADB37C:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADB380;
L_08ADB380:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB398;
      }
      goto L_08ADB388;
    }
L_08ADB388:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25491)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25491), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08ADB398;
L_08ADB398:
    ctx.gpr[31] = (0x08ADB3A0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADB3A0u) goto L_08ADB3A0;
    return;
L_08ADB3A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB3C0;
      }
      goto L_08ADB3B0;
    }
L_08ADB3B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADB3C4;
      }
      goto L_08ADB3BC;
    }
L_08ADB3BC:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADB3C0;
L_08ADB3C0:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADB3C4;
L_08ADB3C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB4C4;
      }
      goto L_08ADB3CC;
    }
L_08ADB3CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ADB3E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADB3E0u) goto L_08ADB3E0;
    return;
L_08ADB3E0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ADB404;
      }
      goto L_08ADB3F0;
    }
L_08ADB3F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-25500)));
    ctx.gpr[31] = (0x08ADB3FCu);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25504), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 27u, 0x089681E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB3FCu) goto L_08ADB3FC;
    return;
L_08ADB3FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25500), 0u);
      if (branch_taken) {
          goto L_08ADB4C4;
      }
      goto L_08ADB404;
    }
L_08ADB404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[31] = (0x08ADB474u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 775u, 0x08967A30u>(ctx, &aot_mem) && ctx.pc == 0x08ADB474u) goto L_08ADB474;
    return;
L_08ADB474:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.gpr[31] = (0x08ADB480u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 785u, 0x08967BE0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB480u) goto L_08ADB480;
    return;
L_08ADB480:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6896));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08ADB4B4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 826u, 0x08967F38u>(ctx, &aot_mem) && ctx.pc == 0x08ADB4B4u) goto L_08ADB4B4;
    return;
L_08ADB4B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25500), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADB4C4;
      }
      goto L_08ADB4BC;
    }
L_08ADB4BC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25504), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADB4C4;
L_08ADB4C4:
    ctx.gpr[31] = (0x08ADB4CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADB4CCu) goto L_08ADB4CC;
    return;
L_08ADB4CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB4F4;
      }
      goto L_08ADB4D8;
    }
L_08ADB4D8:
    ctx.gpr[31] = (0x08ADB4E0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADB4E0u) goto L_08ADB4E0;
    return;
L_08ADB4E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB4F4;
      }
      goto L_08ADB4EC;
    }
L_08ADB4EC:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB4FC;
      }
      goto L_08ADB4F4;
    }
L_08ADB4F4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB8AC;
      }
      goto L_08ADB4FC;
    }
L_08ADB4FC:
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08ADB514;
      }
      goto L_08ADB510;
    }
L_08ADB510:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08ADB514;
L_08ADB514:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB8AC;
      }
      goto L_08ADB530;
    }
L_08ADB530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[31] = (0x08ADB5A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 775u, 0x08967A30u>(ctx, &aot_mem) && ctx.pc == 0x08ADB5A0u) goto L_08ADB5A0;
    return;
L_08ADB5A0:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (17154u << 16u);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[17] - ctx.fpr[12];
    ctx.gpr[4] = (17124u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[28] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[20] = (0u | 1u);
    ctx.fpr[15] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[18]) || std::isnan(ctx.fpr[20])) && ctx.fpr[18] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08ADB61C;
      }
      goto L_08ADB5F8;
    }
L_08ADB5F8:
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB610;
      }
      goto L_08ADB608;
    }
L_08ADB608:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADB614;
      }
      goto L_08ADB610;
    }
L_08ADB610:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08ADB614;
L_08ADB614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08ADB648;
      }
      goto L_08ADB61C;
    }
L_08ADB61C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1144)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB648;
      }
      goto L_08ADB630;
    }
L_08ADB630:
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[24];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADB648;
L_08ADB648:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[19]) || std::isnan(ctx.fpr[20])) && ctx.fpr[19] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB67C;
      }
      goto L_08ADB658;
    }
L_08ADB658:
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB670;
      }
      goto L_08ADB668;
    }
L_08ADB668:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_08ADB674;
      }
      goto L_08ADB670;
    }
L_08ADB670:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08ADB674;
L_08ADB674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08ADB6A8;
      }
      goto L_08ADB67C;
    }
L_08ADB67C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1140)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB6A8;
      }
      goto L_08ADB690;
    }
L_08ADB690:
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[24];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADB6A8;
L_08ADB6A8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.gpr[31] = (0x08ADB6B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08ADB6B4u) goto L_08ADB6B4;
    return;
L_08ADB6B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08ADB718;
      }
      goto L_08ADB708;
    }
L_08ADB708:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB738;
      }
      goto L_08ADB718;
    }
L_08ADB718:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB744;
      }
      goto L_08ADB728;
    }
L_08ADB728:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB744;
      }
      goto L_08ADB738;
    }
L_08ADB738:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADB754;
      }
      goto L_08ADB744;
    }
L_08ADB744:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB754;
      }
      goto L_08ADB74C;
    }
L_08ADB74C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADB754;
L_08ADB754:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB774;
      }
      goto L_08ADB764;
    }
L_08ADB764:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB794;
      }
      goto L_08ADB774;
    }
L_08ADB774:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB7A0;
      }
      goto L_08ADB784;
    }
L_08ADB784:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB7A0;
      }
      goto L_08ADB794;
    }
L_08ADB794:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADB7B0;
      }
      goto L_08ADB7A0;
    }
L_08ADB7A0:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
        goto L_08ADB7B4;
    }
    goto L_08ADB7A8;
L_08ADB7A8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08ADB7B0;
L_08ADB7B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    goto L_08ADB7B4;
L_08ADB7B4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB7EC;
      }
      goto L_08ADB7E4;
    }
L_08ADB7E4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADB7EC;
      }
      goto L_08ADB7EC;
    }
L_08ADB7EC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB82C;
      }
      goto L_08ADB824;
    }
L_08ADB824:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADB82C;
      }
      goto L_08ADB82C;
    }
L_08ADB82C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB868;
      }
      goto L_08ADB860;
    }
L_08ADB860:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08ADB868;
      }
      goto L_08ADB868;
    }
L_08ADB868:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB8A8;
      }
      goto L_08ADB8A0;
    }
L_08ADB8A0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADB8A8;
      }
      goto L_08ADB8A8;
    }
L_08ADB8A8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08ADB8AC;
L_08ADB8AC:
    ctx.gpr[31] = (0x08ADB8B4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADB8B4u) goto L_08ADB8B4;
    return;
L_08ADB8B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB8DC;
      }
      goto L_08ADB8C0;
    }
L_08ADB8C0:
    ctx.gpr[31] = (0x08ADB8C8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADB8C8u) goto L_08ADB8C8;
    return;
L_08ADB8C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB8DC;
      }
      goto L_08ADB8D4;
    }
L_08ADB8D4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB8E4;
      }
      goto L_08ADB8DC;
    }
L_08ADB8DC:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBD98;
      }
      goto L_08ADB8E4;
    }
L_08ADB8E4:
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (17154u << 16u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADB900;
      }
      goto L_08ADB8FC;
    }
L_08ADB8FC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08ADB900;
L_08ADB900:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBD98;
      }
      goto L_08ADB910;
    }
L_08ADB910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(252));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[31] = (0x08ADB980u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 775u, 0x08967A30u>(ctx, &aot_mem) && ctx.pc == 0x08ADB980u) goto L_08ADB980;
    return;
L_08ADB980:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (17124u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[24] - ctx.fpr[14];
    ctx.fpr[17] = ctx.fpr[14] + ctx.fpr[24];
    ctx.fpr[18] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
      if (branch_taken) {
          goto L_08ADBA08;
      }
      goto L_08ADB9DC;
    }
L_08ADB9DC:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB9F8;
      }
      goto L_08ADB9EC;
    }
L_08ADB9EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADBA00;
      }
      goto L_08ADB9F8;
    }
L_08ADB9F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADBA00;
L_08ADBA00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08ADBAB0;
      }
      goto L_08ADBA08;
    }
L_08ADBA08:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[17]) || std::isnan(ctx.fpr[12])) && ctx.fpr[17] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
      if (branch_taken) {
          goto L_08ADBA40;
      }
      goto L_08ADBA20;
    }
L_08ADBA20:
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[13] - ctx.fpr[18];
    ctx.fpr[18] = ctx.fpr[18] / ctx.fpr[13];
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[12];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_08ADBA40;
L_08ADBA40:
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBA60;
      }
      goto L_08ADBA50;
    }
L_08ADBA50:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBAB0;
      }
      goto L_08ADBA60;
    }
L_08ADBA60:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1144));
      if (branch_taken) {
          goto L_08ADBA7C;
      }
      goto L_08ADBA70;
    }
L_08ADBA70:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADBA80;
      }
      goto L_08ADBA7C;
    }
L_08ADBA7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ADBA80;
L_08ADBA80:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1144)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1144));
      if (branch_taken) {
          goto L_08ADBAA4;
      }
      goto L_08ADBA98;
    }
L_08ADBA98:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADBAA8;
      }
      goto L_08ADBAA4;
    }
L_08ADBAA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ADBAA8;
L_08ADBAA8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    goto L_08ADBAB0;
L_08ADBAB0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[20])) && ctx.fpr[14] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBAEC;
      }
      goto L_08ADBAC0;
    }
L_08ADBAC0:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBADC;
      }
      goto L_08ADBAD0;
    }
L_08ADBAD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADBAE4;
      }
      goto L_08ADBADC;
    }
L_08ADBADC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADBAE4;
L_08ADBAE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08ADBB94;
      }
      goto L_08ADBAEC;
    }
L_08ADBAEC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1140)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[24])) && ctx.fpr[15] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
      if (branch_taken) {
          goto L_08ADBB24;
      }
      goto L_08ADBB04;
    }
L_08ADBB04:
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[24];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08ADBB24;
L_08ADBB24:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBB44;
      }
      goto L_08ADBB34;
    }
L_08ADBB34:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBB94;
      }
      goto L_08ADBB44;
    }
L_08ADBB44:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1140));
      if (branch_taken) {
          goto L_08ADBB60;
      }
      goto L_08ADBB54;
    }
L_08ADBB54:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADBB64;
      }
      goto L_08ADBB60;
    }
L_08ADBB60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ADBB64;
L_08ADBB64:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1140)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1140));
      if (branch_taken) {
          goto L_08ADBB88;
      }
      goto L_08ADBB7C;
    }
L_08ADBB7C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(284));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADBB8C;
      }
      goto L_08ADBB88;
    }
L_08ADBB88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ADBB8C;
L_08ADBB8C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    goto L_08ADBB94;
L_08ADBB94:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[31] = (0x08ADBBA0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08ADBBA0u) goto L_08ADBBA0;
    return;
L_08ADBBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1148)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08ADBC04;
      }
      goto L_08ADBBF4;
    }
L_08ADBBF4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBC24;
      }
      goto L_08ADBC04;
    }
L_08ADBC04:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBC30;
      }
      goto L_08ADBC14;
    }
L_08ADBC14:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBC30;
      }
      goto L_08ADBC24;
    }
L_08ADBC24:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADBC40;
      }
      goto L_08ADBC30;
    }
L_08ADBC30:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBC40;
      }
      goto L_08ADBC38;
    }
L_08ADBC38:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADBC40;
L_08ADBC40:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBC60;
      }
      goto L_08ADBC50;
    }
L_08ADBC50:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBC80;
      }
      goto L_08ADBC60;
    }
L_08ADBC60:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBC8C;
      }
      goto L_08ADBC70;
    }
L_08ADBC70:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBC8C;
      }
      goto L_08ADBC80;
    }
L_08ADBC80:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADBC9C;
      }
      goto L_08ADBC8C;
    }
L_08ADBC8C:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
        goto L_08ADBCA0;
    }
    goto L_08ADBC94;
L_08ADBC94:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08ADBC9C;
L_08ADBC9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    goto L_08ADBCA0;
L_08ADBCA0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBCD8;
      }
      goto L_08ADBCD0;
    }
L_08ADBCD0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADBCD8;
      }
      goto L_08ADBCD8;
    }
L_08ADBCD8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBD18;
      }
      goto L_08ADBD10;
    }
L_08ADBD10:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADBD18;
      }
      goto L_08ADBD18;
    }
L_08ADBD18:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBD54;
      }
      goto L_08ADBD4C;
    }
L_08ADBD4C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08ADBD54;
      }
      goto L_08ADBD54;
    }
L_08ADBD54:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBD94;
      }
      goto L_08ADBD8C;
    }
L_08ADBD8C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADBD94;
      }
      goto L_08ADBD94;
    }
L_08ADBD94:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08ADBD98;
L_08ADBD98:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08ADBDA4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADBDA4u) goto L_08ADBDA4;
    return;
L_08ADBDA4:
    ctx.gpr[31] = (0x08ADBDACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A96CE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBDACu) goto L_08ADBDAC;
    return;
L_08ADBDAC:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08ADBDD0;
    }
    goto L_08ADBDB4;
L_08ADBDB4:
    ctx.gpr[31] = (0x08ADBDBCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADBDBCu) goto L_08ADBDBC;
    return;
L_08ADBDBC:
    ctx.gpr[31] = (0x08ADBDC4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 877u, 0x08A97600u>(ctx, &aot_mem) && ctx.pc == 0x08ADBDC4u) goto L_08ADBDC4;
    return;
L_08ADBDC4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08ADBDE4;
    }
    goto L_08ADBDCC;
L_08ADBDCC:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08ADBDD0;
L_08ADBDD0:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBDF4;
      }
      goto L_08ADBDE0;
    }
L_08ADBDE0:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08ADBDE4;
L_08ADBDE4:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBF94;
      }
      goto L_08ADBDF4;
    }
L_08ADBDF4:
    ctx.gpr[4] = (17154u << 16u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADBE10;
      }
      goto L_08ADBE08;
    }
L_08ADBE08:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08ADBE78;
      }
      goto L_08ADBE10;
    }
L_08ADBE10:
    ctx.gpr[31] = (0x08ADBE18u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADBE18u) goto L_08ADBE18;
    return;
L_08ADBE18:
    ctx.gpr[31] = (0x08ADBE20u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A96CE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBE20u) goto L_08ADBE20;
    return;
L_08ADBE20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBE30;
      }
      goto L_08ADBE28;
    }
L_08ADBE28:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08ADBE30;
L_08ADBE30:
    ctx.gpr[31] = (0x08ADBE38u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADBE38u) goto L_08ADBE38;
    return;
L_08ADBE38:
    ctx.gpr[31] = (0x08ADBE40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 877u, 0x08A97600u>(ctx, &aot_mem) && ctx.pc == 0x08ADBE40u) goto L_08ADBE40;
    return;
L_08ADBE40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADBE78;
      }
      goto L_08ADBE48;
    }
L_08ADBE48:
    ctx.gpr[31] = (0x08ADBE50u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADBE50u) goto L_08ADBE50;
    return;
L_08ADBE50:
    ctx.gpr[31] = (0x08ADBE58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 877u, 0x08A97600u>(ctx, &aot_mem) && ctx.pc == 0x08ADBE58u) goto L_08ADBE58;
    return;
L_08ADBE58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08ADBE78;
L_08ADBE78:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1136)));
    ctx.gpr[4] = (17124u << 16u);
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
      if (branch_taken) {
          goto L_08ADBF0C;
      }
      goto L_08ADBEA0;
    }
L_08ADBEA0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1144)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08ADBEC0;
    }
    goto L_08ADBEB4;
L_08ADBEB4:
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[24];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADBF94;
      }
      goto L_08ADBEC0;
    }
L_08ADBEC0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBF04;
      }
      goto L_08ADBEFC;
    }
L_08ADBEFC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADBF04;
      }
      goto L_08ADBF04;
    }
L_08ADBF04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08ADBF94;
      }
      goto L_08ADBF0C;
    }
L_08ADBF0C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[24];
      if (branch_taken) {
          goto L_08ADBF48;
      }
      goto L_08ADBF20;
    }
L_08ADBF20:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08ADBF4C;
    }
    goto L_08ADBF30;
L_08ADBF30:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08ADBF4C;
    }
    goto L_08ADBF40;
L_08ADBF40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08ADBF94;
      }
      goto L_08ADBF48;
    }
L_08ADBF48:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADBF4C;
L_08ADBF4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27344)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBF90;
      }
      goto L_08ADBF88;
    }
L_08ADBF88:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08ADBF90;
      }
      goto L_08ADBF90;
    }
L_08ADBF90:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADBF94;
L_08ADBF94:
    ctx.gpr[31] = (0x08ADBF9Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF9Cu) goto L_08ADBF9C;
    return;
L_08ADBF9C:
    ctx.gpr[31] = (0x08ADBFA4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 660u, 0x08A96D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBFA4u) goto L_08ADBFA4;
    return;
L_08ADBFA4:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08ADBFC8;
    }
    goto L_08ADBFAC;
L_08ADBFAC:
    ctx.gpr[31] = (0x08ADBFB4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08ADBFB4u) goto L_08ADBFB4;
    return;
L_08ADBFB4:
    ctx.gpr[31] = (0x08ADBFBCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 877u, 0x08A97600u>(ctx, &aot_mem) && ctx.pc == 0x08ADBFBCu) goto L_08ADBFBC;
    return;
L_08ADBFBC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08ADBFDC;
    }
    goto L_08ADBFC4;
L_08ADBFC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08ADBFC8;
L_08ADBFC8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBFEC;
      }
      goto L_08ADBFD8;
    }
L_08ADBFD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08ADBFDC;
L_08ADBFDC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 26u, 0x08ADC17Cu>(ctx, &aot_mem); return;
      }
      goto L_08ADBFEC;
    }
L_08ADBFEC:
    ctx.gpr[4] = (17154u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 2u, 0x08ADC008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 1u, 0x08ADC000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0181(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0181_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_181(Runtime &runtime) {
    runtime.register_generated_unit(181u, 0x08AD8000u, 16384u, &recomp_unit_0181, &recomp_unit_0181_entry);
    runtime.register_function(0x08AD8000u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8010u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8014u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8034u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8074u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8108u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8110u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8114u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD811Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8128u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8134u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8158u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8164u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8170u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8178u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD817Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8180u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD818Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD821Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8228u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8234u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD823Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8240u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8244u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8250u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8264u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8268u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8288u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8330u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD833Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8348u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8350u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8354u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD835Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8368u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8374u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD840Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD844Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8524u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8530u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD853Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8544u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8548u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD854Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8558u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD856Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8590u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8600u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8604u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8610u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD861Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8630u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8634u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8638u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8640u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8648u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8650u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD865Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8664u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8670u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8684u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8688u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD868Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8694u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD869Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8704u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD870Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8714u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8720u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD872Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8740u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8748u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8754u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8768u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD876Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8770u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8778u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8780u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8788u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8790u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8798u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8800u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8808u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD881Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8834u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD883Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD884Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8858u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8864u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8870u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8880u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD888Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8894u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8904u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8914u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8920u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8930u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD893Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD894Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8958u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8968u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8974u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8984u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD898Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D84u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8ED0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9010u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9034u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9050u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9064u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD906Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9074u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD907Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9090u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9098u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9100u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD910Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9180u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD918Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9204u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD921Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9224u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9248u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9254u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9260u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9268u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD926Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9270u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD927Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9290u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD929Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD930Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9330u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9338u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD934Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9394u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD939Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD940Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD941Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD942Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9434u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9440u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9494u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9508u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD951Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9524u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9530u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9540u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD954Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9560u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9568u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9570u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9578u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9580u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9588u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9590u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9598u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9604u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9608u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9614u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD962Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9638u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9640u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9648u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9650u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9658u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9660u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9668u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9670u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9678u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9680u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9688u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9690u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9698u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9714u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9720u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9728u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9730u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9738u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9740u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9748u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9750u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9758u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9760u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9768u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9770u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9778u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9780u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9788u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9790u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9798u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9800u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9808u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9834u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9848u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9868u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9874u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9900u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD990Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD991Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9928u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9934u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD994Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD995Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9964u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9970u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD997Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD998Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9994u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD999Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9ACCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9ADCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DCCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA010u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA018u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA028u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA030u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA034u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA03Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA044u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA054u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA05Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA060u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA06Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA074u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA07Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA08Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA098u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA114u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA11Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA130u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA148u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA150u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA164u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA180u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA188u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA198u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA208u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA218u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA228u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA240u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA298u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA300u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA314u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA31Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA32Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA340u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA358u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA360u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA37Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA384u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA394u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA39Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA400u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA418u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA420u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA43Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA444u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA460u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA468u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA470u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA478u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA488u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA49Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA500u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA508u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA524u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA52Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA534u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA544u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA554u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA570u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA578u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA580u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA588u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA600u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA640u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA648u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA664u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA66Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA674u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA690u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA698u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA69Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA714u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA724u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA728u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA730u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA73Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA748u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA750u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA760u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA76Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA78Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA804u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA808u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA80Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA818u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA824u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA830u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA83Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA844u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA848u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA84Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA854u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA860u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA86Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA878u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA880u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA884u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA888u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA890u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA89Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA908u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA914u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA91Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA924u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA92Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA934u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA93Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA944u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA94Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA974u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA97Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA984u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAABCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAACCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADACA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADACE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADADB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAE64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAEBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAEC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAED0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAED8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAEE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAEF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF84u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB018u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB024u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB030u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB038u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB040u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB048u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB060u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB06Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB080u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB098u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB104u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB114u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB118u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB11Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB178u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB184u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB18Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB280u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB28Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB354u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB35Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB36Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB378u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB37Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB380u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB388u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB398u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB404u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB474u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB480u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB510u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB514u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB530u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB608u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB610u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB614u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB61Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB630u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB648u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB658u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB668u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB670u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB674u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB67Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB690u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB708u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB718u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB728u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB738u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB744u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB74Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB754u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB764u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB774u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB784u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB794u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB824u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB82Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB860u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB868u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB900u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB910u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB980u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBADCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC14u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDCCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFECu, &recomp_unit_0181, "recomp_unit_0181");
}
} // namespace psprecomp
