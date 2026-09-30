#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0016[4092] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0,
    0, 0, 0, 8, 0, 0, 0, 9, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0,
    0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 27, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 38, 0, 0, 0, 0, 39, 40, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0,
    0, 0, 46, 0, 0, 47, 48, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0,
    0, 0, 55, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 63, 0, 64, 0, 65, 0, 66, 0,
    0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0,
    0, 78, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0,
    0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100,
    0, 101, 0, 102, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151,
    0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0,
    162, 0, 0, 163, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 171, 172, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 191, 192, 0, 193, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 195, 0, 196, 0, 0, 197, 198, 0, 199, 0, 0, 0, 0, 200, 201, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 206, 0,
    207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 210, 211, 0, 212, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0,
    0, 0, 0, 217, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0,
    0, 224, 0, 225, 0, 0, 0, 0, 226, 227, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 232, 0, 233, 0, 0, 0,
    0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 237, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241, 242, 0, 243, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 246, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0,
    0, 0, 257, 0, 258, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 272,
    0, 273, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 279, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 286, 0, 0, 287, 0, 0, 288, 0, 289, 290, 0,
    291, 0, 292, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 300, 0, 0,
    301, 0, 0, 302, 0, 0, 303, 0, 304, 305, 0, 306, 0, 307, 0, 0, 308, 0, 0, 309, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0,
    314, 315, 0, 316, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0,
    0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 325, 0, 0, 0, 0, 326, 327, 0, 0, 0, 0, 328,
    329, 0, 0, 0, 0, 330, 331, 0, 0, 0, 0, 332, 333, 0, 0, 0, 0, 334, 335, 0, 0, 0, 0, 336, 337, 0, 0, 0, 0, 338, 339, 0,
    0, 0, 0, 340, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0,
    0, 352, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 357, 358, 0, 0, 359, 0, 0, 0, 360, 0, 361, 0, 0, 362, 0, 0,
    0, 363, 0, 0, 364, 0, 0, 365, 0, 366, 367, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 371, 0, 0, 0, 372, 0, 0, 373, 0, 0,
    374, 0, 375, 376, 0, 0, 377, 0, 0, 0, 378, 0, 379, 0, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 384, 385, 0, 0, 386,
    0, 0, 0, 387, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 392, 393, 0, 0, 394, 0, 0, 0, 395, 0, 396, 0, 0, 397, 0,
    0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 401, 402, 0, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 406, 0, 0, 0, 407, 0, 0, 408, 0,
    0, 409, 0, 410, 411, 0, 0, 412, 0, 0, 0, 413, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 419, 420, 0, 0,
    421, 0, 0, 0, 422, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 428, 429, 0, 0, 430, 0, 0, 0, 431, 0, 432,
    0, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 437, 438, 0, 0, 439, 0, 0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 0, 443,
    0, 0, 444, 0, 0, 445, 0, 446, 447, 0, 0, 448, 0, 0, 0, 449, 0, 450, 0, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0,
    455, 456, 0, 0, 457, 0, 0, 0, 458, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 464, 465, 0, 0, 466, 0, 0,
    0, 467, 0, 468, 0, 0, 469, 0, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 473, 474, 0, 0, 475, 0, 0, 0, 476, 0, 477, 0, 0, 478,
    0, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0, 482, 483, 0, 0, 484, 0, 0, 0, 485, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489,
    0, 0, 490, 0, 491, 492, 0, 0, 493, 0, 0, 0, 494, 0, 495, 0, 0, 496, 0, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0, 500, 501, 0,
    0, 502, 0, 0, 0, 503, 0, 504, 0, 0, 505, 0, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 509, 510, 0, 0, 511, 0, 0, 0, 512, 0,
    513, 0, 0, 514, 0, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 518, 519, 0, 0, 520, 0, 0, 0, 521, 0, 522, 0, 0, 523, 0, 0, 0,
    524, 0, 0, 525, 0, 0, 526, 0, 527, 528, 0, 0, 529, 0, 0, 0, 530, 0, 531, 0, 0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535,
    0, 536, 537, 0, 0, 538, 0, 0, 0, 539, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 545, 546, 0, 0, 547, 0,
    0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 0, 552, 0, 0, 553, 0, 554, 555, 0, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0,
    559, 0, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 563, 564, 0, 0, 565, 0, 0, 0, 566, 0, 567, 0, 0, 568, 0, 0, 0, 569, 0, 0,
    570, 0, 0, 571, 0, 572, 573, 0, 0, 574, 0, 0, 0, 575, 0, 576, 0, 0, 577, 0, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 581, 582,
    0, 0, 583, 0, 0, 0, 584, 0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 590, 591, 0, 0, 592, 0, 0, 0, 593,
    0, 594, 0, 0, 595, 0, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 599, 600, 0, 0, 601, 0, 0, 0, 602, 0, 603, 0, 0, 604, 0, 0,
    0, 605, 0, 0, 606, 0, 0, 607, 0, 608, 609, 0, 0, 610, 0, 0, 0, 611, 0, 612, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 615, 0,
    0, 616, 0, 0, 617, 0, 618, 619, 0, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 626, 627, 0, 0,
    628, 0, 0, 0, 629, 0, 630, 0, 0, 631, 0, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 635, 636, 0, 0, 637, 0, 0, 0, 638, 0, 639,
    0, 0, 640, 0, 0, 0, 641, 0, 0, 642, 0, 0, 643, 0, 644, 645, 0, 0, 646, 0, 0, 0, 647, 0, 648, 0, 0, 649, 0, 0, 0, 650,
    0, 0, 651, 0, 0, 652, 0, 653, 654, 0, 0, 655, 0, 0, 0, 656, 0, 657, 0, 0, 658, 0, 0, 0, 659, 0, 0, 660, 0, 0, 661, 0,
    662, 663, 0, 0, 664, 0, 0, 0, 665, 0, 666, 0, 0, 667, 0, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 671, 672, 0, 0, 673, 0, 0,
    0, 674, 0, 675, 0, 0, 676, 0, 0, 0, 677, 0, 0, 678, 0, 0, 679, 0, 680, 681, 0, 0, 682, 0, 0, 0, 683, 0, 684, 0, 0, 685,
    0, 0, 0, 686, 0, 0, 687, 0, 0, 688, 0, 689, 690, 0, 0, 691, 0, 0, 0, 692, 0, 693, 0, 0, 694, 0, 0, 0, 695, 0, 0, 696,
    0, 0, 697, 0, 698, 699, 0, 0, 700, 0, 0, 0, 701, 0, 702, 0, 0, 703, 0, 0, 0, 704, 0, 0, 705, 0, 0, 706, 0, 707, 708, 0,
    0, 709, 0, 0, 0, 710, 0, 711, 0, 0, 712, 0, 0, 0, 713, 0, 0, 714, 0, 0, 715, 0, 716, 717, 0, 0, 718, 0, 0, 0, 719, 0,
    720, 0, 0, 721, 0, 0, 0, 722, 0, 0, 723, 0, 0, 724, 0, 725, 726, 0, 0, 727, 0, 0, 0, 728, 0, 729, 0, 0, 730, 0, 0, 0,
    731, 0, 0, 732, 0, 0, 733, 0, 734, 735, 0, 0, 736, 0, 0, 0, 737, 0, 738, 0, 0, 739, 0, 0, 0, 740, 0, 0, 741, 0, 0, 742,
    0, 743, 744, 0, 0, 745, 0, 0, 0, 746, 0, 747, 0, 0, 748, 0, 0, 0, 749, 0, 0, 750, 0, 0, 751, 0, 752, 753, 0, 0, 754, 0,
    0, 0, 755, 0, 756, 0, 0, 757, 0, 0, 0, 758, 0, 0, 759, 0, 0, 760, 0, 761, 762, 0, 0, 763, 0, 0, 0, 764, 0, 765, 0, 0,
    0, 766, 0, 0, 0, 767, 0, 0, 768, 0, 0, 769, 0, 770, 771, 0, 0, 772, 0, 0, 0, 773, 0, 774, 0, 0, 0, 775, 0, 0, 0, 776,
    0, 0, 777, 0, 0, 778, 0, 779, 780, 0, 0, 781, 0, 0, 0, 782, 0, 783, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 786, 0, 0, 787,
    0, 788, 789, 0, 0, 790, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0, 793, 0, 0, 0, 794, 0, 0, 795, 0, 0, 796, 0, 797, 798, 0, 0,
    799, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0, 804, 0, 0, 805, 0, 806, 807, 0, 0, 808, 0, 0, 0, 809,
    0, 810, 0, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 813, 0, 0, 814, 0, 815, 816, 0, 0, 817, 0, 0, 0, 818, 0, 819, 0, 0, 0,
    0, 820, 0, 0, 0, 821, 0, 0, 822, 0, 0, 823, 0, 824, 825, 0, 0, 826, 0, 0, 0, 827, 0, 828, 0, 0, 0, 0, 829, 0, 0, 0,
    830, 0, 0, 831, 0, 0, 832, 0, 833, 834, 0, 0, 835, 0, 0, 0, 836, 0, 837, 0, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 840, 0,
    0, 841, 0, 842, 843, 0, 0, 844, 0, 0, 0, 845, 0, 846, 0, 0, 0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 850, 0, 0,
    851, 0, 852, 853, 0, 0, 854, 0, 0, 0, 855, 0, 856, 0, 0, 0, 857, 0, 0, 858, 0, 0, 859, 0, 860, 861, 0, 0, 862, 0, 0, 0,
    863, 0, 864, 0, 0, 0, 0, 865, 0, 0, 0, 866, 0, 0, 867, 0, 0, 868, 0, 869, 870, 0, 0, 871, 0, 0, 0, 872, 0, 873, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 874, 0, 0, 0, 875, 0, 0, 876, 0, 0, 877, 0, 878, 879, 0, 0, 880, 0, 0, 0,
    881, 0, 882, 0, 0, 0, 883, 0, 0, 884, 0, 0, 885, 0, 886, 887, 0, 0, 888, 0, 0, 0, 889, 0, 0, 0, 0, 890, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 891, 0, 892, 0, 0, 0, 893, 894, 0, 0, 0, 895, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 896, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0, 898, 0, 0, 0, 0, 0, 899, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0,
    901, 0, 0, 0, 0, 0, 902, 0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 905, 0, 0, 0, 0, 0, 906, 0,
    0, 0, 0, 0, 907, 0, 0, 0, 0, 0, 908, 0, 0, 0, 0, 0, 909, 0, 0, 0, 0, 0, 910, 0, 0, 0, 0, 0, 911, 0, 0, 0,
    0, 0, 912, 0, 0, 0, 0, 0, 913, 0, 0, 0, 0, 0, 914, 0, 0, 0, 0, 0, 915, 0, 0, 0, 0, 0, 916, 0, 0, 0, 0, 0,
    917, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 0, 921, 0, 0, 0, 0, 0, 922, 0,
    0, 0, 0, 0, 923, 0, 0, 0, 0, 0, 924, 0, 0, 0, 0, 0, 925, 0, 0, 0, 0, 0, 926, 0, 0, 0, 0, 0, 927, 0, 0, 0,
    0, 0, 928, 0, 0, 0, 0, 0, 929, 0, 0, 0, 0, 0, 930, 0, 0, 0, 0, 0, 931, 0, 0, 0, 0, 0, 932, 0, 0, 0, 0, 0,
    933, 0, 0, 0, 0, 0, 934, 0, 0, 0, 0, 0, 935, 0, 0, 0, 0, 0, 936, 0, 0, 0, 0, 0, 937, 0, 0, 0, 0, 0, 938, 0,
    0, 0, 0, 0, 939, 0, 0, 0, 0, 0, 940, 0, 0, 0, 0, 0, 941, 0, 0, 0, 0, 0, 942, 0, 0, 0, 0, 0, 943, 0, 0, 0,
    0, 0, 944, 0, 0, 0, 0, 0, 945, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0, 0, 947, 0, 0, 0, 0, 0, 948, 0, 0, 0, 0, 0,
    949, 0, 0, 0, 0, 0, 950, 0, 0, 0, 0, 0, 951, 0, 0, 0, 0, 0, 952, 0, 0, 0, 0, 0, 953, 0, 0, 0, 0, 0, 954, 0,
    0, 0, 0, 0, 955, 0, 0, 0, 0, 0, 956, 0, 0, 0, 0, 0, 957, 0, 0, 0, 0, 0, 958, 0, 0, 0, 0, 0, 959, 0, 0, 0,
    0, 0, 960, 0, 0, 0, 0, 0, 961, 0, 0, 0, 0, 0, 962, 0, 0, 0, 0, 0, 963, 0, 0, 0, 0, 0, 964, 0, 0, 0, 0, 0,
    965, 0, 0, 0, 0, 0, 966, 0, 0, 0, 0, 0, 967, 0, 0, 0, 0, 0, 968, 0, 0, 0, 0, 0, 969, 0, 0, 0, 0, 0, 970, 0,
    0, 0, 0, 0, 971, 0, 0, 0, 0, 0, 972, 0, 0, 0, 0, 0, 973, 0, 0, 0, 0, 0, 974, 0, 0, 0, 0, 0, 975, 0, 0, 0,
    0, 0, 976, 0, 0, 0, 0, 0, 977, 0, 0, 0, 0, 0, 978, 0, 0, 0, 979, 0, 0, 0, 980, 0, 0, 0, 981, 0, 0, 0, 0, 982,
    0, 0, 0, 0, 0, 983, 0, 0, 0, 0, 0, 984, 0, 0, 0, 0, 0, 985, 0, 0, 0, 0, 0, 986, 0, 0, 0, 0, 0, 987, 0, 0,
    0, 0, 0, 988, 0, 0, 0, 0, 0, 989, 0, 0, 0, 0, 0, 990, 0, 0, 0, 0, 0, 991, 0, 0, 0, 0, 0, 992, 0, 0, 0, 0,
    0, 993, 0, 0, 0, 0, 0, 994, 0, 0, 0, 0, 0, 995, 0, 0, 0, 0, 0, 996, 0, 0, 0, 0, 0, 997, 0, 0, 0, 0, 0, 998,
    0, 0, 0, 0, 0, 999, 0, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0, 1001, 0, 0, 0, 0, 0, 1002, 0, 0, 0, 0, 0, 1003, 0, 0,
    0, 0, 0, 1004, 0, 0, 0, 0, 0, 1005, 0, 0, 0, 0, 0, 1006, 0, 0, 0, 0, 0, 1007, 0, 0, 0, 0, 0, 1008,
};
void recomp_unit_0016_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08844000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0016[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08844000;
    case 2u: goto L_08844018;
    case 3u: goto L_08844028;
    case 4u: goto L_08844048;
    case 5u: goto L_08844058;
    case 6u: goto L_08844070;
    case 7u: goto L_08844078;
    case 8u: goto L_0884408C;
    case 9u: goto L_0884409C;
    case 10u: goto L_088440A4;
    case 11u: goto L_088440B0;
    case 12u: goto L_088440D8;
    case 13u: goto L_088440E4;
    case 14u: goto L_088440F4;
    case 15u: goto L_08844104;
    case 16u: goto L_0884410C;
    case 17u: goto L_0884411C;
    case 18u: goto L_08844124;
    case 19u: goto L_08844130;
    case 20u: goto L_08844134;
    case 21u: goto L_0884415C;
    case 22u: goto L_08844188;
    case 23u: goto L_088443A4;
    case 24u: goto L_088443AC;
    case 25u: goto L_088443B4;
    case 26u: goto L_088443FC;
    case 27u: goto L_08844414;
    case 28u: goto L_08844418;
    case 29u: goto L_08844440;
    case 30u: goto L_0884444C;
    case 31u: goto L_08844468;
    case 32u: goto L_08844470;
    case 33u: goto L_0884448C;
    case 34u: goto L_088444C4;
    case 35u: goto L_088444D8;
    case 36u: goto L_088444E0;
    case 37u: goto L_088444F4;
    case 38u: goto L_0884450C;
    case 39u: goto L_08844520;
    case 40u: goto L_08844524;
    case 41u: goto L_08844528;
    case 42u: goto L_08844544;
    case 43u: goto L_08844558;
    case 44u: goto L_08844564;
    case 45u: goto L_08844570;
    case 46u: goto L_08844588;
    case 47u: goto L_08844594;
    case 48u: goto L_08844598;
    case 49u: goto L_088445AC;
    case 50u: goto L_088445BC;
    case 51u: goto L_088445C4;
    case 52u: goto L_088445CC;
    case 53u: goto L_088445D8;
    case 54u: goto L_088445F4;
    case 55u: goto L_08844608;
    case 56u: goto L_08844610;
    case 57u: goto L_0884461C;
    case 58u: goto L_08844628;
    case 59u: goto L_08844638;
    case 60u: goto L_08844640;
    case 61u: goto L_08844648;
    case 62u: goto L_08844650;
    case 63u: goto L_08844660;
    case 64u: goto L_08844668;
    case 65u: goto L_08844670;
    case 66u: goto L_08844678;
    case 67u: goto L_08844688;
    case 68u: goto L_08844690;
    case 69u: goto L_08844698;
    case 70u: goto L_088446A0;
    case 71u: goto L_088446A8;
    case 72u: goto L_088446B8;
    case 73u: goto L_088446C0;
    case 74u: goto L_088446C8;
    case 75u: goto L_088446D4;
    case 76u: goto L_088446E0;
    case 77u: goto L_088446F8;
    case 78u: goto L_08844704;
    case 79u: goto L_08844708;
    case 80u: goto L_0884471C;
    case 81u: goto L_0884472C;
    case 82u: goto L_08844734;
    case 83u: goto L_0884473C;
    case 84u: goto L_08844748;
    case 85u: goto L_08844764;
    case 86u: goto L_0884476C;
    case 87u: goto L_08844778;
    case 88u: goto L_08844784;
    case 89u: goto L_0884478C;
    case 90u: goto L_08844794;
    case 91u: goto L_0884479C;
    case 92u: goto L_088447A4;
    case 93u: goto L_088447B4;
    case 94u: goto L_088447BC;
    case 95u: goto L_088447C4;
    case 96u: goto L_088447D4;
    case 97u: goto L_088447DC;
    case 98u: goto L_088447E4;
    case 99u: goto L_088447F4;
    case 100u: goto L_088447FC;
    case 101u: goto L_08844804;
    case 102u: goto L_0884480C;
    case 103u: goto L_08844810;
    case 104u: goto L_08844818;
    case 105u: goto L_088448A8;
    case 106u: goto L_08844918;
    case 107u: goto L_08844934;
    case 108u: goto L_0884493C;
    case 109u: goto L_08844950;
    case 110u: goto L_08844954;
    case 111u: goto L_0884495C;
    case 112u: goto L_0884497C;
    case 113u: goto L_08844984;
    case 114u: goto L_088449A4;
    case 115u: goto L_088449AC;
    case 116u: goto L_088449C0;
    case 117u: goto L_088449D4;
    case 118u: goto L_088449E8;
    case 119u: goto L_08844A00;
    case 120u: goto L_08844A08;
    case 121u: goto L_08844A20;
    case 122u: goto L_08844A28;
    case 123u: goto L_08844A40;
    case 124u: goto L_08844A48;
    case 125u: goto L_08844A60;
    case 126u: goto L_08844A78;
    case 127u: goto L_08844A90;
    case 128u: goto L_08844AA8;
    case 129u: goto L_08844AC0;
    case 130u: goto L_08844AD8;
    case 131u: goto L_08844AF0;
    case 132u: goto L_08844B08;
    case 133u: goto L_08844B20;
    case 134u: goto L_08844B38;
    case 135u: goto L_08844B50;
    case 136u: goto L_08844B68;
    case 137u: goto L_08844B80;
    case 138u: goto L_08844B98;
    case 139u: goto L_08844BB0;
    case 140u: goto L_08844BC8;
    case 141u: goto L_08844BE0;
    case 142u: goto L_08844BF8;
    case 143u: goto L_08844C10;
    case 144u: goto L_08844C28;
    case 145u: goto L_08844C34;
    case 146u: goto L_08844C40;
    case 147u: goto L_08844C4C;
    case 148u: goto L_08844C58;
    case 149u: goto L_08844C64;
    case 150u: goto L_08844C70;
    case 151u: goto L_08844C7C;
    case 152u: goto L_08844C88;
    case 153u: goto L_08844C94;
    case 154u: goto L_08844CA0;
    case 155u: goto L_08844CAC;
    case 156u: goto L_08844CB8;
    case 157u: goto L_08844CC4;
    case 158u: goto L_08844CD0;
    case 159u: goto L_08844CDC;
    case 160u: goto L_08844CE8;
    case 161u: goto L_08844CF4;
    case 162u: goto L_08844D00;
    case 163u: goto L_08844D0C;
    case 164u: goto L_08844D18;
    case 165u: goto L_08844D20;
    case 166u: goto L_08844D28;
    case 167u: goto L_08844E24;
    case 168u: goto L_08844E2C;
    case 169u: goto L_08844E40;
    case 170u: goto L_08844E48;
    case 171u: goto L_08844E5C;
    case 172u: goto L_08844E60;
    case 173u: goto L_08844E6C;
    case 174u: goto L_08844EA4;
    case 175u: goto L_08844EB8;
    case 176u: goto L_08844EE0;
    case 177u: goto L_08844EE8;
    case 178u: goto L_08844F08;
    case 179u: goto L_08844F10;
    case 180u: goto L_08844F20;
    case 181u: goto L_08844F34;
    case 182u: goto L_08844F3C;
    case 183u: goto L_08844F50;
    case 184u: goto L_08844F5C;
    case 185u: goto L_08844F68;
    case 186u: goto L_08844F84;
    case 187u: goto L_08844FA4;
    case 188u: goto L_08844FB0;
    case 189u: goto L_08844FC4;
    case 190u: goto L_08844FCC;
    case 191u: goto L_08844FD8;
    case 192u: goto L_08844FDC;
    case 193u: goto L_08844FE4;
    case 194u: goto L_08844FF8;
    case 195u: goto L_0884500C;
    case 196u: goto L_08845014;
    case 197u: goto L_08845020;
    case 198u: goto L_08845024;
    case 199u: goto L_0884502C;
    case 200u: goto L_08845040;
    case 201u: goto L_08845044;
    case 202u: goto L_0884504C;
    case 203u: goto L_08845060;
    case 204u: goto L_08845068;
    case 205u: goto L_08845074;
    case 206u: goto L_08845078;
    case 207u: goto L_08845080;
    case 208u: goto L_08845094;
    case 209u: goto L_0884509C;
    case 210u: goto L_088450A8;
    case 211u: goto L_088450AC;
    case 212u: goto L_088450B4;
    case 213u: goto L_088450CC;
    case 214u: goto L_088450D4;
    case 215u: goto L_088450F0;
    case 216u: goto L_088450F8;
    case 217u: goto L_0884510C;
    case 218u: goto L_08845110;
    case 219u: goto L_08845118;
    case 220u: goto L_08845138;
    case 221u: goto L_08845140;
    case 222u: goto L_08845160;
    case 223u: goto L_08845168;
    case 224u: goto L_08845184;
    case 225u: goto L_0884518C;
    case 226u: goto L_088451A0;
    case 227u: goto L_088451A4;
    case 228u: goto L_088451AC;
    case 229u: goto L_088451C8;
    case 230u: goto L_088451D0;
    case 231u: goto L_088451E4;
    case 232u: goto L_088451E8;
    case 233u: goto L_088451F0;
    case 234u: goto L_0884520C;
    case 235u: goto L_08845214;
    case 236u: goto L_08845228;
    case 237u: goto L_0884522C;
    case 238u: goto L_08845234;
    case 239u: goto L_08845250;
    case 240u: goto L_08845258;
    case 241u: goto L_0884526C;
    case 242u: goto L_08845270;
    case 243u: goto L_08845278;
    case 244u: goto L_088452A4;
    case 245u: goto L_088452B4;
    case 246u: goto L_088452C8;
    case 247u: goto L_088452CC;
    case 248u: goto L_088452E0;
    case 249u: goto L_088452F8;
    case 250u: goto L_08845310;
    case 251u: goto L_08845328;
    case 252u: goto L_0884533C;
    case 253u: goto L_08845344;
    case 254u: goto L_08845354;
    case 255u: goto L_0884535C;
    case 256u: goto L_08845374;
    case 257u: goto L_08845388;
    case 258u: goto L_08845390;
    case 259u: goto L_088453A0;
    case 260u: goto L_088453A8;
    case 261u: goto L_088453C4;
    case 262u: goto L_088453E0;
    case 263u: goto L_088453F8;
    case 264u: goto L_08845410;
    case 265u: goto L_08845418;
    case 266u: goto L_08845428;
    case 267u: goto L_08845440;
    case 268u: goto L_08845448;
    case 269u: goto L_08845450;
    case 270u: goto L_08845464;
    case 271u: goto L_08845478;
    case 272u: goto L_0884547C;
    case 273u: goto L_08845484;
    case 274u: goto L_08845490;
    case 275u: goto L_088454A0;
    case 276u: goto L_088454A8;
    case 277u: goto L_088454B4;
    case 278u: goto L_088454C4;
    case 279u: goto L_088454CC;
    case 280u: goto L_088454D0;
    case 281u: goto L_088454D8;
    case 282u: goto L_08845514;
    case 283u: goto L_0884551C;
    case 284u: goto L_08845544;
    case 285u: goto L_0884554C;
    case 286u: goto L_08845554;
    case 287u: goto L_08845560;
    case 288u: goto L_0884556C;
    case 289u: goto L_08845574;
    case 290u: goto L_08845578;
    case 291u: goto L_08845580;
    case 292u: goto L_08845588;
    case 293u: goto L_08845594;
    case 294u: goto L_0884559C;
    case 295u: goto L_088455A4;
    case 296u: goto L_088455BC;
    case 297u: goto L_088455CC;
    case 298u: goto L_088455D8;
    case 299u: goto L_088455E8;
    case 300u: goto L_088455F4;
    case 301u: goto L_08845600;
    case 302u: goto L_0884560C;
    case 303u: goto L_08845618;
    case 304u: goto L_08845620;
    case 305u: goto L_08845624;
    case 306u: goto L_0884562C;
    case 307u: goto L_08845634;
    case 308u: goto L_08845640;
    case 309u: goto L_0884564C;
    case 310u: goto L_08845654;
    case 311u: goto L_08845660;
    case 312u: goto L_0884566C;
    case 313u: goto L_08845678;
    case 314u: goto L_08845680;
    case 315u: goto L_08845684;
    case 316u: goto L_0884568C;
    case 317u: goto L_08845694;
    case 318u: goto L_088456A0;
    case 319u: goto L_088456AC;
    case 320u: goto L_088456DC;
    case 321u: goto L_08845774;
    case 322u: goto L_08845788;
    case 323u: goto L_088459B8;
    case 324u: goto L_088459CC;
    case 325u: goto L_088459D0;
    case 326u: goto L_088459E4;
    case 327u: goto L_088459E8;
    case 328u: goto L_088459FC;
    case 329u: goto L_08845A00;
    case 330u: goto L_08845A14;
    case 331u: goto L_08845A18;
    case 332u: goto L_08845A2C;
    case 333u: goto L_08845A30;
    case 334u: goto L_08845A44;
    case 335u: goto L_08845A48;
    case 336u: goto L_08845A5C;
    case 337u: goto L_08845A60;
    case 338u: goto L_08845A74;
    case 339u: goto L_08845A78;
    case 340u: goto L_08845A8C;
    case 341u: goto L_08845A90;
    case 342u: goto L_08845AA4;
    case 343u: goto L_08845AC0;
    case 344u: goto L_08845AD8;
    case 345u: goto L_08845B14;
    case 346u: goto L_08845B2C;
    case 347u: goto L_08845B34;
    case 348u: goto L_08845B48;
    case 349u: goto L_08845B60;
    case 350u: goto L_08845C60;
    case 351u: goto L_08845C78;
    case 352u: goto L_08845C84;
    case 353u: goto L_08845C90;
    case 354u: goto L_08845CA0;
    case 355u: goto L_08845CAC;
    case 356u: goto L_08845CB8;
    case 357u: goto L_08845CC0;
    case 358u: goto L_08845CC4;
    case 359u: goto L_08845CD0;
    case 360u: goto L_08845CE0;
    case 361u: goto L_08845CE8;
    case 362u: goto L_08845CF4;
    case 363u: goto L_08845D04;
    case 364u: goto L_08845D10;
    case 365u: goto L_08845D1C;
    case 366u: goto L_08845D24;
    case 367u: goto L_08845D28;
    case 368u: goto L_08845D34;
    case 369u: goto L_08845D44;
    case 370u: goto L_08845D4C;
    case 371u: goto L_08845D58;
    case 372u: goto L_08845D68;
    case 373u: goto L_08845D74;
    case 374u: goto L_08845D80;
    case 375u: goto L_08845D88;
    case 376u: goto L_08845D8C;
    case 377u: goto L_08845D98;
    case 378u: goto L_08845DA8;
    case 379u: goto L_08845DB0;
    case 380u: goto L_08845DBC;
    case 381u: goto L_08845DCC;
    case 382u: goto L_08845DD8;
    case 383u: goto L_08845DE4;
    case 384u: goto L_08845DEC;
    case 385u: goto L_08845DF0;
    case 386u: goto L_08845DFC;
    case 387u: goto L_08845E0C;
    case 388u: goto L_08845E14;
    case 389u: goto L_08845E24;
    case 390u: goto L_08845E30;
    case 391u: goto L_08845E3C;
    case 392u: goto L_08845E44;
    case 393u: goto L_08845E48;
    case 394u: goto L_08845E54;
    case 395u: goto L_08845E64;
    case 396u: goto L_08845E6C;
    case 397u: goto L_08845E78;
    case 398u: goto L_08845E88;
    case 399u: goto L_08845E94;
    case 400u: goto L_08845EA0;
    case 401u: goto L_08845EA8;
    case 402u: goto L_08845EAC;
    case 403u: goto L_08845EB8;
    case 404u: goto L_08845EC8;
    case 405u: goto L_08845ED0;
    case 406u: goto L_08845EDC;
    case 407u: goto L_08845EEC;
    case 408u: goto L_08845EF8;
    case 409u: goto L_08845F04;
    case 410u: goto L_08845F0C;
    case 411u: goto L_08845F10;
    case 412u: goto L_08845F1C;
    case 413u: goto L_08845F2C;
    case 414u: goto L_08845F34;
    case 415u: goto L_08845F40;
    case 416u: goto L_08845F50;
    case 417u: goto L_08845F5C;
    case 418u: goto L_08845F68;
    case 419u: goto L_08845F70;
    case 420u: goto L_08845F74;
    case 421u: goto L_08845F80;
    case 422u: goto L_08845F90;
    case 423u: goto L_08845F98;
    case 424u: goto L_08845FA4;
    case 425u: goto L_08845FB4;
    case 426u: goto L_08845FC0;
    case 427u: goto L_08845FCC;
    case 428u: goto L_08845FD4;
    case 429u: goto L_08845FD8;
    case 430u: goto L_08845FE4;
    case 431u: goto L_08845FF4;
    case 432u: goto L_08845FFC;
    case 433u: goto L_08846008;
    case 434u: goto L_08846018;
    case 435u: goto L_08846024;
    case 436u: goto L_08846030;
    case 437u: goto L_08846038;
    case 438u: goto L_0884603C;
    case 439u: goto L_08846048;
    case 440u: goto L_08846058;
    case 441u: goto L_08846060;
    case 442u: goto L_0884606C;
    case 443u: goto L_0884607C;
    case 444u: goto L_08846088;
    case 445u: goto L_08846094;
    case 446u: goto L_0884609C;
    case 447u: goto L_088460A0;
    case 448u: goto L_088460AC;
    case 449u: goto L_088460BC;
    case 450u: goto L_088460C4;
    case 451u: goto L_088460D0;
    case 452u: goto L_088460E0;
    case 453u: goto L_088460EC;
    case 454u: goto L_088460F8;
    case 455u: goto L_08846100;
    case 456u: goto L_08846104;
    case 457u: goto L_08846110;
    case 458u: goto L_08846120;
    case 459u: goto L_08846128;
    case 460u: goto L_08846134;
    case 461u: goto L_08846144;
    case 462u: goto L_08846150;
    case 463u: goto L_0884615C;
    case 464u: goto L_08846164;
    case 465u: goto L_08846168;
    case 466u: goto L_08846174;
    case 467u: goto L_08846184;
    case 468u: goto L_0884618C;
    case 469u: goto L_08846198;
    case 470u: goto L_088461A8;
    case 471u: goto L_088461B4;
    case 472u: goto L_088461C0;
    case 473u: goto L_088461C8;
    case 474u: goto L_088461CC;
    case 475u: goto L_088461D8;
    case 476u: goto L_088461E8;
    case 477u: goto L_088461F0;
    case 478u: goto L_088461FC;
    case 479u: goto L_0884620C;
    case 480u: goto L_08846218;
    case 481u: goto L_08846224;
    case 482u: goto L_0884622C;
    case 483u: goto L_08846230;
    case 484u: goto L_0884623C;
    case 485u: goto L_0884624C;
    case 486u: goto L_08846254;
    case 487u: goto L_08846260;
    case 488u: goto L_08846270;
    case 489u: goto L_0884627C;
    case 490u: goto L_08846288;
    case 491u: goto L_08846290;
    case 492u: goto L_08846294;
    case 493u: goto L_088462A0;
    case 494u: goto L_088462B0;
    case 495u: goto L_088462B8;
    case 496u: goto L_088462C4;
    case 497u: goto L_088462D4;
    case 498u: goto L_088462E0;
    case 499u: goto L_088462EC;
    case 500u: goto L_088462F4;
    case 501u: goto L_088462F8;
    case 502u: goto L_08846304;
    case 503u: goto L_08846314;
    case 504u: goto L_0884631C;
    case 505u: goto L_08846328;
    case 506u: goto L_08846338;
    case 507u: goto L_08846344;
    case 508u: goto L_08846350;
    case 509u: goto L_08846358;
    case 510u: goto L_0884635C;
    case 511u: goto L_08846368;
    case 512u: goto L_08846378;
    case 513u: goto L_08846380;
    case 514u: goto L_0884638C;
    case 515u: goto L_0884639C;
    case 516u: goto L_088463A8;
    case 517u: goto L_088463B4;
    case 518u: goto L_088463BC;
    case 519u: goto L_088463C0;
    case 520u: goto L_088463CC;
    case 521u: goto L_088463DC;
    case 522u: goto L_088463E4;
    case 523u: goto L_088463F0;
    case 524u: goto L_08846400;
    case 525u: goto L_0884640C;
    case 526u: goto L_08846418;
    case 527u: goto L_08846420;
    case 528u: goto L_08846424;
    case 529u: goto L_08846430;
    case 530u: goto L_08846440;
    case 531u: goto L_08846448;
    case 532u: goto L_08846454;
    case 533u: goto L_08846464;
    case 534u: goto L_08846470;
    case 535u: goto L_0884647C;
    case 536u: goto L_08846484;
    case 537u: goto L_08846488;
    case 538u: goto L_08846494;
    case 539u: goto L_088464A4;
    case 540u: goto L_088464AC;
    case 541u: goto L_088464B8;
    case 542u: goto L_088464C8;
    case 543u: goto L_088464D4;
    case 544u: goto L_088464E0;
    case 545u: goto L_088464E8;
    case 546u: goto L_088464EC;
    case 547u: goto L_088464F8;
    case 548u: goto L_08846508;
    case 549u: goto L_08846510;
    case 550u: goto L_0884651C;
    case 551u: goto L_0884652C;
    case 552u: goto L_08846538;
    case 553u: goto L_08846544;
    case 554u: goto L_0884654C;
    case 555u: goto L_08846550;
    case 556u: goto L_0884655C;
    case 557u: goto L_0884656C;
    case 558u: goto L_08846574;
    case 559u: goto L_08846580;
    case 560u: goto L_08846590;
    case 561u: goto L_0884659C;
    case 562u: goto L_088465A8;
    case 563u: goto L_088465B0;
    case 564u: goto L_088465B4;
    case 565u: goto L_088465C0;
    case 566u: goto L_088465D0;
    case 567u: goto L_088465D8;
    case 568u: goto L_088465E4;
    case 569u: goto L_088465F4;
    case 570u: goto L_08846600;
    case 571u: goto L_0884660C;
    case 572u: goto L_08846614;
    case 573u: goto L_08846618;
    case 574u: goto L_08846624;
    case 575u: goto L_08846634;
    case 576u: goto L_0884663C;
    case 577u: goto L_08846648;
    case 578u: goto L_08846658;
    case 579u: goto L_08846664;
    case 580u: goto L_08846670;
    case 581u: goto L_08846678;
    case 582u: goto L_0884667C;
    case 583u: goto L_08846688;
    case 584u: goto L_08846698;
    case 585u: goto L_088466A0;
    case 586u: goto L_088466AC;
    case 587u: goto L_088466BC;
    case 588u: goto L_088466C8;
    case 589u: goto L_088466D4;
    case 590u: goto L_088466DC;
    case 591u: goto L_088466E0;
    case 592u: goto L_088466EC;
    case 593u: goto L_088466FC;
    case 594u: goto L_08846704;
    case 595u: goto L_08846710;
    case 596u: goto L_08846720;
    case 597u: goto L_0884672C;
    case 598u: goto L_08846738;
    case 599u: goto L_08846740;
    case 600u: goto L_08846744;
    case 601u: goto L_08846750;
    case 602u: goto L_08846760;
    case 603u: goto L_08846768;
    case 604u: goto L_08846774;
    case 605u: goto L_08846784;
    case 606u: goto L_08846790;
    case 607u: goto L_0884679C;
    case 608u: goto L_088467A4;
    case 609u: goto L_088467A8;
    case 610u: goto L_088467B4;
    case 611u: goto L_088467C4;
    case 612u: goto L_088467CC;
    case 613u: goto L_088467D8;
    case 614u: goto L_088467E8;
    case 615u: goto L_088467F8;
    case 616u: goto L_08846804;
    case 617u: goto L_08846810;
    case 618u: goto L_08846818;
    case 619u: goto L_0884681C;
    case 620u: goto L_08846828;
    case 621u: goto L_08846838;
    case 622u: goto L_08846840;
    case 623u: goto L_08846850;
    case 624u: goto L_0884685C;
    case 625u: goto L_08846868;
    case 626u: goto L_08846870;
    case 627u: goto L_08846874;
    case 628u: goto L_08846880;
    case 629u: goto L_08846890;
    case 630u: goto L_08846898;
    case 631u: goto L_088468A4;
    case 632u: goto L_088468B4;
    case 633u: goto L_088468C0;
    case 634u: goto L_088468CC;
    case 635u: goto L_088468D4;
    case 636u: goto L_088468D8;
    case 637u: goto L_088468E4;
    case 638u: goto L_088468F4;
    case 639u: goto L_088468FC;
    case 640u: goto L_08846908;
    case 641u: goto L_08846918;
    case 642u: goto L_08846924;
    case 643u: goto L_08846930;
    case 644u: goto L_08846938;
    case 645u: goto L_0884693C;
    case 646u: goto L_08846948;
    case 647u: goto L_08846958;
    case 648u: goto L_08846960;
    case 649u: goto L_0884696C;
    case 650u: goto L_0884697C;
    case 651u: goto L_08846988;
    case 652u: goto L_08846994;
    case 653u: goto L_0884699C;
    case 654u: goto L_088469A0;
    case 655u: goto L_088469AC;
    case 656u: goto L_088469BC;
    case 657u: goto L_088469C4;
    case 658u: goto L_088469D0;
    case 659u: goto L_088469E0;
    case 660u: goto L_088469EC;
    case 661u: goto L_088469F8;
    case 662u: goto L_08846A00;
    case 663u: goto L_08846A04;
    case 664u: goto L_08846A10;
    case 665u: goto L_08846A20;
    case 666u: goto L_08846A28;
    case 667u: goto L_08846A34;
    case 668u: goto L_08846A44;
    case 669u: goto L_08846A50;
    case 670u: goto L_08846A5C;
    case 671u: goto L_08846A64;
    case 672u: goto L_08846A68;
    case 673u: goto L_08846A74;
    case 674u: goto L_08846A84;
    case 675u: goto L_08846A8C;
    case 676u: goto L_08846A98;
    case 677u: goto L_08846AA8;
    case 678u: goto L_08846AB4;
    case 679u: goto L_08846AC0;
    case 680u: goto L_08846AC8;
    case 681u: goto L_08846ACC;
    case 682u: goto L_08846AD8;
    case 683u: goto L_08846AE8;
    case 684u: goto L_08846AF0;
    case 685u: goto L_08846AFC;
    case 686u: goto L_08846B0C;
    case 687u: goto L_08846B18;
    case 688u: goto L_08846B24;
    case 689u: goto L_08846B2C;
    case 690u: goto L_08846B30;
    case 691u: goto L_08846B3C;
    case 692u: goto L_08846B4C;
    case 693u: goto L_08846B54;
    case 694u: goto L_08846B60;
    case 695u: goto L_08846B70;
    case 696u: goto L_08846B7C;
    case 697u: goto L_08846B88;
    case 698u: goto L_08846B90;
    case 699u: goto L_08846B94;
    case 700u: goto L_08846BA0;
    case 701u: goto L_08846BB0;
    case 702u: goto L_08846BB8;
    case 703u: goto L_08846BC4;
    case 704u: goto L_08846BD4;
    case 705u: goto L_08846BE0;
    case 706u: goto L_08846BEC;
    case 707u: goto L_08846BF4;
    case 708u: goto L_08846BF8;
    case 709u: goto L_08846C04;
    case 710u: goto L_08846C14;
    case 711u: goto L_08846C1C;
    case 712u: goto L_08846C28;
    case 713u: goto L_08846C38;
    case 714u: goto L_08846C44;
    case 715u: goto L_08846C50;
    case 716u: goto L_08846C58;
    case 717u: goto L_08846C5C;
    case 718u: goto L_08846C68;
    case 719u: goto L_08846C78;
    case 720u: goto L_08846C80;
    case 721u: goto L_08846C8C;
    case 722u: goto L_08846C9C;
    case 723u: goto L_08846CA8;
    case 724u: goto L_08846CB4;
    case 725u: goto L_08846CBC;
    case 726u: goto L_08846CC0;
    case 727u: goto L_08846CCC;
    case 728u: goto L_08846CDC;
    case 729u: goto L_08846CE4;
    case 730u: goto L_08846CF0;
    case 731u: goto L_08846D00;
    case 732u: goto L_08846D0C;
    case 733u: goto L_08846D18;
    case 734u: goto L_08846D20;
    case 735u: goto L_08846D24;
    case 736u: goto L_08846D30;
    case 737u: goto L_08846D40;
    case 738u: goto L_08846D48;
    case 739u: goto L_08846D54;
    case 740u: goto L_08846D64;
    case 741u: goto L_08846D70;
    case 742u: goto L_08846D7C;
    case 743u: goto L_08846D84;
    case 744u: goto L_08846D88;
    case 745u: goto L_08846D94;
    case 746u: goto L_08846DA4;
    case 747u: goto L_08846DAC;
    case 748u: goto L_08846DB8;
    case 749u: goto L_08846DC8;
    case 750u: goto L_08846DD4;
    case 751u: goto L_08846DE0;
    case 752u: goto L_08846DE8;
    case 753u: goto L_08846DEC;
    case 754u: goto L_08846DF8;
    case 755u: goto L_08846E08;
    case 756u: goto L_08846E10;
    case 757u: goto L_08846E1C;
    case 758u: goto L_08846E2C;
    case 759u: goto L_08846E38;
    case 760u: goto L_08846E44;
    case 761u: goto L_08846E4C;
    case 762u: goto L_08846E50;
    case 763u: goto L_08846E5C;
    case 764u: goto L_08846E6C;
    case 765u: goto L_08846E74;
    case 766u: goto L_08846E84;
    case 767u: goto L_08846E94;
    case 768u: goto L_08846EA0;
    case 769u: goto L_08846EAC;
    case 770u: goto L_08846EB4;
    case 771u: goto L_08846EB8;
    case 772u: goto L_08846EC4;
    case 773u: goto L_08846ED4;
    case 774u: goto L_08846EDC;
    case 775u: goto L_08846EEC;
    case 776u: goto L_08846EFC;
    case 777u: goto L_08846F08;
    case 778u: goto L_08846F14;
    case 779u: goto L_08846F1C;
    case 780u: goto L_08846F20;
    case 781u: goto L_08846F2C;
    case 782u: goto L_08846F3C;
    case 783u: goto L_08846F44;
    case 784u: goto L_08846F54;
    case 785u: goto L_08846F64;
    case 786u: goto L_08846F70;
    case 787u: goto L_08846F7C;
    case 788u: goto L_08846F84;
    case 789u: goto L_08846F88;
    case 790u: goto L_08846F94;
    case 791u: goto L_08846FA4;
    case 792u: goto L_08846FAC;
    case 793u: goto L_08846FC0;
    case 794u: goto L_08846FD0;
    case 795u: goto L_08846FDC;
    case 796u: goto L_08846FE8;
    case 797u: goto L_08846FF0;
    case 798u: goto L_08846FF4;
    case 799u: goto L_08847000;
    case 800u: goto L_08847010;
    case 801u: goto L_08847018;
    case 802u: goto L_0884702C;
    case 803u: goto L_0884703C;
    case 804u: goto L_08847048;
    case 805u: goto L_08847054;
    case 806u: goto L_0884705C;
    case 807u: goto L_08847060;
    case 808u: goto L_0884706C;
    case 809u: goto L_0884707C;
    case 810u: goto L_08847084;
    case 811u: goto L_08847098;
    case 812u: goto L_088470A8;
    case 813u: goto L_088470B4;
    case 814u: goto L_088470C0;
    case 815u: goto L_088470C8;
    case 816u: goto L_088470CC;
    case 817u: goto L_088470D8;
    case 818u: goto L_088470E8;
    case 819u: goto L_088470F0;
    case 820u: goto L_08847104;
    case 821u: goto L_08847114;
    case 822u: goto L_08847120;
    case 823u: goto L_0884712C;
    case 824u: goto L_08847134;
    case 825u: goto L_08847138;
    case 826u: goto L_08847144;
    case 827u: goto L_08847154;
    case 828u: goto L_0884715C;
    case 829u: goto L_08847170;
    case 830u: goto L_08847180;
    case 831u: goto L_0884718C;
    case 832u: goto L_08847198;
    case 833u: goto L_088471A0;
    case 834u: goto L_088471A4;
    case 835u: goto L_088471B0;
    case 836u: goto L_088471C0;
    case 837u: goto L_088471C8;
    case 838u: goto L_088471DC;
    case 839u: goto L_088471EC;
    case 840u: goto L_088471F8;
    case 841u: goto L_08847204;
    case 842u: goto L_0884720C;
    case 843u: goto L_08847210;
    case 844u: goto L_0884721C;
    case 845u: goto L_0884722C;
    case 846u: goto L_08847234;
    case 847u: goto L_08847248;
    case 848u: goto L_08847258;
    case 849u: goto L_08847268;
    case 850u: goto L_08847274;
    case 851u: goto L_08847280;
    case 852u: goto L_08847288;
    case 853u: goto L_0884728C;
    case 854u: goto L_08847298;
    case 855u: goto L_088472A8;
    case 856u: goto L_088472B0;
    case 857u: goto L_088472C0;
    case 858u: goto L_088472CC;
    case 859u: goto L_088472D8;
    case 860u: goto L_088472E0;
    case 861u: goto L_088472E4;
    case 862u: goto L_088472F0;
    case 863u: goto L_08847300;
    case 864u: goto L_08847308;
    case 865u: goto L_0884731C;
    case 866u: goto L_0884732C;
    case 867u: goto L_08847338;
    case 868u: goto L_08847344;
    case 869u: goto L_0884734C;
    case 870u: goto L_08847350;
    case 871u: goto L_0884735C;
    case 872u: goto L_0884736C;
    case 873u: goto L_08847374;
    case 874u: goto L_088473B0;
    case 875u: goto L_088473C0;
    case 876u: goto L_088473CC;
    case 877u: goto L_088473D8;
    case 878u: goto L_088473E0;
    case 879u: goto L_088473E4;
    case 880u: goto L_088473F0;
    case 881u: goto L_08847400;
    case 882u: goto L_08847408;
    case 883u: goto L_08847418;
    case 884u: goto L_08847424;
    case 885u: goto L_08847430;
    case 886u: goto L_08847438;
    case 887u: goto L_0884743C;
    case 888u: goto L_08847448;
    case 889u: goto L_08847458;
    case 890u: goto L_0884746C;
    case 891u: goto L_0884749C;
    case 892u: goto L_088474A4;
    case 893u: goto L_088474B4;
    case 894u: goto L_088474B8;
    case 895u: goto L_088474C8;
    case 896u: goto L_08847588;
    case 897u: goto L_088475A0;
    case 898u: goto L_088475B8;
    case 899u: goto L_088475D0;
    case 900u: goto L_088475E8;
    case 901u: goto L_08847600;
    case 902u: goto L_08847618;
    case 903u: goto L_08847630;
    case 904u: goto L_08847648;
    case 905u: goto L_08847660;
    case 906u: goto L_08847678;
    case 907u: goto L_08847690;
    case 908u: goto L_088476A8;
    case 909u: goto L_088476C0;
    case 910u: goto L_088476D8;
    case 911u: goto L_088476F0;
    case 912u: goto L_08847708;
    case 913u: goto L_08847720;
    case 914u: goto L_08847738;
    case 915u: goto L_08847750;
    case 916u: goto L_08847768;
    case 917u: goto L_08847780;
    case 918u: goto L_08847798;
    case 919u: goto L_088477B0;
    case 920u: goto L_088477C8;
    case 921u: goto L_088477E0;
    case 922u: goto L_088477F8;
    case 923u: goto L_08847810;
    case 924u: goto L_08847828;
    case 925u: goto L_08847840;
    case 926u: goto L_08847858;
    case 927u: goto L_08847870;
    case 928u: goto L_08847888;
    case 929u: goto L_088478A0;
    case 930u: goto L_088478B8;
    case 931u: goto L_088478D0;
    case 932u: goto L_088478E8;
    case 933u: goto L_08847900;
    case 934u: goto L_08847918;
    case 935u: goto L_08847930;
    case 936u: goto L_08847948;
    case 937u: goto L_08847960;
    case 938u: goto L_08847978;
    case 939u: goto L_08847990;
    case 940u: goto L_088479A8;
    case 941u: goto L_088479C0;
    case 942u: goto L_088479D8;
    case 943u: goto L_088479F0;
    case 944u: goto L_08847A08;
    case 945u: goto L_08847A20;
    case 946u: goto L_08847A38;
    case 947u: goto L_08847A50;
    case 948u: goto L_08847A68;
    case 949u: goto L_08847A80;
    case 950u: goto L_08847A98;
    case 951u: goto L_08847AB0;
    case 952u: goto L_08847AC8;
    case 953u: goto L_08847AE0;
    case 954u: goto L_08847AF8;
    case 955u: goto L_08847B10;
    case 956u: goto L_08847B28;
    case 957u: goto L_08847B40;
    case 958u: goto L_08847B58;
    case 959u: goto L_08847B70;
    case 960u: goto L_08847B88;
    case 961u: goto L_08847BA0;
    case 962u: goto L_08847BB8;
    case 963u: goto L_08847BD0;
    case 964u: goto L_08847BE8;
    case 965u: goto L_08847C00;
    case 966u: goto L_08847C18;
    case 967u: goto L_08847C30;
    case 968u: goto L_08847C48;
    case 969u: goto L_08847C60;
    case 970u: goto L_08847C78;
    case 971u: goto L_08847C90;
    case 972u: goto L_08847CA8;
    case 973u: goto L_08847CC0;
    case 974u: goto L_08847CD8;
    case 975u: goto L_08847CF0;
    case 976u: goto L_08847D08;
    case 977u: goto L_08847D20;
    case 978u: goto L_08847D38;
    case 979u: goto L_08847D48;
    case 980u: goto L_08847D58;
    case 981u: goto L_08847D68;
    case 982u: goto L_08847D7C;
    case 983u: goto L_08847D94;
    case 984u: goto L_08847DAC;
    case 985u: goto L_08847DC4;
    case 986u: goto L_08847DDC;
    case 987u: goto L_08847DF4;
    case 988u: goto L_08847E0C;
    case 989u: goto L_08847E24;
    case 990u: goto L_08847E3C;
    case 991u: goto L_08847E54;
    case 992u: goto L_08847E6C;
    case 993u: goto L_08847E84;
    case 994u: goto L_08847E9C;
    case 995u: goto L_08847EB4;
    case 996u: goto L_08847ECC;
    case 997u: goto L_08847EE4;
    case 998u: goto L_08847EFC;
    case 999u: goto L_08847F14;
    case 1000u: goto L_08847F2C;
    case 1001u: goto L_08847F44;
    case 1002u: goto L_08847F5C;
    case 1003u: goto L_08847F74;
    case 1004u: goto L_08847F8C;
    case 1005u: goto L_08847FA4;
    case 1006u: goto L_08847FBC;
    case 1007u: goto L_08847FD4;
    case 1008u: goto L_08847FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08844000:
    ctx.gpr[5] = (2241u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8320));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08844070;
      }
      goto L_08844018;
    }
L_08844018:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08844028u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7964));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x08844028u) goto L_08844028;
    return;
L_08844028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[5] = (2241u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8320));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4096));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08844070;
      }
      goto L_08844048;
    }
L_08844048:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08844058u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7928));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x08844058u) goto L_08844058;
    return;
L_08844058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3816)));
    ctx.gpr[5] = (2241u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08844070;
L_08844070:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088440A4;
      }
      goto L_08844078;
    }
L_08844078:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3840)));
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088440A4;
      }
      goto L_0884408C;
    }
L_0884408C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884409Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7900));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x0884409Cu) goto L_0884409C;
    return;
L_0884409C:
    ctx.gpr[31] = (0x088440A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 467u, 0x08843268u>(ctx, &aot_mem) && ctx.pc == 0x088440A4u) goto L_088440A4;
    return;
L_088440A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08844124;
      }
      goto L_088440B0;
    }
L_088440B0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16620)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2180u << 16u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7876));
    ctx.gpr[31] = (0x088440D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13904));
    ctx.pc = 0x08B0BB64u;
    return;
L_088440D8:
    ctx.gpr[16] = (2227u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5076), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088440F4;
      }
      goto L_088440E4;
    }
L_088440E4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088440F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7852));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 466u, 0x0884323Cu>(ctx, &aot_mem) && ctx.pc == 0x088440F4u) goto L_088440F4;
    return;
L_088440F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5076)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08844104u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_08844104:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884411C;
      }
      goto L_0884410C;
    }
L_0884410C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0884411Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7852));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 466u, 0x0884323Cu>(ctx, &aot_mem) && ctx.pc == 0x0884411Cu) goto L_0884411C;
    return;
L_0884411C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844130;
      }
      goto L_08844124;
    }
L_08844124:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08844130u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 538u, 0x08843650u>(ctx, &aot_mem) && ctx.pc == 0x08844130u) goto L_08844130;
    return;
L_08844130:
    ctx.gpr[2] = (0u | 0u);
    goto L_08844134;
L_08844134:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884415C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3808)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08844524;
      }
      goto L_08844188;
    }
L_08844188:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10360), 0u);
    ctx.gpr[5] = (0u | 313u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10360));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 314u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5515u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5523u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5526u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5529u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5532u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5535u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5538u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5541u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5544u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5547u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5550u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5553u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5556u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5559u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5562u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5565u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5567u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5568u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5572u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5576u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5580u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5584u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5585u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5586u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5587u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5588u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5589u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5590u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5594u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5595u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5596u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5597u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5598u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5603u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5604u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5605u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5606u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5607u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5608u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5609u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5610u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5611u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5612u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5613u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5614u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5615u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5616u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5617u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5618u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5619u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5620u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5621u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5624u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5625u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5629u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(228), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5630u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5631u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5632u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(240), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5633u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5638u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5643u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(252), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5648u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(256), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5653u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(260), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5657u);
    ctx.gpr[31] = (0x088443A4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(264), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 470u, 0x0884328Cu>(ctx, &aot_mem) && ctx.pc == 0x088443A4u) goto L_088443A4;
    return;
L_088443A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088443B4;
      }
      goto L_088443AC;
    }
L_088443AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08844528;
      }
      goto L_088443B4;
    }
L_088443B4:
    ctx.gpr[4] = (0u | 127u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3860), ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3864), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3528));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[9] = (2269u << 16u);
    ctx.gpr[10] = (2269u << 16u);
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(3252));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-6200));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-6168));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(3520));
    goto L_088443FC;
L_088443FC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088443FC;
      }
      goto L_08844414;
    }
L_08844414:
    ctx.gpr[4] = (0u | 0u);
    goto L_08844418;
L_08844418:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(112), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(304), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(400), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(496), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(592), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08844418;
      }
      goto L_08844440;
    }
L_08844440:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6272));
    goto L_0884444C;
L_0884444C:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 67 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884444C;
      }
      goto L_08844468;
    }
L_08844468:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08844470;
L_08844470:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08844470;
      }
      goto L_0884448C;
    }
L_0884448C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3828), 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3832), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3836), ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7600), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7600));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3820), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (0u | 68u);
    goto L_088444C4;
L_088444C4:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088444C4;
      }
      goto L_088444D8;
    }
L_088444D8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844524;
      }
      goto L_088444E0;
    }
L_088444E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7608));
    ctx.gpr[31] = (0x088444F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7820));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x088444F4u) goto L_088444F4;
    return;
L_088444F4:
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3812), 0u);
    ctx.gpr[18] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3816), 0u);
    ctx.gpr[31] = (0x0884450Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 629u, 0x08843D90u>(ctx, &aot_mem) && ctx.pc == 0x0884450Cu) goto L_0884450C;
    return;
L_0884450C:
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3812), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3816), ctx.gpr[19]);
    ctx.gpr[31] = (0x08844520u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 629u, 0x08843D90u>(ctx, &aot_mem) && ctx.pc == 0x08844520u) goto L_08844520;
    return;
L_08844520:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3808), ctx.gpr[19]);
    goto L_08844524;
L_08844524:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3808)));
    goto L_08844528;
L_08844528:
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
L_08844544:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3832)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088446A0;
      }
      goto L_08844558;
    }
L_08844558:
    ctx.gpr[6] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088445CC;
      }
      goto L_08844564;
    }
L_08844564:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3902 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088445BC;
      }
      goto L_08844570;
    }
L_08844570:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3828)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6200));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08844588;
L_08844588:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08844598;
      }
      goto L_08844594;
    }
L_08844594:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    goto L_08844598;
L_08844598:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088445C4;
      }
      goto L_088445AC;
    }
L_088445AC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08844588;
      }
      goto L_088445BC;
    }
L_088445BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_088445C4;
    }
L_088445C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_088445CC;
    }
L_088445CC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844610;
      }
      goto L_088445D8;
    }
L_088445D8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7600));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0884480C;
      }
      goto L_088445F4;
    }
L_088445F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6272));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884480C;
      }
      goto L_08844608;
    }
L_08844608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_08844610;
    }
L_08844610:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08844640;
      }
      goto L_0884461C;
    }
L_0884461C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08844668;
      }
      goto L_08844628;
    }
L_08844628:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08844670;
      }
      goto L_08844638;
    }
L_08844638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_08844640;
    }
L_08844640:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08844678;
      }
      goto L_08844648;
    }
L_08844648:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844668;
      }
      goto L_08844650;
    }
L_08844650:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08844698;
      }
      goto L_08844660;
    }
L_08844660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_08844668;
    }
L_08844668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_08844670;
    }
L_08844670:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_08844678;
    }
L_08844678:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3848)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08844690;
      }
      goto L_08844688;
    }
L_08844688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_08844690;
    }
L_08844690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_08844698;
    }
L_08844698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_088446A0;
    }
L_088446A0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088446C8;
      }
      goto L_088446A8;
    }
L_088446A8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3840)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088446C0;
      }
      goto L_088446B8;
    }
L_088446B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_088446C0;
    }
L_088446C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_088446C8;
    }
L_088446C8:
    ctx.gpr[6] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0884473C;
      }
      goto L_088446D4;
    }
L_088446D4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3902 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884472C;
      }
      goto L_088446E0;
    }
L_088446E0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3828)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6200));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_088446F8;
L_088446F8:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08844708;
      }
      goto L_08844704;
    }
L_08844704:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    goto L_08844708;
L_08844708:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08844734;
      }
      goto L_0884471C;
    }
L_0884471C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088446F8;
      }
      goto L_0884472C;
    }
L_0884472C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_08844734;
    }
L_08844734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_0884473C;
    }
L_0884473C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884476C;
      }
      goto L_08844748;
    }
L_08844748:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7600));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08844804;
      }
      goto L_08844764;
    }
L_08844764:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_0884476C;
    }
L_0884476C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884478C;
      }
      goto L_08844778;
    }
L_08844778:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08844804;
      }
      goto L_08844784;
    }
L_08844784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088447A4;
      }
      goto L_0884478C;
    }
L_0884478C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_088447C4;
      }
      goto L_08844794;
    }
L_08844794:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088447E4;
      }
      goto L_0884479C;
    }
L_0884479C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844804;
      }
      goto L_088447A4;
    }
L_088447A4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088447BC;
      }
      goto L_088447B4;
    }
L_088447B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844804;
      }
      goto L_088447BC;
    }
L_088447BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_088447C4;
    }
L_088447C4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3848)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088447DC;
      }
      goto L_088447D4;
    }
L_088447D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844804;
      }
      goto L_088447DC;
    }
L_088447DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_088447E4;
    }
L_088447E4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088447FC;
      }
      goto L_088447F4;
    }
L_088447F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_088447FC;
    }
L_088447FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_08844804;
    }
L_08844804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08844810;
      }
      goto L_0884480C;
    }
L_0884480C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08844810;
L_08844810:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3780)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3776)));
    ctx.gpr[9] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(3784), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(3792), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16014u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(3788), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[4] | 14571u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7608));
    ctx.gpr[5] = (0u | 16384u);
    ctx.gpr[6] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3796), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088448A8u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3800), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 536u, 0x08843624u>(ctx, &aot_mem) && ctx.pc == 0x088448A8u) goto L_088448A8;
    return;
L_088448A8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3804)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3868));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(220), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(232), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(240), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844918:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884493C;
      }
      goto L_08844934;
    }
L_08844934:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08844954;
      }
      goto L_0884493C;
    }
L_0884493C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08844950;
    }
    goto L_08844950;
L_08844950:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08844954;
L_08844954:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884495C:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5896));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0884497C;
    }
    goto L_0884497C;
L_0884497C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844984:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7292));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_088449A4;
    }
    goto L_088449A4;
L_088449A4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088449AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088449C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7452)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7452), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088449D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7448), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088449E8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7444)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_08844A00;
    }
    goto L_08844A00;
L_08844A00:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7444), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844A08:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7440)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_08844A20;
    }
    goto L_08844A20;
L_08844A20:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7440), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844A28:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7436)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_08844A40;
    }
    goto L_08844A40;
L_08844A40:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7436), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844A48:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844D0C;
      }
      goto L_08844A60;
    }
L_08844A60:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844D00;
      }
      goto L_08844A78;
    }
L_08844A78:
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844CF4;
      }
      goto L_08844A90;
    }
L_08844A90:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844CE8;
      }
      goto L_08844AA8;
    }
L_08844AA8:
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844CDC;
      }
      goto L_08844AC0;
    }
L_08844AC0:
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844CD0;
      }
      goto L_08844AD8;
    }
L_08844AD8:
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844CC4;
      }
      goto L_08844AF0;
    }
L_08844AF0:
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844CB8;
      }
      goto L_08844B08;
    }
L_08844B08:
    ctx.gpr[4] = (17327u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844CAC;
      }
      goto L_08844B20;
    }
L_08844B20:
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844CA0;
      }
      goto L_08844B38;
    }
L_08844B38:
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844C94;
      }
      goto L_08844B50;
    }
L_08844B50:
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844C88;
      }
      goto L_08844B68;
    }
L_08844B68:
    ctx.gpr[4] = (17455u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844C7C;
      }
      goto L_08844B80;
    }
L_08844B80:
    ctx.gpr[4] = (17480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844C70;
      }
      goto L_08844B98;
    }
L_08844B98:
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844C64;
      }
      goto L_08844BB0;
    }
L_08844BB0:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844C58;
      }
      goto L_08844BC8;
    }
L_08844BC8:
    ctx.gpr[4] = (17558u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844C4C;
      }
      goto L_08844BE0;
    }
L_08844BE0:
    ctx.gpr[4] = (17583u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844C40;
      }
      goto L_08844BF8;
    }
L_08844BF8:
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844C34;
      }
      goto L_08844C10;
    }
L_08844C10:
    ctx.gpr[4] = (17633u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08844D18;
      }
      goto L_08844C28;
    }
L_08844C28:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7576));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844C34;
    }
L_08844C34:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7584));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844C40;
    }
L_08844C40:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7592));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844C4C;
    }
L_08844C4C:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7600));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844C58;
    }
L_08844C58:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7608));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844C64;
    }
L_08844C64:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7616));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844C70;
    }
L_08844C70:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7624));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844C7C;
    }
L_08844C7C:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7632));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844C88;
    }
L_08844C88:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7640));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844C94;
    }
L_08844C94:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7648));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844CA0;
    }
L_08844CA0:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7656));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844CAC;
    }
L_08844CAC:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7664));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844CB8;
    }
L_08844CB8:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7672));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844CC4;
    }
L_08844CC4:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7680));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844CD0;
    }
L_08844CD0:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7688));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844CDC;
    }
L_08844CDC:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7696));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844CE8;
    }
L_08844CE8:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7704));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844CF4;
    }
L_08844CF4:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7712));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844D00;
    }
L_08844D00:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7720));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844D0C;
    }
L_08844D0C:
    ctx.gpr[2] = (2225u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7728));
      if (branch_taken) {
          goto L_08844D20;
      }
      goto L_08844D18;
    }
L_08844D18:
    ctx.gpr[2] = (2225u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7568));
    goto L_08844D20;
L_08844D20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844D28:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (0u | 5000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7536)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7276)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7532)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7572)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7452)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7440)));
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7436)));
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25650)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7576)));
    ctx.gpr[8] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7564)));
      if (branch_taken) {
          goto L_08844E2C;
      }
      goto L_08844E24;
    }
L_08844E24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08844E48;
      }
      goto L_08844E2C;
    }
L_08844E2C:
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_08844E40;
    }
    goto L_08844E40;
L_08844E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08844E60;
      }
      goto L_08844E48;
    }
L_08844E48:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08844E5C;
    }
    goto L_08844E5C;
L_08844E5C:
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    goto L_08844E60;
L_08844E60:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08844EA4;
      }
      goto L_08844E6C;
    }
L_08844E6C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7556)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08844EA4;
L_08844EA4:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08844EE0;
      }
      goto L_08844EB8;
    }
L_08844EB8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7568)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08844EE0;
L_08844EE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844EE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7564)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[13])) && ctx.fpr[14] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08844F10;
      }
      goto L_08844F08;
    }
L_08844F08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844F20;
      }
      goto L_08844F10;
    }
L_08844F10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7568)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    goto L_08844F20;
L_08844F20:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08844F34;
    }
    goto L_08844F34;
L_08844F34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844F3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7428)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7428), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844F50:
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7416), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844F5C:
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7412), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844F68:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7400)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844F84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7280)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7276)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7280), 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7276), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844FA4:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7280), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844FB0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7192)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08844FCC;
      }
      goto L_08844FC4;
    }
L_08844FC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7192), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08844FDC;
      }
      goto L_08844FCC;
    }
L_08844FCC:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_08844FD8;
    }
    goto L_08844FD8;
L_08844FD8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7192), ctx.gpr[6]);
    goto L_08844FDC;
L_08844FDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844FE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7176)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7176), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844FF8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845014;
      }
      goto L_0884500C;
    }
L_0884500C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7156), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08845024;
      }
      goto L_08845014;
    }
L_08845014:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_08845020;
    }
    goto L_08845020;
L_08845020:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7156), ctx.gpr[6]);
    goto L_08845024;
L_08845024:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884502C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7144)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845044;
      }
      goto L_08845040;
    }
L_08845040:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7144), ctx.gpr[4]);
    goto L_08845044;
L_08845044:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884504C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7152)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845068;
      }
      goto L_08845060;
    }
L_08845060:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7152), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08845078;
      }
      goto L_08845068;
    }
L_08845068:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_08845074;
    }
    goto L_08845074;
L_08845074:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7152), ctx.gpr[6]);
    goto L_08845078;
L_08845078:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845080:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884509C;
      }
      goto L_08845094;
    }
L_08845094:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7140), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088450AC;
      }
      goto L_0884509C;
    }
L_0884509C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_088450A8;
    }
    goto L_088450A8;
L_088450A8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7140), ctx.gpr[6]);
    goto L_088450AC;
L_088450AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088450B4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7136)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_088450CC;
    }
    goto L_088450CC;
L_088450CC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7136), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088450D4:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5832));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088450F8;
      }
      goto L_088450F0;
    }
L_088450F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08845110;
      }
      goto L_088450F8;
    }
L_088450F8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_0884510C;
    }
    goto L_0884510C;
L_0884510C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08845110;
L_08845110:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845118:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5816));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08845138;
    }
    goto L_08845138;
L_08845138:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845140:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5800));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08845160;
    }
    goto L_08845160;
L_08845160:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845168:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5776));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884518C;
      }
      goto L_08845184;
    }
L_08845184:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088451A4;
      }
      goto L_0884518C;
    }
L_0884518C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_088451A0;
    }
    goto L_088451A0;
L_088451A0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_088451A4;
L_088451A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088451AC:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5752));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088451D0;
      }
      goto L_088451C8;
    }
L_088451C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088451E8;
      }
      goto L_088451D0;
    }
L_088451D0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_088451E4;
    }
    goto L_088451E4;
L_088451E4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_088451E8;
L_088451E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088451F0:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845214;
      }
      goto L_0884520C;
    }
L_0884520C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0884522C;
      }
      goto L_08845214;
    }
L_08845214:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08845228;
    }
    goto L_08845228;
L_08845228:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0884522C;
L_0884522C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845234:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845258;
      }
      goto L_08845250;
    }
L_08845250:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08845270;
      }
      goto L_08845258;
    }
L_08845258:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_0884526C;
    }
    goto L_0884526C;
L_0884526C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08845270;
L_08845270:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845278:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-5872));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x088452A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 158u, 0x08864B48u>(ctx, &aot_mem) && ctx.pc == 0x088452A4u) goto L_088452A4;
    return;
L_088452A4:
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088452B4;
L_088452B4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088452CC;
      }
      goto L_088452C8;
    }
L_088452C8:
    ctx.gpr[16] = (0u | 0u);
    goto L_088452CC;
L_088452CC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088452B4;
      }
      goto L_088452E0;
    }
L_088452E0:
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
L_088452F8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5872));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845310:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5872)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5872));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08845328;
L_08845328:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08845344;
      }
      goto L_0884533C;
    }
L_0884533C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_08845344;
L_08845344:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08845328;
      }
      goto L_08845354;
    }
L_08845354:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884535C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5872)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5872));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08845374;
L_08845374:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08845390;
      }
      goto L_08845388;
    }
L_08845388:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_08845390;
L_08845390:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08845374;
      }
      goto L_088453A0;
    }
L_088453A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088453A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7384)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088453C4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7364)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7364), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088453E0:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6008));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845410;
      }
      goto L_088453F8;
    }
L_088453F8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7336)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7336), ctx.gpr[4]);
    goto L_08845410;
L_08845410:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845418:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_08845448;
      }
      goto L_08845428;
    }
L_08845428:
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(-7332)));
    ctx.gpr[4] = (ctx.gpr[7] << (ctx.gpr[4] & 31u));
    ctx.gpr[7] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845448;
      }
      goto L_08845440;
    }
L_08845440:
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-7332), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08845448;
L_08845448:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845450:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7328)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7328), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845464:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7324)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884547C;
      }
      goto L_08845478;
    }
L_08845478:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7324), ctx.gpr[4]);
    goto L_0884547C;
L_0884547C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845484:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088454A0;
      }
      goto L_08845490;
    }
L_08845490:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-60));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08845490;
      }
      goto L_088454A0;
    }
L_088454A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088454A8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088454C4;
      }
      goto L_088454B4;
    }
L_088454B4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-60));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088454B4;
      }
      goto L_088454C4;
    }
L_088454C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088454D0;
      }
      goto L_088454CC;
    }
L_088454CC:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    goto L_088454D0;
L_088454D0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088454D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0884554C;
      }
      goto L_08845514;
    }
L_08845514:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884554C;
      }
      goto L_0884551C;
    }
L_0884551C:
    ctx.gpr[21] = (2269u << 16u);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(-5648), static_cast<std::uint16_t>(0u));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[23] = (2269u << 16u);
    ctx.gpr[30] = (2233u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-5648));
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5136));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-4576));
      if (branch_taken) {
          goto L_08845554;
      }
      goto L_08845544;
    }
L_08845544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08845580;
      }
      goto L_0884554C;
    }
L_0884554C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088456AC;
      }
      goto L_08845554;
    }
L_08845554:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08845560u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08845560u) goto L_08845560;
    return;
L_08845560:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845578;
      }
      goto L_0884556C;
    }
L_0884556C:
    ctx.gpr[31] = (0x08845574u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08845574u) goto L_08845574;
    return;
L_08845574:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08845578;
L_08845578:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08845580;
L_08845580:
    ctx.gpr[31] = (0x08845588u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08845588u) goto L_08845588;
    return;
L_08845588:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08845594u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x08845594u) goto L_08845594;
    return;
L_08845594:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08845654;
      }
      goto L_0884559C;
    }
L_0884559C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845654;
      }
      goto L_088455A4;
    }
L_088455A4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088455BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7560));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x088455BCu) goto L_088455BC;
    return;
L_088455BC:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088455E8;
      }
      goto L_088455CC;
    }
L_088455CC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088455D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A541E4u>(ctx, &aot_mem) && ctx.pc == 0x088455D8u) goto L_088455D8;
    return;
L_088455D8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088455CC;
      }
      goto L_088455E8;
    }
L_088455E8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088455F4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x088455F4u) goto L_088455F4;
    return;
L_088455F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
        goto L_0884562C;
    }
    goto L_08845600;
L_08845600:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884560Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884560Cu) goto L_0884560C;
    return;
L_0884560C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845624;
      }
      goto L_08845618;
    }
L_08845618:
    ctx.gpr[31] = (0x08845620u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08845620u) goto L_08845620;
    return;
L_08845620:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08845624;
L_08845624:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    goto L_0884562C;
L_0884562C:
    ctx.gpr[31] = (0x08845634u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08845634u) goto L_08845634;
    return;
L_08845634:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08845640u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 17u, 0x08A541E4u>(ctx, &aot_mem) && ctx.pc == 0x08845640u) goto L_08845640;
    return;
L_08845640:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5136));
    ctx.gpr[31] = (0x0884564Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 588u, 0x08ADA6F4u>(ctx, &aot_mem) && ctx.pc == 0x0884564Cu) goto L_0884564C;
    return;
L_0884564C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088456AC;
      }
      goto L_08845654;
    }
L_08845654:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
        goto L_0884568C;
    }
    goto L_08845660;
L_08845660:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884566Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884566Cu) goto L_0884566C;
    return;
L_0884566C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845684;
      }
      goto L_08845678;
    }
L_08845678:
    ctx.gpr[31] = (0x08845680u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08845680u) goto L_08845680;
    return;
L_08845680:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08845684;
L_08845684:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    goto L_0884568C;
L_0884568C:
    ctx.gpr[31] = (0x08845694u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08845694u) goto L_08845694;
    return;
L_08845694:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088456A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x088456A0u) goto L_088456A0;
    return;
L_088456A0:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5136));
    ctx.gpr[31] = (0x088456ACu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 588u, 0x08ADA6F4u>(ctx, &aot_mem) && ctx.pc == 0x088456ACu) goto L_088456AC;
    return;
L_088456AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088456DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7588), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7592), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7584), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7580), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7576), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[16] = (32768u << 16u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (2269u << 16u);
    ctx.gpr[9] = (2269u << 16u);
    ctx.gpr[10] = (2269u << 16u);
    ctx.gpr[11] = (2269u << 16u);
    ctx.gpr[2] = (2269u << 16u);
    ctx.gpr[3] = (2269u << 16u);
    ctx.gpr[12] = (2269u << 16u);
    ctx.gpr[13] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6104));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5896));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-7292));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-5832));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-5816));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-5800));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-5776));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-5752));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-5728));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-5688));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    goto L_08845774;
L_08845774:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[13]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08845774;
      }
      goto L_08845788;
    }
L_08845788:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7572), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7560), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7556), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7824), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7552), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7548), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7544), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7540), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7536), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7532), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7644), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7528), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7524), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7512), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7508), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7504), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7500), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7496), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7492), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7488), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7484), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7480), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7476), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7444), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7452), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7440), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7436), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7448), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7432), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7428), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7424), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7420), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7416), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7412), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7408), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7404), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7364), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7348), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7320), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7316), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7312), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7396), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7796), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7284), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088459B8;
L_088459B8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088459B8;
      }
      goto L_088459CC;
    }
L_088459CC:
    ctx.gpr[4] = (0u | 0u);
    goto L_088459D0;
L_088459D0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088459D0;
      }
      goto L_088459E4;
    }
L_088459E4:
    ctx.gpr[4] = (0u | 0u);
    goto L_088459E8;
L_088459E8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088459E8;
      }
      goto L_088459FC;
    }
L_088459FC:
    ctx.gpr[4] = (0u | 0u);
    goto L_08845A00;
L_08845A00:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08845A00;
      }
      goto L_08845A14;
    }
L_08845A14:
    ctx.gpr[4] = (0u | 0u);
    goto L_08845A18;
L_08845A18:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08845A18;
      }
      goto L_08845A2C;
    }
L_08845A2C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08845A30;
L_08845A30:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08845A30;
      }
      goto L_08845A44;
    }
L_08845A44:
    ctx.gpr[4] = (0u | 0u);
    goto L_08845A48;
L_08845A48:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08845A48;
      }
      goto L_08845A5C;
    }
L_08845A5C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08845A60;
L_08845A60:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08845A60;
      }
      goto L_08845A74;
    }
L_08845A74:
    ctx.gpr[4] = (0u | 0u);
    goto L_08845A78;
L_08845A78:
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08845A78;
      }
      goto L_08845A8C;
    }
L_08845A8C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08845A90;
L_08845A90:
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08845A90;
      }
      goto L_08845AA4;
    }
L_08845AA4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7280), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7276), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7272));
    goto L_08845AC0;
L_08845AC0:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845AC0;
      }
      goto L_08845AD8;
    }
L_08845AD8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7264), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7260), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7256), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7252), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7248), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7244), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7240));
    goto L_08845B14;
L_08845B14:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845B14;
      }
      goto L_08845B2C;
    }
L_08845B2C:
    ctx.gpr[31] = (0x08845B34u);
    // nop
    goto L_08845278;
L_08845B34:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7336), 0u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6008));
    goto L_08845B48;
L_08845B48:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845B48;
      }
      goto L_08845B60;
    }
L_08845B60:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7332), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7328), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7324), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7236), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7232), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7228), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7224), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7220), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7216), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7212), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7208), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7204), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7200), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7196), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7192), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7188), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7184), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7180), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7176), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7172), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7168), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7164), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7160), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7156), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7152), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7144), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7148), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7140), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7136), ctx.gpr[16]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7132), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845C60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08845C78u);
    // nop
    goto L_08844D28;
L_08845C78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08845E6C;
      }
      goto L_08845C84;
    }
L_08845C84:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -499 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845CE8;
      }
      goto L_08845C90;
    }
L_08845C90:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08845CD0;
      }
      goto L_08845CA0;
    }
L_08845CA0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08845CACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08845CACu) goto L_08845CAC;
    return;
L_08845CAC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845CC4;
      }
      goto L_08845CB8;
    }
L_08845CB8:
    ctx.gpr[31] = (0x08845CC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08845CC0u) goto L_08845CC0;
    return;
L_08845CC0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08845CC4;
L_08845CC4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08845CD0;
L_08845CD0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08845CE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7548));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08845CE0u) goto L_08845CE0;
    return;
L_08845CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08845CE8;
    }
L_08845CE8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1999 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845D4C;
      }
      goto L_08845CF4;
    }
L_08845CF4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08845D34;
      }
      goto L_08845D04;
    }
L_08845D04:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08845D10u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08845D10u) goto L_08845D10;
    return;
L_08845D10:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845D28;
      }
      goto L_08845D1C;
    }
L_08845D1C:
    ctx.gpr[31] = (0x08845D24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08845D24u) goto L_08845D24;
    return;
L_08845D24:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08845D28;
L_08845D28:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08845D34;
L_08845D34:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08845D44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7540));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08845D44u) goto L_08845D44;
    return;
L_08845D44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08845D4C;
    }
L_08845D4C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -3999 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845DB0;
      }
      goto L_08845D58;
    }
L_08845D58:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08845D98;
      }
      goto L_08845D68;
    }
L_08845D68:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08845D74u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08845D74u) goto L_08845D74;
    return;
L_08845D74:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845D8C;
      }
      goto L_08845D80;
    }
L_08845D80:
    ctx.gpr[31] = (0x08845D88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08845D88u) goto L_08845D88;
    return;
L_08845D88:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08845D8C;
L_08845D8C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08845D98;
L_08845D98:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08845DA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7532));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08845DA8u) goto L_08845DA8;
    return;
L_08845DA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08845DB0;
    }
L_08845DB0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -5999 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845E14;
      }
      goto L_08845DBC;
    }
L_08845DBC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08845DFC;
      }
      goto L_08845DCC;
    }
L_08845DCC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08845DD8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08845DD8u) goto L_08845DD8;
    return;
L_08845DD8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845DF0;
      }
      goto L_08845DE4;
    }
L_08845DE4:
    ctx.gpr[31] = (0x08845DECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08845DECu) goto L_08845DEC;
    return;
L_08845DEC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08845DF0;
L_08845DF0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08845DFC;
L_08845DFC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08845E0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7524));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08845E0Cu) goto L_08845E0C;
    return;
L_08845E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08845E14;
    }
L_08845E14:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08845E54;
      }
      goto L_08845E24;
    }
L_08845E24:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08845E30u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08845E30u) goto L_08845E30;
    return;
L_08845E30:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845E48;
      }
      goto L_08845E3C;
    }
L_08845E3C:
    ctx.gpr[31] = (0x08845E44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08845E44u) goto L_08845E44;
    return;
L_08845E44:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08845E48;
L_08845E48:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08845E54;
L_08845E54:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08845E64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7516));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08845E64u) goto L_08845E64;
    return;
L_08845E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08845E6C;
    }
L_08845E6C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845ED0;
      }
      goto L_08845E78;
    }
L_08845E78:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08845EB8;
      }
      goto L_08845E88;
    }
L_08845E88:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08845E94u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08845E94u) goto L_08845E94;
    return;
L_08845E94:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845EAC;
      }
      goto L_08845EA0;
    }
L_08845EA0:
    ctx.gpr[31] = (0x08845EA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08845EA8u) goto L_08845EA8;
    return;
L_08845EA8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08845EAC;
L_08845EAC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08845EB8;
L_08845EB8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08845EC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7508));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08845EC8u) goto L_08845EC8;
    return;
L_08845EC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08845ED0;
    }
L_08845ED0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845F34;
      }
      goto L_08845EDC;
    }
L_08845EDC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08845F1C;
      }
      goto L_08845EEC;
    }
L_08845EEC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08845EF8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08845EF8u) goto L_08845EF8;
    return;
L_08845EF8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845F10;
      }
      goto L_08845F04;
    }
L_08845F04:
    ctx.gpr[31] = (0x08845F0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08845F0Cu) goto L_08845F0C;
    return;
L_08845F0C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08845F10;
L_08845F10:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08845F1C;
L_08845F1C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08845F2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7500));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08845F2Cu) goto L_08845F2C;
    return;
L_08845F2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08845F34;
    }
L_08845F34:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845F98;
      }
      goto L_08845F40;
    }
L_08845F40:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08845F80;
      }
      goto L_08845F50;
    }
L_08845F50:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08845F5Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08845F5Cu) goto L_08845F5C;
    return;
L_08845F5C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845F74;
      }
      goto L_08845F68;
    }
L_08845F68:
    ctx.gpr[31] = (0x08845F70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08845F70u) goto L_08845F70;
    return;
L_08845F70:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08845F74;
L_08845F74:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08845F80;
L_08845F80:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08845F90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7492));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08845F90u) goto L_08845F90;
    return;
L_08845F90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08845F98;
    }
L_08845F98:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845FFC;
      }
      goto L_08845FA4;
    }
L_08845FA4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08845FE4;
      }
      goto L_08845FB4;
    }
L_08845FB4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08845FC0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08845FC0u) goto L_08845FC0;
    return;
L_08845FC0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845FD8;
      }
      goto L_08845FCC;
    }
L_08845FCC:
    ctx.gpr[31] = (0x08845FD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08845FD4u) goto L_08845FD4;
    return;
L_08845FD4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08845FD8;
L_08845FD8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08845FE4;
L_08845FE4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08845FF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7484));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08845FF4u) goto L_08845FF4;
    return;
L_08845FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08845FFC;
    }
L_08845FFC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 120 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846060;
      }
      goto L_08846008;
    }
L_08846008:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846048;
      }
      goto L_08846018;
    }
L_08846018:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846024u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846024u) goto L_08846024;
    return;
L_08846024:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884603C;
      }
      goto L_08846030;
    }
L_08846030:
    ctx.gpr[31] = (0x08846038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846038u) goto L_08846038;
    return;
L_08846038:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0884603C;
L_0884603C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846048;
L_08846048:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846058u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7476));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846058u) goto L_08846058;
    return;
L_08846058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846060;
    }
L_08846060:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088460C4;
      }
      goto L_0884606C;
    }
L_0884606C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088460AC;
      }
      goto L_0884607C;
    }
L_0884607C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846088u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846088u) goto L_08846088;
    return;
L_08846088:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088460A0;
      }
      goto L_08846094;
    }
L_08846094:
    ctx.gpr[31] = (0x0884609Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884609Cu) goto L_0884609C;
    return;
L_0884609C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088460A0;
L_088460A0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088460AC;
L_088460AC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x088460BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7468));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088460BCu) goto L_088460BC;
    return;
L_088460BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_088460C4;
    }
L_088460C4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846128;
      }
      goto L_088460D0;
    }
L_088460D0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846110;
      }
      goto L_088460E0;
    }
L_088460E0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088460ECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088460ECu) goto L_088460EC;
    return;
L_088460EC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846104;
      }
      goto L_088460F8;
    }
L_088460F8:
    ctx.gpr[31] = (0x08846100u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846100u) goto L_08846100;
    return;
L_08846100:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846104;
L_08846104:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846110;
L_08846110:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846120u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7460));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846120u) goto L_08846120;
    return;
L_08846120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846128;
    }
L_08846128:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 240 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884618C;
      }
      goto L_08846134;
    }
L_08846134:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846174;
      }
      goto L_08846144;
    }
L_08846144:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846150u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846150u) goto L_08846150;
    return;
L_08846150:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846168;
      }
      goto L_0884615C;
    }
L_0884615C:
    ctx.gpr[31] = (0x08846164u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846164u) goto L_08846164;
    return;
L_08846164:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846168;
L_08846168:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846174;
L_08846174:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846184u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7452));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846184u) goto L_08846184;
    return;
L_08846184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_0884618C;
    }
L_0884618C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 270 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088461F0;
      }
      goto L_08846198;
    }
L_08846198:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088461D8;
      }
      goto L_088461A8;
    }
L_088461A8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088461B4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088461B4u) goto L_088461B4;
    return;
L_088461B4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088461CC;
      }
      goto L_088461C0;
    }
L_088461C0:
    ctx.gpr[31] = (0x088461C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088461C8u) goto L_088461C8;
    return;
L_088461C8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088461CC;
L_088461CC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088461D8;
L_088461D8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x088461E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7444));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088461E8u) goto L_088461E8;
    return;
L_088461E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_088461F0;
    }
L_088461F0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 300 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846254;
      }
      goto L_088461FC;
    }
L_088461FC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0884623C;
      }
      goto L_0884620C;
    }
L_0884620C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846218u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846218u) goto L_08846218;
    return;
L_08846218:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846230;
      }
      goto L_08846224;
    }
L_08846224:
    ctx.gpr[31] = (0x0884622Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884622Cu) goto L_0884622C;
    return;
L_0884622C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846230;
L_08846230:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0884623C;
L_0884623C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884624Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7436));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884624Cu) goto L_0884624C;
    return;
L_0884624C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846254;
    }
L_08846254:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 335 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088462B8;
      }
      goto L_08846260;
    }
L_08846260:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088462A0;
      }
      goto L_08846270;
    }
L_08846270:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0884627Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884627Cu) goto L_0884627C;
    return;
L_0884627C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846294;
      }
      goto L_08846288;
    }
L_08846288:
    ctx.gpr[31] = (0x08846290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846290u) goto L_08846290;
    return;
L_08846290:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846294;
L_08846294:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088462A0;
L_088462A0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x088462B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7428));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088462B0u) goto L_088462B0;
    return;
L_088462B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_088462B8;
    }
L_088462B8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 370 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884631C;
      }
      goto L_088462C4;
    }
L_088462C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846304;
      }
      goto L_088462D4;
    }
L_088462D4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088462E0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088462E0u) goto L_088462E0;
    return;
L_088462E0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088462F8;
      }
      goto L_088462EC;
    }
L_088462EC:
    ctx.gpr[31] = (0x088462F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088462F4u) goto L_088462F4;
    return;
L_088462F4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088462F8;
L_088462F8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846304;
L_08846304:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846314u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7420));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846314u) goto L_08846314;
    return;
L_08846314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_0884631C;
    }
L_0884631C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 400 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846380;
      }
      goto L_08846328;
    }
L_08846328:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846368;
      }
      goto L_08846338;
    }
L_08846338:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846344u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846344u) goto L_08846344;
    return;
L_08846344:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884635C;
      }
      goto L_08846350;
    }
L_08846350:
    ctx.gpr[31] = (0x08846358u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846358u) goto L_08846358;
    return;
L_08846358:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0884635C;
L_0884635C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846368;
L_08846368:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846378u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7412));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846378u) goto L_08846378;
    return;
L_08846378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846380;
    }
L_08846380:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 450 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088463E4;
      }
      goto L_0884638C;
    }
L_0884638C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088463CC;
      }
      goto L_0884639C;
    }
L_0884639C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088463A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088463A8u) goto L_088463A8;
    return;
L_088463A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088463C0;
      }
      goto L_088463B4;
    }
L_088463B4:
    ctx.gpr[31] = (0x088463BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088463BCu) goto L_088463BC;
    return;
L_088463BC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088463C0;
L_088463C0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088463CC;
L_088463CC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x088463DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7404));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088463DCu) goto L_088463DC;
    return;
L_088463DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_088463E4;
    }
L_088463E4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846448;
      }
      goto L_088463F0;
    }
L_088463F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846430;
      }
      goto L_08846400;
    }
L_08846400:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0884640Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884640Cu) goto L_0884640C;
    return;
L_0884640C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846424;
      }
      goto L_08846418;
    }
L_08846418:
    ctx.gpr[31] = (0x08846420u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846420u) goto L_08846420;
    return;
L_08846420:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846424;
L_08846424:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846430;
L_08846430:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846440u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7396));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846440u) goto L_08846440;
    return;
L_08846440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846448;
    }
L_08846448:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 550 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088464AC;
      }
      goto L_08846454;
    }
L_08846454:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846494;
      }
      goto L_08846464;
    }
L_08846464:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846470u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846470u) goto L_08846470;
    return;
L_08846470:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846488;
      }
      goto L_0884647C;
    }
L_0884647C:
    ctx.gpr[31] = (0x08846484u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846484u) goto L_08846484;
    return;
L_08846484:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846488;
L_08846488:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846494;
L_08846494:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x088464A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7388));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088464A4u) goto L_088464A4;
    return;
L_088464A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_088464AC;
    }
L_088464AC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 600 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846510;
      }
      goto L_088464B8;
    }
L_088464B8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088464F8;
      }
      goto L_088464C8;
    }
L_088464C8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088464D4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088464D4u) goto L_088464D4;
    return;
L_088464D4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088464EC;
      }
      goto L_088464E0;
    }
L_088464E0:
    ctx.gpr[31] = (0x088464E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088464E8u) goto L_088464E8;
    return;
L_088464E8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088464EC;
L_088464EC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088464F8;
L_088464F8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846508u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7380));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846508u) goto L_08846508;
    return;
L_08846508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846510;
    }
L_08846510:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 610 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846574;
      }
      goto L_0884651C;
    }
L_0884651C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0884655C;
      }
      goto L_0884652C;
    }
L_0884652C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846538u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846538u) goto L_08846538;
    return;
L_08846538:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846550;
      }
      goto L_08846544;
    }
L_08846544:
    ctx.gpr[31] = (0x0884654Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884654Cu) goto L_0884654C;
    return;
L_0884654C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846550;
L_08846550:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0884655C;
L_0884655C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884656Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7372));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884656Cu) goto L_0884656C;
    return;
L_0884656C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846574;
    }
L_08846574:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 650 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088465D8;
      }
      goto L_08846580;
    }
L_08846580:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088465C0;
      }
      goto L_08846590;
    }
L_08846590:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0884659Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884659Cu) goto L_0884659C;
    return;
L_0884659C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088465B4;
      }
      goto L_088465A8;
    }
L_088465A8:
    ctx.gpr[31] = (0x088465B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088465B0u) goto L_088465B0;
    return;
L_088465B0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088465B4;
L_088465B4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088465C0;
L_088465C0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x088465D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7364));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088465D0u) goto L_088465D0;
    return;
L_088465D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_088465D8;
    }
L_088465D8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 700 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884663C;
      }
      goto L_088465E4;
    }
L_088465E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846624;
      }
      goto L_088465F4;
    }
L_088465F4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846600u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846600u) goto L_08846600;
    return;
L_08846600:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846618;
      }
      goto L_0884660C;
    }
L_0884660C:
    ctx.gpr[31] = (0x08846614u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846614u) goto L_08846614;
    return;
L_08846614:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846618;
L_08846618:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846624;
L_08846624:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846634u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7356));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846634u) goto L_08846634;
    return;
L_08846634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_0884663C;
    }
L_0884663C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 850 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088466A0;
      }
      goto L_08846648;
    }
L_08846648:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846688;
      }
      goto L_08846658;
    }
L_08846658:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846664u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846664u) goto L_08846664;
    return;
L_08846664:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884667C;
      }
      goto L_08846670;
    }
L_08846670:
    ctx.gpr[31] = (0x08846678u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846678u) goto L_08846678;
    return;
L_08846678:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0884667C;
L_0884667C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846688;
L_08846688:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846698u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7348));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846698u) goto L_08846698;
    return;
L_08846698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_088466A0;
    }
L_088466A0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846704;
      }
      goto L_088466AC;
    }
L_088466AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088466EC;
      }
      goto L_088466BC;
    }
L_088466BC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088466C8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088466C8u) goto L_088466C8;
    return;
L_088466C8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088466E0;
      }
      goto L_088466D4;
    }
L_088466D4:
    ctx.gpr[31] = (0x088466DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088466DCu) goto L_088466DC;
    return;
L_088466DC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088466E0;
L_088466E0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088466EC;
L_088466EC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x088466FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7340));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088466FCu) goto L_088466FC;
    return;
L_088466FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846704;
    }
L_08846704:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1005 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846768;
      }
      goto L_08846710;
    }
L_08846710:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846750;
      }
      goto L_08846720;
    }
L_08846720:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0884672Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884672Cu) goto L_0884672C;
    return;
L_0884672C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846744;
      }
      goto L_08846738;
    }
L_08846738:
    ctx.gpr[31] = (0x08846740u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846740u) goto L_08846740;
    return;
L_08846740:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846744;
L_08846744:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846750;
L_08846750:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846760u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7332));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846760u) goto L_08846760;
    return;
L_08846760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846768;
    }
L_08846768:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088467CC;
      }
      goto L_08846774;
    }
L_08846774:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088467B4;
      }
      goto L_08846784;
    }
L_08846784:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846790u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846790u) goto L_08846790;
    return;
L_08846790:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088467A8;
      }
      goto L_0884679C;
    }
L_0884679C:
    ctx.gpr[31] = (0x088467A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088467A4u) goto L_088467A4;
    return;
L_088467A4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088467A8;
L_088467A8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088467B4;
L_088467B4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x088467C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7324));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088467C4u) goto L_088467C4;
    return;
L_088467C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_088467CC;
    }
L_088467CC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1300 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846898;
      }
      goto L_088467D8;
    }
L_088467D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7536)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08846840;
      }
      goto L_088467E8;
    }
L_088467E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846828;
      }
      goto L_088467F8;
    }
L_088467F8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846804u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846804u) goto L_08846804;
    return;
L_08846804:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884681C;
      }
      goto L_08846810;
    }
L_08846810:
    ctx.gpr[31] = (0x08846818u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846818u) goto L_08846818;
    return;
L_08846818:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0884681C;
L_0884681C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846828;
L_08846828:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846838u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7316));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846838u) goto L_08846838;
    return;
L_08846838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846840;
    }
L_08846840:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846880;
      }
      goto L_08846850;
    }
L_08846850:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0884685Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884685Cu) goto L_0884685C;
    return;
L_0884685C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846874;
      }
      goto L_08846868;
    }
L_08846868:
    ctx.gpr[31] = (0x08846870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846870u) goto L_08846870;
    return;
L_08846870:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846874;
L_08846874:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846880;
L_08846880:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846890u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7324));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846890u) goto L_08846890;
    return;
L_08846890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846898;
    }
L_08846898:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088468FC;
      }
      goto L_088468A4;
    }
L_088468A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088468E4;
      }
      goto L_088468B4;
    }
L_088468B4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088468C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088468C0u) goto L_088468C0;
    return;
L_088468C0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088468D8;
      }
      goto L_088468CC;
    }
L_088468CC:
    ctx.gpr[31] = (0x088468D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088468D4u) goto L_088468D4;
    return;
L_088468D4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088468D8;
L_088468D8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088468E4;
L_088468E4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x088468F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7308));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088468F4u) goto L_088468F4;
    return;
L_088468F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_088468FC;
    }
L_088468FC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1700 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846960;
      }
      goto L_08846908;
    }
L_08846908:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846948;
      }
      goto L_08846918;
    }
L_08846918:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846924u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846924u) goto L_08846924;
    return;
L_08846924:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884693C;
      }
      goto L_08846930;
    }
L_08846930:
    ctx.gpr[31] = (0x08846938u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846938u) goto L_08846938;
    return;
L_08846938:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0884693C;
L_0884693C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846948;
L_08846948:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846958u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7300));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846958u) goto L_08846958;
    return;
L_08846958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846960;
    }
L_08846960:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088469C4;
      }
      goto L_0884696C;
    }
L_0884696C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088469AC;
      }
      goto L_0884697C;
    }
L_0884697C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846988u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846988u) goto L_08846988;
    return;
L_08846988:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088469A0;
      }
      goto L_08846994;
    }
L_08846994:
    ctx.gpr[31] = (0x0884699Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884699Cu) goto L_0884699C;
    return;
L_0884699C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088469A0;
L_088469A0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088469AC;
L_088469AC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x088469BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7292));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088469BCu) goto L_088469BC;
    return;
L_088469BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_088469C4;
    }
L_088469C4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846A28;
      }
      goto L_088469D0;
    }
L_088469D0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846A10;
      }
      goto L_088469E0;
    }
L_088469E0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088469ECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088469ECu) goto L_088469EC;
    return;
L_088469EC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846A04;
      }
      goto L_088469F8;
    }
L_088469F8:
    ctx.gpr[31] = (0x08846A00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846A00u) goto L_08846A00;
    return;
L_08846A00:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846A04;
L_08846A04:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846A10;
L_08846A10:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846A20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7284));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846A20u) goto L_08846A20;
    return;
L_08846A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846A28;
    }
L_08846A28:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2300 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846A8C;
      }
      goto L_08846A34;
    }
L_08846A34:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846A74;
      }
      goto L_08846A44;
    }
L_08846A44:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846A50u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846A50u) goto L_08846A50;
    return;
L_08846A50:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846A68;
      }
      goto L_08846A5C;
    }
L_08846A5C:
    ctx.gpr[31] = (0x08846A64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846A64u) goto L_08846A64;
    return;
L_08846A64:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846A68;
L_08846A68:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846A74;
L_08846A74:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846A84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7276));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846A84u) goto L_08846A84;
    return;
L_08846A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846A8C;
    }
L_08846A8C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846AF0;
      }
      goto L_08846A98;
    }
L_08846A98:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846AD8;
      }
      goto L_08846AA8;
    }
L_08846AA8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846AB4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846AB4u) goto L_08846AB4;
    return;
L_08846AB4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846ACC;
      }
      goto L_08846AC0;
    }
L_08846AC0:
    ctx.gpr[31] = (0x08846AC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846AC8u) goto L_08846AC8;
    return;
L_08846AC8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846ACC;
L_08846ACC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846AD8;
L_08846AD8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846AE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7268));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846AE8u) goto L_08846AE8;
    return;
L_08846AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846AF0;
    }
L_08846AF0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2750 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846B54;
      }
      goto L_08846AFC;
    }
L_08846AFC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846B3C;
      }
      goto L_08846B0C;
    }
L_08846B0C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846B18u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846B18u) goto L_08846B18;
    return;
L_08846B18:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846B30;
      }
      goto L_08846B24;
    }
L_08846B24:
    ctx.gpr[31] = (0x08846B2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846B2Cu) goto L_08846B2C;
    return;
L_08846B2C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846B30;
L_08846B30:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846B3C;
L_08846B3C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846B4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7260));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846B4Cu) goto L_08846B4C;
    return;
L_08846B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846B54;
    }
L_08846B54:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846BB8;
      }
      goto L_08846B60;
    }
L_08846B60:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846BA0;
      }
      goto L_08846B70;
    }
L_08846B70:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846B7Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846B7Cu) goto L_08846B7C;
    return;
L_08846B7C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846B94;
      }
      goto L_08846B88;
    }
L_08846B88:
    ctx.gpr[31] = (0x08846B90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846B90u) goto L_08846B90;
    return;
L_08846B90:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846B94;
L_08846B94:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846BA0;
L_08846BA0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846BB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7252));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846BB0u) goto L_08846BB0;
    return;
L_08846BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846BB8;
    }
L_08846BB8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846C1C;
      }
      goto L_08846BC4;
    }
L_08846BC4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846C04;
      }
      goto L_08846BD4;
    }
L_08846BD4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846BE0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846BE0u) goto L_08846BE0;
    return;
L_08846BE0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846BF8;
      }
      goto L_08846BEC;
    }
L_08846BEC:
    ctx.gpr[31] = (0x08846BF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846BF4u) goto L_08846BF4;
    return;
L_08846BF4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846BF8;
L_08846BF8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846C04;
L_08846C04:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846C14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7244));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846C14u) goto L_08846C14;
    return;
L_08846C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846C1C;
    }
L_08846C1C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846C80;
      }
      goto L_08846C28;
    }
L_08846C28:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846C68;
      }
      goto L_08846C38;
    }
L_08846C38:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846C44u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846C44u) goto L_08846C44;
    return;
L_08846C44:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846C5C;
      }
      goto L_08846C50;
    }
L_08846C50:
    ctx.gpr[31] = (0x08846C58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846C58u) goto L_08846C58;
    return;
L_08846C58:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846C5C;
L_08846C5C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846C68;
L_08846C68:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846C78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7236));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846C78u) goto L_08846C78;
    return;
L_08846C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846C80;
    }
L_08846C80:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846CE4;
      }
      goto L_08846C8C;
    }
L_08846C8C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846CCC;
      }
      goto L_08846C9C;
    }
L_08846C9C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846CA8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846CA8u) goto L_08846CA8;
    return;
L_08846CA8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846CC0;
      }
      goto L_08846CB4;
    }
L_08846CB4:
    ctx.gpr[31] = (0x08846CBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846CBCu) goto L_08846CBC;
    return;
L_08846CBC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846CC0;
L_08846CC0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846CCC;
L_08846CCC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846CDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7228));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846CDCu) goto L_08846CDC;
    return;
L_08846CDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846CE4;
    }
L_08846CE4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846D48;
      }
      goto L_08846CF0;
    }
L_08846CF0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846D30;
      }
      goto L_08846D00;
    }
L_08846D00:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846D0Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846D0Cu) goto L_08846D0C;
    return;
L_08846D0C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846D24;
      }
      goto L_08846D18;
    }
L_08846D18:
    ctx.gpr[31] = (0x08846D20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846D20u) goto L_08846D20;
    return;
L_08846D20:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846D24;
L_08846D24:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846D30;
L_08846D30:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846D40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7220));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846D40u) goto L_08846D40;
    return;
L_08846D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846D48;
    }
L_08846D48:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846DAC;
      }
      goto L_08846D54;
    }
L_08846D54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846D94;
      }
      goto L_08846D64;
    }
L_08846D64:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846D70u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846D70u) goto L_08846D70;
    return;
L_08846D70:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846D88;
      }
      goto L_08846D7C;
    }
L_08846D7C:
    ctx.gpr[31] = (0x08846D84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846D84u) goto L_08846D84;
    return;
L_08846D84:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846D88;
L_08846D88:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846D94;
L_08846D94:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846DA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7212));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846DA4u) goto L_08846DA4;
    return;
L_08846DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846DAC;
    }
L_08846DAC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846E10;
      }
      goto L_08846DB8;
    }
L_08846DB8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846DF8;
      }
      goto L_08846DC8;
    }
L_08846DC8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846DD4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846DD4u) goto L_08846DD4;
    return;
L_08846DD4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846DEC;
      }
      goto L_08846DE0;
    }
L_08846DE0:
    ctx.gpr[31] = (0x08846DE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846DE8u) goto L_08846DE8;
    return;
L_08846DE8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846DEC;
L_08846DEC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846DF8;
L_08846DF8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846E08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7204));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846E08u) goto L_08846E08;
    return;
L_08846E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846E10;
    }
L_08846E10:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 30000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846E74;
      }
      goto L_08846E1C;
    }
L_08846E1C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846E5C;
      }
      goto L_08846E2C;
    }
L_08846E2C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846E38u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846E38u) goto L_08846E38;
    return;
L_08846E38:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846E50;
      }
      goto L_08846E44;
    }
L_08846E44:
    ctx.gpr[31] = (0x08846E4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846E4Cu) goto L_08846E4C;
    return;
L_08846E4C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846E50;
L_08846E50:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846E5C;
L_08846E5C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846E6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7196));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846E6Cu) goto L_08846E6C;
    return;
L_08846E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846E74;
    }
L_08846E74:
    ctx.gpr[5] = (0u | 40000u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846EDC;
      }
      goto L_08846E84;
    }
L_08846E84:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846EC4;
      }
      goto L_08846E94;
    }
L_08846E94:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846EA0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846EA0u) goto L_08846EA0;
    return;
L_08846EA0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846EB8;
      }
      goto L_08846EAC;
    }
L_08846EAC:
    ctx.gpr[31] = (0x08846EB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846EB4u) goto L_08846EB4;
    return;
L_08846EB4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846EB8;
L_08846EB8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846EC4;
L_08846EC4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846ED4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7188));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846ED4u) goto L_08846ED4;
    return;
L_08846ED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846EDC;
    }
L_08846EDC:
    ctx.gpr[5] = (0u | 50000u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846F44;
      }
      goto L_08846EEC;
    }
L_08846EEC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846F2C;
      }
      goto L_08846EFC;
    }
L_08846EFC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846F08u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846F08u) goto L_08846F08;
    return;
L_08846F08:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846F20;
      }
      goto L_08846F14;
    }
L_08846F14:
    ctx.gpr[31] = (0x08846F1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846F1Cu) goto L_08846F1C;
    return;
L_08846F1C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846F20;
L_08846F20:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846F2C;
L_08846F2C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846F3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7180));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846F3Cu) goto L_08846F3C;
    return;
L_08846F3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846F44;
    }
L_08846F44:
    ctx.gpr[5] = (0u | 65000u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846FAC;
      }
      goto L_08846F54;
    }
L_08846F54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08846F94;
      }
      goto L_08846F64;
    }
L_08846F64:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846F70u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846F70u) goto L_08846F70;
    return;
L_08846F70:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846F88;
      }
      goto L_08846F7C;
    }
L_08846F7C:
    ctx.gpr[31] = (0x08846F84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846F84u) goto L_08846F84;
    return;
L_08846F84:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846F88;
L_08846F88:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08846F94;
L_08846F94:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08846FA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7172));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08846FA4u) goto L_08846FA4;
    return;
L_08846FA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08846FAC;
    }
L_08846FAC:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14464));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847018;
      }
      goto L_08846FC0;
    }
L_08846FC0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08847000;
      }
      goto L_08846FD0;
    }
L_08846FD0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08846FDCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08846FDCu) goto L_08846FDC;
    return;
L_08846FDC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846FF4;
      }
      goto L_08846FE8;
    }
L_08846FE8:
    ctx.gpr[31] = (0x08846FF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08846FF0u) goto L_08846FF0;
    return;
L_08846FF0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08846FF4;
L_08846FF4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08847000;
L_08847000:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08847010u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7164));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08847010u) goto L_08847010;
    return;
L_08847010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08847018;
    }
L_08847018:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847084;
      }
      goto L_0884702C;
    }
L_0884702C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0884706C;
      }
      goto L_0884703C;
    }
L_0884703C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08847048u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08847048u) goto L_08847048;
    return;
L_08847048:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847060;
      }
      goto L_08847054;
    }
L_08847054:
    ctx.gpr[31] = (0x0884705Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884705Cu) goto L_0884705C;
    return;
L_0884705C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08847060;
L_08847060:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0884706C;
L_0884706C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884707Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7156));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884707Cu) goto L_0884707C;
    return;
L_0884707C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08847084;
    }
L_08847084:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18928));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088470F0;
      }
      goto L_08847098;
    }
L_08847098:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088470D8;
      }
      goto L_088470A8;
    }
L_088470A8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088470B4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088470B4u) goto L_088470B4;
    return;
L_088470B4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088470CC;
      }
      goto L_088470C0;
    }
L_088470C0:
    ctx.gpr[31] = (0x088470C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088470C8u) goto L_088470C8;
    return;
L_088470C8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088470CC;
L_088470CC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088470D8;
L_088470D8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x088470E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7148));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088470E8u) goto L_088470E8;
    return;
L_088470E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_088470F0;
    }
L_088470F0:
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3392));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884715C;
      }
      goto L_08847104;
    }
L_08847104:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08847144;
      }
      goto L_08847114;
    }
L_08847114:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08847120u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08847120u) goto L_08847120;
    return;
L_08847120:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847138;
      }
      goto L_0884712C;
    }
L_0884712C:
    ctx.gpr[31] = (0x08847134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08847134u) goto L_08847134;
    return;
L_08847134:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08847138;
L_08847138:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08847144;
L_08847144:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08847154u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7140));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08847154u) goto L_08847154;
    return;
L_08847154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_0884715C;
    }
L_0884715C:
    ctx.gpr[5] = (5u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27680));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088471C8;
      }
      goto L_08847170;
    }
L_08847170:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088471B0;
      }
      goto L_08847180;
    }
L_08847180:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0884718Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884718Cu) goto L_0884718C;
    return;
L_0884718C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088471A4;
      }
      goto L_08847198;
    }
L_08847198:
    ctx.gpr[31] = (0x088471A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088471A0u) goto L_088471A0;
    return;
L_088471A0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088471A4;
L_088471A4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088471B0;
L_088471B0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x088471C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7132));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088471C0u) goto L_088471C0;
    return;
L_088471C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_088471C8;
    }
L_088471C8:
    ctx.gpr[5] = (6u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18216));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847234;
      }
      goto L_088471DC;
    }
L_088471DC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0884721C;
      }
      goto L_088471EC;
    }
L_088471EC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088471F8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088471F8u) goto L_088471F8;
    return;
L_088471F8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847210;
      }
      goto L_08847204;
    }
L_08847204:
    ctx.gpr[31] = (0x0884720Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884720Cu) goto L_0884720C;
    return;
L_0884720C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08847210;
L_08847210:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0884721C;
L_0884721C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884722Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7124));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884722Cu) goto L_0884722C;
    return;
L_0884722C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08847234;
    }
L_08847234:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24288));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847308;
      }
      goto L_08847248;
    }
L_08847248:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088472B0;
      }
      goto L_08847258;
    }
L_08847258:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08847298;
      }
      goto L_08847268;
    }
L_08847268:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08847274u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08847274u) goto L_08847274;
    return;
L_08847274:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884728C;
      }
      goto L_08847280;
    }
L_08847280:
    ctx.gpr[31] = (0x08847288u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08847288u) goto L_08847288;
    return;
L_08847288:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0884728C;
L_0884728C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08847298;
L_08847298:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x088472A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7116));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x088472A8u) goto L_088472A8;
    return;
L_088472A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_088472B0;
    }
L_088472B0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088472F0;
      }
      goto L_088472C0;
    }
L_088472C0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088472CCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088472CCu) goto L_088472CC;
    return;
L_088472CC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088472E4;
      }
      goto L_088472D8;
    }
L_088472D8:
    ctx.gpr[31] = (0x088472E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088472E0u) goto L_088472E0;
    return;
L_088472E0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088472E4;
L_088472E4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088472F0;
L_088472F0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08847300u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7124));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08847300u) goto L_08847300;
    return;
L_08847300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08847308;
    }
L_08847308:
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16960));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08847374;
      }
      goto L_0884731C;
    }
L_0884731C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0884735C;
      }
      goto L_0884732C;
    }
L_0884732C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08847338u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08847338u) goto L_08847338;
    return;
L_08847338:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847350;
      }
      goto L_08847344;
    }
L_08847344:
    ctx.gpr[31] = (0x0884734Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884734Cu) goto L_0884734C;
    return;
L_0884734C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08847350;
L_08847350:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0884735C;
L_0884735C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884736Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7108));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884736Cu) goto L_0884736C;
    return;
L_0884736C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08847374;
    }
L_08847374:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27008));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847408;
      }
      goto L_088473B0;
    }
L_088473B0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088473F0;
      }
      goto L_088473C0;
    }
L_088473C0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088473CCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088473CCu) goto L_088473CC;
    return;
L_088473CC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088473E4;
      }
      goto L_088473D8;
    }
L_088473D8:
    ctx.gpr[31] = (0x088473E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x088473E0u) goto L_088473E0;
    return;
L_088473E0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088473E4;
L_088473E4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088473F0;
L_088473F0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08847400u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7100));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08847400u) goto L_08847400;
    return;
L_08847400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847458;
      }
      goto L_08847408;
    }
L_08847408:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08847448;
      }
      goto L_08847418;
    }
L_08847418:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08847424u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08847424u) goto L_08847424;
    return;
L_08847424:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884743C;
      }
      goto L_08847430;
    }
L_08847430:
    ctx.gpr[31] = (0x08847438u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08847438u) goto L_08847438;
    return;
L_08847438:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0884743C;
L_0884743C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08847448;
L_08847448:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08847458u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7108));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08847458u) goto L_08847458;
    return;
L_08847458:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884746C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5872));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884749Cu);
    // nop
    goto L_08844F84;
L_0884749C:
    ctx.gpr[4] = (0u | 418u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088474A4;
L_088474A4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088474A4;
      }
      goto L_088474B4;
    }
L_088474B4:
    ctx.gpr[5] = (0u | 0u);
    goto L_088474B8;
L_088474B8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088474B8;
      }
      goto L_088474C8;
    }
L_088474C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847588u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7592));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847588u) goto L_08847588;
    return;
L_08847588:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088475A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7588));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088475A0u) goto L_088475A0;
    return;
L_088475A0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088475B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7584));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088475B8u) goto L_088475B8;
    return;
L_088475B8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088475D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7580));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088475D0u) goto L_088475D0;
    return;
L_088475D0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088475E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7824));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088475E8u) goto L_088475E8;
    return;
L_088475E8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847600u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7576));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847600u) goto L_08847600;
    return;
L_08847600:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x08847618u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6104));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847618u) goto L_08847618;
    return;
L_08847618:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847630u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7572));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847630u) goto L_08847630;
    return;
L_08847630:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847648u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7568));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847648u) goto L_08847648;
    return;
L_08847648:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847660u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7564));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847660u) goto L_08847660;
    return;
L_08847660:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847678u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7560));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847678u) goto L_08847678;
    return;
L_08847678:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847690u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7556));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847690u) goto L_08847690;
    return;
L_08847690:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088476A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7552));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088476A8u) goto L_088476A8;
    return;
L_088476A8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088476C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7548));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088476C0u) goto L_088476C0;
    return;
L_088476C0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088476D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7544));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088476D8u) goto L_088476D8;
    return;
L_088476D8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088476F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7540));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088476F0u) goto L_088476F0;
    return;
L_088476F0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847708u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7536));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847708u) goto L_08847708;
    return;
L_08847708:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847720u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7532));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847720u) goto L_08847720;
    return;
L_08847720:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847738u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7644));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847738u) goto L_08847738;
    return;
L_08847738:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847750u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7528));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847750u) goto L_08847750;
    return;
L_08847750:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847768u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7524));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847768u) goto L_08847768;
    return;
L_08847768:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847780u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7520));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847780u) goto L_08847780;
    return;
L_08847780:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847798u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7516));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847798u) goto L_08847798;
    return;
L_08847798:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088477B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7512));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088477B0u) goto L_088477B0;
    return;
L_088477B0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088477C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7508));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088477C8u) goto L_088477C8;
    return;
L_088477C8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088477E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7504));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088477E0u) goto L_088477E0;
    return;
L_088477E0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088477F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7500));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088477F8u) goto L_088477F8;
    return;
L_088477F8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847810u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7496));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847810u) goto L_08847810;
    return;
L_08847810:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847828u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7492));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847828u) goto L_08847828;
    return;
L_08847828:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847840u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7484));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847840u) goto L_08847840;
    return;
L_08847840:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847858u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7480));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847858u) goto L_08847858;
    return;
L_08847858:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847870u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7264));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847870u) goto L_08847870;
    return;
L_08847870:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847888u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7260));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847888u) goto L_08847888;
    return;
L_08847888:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088478A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7256));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088478A0u) goto L_088478A0;
    return;
L_088478A0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088478B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7252));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088478B8u) goto L_088478B8;
    return;
L_088478B8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088478D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7248));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088478D0u) goto L_088478D0;
    return;
L_088478D0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088478E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7476));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088478E8u) goto L_088478E8;
    return;
L_088478E8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847900u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7472));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847900u) goto L_08847900;
    return;
L_08847900:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847918u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7468));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847918u) goto L_08847918;
    return;
L_08847918:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847930u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7464));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847930u) goto L_08847930;
    return;
L_08847930:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847948u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7460));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847948u) goto L_08847948;
    return;
L_08847948:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847960u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7456));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847960u) goto L_08847960;
    return;
L_08847960:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847978u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7452));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847978u) goto L_08847978;
    return;
L_08847978:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847990u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7448));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847990u) goto L_08847990;
    return;
L_08847990:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088479A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7444));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088479A8u) goto L_088479A8;
    return;
L_088479A8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088479C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7440));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088479C0u) goto L_088479C0;
    return;
L_088479C0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088479D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7436));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088479D8u) goto L_088479D8;
    return;
L_088479D8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088479F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7432));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088479F0u) goto L_088479F0;
    return;
L_088479F0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847A08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7428));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847A08u) goto L_08847A08;
    return;
L_08847A08:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847A20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7424));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847A20u) goto L_08847A20;
    return;
L_08847A20:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847A38u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7420));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847A38u) goto L_08847A38;
    return;
L_08847A38:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847A50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7416));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847A50u) goto L_08847A50;
    return;
L_08847A50:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847A68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7412));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847A68u) goto L_08847A68;
    return;
L_08847A68:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847A80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7408));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847A80u) goto L_08847A80;
    return;
L_08847A80:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847A98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7404));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847A98u) goto L_08847A98;
    return;
L_08847A98:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847AB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7400));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847AB0u) goto L_08847AB0;
    return;
L_08847AB0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847AC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7392));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847AC8u) goto L_08847AC8;
    return;
L_08847AC8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847AE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7388));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847AE0u) goto L_08847AE0;
    return;
L_08847AE0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847AF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7384));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847AF8u) goto L_08847AF8;
    return;
L_08847AF8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847B10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7380));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847B10u) goto L_08847B10;
    return;
L_08847B10:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847B28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7376));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847B28u) goto L_08847B28;
    return;
L_08847B28:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847B40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7372));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847B40u) goto L_08847B40;
    return;
L_08847B40:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847B58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7368));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847B58u) goto L_08847B58;
    return;
L_08847B58:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847B70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7364));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847B70u) goto L_08847B70;
    return;
L_08847B70:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847B88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7360));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847B88u) goto L_08847B88;
    return;
L_08847B88:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847BA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7356));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847BA0u) goto L_08847BA0;
    return;
L_08847BA0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847BB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7352));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847BB8u) goto L_08847BB8;
    return;
L_08847BB8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847BD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7348));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847BD0u) goto L_08847BD0;
    return;
L_08847BD0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847BE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7344));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847BE8u) goto L_08847BE8;
    return;
L_08847BE8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847C00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7340));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847C00u) goto L_08847C00;
    return;
L_08847C00:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847C18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7320));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847C18u) goto L_08847C18;
    return;
L_08847C18:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847C30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7316));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847C30u) goto L_08847C30;
    return;
L_08847C30:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847C48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7312));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847C48u) goto L_08847C48;
    return;
L_08847C48:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847C60u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7308));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847C60u) goto L_08847C60;
    return;
L_08847C60:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847C78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7304));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847C78u) goto L_08847C78;
    return;
L_08847C78:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847C90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7300));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847C90u) goto L_08847C90;
    return;
L_08847C90:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847CA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7296));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847CA8u) goto L_08847CA8;
    return;
L_08847CA8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847CC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7396));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847CC0u) goto L_08847CC0;
    return;
L_08847CC0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847CD8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7796));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847CD8u) goto L_08847CD8;
    return;
L_08847CD8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847CF0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7336));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847CF0u) goto L_08847CF0;
    return;
L_08847CF0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08847D08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7332));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847D08u) goto L_08847D08;
    return;
L_08847D08:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847D20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7328));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847D20u) goto L_08847D20;
    return;
L_08847D20:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847D38u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7324));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847D38u) goto L_08847D38;
    return;
L_08847D38:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-6008));
    goto L_08847D48;
L_08847D48:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08847D58u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847D58u) goto L_08847D58;
    return;
L_08847D58:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08847D48;
      }
      goto L_08847D68;
    }
L_08847D68:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847D7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7288));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847D7Cu) goto L_08847D7C;
    return;
L_08847D7C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x08847D94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5992));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847D94u) goto L_08847D94;
    return;
L_08847D94:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x08847DACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5896));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847DACu) goto L_08847DAC;
    return;
L_08847DAC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847DC4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7292));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847DC4u) goto L_08847DC4;
    return;
L_08847DC4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847DDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7280));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847DDCu) goto L_08847DDC;
    return;
L_08847DDC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847DF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7276));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847DF4u) goto L_08847DF4;
    return;
L_08847DF4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08847E0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7272));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847E0Cu) goto L_08847E0C;
    return;
L_08847E0C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847E24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7284));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847E24u) goto L_08847E24;
    return;
L_08847E24:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847E3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7236));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847E3Cu) goto L_08847E3C;
    return;
L_08847E3C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847E54u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7232));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847E54u) goto L_08847E54;
    return;
L_08847E54:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847E6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7228));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847E6Cu) goto L_08847E6C;
    return;
L_08847E6C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847E84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7224));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847E84u) goto L_08847E84;
    return;
L_08847E84:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847E9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7220));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847E9Cu) goto L_08847E9C;
    return;
L_08847E9C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847EB4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7216));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847EB4u) goto L_08847EB4;
    return;
L_08847EB4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847ECCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7212));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847ECCu) goto L_08847ECC;
    return;
L_08847ECC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847EE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7208));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847EE4u) goto L_08847EE4;
    return;
L_08847EE4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847EFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7204));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847EFCu) goto L_08847EFC;
    return;
L_08847EFC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847F14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7200));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847F14u) goto L_08847F14;
    return;
L_08847F14:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847F2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7196));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847F2Cu) goto L_08847F2C;
    return;
L_08847F2C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847F44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7192));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847F44u) goto L_08847F44;
    return;
L_08847F44:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847F5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7188));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847F5Cu) goto L_08847F5C;
    return;
L_08847F5C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847F74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7184));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847F74u) goto L_08847F74;
    return;
L_08847F74:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847F8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7180));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847F8Cu) goto L_08847F8C;
    return;
L_08847F8C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847FA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7176));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847FA4u) goto L_08847FA4;
    return;
L_08847FA4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847FBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7172));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847FBCu) goto L_08847FBC;
    return;
L_08847FBC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847FD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7168));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847FD4u) goto L_08847FD4;
    return;
L_08847FD4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08847FECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7164));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08847FECu) goto L_08847FEC;
    return;
L_08847FEC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848004u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7160));
    (void)rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0016(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0016_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_16(Runtime &runtime) {
    runtime.register_generated_unit(16u, 0x08844000u, 16384u, &recomp_unit_0016, &recomp_unit_0016_entry);
    runtime.register_function(0x08844000u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844018u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844028u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844048u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844058u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844070u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844078u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884408Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884409Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844104u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884410Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884411Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844124u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844130u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844134u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884415Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844188u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844414u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844418u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844440u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884444Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844468u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844470u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884448Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088444C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088444D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088444E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088444F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884450Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844520u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844524u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844528u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844544u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844558u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844564u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844570u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844588u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844594u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844598u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844608u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844610u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884461Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844628u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844638u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844640u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844648u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844650u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844660u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844668u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844670u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844678u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844688u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844690u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844698u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844704u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844708u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884471Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884472Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844734u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884473Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844748u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844764u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884476Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844778u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844784u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884478Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844794u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884479Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844804u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884480Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844810u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844818u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088448A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844918u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844934u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884493Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844950u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844954u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884495Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884497Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844984u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A78u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844AA8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844AC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844AD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844AF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844BB0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844BC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844BE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844BF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C10u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C34u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C58u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CA0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CC4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CD0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CDCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D18u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E24u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E6Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F10u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F34u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F3Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FB0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FC4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FCCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FDCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FE4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884500Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845014u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845020u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845024u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884502Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845040u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845044u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884504Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845060u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845068u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845074u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845078u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845080u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845094u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884509Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884510Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845110u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845118u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845138u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845140u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845160u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845168u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845184u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884518Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884520Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845214u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845228u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884522Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845234u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845250u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845258u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884526Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845270u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845278u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088452A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088452B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088452C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088452CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088452E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088452F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845310u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845328u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884533Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845344u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845354u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884535Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845374u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845388u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845390u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845410u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845418u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845428u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845440u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845448u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845450u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845464u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845478u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884547Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845484u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845490u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845514u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884551Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845544u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884554Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845554u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845560u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884556Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845574u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845578u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845580u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845588u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845594u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884559Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845600u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884560Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845618u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845620u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845624u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884562Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845634u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845640u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884564Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845654u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845660u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884566Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845678u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845680u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845684u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884568Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845694u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088456A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088456ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088456DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845774u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845788u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A18u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A78u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845AA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845AC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845AD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B34u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845C60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845C78u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845C84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845C90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CA0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CC4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CD0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D04u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D10u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D24u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D34u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D58u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845DA8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845DB0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845DBCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845DCCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845DD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845DE4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845DECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845DF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845DFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E24u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E3Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E6Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E78u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EA0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EA8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845ED0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EDCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F04u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F10u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F34u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845FA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845FB4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845FC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845FCCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845FD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845FD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845FE4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845FF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845FFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846008u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846018u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846024u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846030u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846038u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884603Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846048u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846058u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846060u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884606Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884607Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846088u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846094u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884609Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088460A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088460ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088460BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088460C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088460D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088460E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088460ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088460F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846100u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846104u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846110u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846120u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846128u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846134u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846144u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846150u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884615Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846164u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846168u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846174u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846184u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884618Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846198u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088461A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088461B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088461C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088461C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088461CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088461D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088461E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088461F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088461FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884620Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846218u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846224u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884622Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846230u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884623Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884624Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846254u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846260u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846270u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884627Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846288u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846290u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846294u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088462A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088462B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088462B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088462C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088462D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088462E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088462ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088462F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088462F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846304u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846314u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884631Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846328u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846338u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846344u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846350u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846358u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884635Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846368u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846378u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846380u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884638Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884639Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088463A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088463B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088463BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088463C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088463CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088463DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088463E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088463F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846400u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884640Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846418u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846420u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846424u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846430u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846440u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846448u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846454u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846464u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846470u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884647Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846484u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846488u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846494u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088464A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088464ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088464B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088464C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088464D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088464E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088464E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088464ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088464F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846508u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846510u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884651Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884652Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846538u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846544u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884654Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846550u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884655Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884656Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846574u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846580u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846590u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884659Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088465A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088465B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088465B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088465C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088465D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088465D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088465E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088465F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846600u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884660Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846614u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846618u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846624u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846634u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884663Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846648u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846658u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846664u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846670u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846678u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884667Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846688u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846698u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088466A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088466ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088466BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088466C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088466D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088466DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088466E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088466ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088466FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846704u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846710u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846720u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884672Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846738u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846740u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846744u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846750u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846760u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846768u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846774u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846784u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846790u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884679Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088467A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088467A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088467B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088467C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088467CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088467D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088467E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088467F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846804u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846810u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846818u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884681Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846828u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846838u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846840u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846850u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884685Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846868u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846870u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846874u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846880u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846890u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846898u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846908u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846918u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846924u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846930u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846938u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884693Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846948u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846958u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846960u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884696Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884697Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846988u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846994u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884699Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A04u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A10u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A34u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846AA8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846AB4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846AC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846AC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846ACCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846AD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846AE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846AF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846AFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B18u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B24u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B3Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BA0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BB0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BC4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C04u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C58u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C78u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C9Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846CA8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846CB4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846CBCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846CC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846CCCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846CDCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846CE4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846CF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D18u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D24u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E10u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E6Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846EA0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846EACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846EB4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846EB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846EC4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846ED4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846EDCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846EECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846EFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F3Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FD0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FDCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847000u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847010u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847018u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884702Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884703Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847048u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847054u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884705Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847060u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884706Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884707Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847084u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847098u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088470A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088470B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088470C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088470C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088470CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088470D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088470E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088470F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847104u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847114u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847120u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884712Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847134u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847138u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847144u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847154u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884715Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847170u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847180u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884718Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847198u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847204u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884720Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847210u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884721Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884722Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847234u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847248u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847258u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847268u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847274u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847280u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847288u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884728Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847298u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847300u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847308u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884731Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884732Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847338u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847344u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884734Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847350u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884735Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884736Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847374u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847400u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847408u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847418u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847424u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847430u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847438u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884743Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847448u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847458u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884746Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884749Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088474A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088474B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088474B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088474C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847588u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847600u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847618u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847630u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847648u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847660u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847678u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847690u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088476A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088476C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088476D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088476F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847708u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847720u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847738u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847750u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847768u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847780u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847798u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847810u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847828u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847840u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847858u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847870u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847888u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088478A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088478B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088478D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088478E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847900u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847918u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847930u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847948u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847960u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847978u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847990u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AB0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B10u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B58u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847BA0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847BB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847BD0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847BE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C18u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C78u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CA8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D58u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DC4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DDCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E24u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E3Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E6Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E9Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847EB4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847ECCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847EE4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847EFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FBCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FECu, &recomp_unit_0016, "recomp_unit_0016");
}
} // namespace psprecomp
