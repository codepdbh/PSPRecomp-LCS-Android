#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0198[4027] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21,
    0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 29, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0,
    0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47,
    0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 57,
    0, 58, 59, 60, 0, 61, 62, 63, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 89, 0, 90, 91, 92, 0, 93, 0,
    0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0,
    115, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 126, 0, 127,
    0, 0, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0, 0, 134, 0, 135, 0, 136, 137, 0, 0, 138, 0, 0, 0, 139, 0,
    0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 144, 145, 0, 0, 146, 147, 0, 0, 148, 0, 149, 0, 0, 150, 0, 0, 151, 0, 152,
    0, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 163, 0, 164, 0,
    0, 0, 165, 0, 166, 0, 167, 168, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174, 0, 175, 0, 0, 176, 0, 177, 0,
    178, 179, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 185, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 192, 0, 193, 0, 0, 194,
    0, 195, 0, 196, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0, 201, 0, 202, 203, 0, 204, 0, 205, 0, 0, 206, 0, 207, 0, 208, 0,
    0, 209, 0, 210, 0, 211, 0, 0, 212, 0, 213, 214, 215, 216, 0, 217, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 222, 223, 224, 0,
    0, 225, 0, 226, 0, 0, 227, 0, 0, 228, 229, 0, 230, 0, 0, 231, 0, 0, 232, 0, 233, 0, 234, 0, 235, 0, 0, 236, 0, 237, 0, 238,
    0, 239, 0, 240, 241, 0, 242, 0, 0, 0, 243, 0, 244, 245, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 249, 0, 250, 0, 251,
    0, 0, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 0, 0, 259, 0, 260, 261, 0, 262, 0, 0, 0, 0, 0, 0,
    263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 267, 0, 268, 0, 269, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 0, 0, 274, 0,
    275, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 278, 0, 279, 0, 280, 0, 0, 0, 281, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 284,
    0, 285, 0, 286, 0, 287, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0,
    0, 294, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 301, 0, 0, 302, 0, 303, 0,
    0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 311, 312, 0, 313, 0, 0, 314, 0, 0, 315,
    0, 316, 0, 317, 0, 318, 0, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 324, 0, 325, 0, 0, 0, 326, 0, 327, 328, 0, 329, 0, 0, 0,
    0, 0, 0, 330, 0, 331, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 0, 340, 0, 341, 0, 0,
    0, 342, 0, 343, 344, 0, 345, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0,
    351, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 0,
    359, 0, 360, 0, 0, 361, 0, 362, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 370, 0, 371, 0, 372,
    0, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 380, 0, 381, 0, 0, 0, 382, 0, 0,
    383, 0, 384, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 0, 388, 0, 389, 0, 390, 0, 0, 391, 392, 393, 0, 394, 0, 395, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0,
    0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0,
    0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 414, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 0,
    0, 0, 418, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 421, 422, 0, 423, 424, 425, 426, 0, 427, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 431, 432, 433, 0, 434,
    0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 448, 449, 0, 450, 0,
    451, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458, 0, 459, 0, 460, 0, 461, 0, 462, 0, 463, 0, 464, 0, 0, 0, 0, 465,
    0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 470, 0, 471, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0,
    0, 476, 0, 0, 0, 477, 0, 478, 0, 479, 0, 480, 0, 481, 0, 0, 482, 0, 483, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 487, 0, 0,
    488, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0,
    0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0,
    0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508,
    0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0,
    0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0,
    0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 530, 0, 531, 0, 0, 532, 0,
    0, 533, 0, 0, 0, 0, 534, 0, 0, 535, 0, 536, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 540, 0, 0, 0, 541, 0, 0, 542, 0,
    0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 550, 551, 0, 0, 0,
    552, 0, 0, 553, 0, 0, 554, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0,
    560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 564,
    0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 569, 0, 570, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0,
    0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    591, 0, 0, 0, 0, 0, 0, 0, 0, 592, 593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 596, 0, 0, 0, 0, 0, 0, 597, 0, 598, 0,
    599, 0, 600, 601, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0,
    610, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 615, 616, 0, 0,
    617, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 0, 0, 0, 0, 628, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 635, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 639, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 647, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 652, 0,
    0, 0, 0, 0, 0, 0, 653, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 665, 0,
    0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 669, 0, 670, 0, 0, 0,
    0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 676, 0, 677, 0, 0, 678, 679, 680, 681, 682, 0, 683, 0, 0, 0, 0, 0, 0,
    684, 0, 0, 0, 685, 0, 686, 687, 0, 688, 689, 690, 0, 691, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 695,
    0, 696, 0, 697, 0, 698, 0, 0, 699, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0, 0, 705, 0,
    0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 709, 0, 0, 710, 0, 711, 0, 0, 712, 713, 0, 714, 0, 715, 716, 0, 717, 0, 0, 0, 718, 0, 0, 719, 0, 0, 720, 0,
    0, 721, 0, 0, 722, 0, 0, 723, 0, 0, 724, 0, 725, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 0, 0, 729, 0, 730, 0, 0, 731, 0,
    732, 0, 0, 733, 734, 0, 0, 735, 0, 0, 0, 736, 0, 737, 738, 0, 0, 739, 0, 740, 0, 0, 0, 741, 0, 742, 0, 0, 743, 0, 744, 0,
    0, 0, 745, 746, 747, 748, 0, 0, 749, 0, 750, 0, 751, 752, 0, 753, 754, 0, 755, 0, 756, 0, 757, 0, 0, 0, 0, 758, 0, 0, 759, 0,
    0, 0, 760, 0, 761, 0, 0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 0, 765, 0, 0, 766, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0,
    769, 0, 0, 0, 770, 0, 771, 0, 0, 0, 772, 0, 0, 0, 773, 774, 775, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0,
    0, 0, 779, 0, 0, 0, 780, 0, 0, 781, 782, 0, 0, 0, 783, 0, 0, 784, 0, 785, 0, 786, 0, 0, 787, 788, 0, 789, 0, 0, 790, 0,
    791, 0, 0, 0, 0, 792, 793, 0, 794, 0, 0, 0, 795, 0, 796, 0, 797, 0, 798, 0, 799, 0, 0, 0, 800, 0, 0, 0, 0, 0, 801, 802,
    0, 0, 803, 0, 804, 805, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 809,
    0, 810, 0, 0, 811, 0, 0, 0, 0, 812, 813, 0, 0, 814, 0, 815, 0, 0, 816, 0, 0, 0, 0, 817, 0, 818, 0, 819, 0, 0, 0, 0,
    0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 822, 0, 0, 0, 823, 0, 0, 824, 0, 0, 825, 0, 0, 826, 0, 827, 0, 0, 828, 0, 0,
    0, 829, 0, 0, 0, 0, 0, 830, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 833, 0, 0, 0, 0,
    0, 0, 0, 834, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 837, 0, 838, 839, 840, 0, 841, 0, 842, 0, 843, 844, 845, 0, 846,
    0, 847, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 850, 0, 851, 0, 852, 853, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 855, 0, 856, 0, 0, 857, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 860, 0, 0,
    0, 0, 861, 0, 0, 862, 0, 0, 863, 0, 0, 864, 0, 865, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 867,
};
void recomp_unit_0198_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B1C108u;
        entry_id = (entry_delta < 16108u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0198[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B1C108;
    case 2u: goto L_08B1C124;
    case 3u: goto L_08B1C12C;
    case 4u: goto L_08B1C138;
    case 5u: goto L_08B1C144;
    case 6u: goto L_08B1C14C;
    case 7u: goto L_08B1C158;
    case 8u: goto L_08B1C194;
    case 9u: goto L_08B1C1C0;
    case 10u: goto L_08B1C1C8;
    case 11u: goto L_08B1C1D0;
    case 12u: goto L_08B1C1E0;
    case 13u: goto L_08B1C210;
    case 14u: goto L_08B1C21C;
    case 15u: goto L_08B1C228;
    case 16u: goto L_08B1C23C;
    case 17u: goto L_08B1C254;
    case 18u: goto L_08B1C25C;
    case 19u: goto L_08B1C268;
    case 20u: goto L_08B1C27C;
    case 21u: goto L_08B1C284;
    case 22u: goto L_08B1C290;
    case 23u: goto L_08B1C29C;
    case 24u: goto L_08B1C2AC;
    case 25u: goto L_08B1C2B8;
    case 26u: goto L_08B1C2D4;
    case 27u: goto L_08B1C2E0;
    case 28u: goto L_08B1C2FC;
    case 29u: goto L_08B1C300;
    case 30u: goto L_08B1C31C;
    case 31u: goto L_08B1C328;
    case 32u: goto L_08B1C33C;
    case 33u: goto L_08B1C344;
    case 34u: goto L_08B1C368;
    case 35u: goto L_08B1C380;
    case 36u: goto L_08B1C38C;
    case 37u: goto L_08B1C3A4;
    case 38u: goto L_08B1C3B0;
    case 39u: goto L_08B1C3D8;
    case 40u: goto L_08B1C400;
    case 41u: goto L_08B1C428;
    case 42u: goto L_08B1C42C;
    case 43u: goto L_08B1C444;
    case 44u: goto L_08B1C44C;
    case 45u: goto L_08B1C468;
    case 46u: goto L_08B1C474;
    case 47u: goto L_08B1C484;
    case 48u: goto L_08B1C48C;
    case 49u: goto L_08B1C4A8;
    case 50u: goto L_08B1C4BC;
    case 51u: goto L_08B1C4C8;
    case 52u: goto L_08B1C4D0;
    case 53u: goto L_08B1C4D8;
    case 54u: goto L_08B1C4E0;
    case 55u: goto L_08B1C4E8;
    case 56u: goto L_08B1C4F0;
    case 57u: goto L_08B1C504;
    case 58u: goto L_08B1C50C;
    case 59u: goto L_08B1C510;
    case 60u: goto L_08B1C514;
    case 61u: goto L_08B1C51C;
    case 62u: goto L_08B1C520;
    case 63u: goto L_08B1C524;
    case 64u: goto L_08B1C528;
    case 65u: goto L_08B1C550;
    case 66u: goto L_08B1C578;
    case 67u: goto L_08B1C5A0;
    case 68u: goto L_08B1C5C4;
    case 69u: goto L_08B1C5F4;
    case 70u: goto L_08B1C618;
    case 71u: goto L_08B1C620;
    case 72u: goto L_08B1C634;
    case 73u: goto L_08B1C640;
    case 74u: goto L_08B1C648;
    case 75u: goto L_08B1C658;
    case 76u: goto L_08B1C66C;
    case 77u: goto L_08B1C67C;
    case 78u: goto L_08B1C688;
    case 79u: goto L_08B1C6C4;
    case 80u: goto L_08B1C6D0;
    case 81u: goto L_08B1C6F0;
    case 82u: goto L_08B1C714;
    case 83u: goto L_08B1C71C;
    case 84u: goto L_08B1C72C;
    case 85u: goto L_08B1C738;
    case 86u: goto L_08B1C748;
    case 87u: goto L_08B1C754;
    case 88u: goto L_08B1C760;
    case 89u: goto L_08B1C768;
    case 90u: goto L_08B1C770;
    case 91u: goto L_08B1C774;
    case 92u: goto L_08B1C778;
    case 93u: goto L_08B1C780;
    case 94u: goto L_08B1C78C;
    case 95u: goto L_08B1C7A0;
    case 96u: goto L_08B1C7B0;
    case 97u: goto L_08B1C7B8;
    case 98u: goto L_08B1C7C4;
    case 99u: goto L_08B1C7CC;
    case 100u: goto L_08B1C7D4;
    case 101u: goto L_08B1C7DC;
    case 102u: goto L_08B1C7E8;
    case 103u: goto L_08B1C7F0;
    case 104u: goto L_08B1C7F8;
    case 105u: goto L_08B1C814;
    case 106u: goto L_08B1C820;
    case 107u: goto L_08B1C828;
    case 108u: goto L_08B1C834;
    case 109u: goto L_08B1C83C;
    case 110u: goto L_08B1C84C;
    case 111u: goto L_08B1C858;
    case 112u: goto L_08B1C864;
    case 113u: goto L_08B1C870;
    case 114u: goto L_08B1C87C;
    case 115u: goto L_08B1C888;
    case 116u: goto L_08B1C890;
    case 117u: goto L_08B1C89C;
    case 118u: goto L_08B1C8A4;
    case 119u: goto L_08B1C8B0;
    case 120u: goto L_08B1C8BC;
    case 121u: goto L_08B1C8C8;
    case 122u: goto L_08B1C8D0;
    case 123u: goto L_08B1C8DC;
    case 124u: goto L_08B1C8E8;
    case 125u: goto L_08B1C8F4;
    case 126u: goto L_08B1C8FC;
    case 127u: goto L_08B1C904;
    case 128u: goto L_08B1C914;
    case 129u: goto L_08B1C91C;
    case 130u: goto L_08B1C928;
    case 131u: goto L_08B1C930;
    case 132u: goto L_08B1C93C;
    case 133u: goto L_08B1C944;
    case 134u: goto L_08B1C950;
    case 135u: goto L_08B1C958;
    case 136u: goto L_08B1C960;
    case 137u: goto L_08B1C964;
    case 138u: goto L_08B1C970;
    case 139u: goto L_08B1C980;
    case 140u: goto L_08B1C98C;
    case 141u: goto L_08B1C99C;
    case 142u: goto L_08B1C9A8;
    case 143u: goto L_08B1C9B4;
    case 144u: goto L_08B1C9BC;
    case 145u: goto L_08B1C9C0;
    case 146u: goto L_08B1C9CC;
    case 147u: goto L_08B1C9D0;
    case 148u: goto L_08B1C9DC;
    case 149u: goto L_08B1C9E4;
    case 150u: goto L_08B1C9F0;
    case 151u: goto L_08B1C9FC;
    case 152u: goto L_08B1CA04;
    case 153u: goto L_08B1CA10;
    case 154u: goto L_08B1CA1C;
    case 155u: goto L_08B1CA24;
    case 156u: goto L_08B1CA2C;
    case 157u: goto L_08B1CA38;
    case 158u: goto L_08B1CA40;
    case 159u: goto L_08B1CA4C;
    case 160u: goto L_08B1CA54;
    case 161u: goto L_08B1CA64;
    case 162u: goto L_08B1CA6C;
    case 163u: goto L_08B1CA78;
    case 164u: goto L_08B1CA80;
    case 165u: goto L_08B1CA90;
    case 166u: goto L_08B1CA98;
    case 167u: goto L_08B1CAA0;
    case 168u: goto L_08B1CAA4;
    case 169u: goto L_08B1CAAC;
    case 170u: goto L_08B1CABC;
    case 171u: goto L_08B1CAC4;
    case 172u: goto L_08B1CAD0;
    case 173u: goto L_08B1CAD8;
    case 174u: goto L_08B1CAE4;
    case 175u: goto L_08B1CAEC;
    case 176u: goto L_08B1CAF8;
    case 177u: goto L_08B1CB00;
    case 178u: goto L_08B1CB08;
    case 179u: goto L_08B1CB0C;
    case 180u: goto L_08B1CB14;
    case 181u: goto L_08B1CB1C;
    case 182u: goto L_08B1CB24;
    case 183u: goto L_08B1CB30;
    case 184u: goto L_08B1CB38;
    case 185u: goto L_08B1CB40;
    case 186u: goto L_08B1CB44;
    case 187u: goto L_08B1CB4C;
    case 188u: goto L_08B1CB54;
    case 189u: goto L_08B1CB5C;
    case 190u: goto L_08B1CB64;
    case 191u: goto L_08B1CB6C;
    case 192u: goto L_08B1CB70;
    case 193u: goto L_08B1CB78;
    case 194u: goto L_08B1CB84;
    case 195u: goto L_08B1CB8C;
    case 196u: goto L_08B1CB94;
    case 197u: goto L_08B1CB9C;
    case 198u: goto L_08B1CBAC;
    case 199u: goto L_08B1CBB4;
    case 200u: goto L_08B1CBC0;
    case 201u: goto L_08B1CBC8;
    case 202u: goto L_08B1CBD0;
    case 203u: goto L_08B1CBD4;
    case 204u: goto L_08B1CBDC;
    case 205u: goto L_08B1CBE4;
    case 206u: goto L_08B1CBF0;
    case 207u: goto L_08B1CBF8;
    case 208u: goto L_08B1CC00;
    case 209u: goto L_08B1CC0C;
    case 210u: goto L_08B1CC14;
    case 211u: goto L_08B1CC1C;
    case 212u: goto L_08B1CC28;
    case 213u: goto L_08B1CC30;
    case 214u: goto L_08B1CC34;
    case 215u: goto L_08B1CC38;
    case 216u: goto L_08B1CC3C;
    case 217u: goto L_08B1CC44;
    case 218u: goto L_08B1CC4C;
    case 219u: goto L_08B1CC5C;
    case 220u: goto L_08B1CC68;
    case 221u: goto L_08B1CC70;
    case 222u: goto L_08B1CC78;
    case 223u: goto L_08B1CC7C;
    case 224u: goto L_08B1CC80;
    case 225u: goto L_08B1CC8C;
    case 226u: goto L_08B1CC94;
    case 227u: goto L_08B1CCA0;
    case 228u: goto L_08B1CCAC;
    case 229u: goto L_08B1CCB0;
    case 230u: goto L_08B1CCB8;
    case 231u: goto L_08B1CCC4;
    case 232u: goto L_08B1CCD0;
    case 233u: goto L_08B1CCD8;
    case 234u: goto L_08B1CCE0;
    case 235u: goto L_08B1CCE8;
    case 236u: goto L_08B1CCF4;
    case 237u: goto L_08B1CCFC;
    case 238u: goto L_08B1CD04;
    case 239u: goto L_08B1CD0C;
    case 240u: goto L_08B1CD14;
    case 241u: goto L_08B1CD18;
    case 242u: goto L_08B1CD20;
    case 243u: goto L_08B1CD30;
    case 244u: goto L_08B1CD38;
    case 245u: goto L_08B1CD3C;
    case 246u: goto L_08B1CD44;
    case 247u: goto L_08B1CD60;
    case 248u: goto L_08B1CD68;
    case 249u: goto L_08B1CD74;
    case 250u: goto L_08B1CD7C;
    case 251u: goto L_08B1CD84;
    case 252u: goto L_08B1CD94;
    case 253u: goto L_08B1CD9C;
    case 254u: goto L_08B1CDA4;
    case 255u: goto L_08B1CDAC;
    case 256u: goto L_08B1CDB4;
    case 257u: goto L_08B1CDC0;
    case 258u: goto L_08B1CDC8;
    case 259u: goto L_08B1CDD8;
    case 260u: goto L_08B1CDE0;
    case 261u: goto L_08B1CDE4;
    case 262u: goto L_08B1CDEC;
    case 263u: goto L_08B1CE08;
    case 264u: goto L_08B1CE10;
    case 265u: goto L_08B1CE28;
    case 266u: goto L_08B1CE30;
    case 267u: goto L_08B1CE3C;
    case 268u: goto L_08B1CE44;
    case 269u: goto L_08B1CE4C;
    case 270u: goto L_08B1CE58;
    case 271u: goto L_08B1CE60;
    case 272u: goto L_08B1CE68;
    case 273u: goto L_08B1CE70;
    case 274u: goto L_08B1CE80;
    case 275u: goto L_08B1CE88;
    case 276u: goto L_08B1CEA4;
    case 277u: goto L_08B1CEAC;
    case 278u: goto L_08B1CEB8;
    case 279u: goto L_08B1CEC0;
    case 280u: goto L_08B1CEC8;
    case 281u: goto L_08B1CED8;
    case 282u: goto L_08B1CEE0;
    case 283u: goto L_08B1CEE8;
    case 284u: goto L_08B1CF04;
    case 285u: goto L_08B1CF0C;
    case 286u: goto L_08B1CF14;
    case 287u: goto L_08B1CF1C;
    case 288u: goto L_08B1CF28;
    case 289u: goto L_08B1CF30;
    case 290u: goto L_08B1CF4C;
    case 291u: goto L_08B1CF54;
    case 292u: goto L_08B1CF6C;
    case 293u: goto L_08B1CF74;
    case 294u: goto L_08B1CF8C;
    case 295u: goto L_08B1CF94;
    case 296u: goto L_08B1CFA4;
    case 297u: goto L_08B1CFB0;
    case 298u: goto L_08B1CFB8;
    case 299u: goto L_08B1CFD4;
    case 300u: goto L_08B1CFDC;
    case 301u: goto L_08B1CFEC;
    case 302u: goto L_08B1CFF8;
    case 303u: goto L_08B1D000;
    case 304u: goto L_08B1D010;
    case 305u: goto L_08B1D01C;
    case 306u: goto L_08B1D024;
    case 307u: goto L_08B1D030;
    case 308u: goto L_08B1D040;
    case 309u: goto L_08B1D048;
    case 310u: goto L_08B1D054;
    case 311u: goto L_08B1D060;
    case 312u: goto L_08B1D064;
    case 313u: goto L_08B1D06C;
    case 314u: goto L_08B1D078;
    case 315u: goto L_08B1D084;
    case 316u: goto L_08B1D08C;
    case 317u: goto L_08B1D094;
    case 318u: goto L_08B1D09C;
    case 319u: goto L_08B1D0A8;
    case 320u: goto L_08B1D0B0;
    case 321u: goto L_08B1D0B8;
    case 322u: goto L_08B1D0C0;
    case 323u: goto L_08B1D0C8;
    case 324u: goto L_08B1D0CC;
    case 325u: goto L_08B1D0D4;
    case 326u: goto L_08B1D0E4;
    case 327u: goto L_08B1D0EC;
    case 328u: goto L_08B1D0F0;
    case 329u: goto L_08B1D0F8;
    case 330u: goto L_08B1D114;
    case 331u: goto L_08B1D11C;
    case 332u: goto L_08B1D128;
    case 333u: goto L_08B1D130;
    case 334u: goto L_08B1D138;
    case 335u: goto L_08B1D148;
    case 336u: goto L_08B1D150;
    case 337u: goto L_08B1D158;
    case 338u: goto L_08B1D160;
    case 339u: goto L_08B1D168;
    case 340u: goto L_08B1D174;
    case 341u: goto L_08B1D17C;
    case 342u: goto L_08B1D18C;
    case 343u: goto L_08B1D194;
    case 344u: goto L_08B1D198;
    case 345u: goto L_08B1D1A0;
    case 346u: goto L_08B1D1B8;
    case 347u: goto L_08B1D1C0;
    case 348u: goto L_08B1D1DC;
    case 349u: goto L_08B1D1E4;
    case 350u: goto L_08B1D200;
    case 351u: goto L_08B1D208;
    case 352u: goto L_08B1D224;
    case 353u: goto L_08B1D22C;
    case 354u: goto L_08B1D244;
    case 355u: goto L_08B1D24C;
    case 356u: goto L_08B1D264;
    case 357u: goto L_08B1D26C;
    case 358u: goto L_08B1D27C;
    case 359u: goto L_08B1D288;
    case 360u: goto L_08B1D290;
    case 361u: goto L_08B1D29C;
    case 362u: goto L_08B1D2A4;
    case 363u: goto L_08B1D2AC;
    case 364u: goto L_08B1D2B8;
    case 365u: goto L_08B1D2C0;
    case 366u: goto L_08B1D2C8;
    case 367u: goto L_08B1D2D0;
    case 368u: goto L_08B1D2E0;
    case 369u: goto L_08B1D2E8;
    case 370u: goto L_08B1D2F4;
    case 371u: goto L_08B1D2FC;
    case 372u: goto L_08B1D304;
    case 373u: goto L_08B1D314;
    case 374u: goto L_08B1D31C;
    case 375u: goto L_08B1D324;
    case 376u: goto L_08B1D340;
    case 377u: goto L_08B1D348;
    case 378u: goto L_08B1D350;
    case 379u: goto L_08B1D358;
    case 380u: goto L_08B1D364;
    case 381u: goto L_08B1D36C;
    case 382u: goto L_08B1D37C;
    case 383u: goto L_08B1D388;
    case 384u: goto L_08B1D390;
    case 385u: goto L_08B1D3A4;
    case 386u: goto L_08B1D3AC;
    case 387u: goto L_08B1D3B4;
    case 388u: goto L_08B1D3C0;
    case 389u: goto L_08B1D3C8;
    case 390u: goto L_08B1D3D0;
    case 391u: goto L_08B1D3DC;
    case 392u: goto L_08B1D3E0;
    case 393u: goto L_08B1D3E4;
    case 394u: goto L_08B1D3EC;
    case 395u: goto L_08B1D3F4;
    case 396u: goto L_08B1D408;
    case 397u: goto L_08B1D41C;
    case 398u: goto L_08B1D430;
    case 399u: goto L_08B1D444;
    case 400u: goto L_08B1D458;
    case 401u: goto L_08B1D46C;
    case 402u: goto L_08B1D480;
    case 403u: goto L_08B1D494;
    case 404u: goto L_08B1D4A8;
    case 405u: goto L_08B1D4BC;
    case 406u: goto L_08B1D4D0;
    case 407u: goto L_08B1D4E4;
    case 408u: goto L_08B1D4F8;
    case 409u: goto L_08B1D50C;
    case 410u: goto L_08B1D520;
    case 411u: goto L_08B1D52C;
    case 412u: goto L_08B1D5CC;
    case 413u: goto L_08B1D5D4;
    case 414u: goto L_08B1D5D8;
    case 415u: goto L_08B1D5E0;
    case 416u: goto L_08B1D5EC;
    case 417u: goto L_08B1D5F8;
    case 418u: goto L_08B1D610;
    case 419u: goto L_08B1D618;
    case 420u: goto L_08B1D620;
    case 421u: goto L_08B1D690;
    case 422u: goto L_08B1D694;
    case 423u: goto L_08B1D69C;
    case 424u: goto L_08B1D6A0;
    case 425u: goto L_08B1D6A4;
    case 426u: goto L_08B1D6A8;
    case 427u: goto L_08B1D6B0;
    case 428u: goto L_08B1D6BC;
    case 429u: goto L_08B1D6D0;
    case 430u: goto L_08B1D6EC;
    case 431u: goto L_08B1D6F4;
    case 432u: goto L_08B1D6F8;
    case 433u: goto L_08B1D6FC;
    case 434u: goto L_08B1D704;
    case 435u: goto L_08B1D70C;
    case 436u: goto L_08B1D714;
    case 437u: goto L_08B1D71C;
    case 438u: goto L_08B1D724;
    case 439u: goto L_08B1D72C;
    case 440u: goto L_08B1D734;
    case 441u: goto L_08B1D73C;
    case 442u: goto L_08B1D744;
    case 443u: goto L_08B1D74C;
    case 444u: goto L_08B1D754;
    case 445u: goto L_08B1D75C;
    case 446u: goto L_08B1D764;
    case 447u: goto L_08B1D76C;
    case 448u: goto L_08B1D774;
    case 449u: goto L_08B1D778;
    case 450u: goto L_08B1D780;
    case 451u: goto L_08B1D788;
    case 452u: goto L_08B1D790;
    case 453u: goto L_08B1D798;
    case 454u: goto L_08B1D7A0;
    case 455u: goto L_08B1D7A8;
    case 456u: goto L_08B1D7B0;
    case 457u: goto L_08B1D7B8;
    case 458u: goto L_08B1D7C0;
    case 459u: goto L_08B1D7C8;
    case 460u: goto L_08B1D7D0;
    case 461u: goto L_08B1D7D8;
    case 462u: goto L_08B1D7E0;
    case 463u: goto L_08B1D7E8;
    case 464u: goto L_08B1D7F0;
    case 465u: goto L_08B1D804;
    case 466u: goto L_08B1D80C;
    case 467u: goto L_08B1D814;
    case 468u: goto L_08B1D848;
    case 469u: goto L_08B1D860;
    case 470u: goto L_08B1D864;
    case 471u: goto L_08B1D86C;
    case 472u: goto L_08B1D894;
    case 473u: goto L_08B1D8D0;
    case 474u: goto L_08B1D8E0;
    case 475u: goto L_08B1D8F8;
    case 476u: goto L_08B1D90C;
    case 477u: goto L_08B1D91C;
    case 478u: goto L_08B1D924;
    case 479u: goto L_08B1D92C;
    case 480u: goto L_08B1D934;
    case 481u: goto L_08B1D93C;
    case 482u: goto L_08B1D948;
    case 483u: goto L_08B1D950;
    case 484u: goto L_08B1D960;
    case 485u: goto L_08B1D968;
    case 486u: goto L_08B1D970;
    case 487u: goto L_08B1D97C;
    case 488u: goto L_08B1D988;
    case 489u: goto L_08B1D990;
    case 490u: goto L_08B1D9C4;
    case 491u: goto L_08B1D9CC;
    case 492u: goto L_08B1D9DC;
    case 493u: goto L_08B1DA00;
    case 494u: goto L_08B1DA1C;
    case 495u: goto L_08B1DA34;
    case 496u: goto L_08B1DA64;
    case 497u: goto L_08B1DA7C;
    case 498u: goto L_08B1DAAC;
    case 499u: goto L_08B1DAB8;
    case 500u: goto L_08B1DADC;
    case 501u: goto L_08B1DB08;
    case 502u: goto L_08B1DB28;
    case 503u: goto L_08B1DB50;
    case 504u: goto L_08B1DB64;
    case 505u: goto L_08B1DB80;
    case 506u: goto L_08B1DB9C;
    case 507u: goto L_08B1DBB8;
    case 508u: goto L_08B1DC04;
    case 509u: goto L_08B1DC10;
    case 510u: goto L_08B1DC3C;
    case 511u: goto L_08B1DC54;
    case 512u: goto L_08B1DC58;
    case 513u: goto L_08B1DC64;
    case 514u: goto L_08B1DC9C;
    case 515u: goto L_08B1DCA8;
    case 516u: goto L_08B1DCC0;
    case 517u: goto L_08B1DCD0;
    case 518u: goto L_08B1DD00;
    case 519u: goto L_08B1DD4C;
    case 520u: goto L_08B1DD54;
    case 521u: goto L_08B1DD78;
    case 522u: goto L_08B1DD94;
    case 523u: goto L_08B1DDB4;
    case 524u: goto L_08B1DDC8;
    case 525u: goto L_08B1DDE4;
    case 526u: goto L_08B1DDFC;
    case 527u: goto L_08B1DE14;
    case 528u: goto L_08B1DE54;
    case 529u: goto L_08B1DE5C;
    case 530u: goto L_08B1DE6C;
    case 531u: goto L_08B1DE74;
    case 532u: goto L_08B1DE80;
    case 533u: goto L_08B1DE8C;
    case 534u: goto L_08B1DEA0;
    case 535u: goto L_08B1DEAC;
    case 536u: goto L_08B1DEB4;
    case 537u: goto L_08B1DEBC;
    case 538u: goto L_08B1DECC;
    case 539u: goto L_08B1DEDC;
    case 540u: goto L_08B1DEE4;
    case 541u: goto L_08B1DEF4;
    case 542u: goto L_08B1DF00;
    case 543u: goto L_08B1DF18;
    case 544u: goto L_08B1DF30;
    case 545u: goto L_08B1DF48;
    case 546u: goto L_08B1DF68;
    case 547u: goto L_08B1DFA8;
    case 548u: goto L_08B1DFB8;
    case 549u: goto L_08B1DFE4;
    case 550u: goto L_08B1DFF4;
    case 551u: goto L_08B1DFF8;
    case 552u: goto L_08B1E008;
    case 553u: goto L_08B1E014;
    case 554u: goto L_08B1E020;
    case 555u: goto L_08B1E024;
    case 556u: goto L_08B1E03C;
    case 557u: goto L_08B1E04C;
    case 558u: goto L_08B1E064;
    case 559u: goto L_08B1E080;
    case 560u: goto L_08B1E088;
    case 561u: goto L_08B1E0BC;
    case 562u: goto L_08B1E0D8;
    case 563u: goto L_08B1E0EC;
    case 564u: goto L_08B1E104;
    case 565u: goto L_08B1E114;
    case 566u: goto L_08B1E134;
    case 567u: goto L_08B1E140;
    case 568u: goto L_08B1E14C;
    case 569u: goto L_08B1E154;
    case 570u: goto L_08B1E15C;
    case 571u: goto L_08B1E168;
    case 572u: goto L_08B1E180;
    case 573u: goto L_08B1E2B4;
    case 574u: goto L_08B1E2D4;
    case 575u: goto L_08B1E3F8;
    case 576u: goto L_08B1E4C0;
    case 577u: goto L_08B1E4CC;
    case 578u: goto L_08B1E4E4;
    case 579u: goto L_08B1E4EC;
    case 580u: goto L_08B1E518;
    case 581u: goto L_08B1E534;
    case 582u: goto L_08B1E53C;
    case 583u: goto L_08B1E578;
    case 584u: goto L_08B1E594;
    case 585u: goto L_08B1E59C;
    case 586u: goto L_08B1E5B8;
    case 587u: goto L_08B1E5D8;
    case 588u: goto L_08B1E5E4;
    case 589u: goto L_08B1E624;
    case 590u: goto L_08B1E65C;
    case 591u: goto L_08B1E688;
    case 592u: goto L_08B1E6AC;
    case 593u: goto L_08B1E6B0;
    case 594u: goto L_08B1E6D0;
    case 595u: goto L_08B1E6D8;
    case 596u: goto L_08B1E6DC;
    case 597u: goto L_08B1E6F8;
    case 598u: goto L_08B1E700;
    case 599u: goto L_08B1E708;
    case 600u: goto L_08B1E710;
    case 601u: goto L_08B1E714;
    case 602u: goto L_08B1E718;
    case 603u: goto L_08B1E744;
    case 604u: goto L_08B1E74C;
    case 605u: goto L_08B1E754;
    case 606u: goto L_08B1E75C;
    case 607u: goto L_08B1E77C;
    case 608u: goto L_08B1E7C0;
    case 609u: goto L_08B1E800;
    case 610u: goto L_08B1E808;
    case 611u: goto L_08B1E810;
    case 612u: goto L_08B1E840;
    case 613u: goto L_08B1E860;
    case 614u: goto L_08B1E870;
    case 615u: goto L_08B1E878;
    case 616u: goto L_08B1E87C;
    case 617u: goto L_08B1E888;
    case 618u: goto L_08B1E890;
    case 619u: goto L_08B1E8DC;
    case 620u: goto L_08B1E8E4;
    case 621u: goto L_08B1E938;
    case 622u: goto L_08B1E940;
    case 623u: goto L_08B1E948;
    case 624u: goto L_08B1E950;
    case 625u: goto L_08B1E958;
    case 626u: goto L_08B1E960;
    case 627u: goto L_08B1E968;
    case 628u: goto L_08B1E980;
    case 629u: goto L_08B1E9AC;
    case 630u: goto L_08B1E9D4;
    case 631u: goto L_08B1E9F8;
    case 632u: goto L_08B1EA84;
    case 633u: goto L_08B1EAE0;
    case 634u: goto L_08B1EAE8;
    case 635u: goto L_08B1EAF8;
    case 636u: goto L_08B1EB30;
    case 637u: goto L_08B1EBB8;
    case 638u: goto L_08B1EBD4;
    case 639u: goto L_08B1EBD8;
    case 640u: goto L_08B1EBE4;
    case 641u: goto L_08B1EBF4;
    case 642u: goto L_08B1EC20;
    case 643u: goto L_08B1ED24;
    case 644u: goto L_08B1EEF4;
    case 645u: goto L_08B1EF20;
    case 646u: goto L_08B1EF80;
    case 647u: goto L_08B1F090;
    case 648u: goto L_08B1F094;
    case 649u: goto L_08B1F0B4;
    case 650u: goto L_08B1F0F0;
    case 651u: goto L_08B1F0F8;
    case 652u: goto L_08B1F100;
    case 653u: goto L_08B1F120;
    case 654u: goto L_08B1F124;
    case 655u: goto L_08B1F12C;
    case 656u: goto L_08B1F154;
    case 657u: goto L_08B1F164;
    case 658u: goto L_08B1F20C;
    case 659u: goto L_08B1F250;
    case 660u: goto L_08B1F26C;
    case 661u: goto L_08B1F274;
    case 662u: goto L_08B1F2A8;
    case 663u: goto L_08B1F300;
    case 664u: goto L_08B1F3E0;
    case 665u: goto L_08B1F400;
    case 666u: goto L_08B1F414;
    case 667u: goto L_08B1F440;
    case 668u: goto L_08B1F460;
    case 669u: goto L_08B1F470;
    case 670u: goto L_08B1F478;
    case 671u: goto L_08B1F48C;
    case 672u: goto L_08B1F4C8;
    case 673u: goto L_08B1F4CC;
    case 674u: goto L_08B1F504;
    case 675u: goto L_08B1F53C;
    case 676u: goto L_08B1F540;
    case 677u: goto L_08B1F548;
    case 678u: goto L_08B1F554;
    case 679u: goto L_08B1F558;
    case 680u: goto L_08B1F55C;
    case 681u: goto L_08B1F560;
    case 682u: goto L_08B1F564;
    case 683u: goto L_08B1F56C;
    case 684u: goto L_08B1F588;
    case 685u: goto L_08B1F598;
    case 686u: goto L_08B1F5A0;
    case 687u: goto L_08B1F5A4;
    case 688u: goto L_08B1F5AC;
    case 689u: goto L_08B1F5B0;
    case 690u: goto L_08B1F5B4;
    case 691u: goto L_08B1F5BC;
    case 692u: goto L_08B1F5CC;
    case 693u: goto L_08B1F5D4;
    case 694u: goto L_08B1F600;
    case 695u: goto L_08B1F604;
    case 696u: goto L_08B1F60C;
    case 697u: goto L_08B1F614;
    case 698u: goto L_08B1F61C;
    case 699u: goto L_08B1F628;
    case 700u: goto L_08B1F638;
    case 701u: goto L_08B1F640;
    case 702u: goto L_08B1F65C;
    case 703u: goto L_08B1F668;
    case 704u: goto L_08B1F674;
    case 705u: goto L_08B1F680;
    case 706u: goto L_08B1F6A4;
    case 707u: goto L_08B1F6C4;
    case 708u: goto L_08B1F758;
    case 709u: goto L_08B1F818;
    case 710u: goto L_08B1F824;
    case 711u: goto L_08B1F82C;
    case 712u: goto L_08B1F838;
    case 713u: goto L_08B1F83C;
    case 714u: goto L_08B1F844;
    case 715u: goto L_08B1F84C;
    case 716u: goto L_08B1F850;
    case 717u: goto L_08B1F858;
    case 718u: goto L_08B1F868;
    case 719u: goto L_08B1F874;
    case 720u: goto L_08B1F880;
    case 721u: goto L_08B1F88C;
    case 722u: goto L_08B1F898;
    case 723u: goto L_08B1F8A4;
    case 724u: goto L_08B1F8B0;
    case 725u: goto L_08B1F8B8;
    case 726u: goto L_08B1F8C4;
    case 727u: goto L_08B1F8D0;
    case 728u: goto L_08B1F8DC;
    case 729u: goto L_08B1F8EC;
    case 730u: goto L_08B1F8F4;
    case 731u: goto L_08B1F900;
    case 732u: goto L_08B1F908;
    case 733u: goto L_08B1F914;
    case 734u: goto L_08B1F918;
    case 735u: goto L_08B1F924;
    case 736u: goto L_08B1F934;
    case 737u: goto L_08B1F93C;
    case 738u: goto L_08B1F940;
    case 739u: goto L_08B1F94C;
    case 740u: goto L_08B1F954;
    case 741u: goto L_08B1F964;
    case 742u: goto L_08B1F96C;
    case 743u: goto L_08B1F978;
    case 744u: goto L_08B1F980;
    case 745u: goto L_08B1F990;
    case 746u: goto L_08B1F994;
    case 747u: goto L_08B1F998;
    case 748u: goto L_08B1F99C;
    case 749u: goto L_08B1F9A8;
    case 750u: goto L_08B1F9B0;
    case 751u: goto L_08B1F9B8;
    case 752u: goto L_08B1F9BC;
    case 753u: goto L_08B1F9C4;
    case 754u: goto L_08B1F9C8;
    case 755u: goto L_08B1F9D0;
    case 756u: goto L_08B1F9D8;
    case 757u: goto L_08B1F9E0;
    case 758u: goto L_08B1F9F4;
    case 759u: goto L_08B1FA00;
    case 760u: goto L_08B1FA10;
    case 761u: goto L_08B1FA18;
    case 762u: goto L_08B1FA24;
    case 763u: goto L_08B1FA30;
    case 764u: goto L_08B1FA3C;
    case 765u: goto L_08B1FA4C;
    case 766u: goto L_08B1FA58;
    case 767u: goto L_08B1FA60;
    case 768u: goto L_08B1FA70;
    case 769u: goto L_08B1FA88;
    case 770u: goto L_08B1FA98;
    case 771u: goto L_08B1FAA0;
    case 772u: goto L_08B1FAB0;
    case 773u: goto L_08B1FAC0;
    case 774u: goto L_08B1FAC4;
    case 775u: goto L_08B1FAC8;
    case 776u: goto L_08B1FAD8;
    case 777u: goto L_08B1FAE8;
    case 778u: goto L_08B1FAFC;
    case 779u: goto L_08B1FB10;
    case 780u: goto L_08B1FB20;
    case 781u: goto L_08B1FB2C;
    case 782u: goto L_08B1FB30;
    case 783u: goto L_08B1FB40;
    case 784u: goto L_08B1FB4C;
    case 785u: goto L_08B1FB54;
    case 786u: goto L_08B1FB5C;
    case 787u: goto L_08B1FB68;
    case 788u: goto L_08B1FB6C;
    case 789u: goto L_08B1FB74;
    case 790u: goto L_08B1FB80;
    case 791u: goto L_08B1FB88;
    case 792u: goto L_08B1FB9C;
    case 793u: goto L_08B1FBA0;
    case 794u: goto L_08B1FBA8;
    case 795u: goto L_08B1FBB8;
    case 796u: goto L_08B1FBC0;
    case 797u: goto L_08B1FBC8;
    case 798u: goto L_08B1FBD0;
    case 799u: goto L_08B1FBD8;
    case 800u: goto L_08B1FBE8;
    case 801u: goto L_08B1FC00;
    case 802u: goto L_08B1FC04;
    case 803u: goto L_08B1FC10;
    case 804u: goto L_08B1FC18;
    case 805u: goto L_08B1FC1C;
    case 806u: goto L_08B1FC38;
    case 807u: goto L_08B1FC54;
    case 808u: goto L_08B1FC74;
    case 809u: goto L_08B1FC84;
    case 810u: goto L_08B1FC8C;
    case 811u: goto L_08B1FC98;
    case 812u: goto L_08B1FCAC;
    case 813u: goto L_08B1FCB0;
    case 814u: goto L_08B1FCBC;
    case 815u: goto L_08B1FCC4;
    case 816u: goto L_08B1FCD0;
    case 817u: goto L_08B1FCE4;
    case 818u: goto L_08B1FCEC;
    case 819u: goto L_08B1FCF4;
    case 820u: goto L_08B1FD0C;
    case 821u: goto L_08B1FD24;
    case 822u: goto L_08B1FD34;
    case 823u: goto L_08B1FD44;
    case 824u: goto L_08B1FD50;
    case 825u: goto L_08B1FD5C;
    case 826u: goto L_08B1FD68;
    case 827u: goto L_08B1FD70;
    case 828u: goto L_08B1FD7C;
    case 829u: goto L_08B1FD8C;
    case 830u: goto L_08B1FDA4;
    case 831u: goto L_08B1FDB0;
    case 832u: goto L_08B1FDF0;
    case 833u: goto L_08B1FDF4;
    case 834u: goto L_08B1FE14;
    case 835u: goto L_08B1FE1C;
    case 836u: goto L_08B1FE30;
    case 837u: goto L_08B1FE4C;
    case 838u: goto L_08B1FE54;
    case 839u: goto L_08B1FE58;
    case 840u: goto L_08B1FE5C;
    case 841u: goto L_08B1FE64;
    case 842u: goto L_08B1FE6C;
    case 843u: goto L_08B1FE74;
    case 844u: goto L_08B1FE78;
    case 845u: goto L_08B1FE7C;
    case 846u: goto L_08B1FE84;
    case 847u: goto L_08B1FE8C;
    case 848u: goto L_08B1FE94;
    case 849u: goto L_08B1FEBC;
    case 850u: goto L_08B1FEC4;
    case 851u: goto L_08B1FECC;
    case 852u: goto L_08B1FED4;
    case 853u: goto L_08B1FED8;
    case 854u: goto L_08B1FEDC;
    case 855u: goto L_08B1FF18;
    case 856u: goto L_08B1FF20;
    case 857u: goto L_08B1FF2C;
    case 858u: goto L_08B1FF34;
    case 859u: goto L_08B1FF70;
    case 860u: goto L_08B1FF7C;
    case 861u: goto L_08B1FF90;
    case 862u: goto L_08B1FF9C;
    case 863u: goto L_08B1FFA8;
    case 864u: goto L_08B1FFB4;
    case 865u: goto L_08B1FFBC;
    case 866u: goto L_08B1FFD0;
    case 867u: goto L_08B1FFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B1C108:
    rt.unsupported(0x08B1C108u, 0x74636576u, "unknown not lowered yet"); return;
L_08B1C124:
    ctx.execute_vfpu_compare3(99u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1C128u, 0x00007275u, "special? not lowered yet"); return;
L_08B1C12C:
    rt.unsupported(0x08B1C12Cu, 0x74736944u, "unknown not lowered yet"); return;
L_08B1C138:
    rt.unsupported(0x08B1C138u, 0x74736944u, "unknown not lowered yet"); return;
L_08B1C144:
    if (ctx.gpr[19] != ctx.gpr[4]) {
    ctx.execute_vfpu_compare3(101u, 99u, 116u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 181u, 0x08B3524Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1C14C;
L_08B1C14C:
    rt.unsupported(0x08B1C14Cu, 0x00007372u, "special? not lowered yet"); return;
L_08B1C158:
    rt.unsupported(0x08B1C158u, 0x746E4963u, "unknown not lowered yet"); return;
L_08B1C194:
    rt.unsupported(0x08B1C194u, 0x746E4963u, "unknown not lowered yet"); return;
L_08B1C1C0:
    rt.unsupported(0x08B1C1C0u, 0x000A2928u, "special? not lowered yet"); return;
L_08B1C1C8:
    if (ctx.gpr[25] == 0u) {
    rt.unsupported(0x08B1C1CCu, 0x70697263u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 255u, 0x08B2D2ECu>(ctx, &aot_mem); return;
    }
    goto L_08B1C1D0;
L_08B1C1D0:
    rt.unsupported(0x08B1C1D0u, 0x45207374u, "cop1? not lowered yet"); return;
L_08B1C1E0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[1] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    goto L_08B1C210;
L_08B1C210:
    rt.unsupported(0x08B1C210u, 0x20202020u, "unknown not lowered yet"); return;
L_08B1C21C:
    rt.unsupported(0x08B1C21Cu, 0x4D20474Eu, "unknown not lowered yet"); return;
L_08B1C228:
    rt.unsupported(0x08B1C228u, 0x41434F4Cu, "unknown not lowered yet"); return;
L_08B1C23C:
    rt.unsupported(0x08B1C23Cu, 0x20202020u, "unknown not lowered yet"); return;
L_08B1C254:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1C258u, 0x204E4F49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 214u, 0x08B2CF94u>(ctx, &aot_mem); return;
    }
    goto L_08B1C25C;
L_08B1C25C:
    rt.unsupported(0x08B1C25Cu, 0x4C494146u, "unknown not lowered yet"); return;
L_08B1C268:
    rt.unsupported(0x08B1C268u, 0x20202020u, "unknown not lowered yet"); return;
L_08B1C27C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1C280u, 0x204E4F49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 216u, 0x08B2CFBCu>(ctx, &aot_mem); return;
    }
    goto L_08B1C284;
L_08B1C284:
    rt.unsupported(0x08B1C284u, 0x4C494146u, "unknown not lowered yet"); return;
L_08B1C290:
    ctx.execute_vfpu_vscl_ct<116u, 104u, 114u, 1u>();
    rt.unsupported(0x08B1C294u, 0x616D6461u, "vfpu0 not lowered yet"); return;
L_08B1C29C:
    rt.unsupported(0x08B1C29Cu, 0x70757473u, "unknown not lowered yet"); return;
L_08B1C2AC:
    rt.unsupported(0x08B1C2ACu, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B1C2B8:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B1C2BCu, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C2C0u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B1C2D4:
    rt.unsupported(0x08B1C2D4u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B1C2E0:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B1C2E4u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C2E8u, 0x4D2F5249u, "unknown not lowered yet"); return;
L_08B1C2FC:
    // nop
    goto L_08B1C300;
L_08B1C300:
    rt.unsupported(0x08B1C300u, 0x4745504Du, "cop1? not lowered yet"); return;
L_08B1C31C:
    rt.unsupported(0x08B1C31Cu, 0x4C494146u, "unknown not lowered yet"); return;
L_08B1C328:
    rt.unsupported(0x08B1C328u, 0x42617265u, "unknown not lowered yet"); return;
L_08B1C33C:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    ctx.gpr[9] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 274u, 0x08B2D44Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1C344;
L_08B1C344:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1C348u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1C368:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1C36Cu, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1C380:
    rt.unsupported(0x08B1C380u, 0x706D6F63u, "unknown not lowered yet"); return;
L_08B1C38C:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1C390u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1C3A4:
    ctx.execute_vfpu_vminmax(32u, 99u, 111u, 1u, false);
    ctx.execute_vfpu_vscl_ct<112u, 111u, 110u, 1u>();
    rt.unsupported(0x08B1C3ACu, 0x000A746Eu, "special? not lowered yet"); return;
L_08B1C3B0:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1C3B4u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1C3D8:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1C3DCu, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1C400:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1C404u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1C428:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    goto L_08B1C42C;
L_08B1C42C:
    rt.unsupported(0x08B1C42Cu, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1C444:
    ctx.execute_vfpu_vscl_ct<112u, 111u, 110u, 1u>();
    rt.unsupported(0x08B1C448u, 0x000A746Eu, "special? not lowered yet"); return;
L_08B1C44C:
    ctx.execute_vfpu_vscl_ct<100u, 101u, 108u, 1u>();
    rt.unsupported(0x08B1C450u, 0x20646574u, "unknown not lowered yet"); return;
L_08B1C468:
    rt.unsupported(0x08B1C468u, 0x43534944u, "unknown not lowered yet"); return;
L_08B1C474:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B1C478u, 0x44525355u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[1] != ctx.gpr[15]) {
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[1])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 89u, 0x08B30DA4u>(ctx, &aot_mem); return;
    }
    goto L_08B1C484;
L_08B1C484:
    rt.unsupported(0x08B1C484u, 0x4B48432Eu, "cop2/vfpu not lowered yet"); return;
L_08B1C48C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C490u, 0x61206465u, "vfpu0 not lowered yet"); return;
L_08B1C4A8:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 32u, 108u, 1u, 6u);
    rt.unsupported(0x08B1C4B0u, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08B1C4BC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<99u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    // nop
    goto L_08B1C4C8;
L_08B1C4C8:
    rt.unsupported(0x08B1C4C8u, 0x616C7073u, "vfpu0 not lowered yet"); return;
L_08B1C4D0:
    rt.unsupported(0x08B1C4D0u, 0x616C7073u, "vfpu0 not lowered yet"); return;
L_08B1C4D8:
    rt.unsupported(0x08B1C4D8u, 0x616C7073u, "vfpu0 not lowered yet"); return;
L_08B1C4E0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C4E4u, 0x00306373u, "special? not lowered yet"); return;
L_08B1C4E8:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B1C4ECu, 0x43532048u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 47u, 0x08B30638u>(ctx, &aot_mem); return;
    }
    goto L_08B1C4F0;
L_08B1C4F0:
    rt.unsupported(0x08B1C4F0u, 0x4E454552u, "unknown not lowered yet"); return;
L_08B1C504:
    rt.unsupported(0x08B1C504u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[2];
    ctx.gpr[9] = (0x08B1C510u);
    rt.unsupported(0x08B1C50Cu, 0x4F545541u, "unknown not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1C510u) goto L_08B1C510;
    return;
L_08B1C50C:
    rt.unsupported(0x08B1C50Cu, 0x4F545541u, "unknown not lowered yet"); return;
L_08B1C510:
    rt.unsupported(0x08B1C510u, 0x0000444Cu, "syscall not lowered yet"); return;
L_08B1C514:
    rt.unsupported(0x08B1C514u, 0x4146444Cu, "unknown not lowered yet"); return;
L_08B1C51C:
    rt.unsupported(0x08B1C51Cu, 0x4157444Cu, "unknown not lowered yet"); return;
L_08B1C520:
    jump_target = 0u;
    ctx.gpr[10] = (0x08B1C528u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1C528u) goto L_08B1C528;
    return;
L_08B1C524:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    goto L_08B1C528;
L_08B1C528:
    rt.unsupported(0x08B1C528u, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08B1C550:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C554u, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08B1C578:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C57Cu, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08B1C5A0:
    rt.unsupported(0x08B1C5A0u, 0x20746F6Eu, "unknown not lowered yet"); return;
L_08B1C5C4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C5C8u, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08B1C5F4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C5F8u, 0x49676E69u, "cop2/vfpu not lowered yet"); return;
L_08B1C618:
    rt.unsupported(0x08B1C618u, 0x434D454Du, "unknown not lowered yet"); return;
L_08B1C620:
    ctx.execute_vfpu_compare3(73u, 110u, 116u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<32u, 84u, 104u, 1u>();
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 50u, 0x08848484u>(ctx, &aot_mem); return;
L_08B1C634:
    rt.unsupported(0x08B1C634u, 0x72617473u, "unknown not lowered yet"); return;
L_08B1C640:
    // nop
    (void)(ctx.pc = 0x09D1A5B8u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B1C648:
    rt.unsupported(0x08B1C648u, 0x41544144u, "unknown not lowered yet"); return;
L_08B1C658:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    rt.unsupported(0x08B1C65Cu, 0x696E6920u, "unknown not lowered yet"); return;
L_08B1C66C:
    rt.unsupported(0x08B1C66Cu, 0x72617453u, "unknown not lowered yet"); return;
L_08B1C67C:
    rt.unsupported(0x08B1C67Cu, 0x616C7053u, "vfpu0 not lowered yet"); return;
L_08B1C688:
    rt.unsupported(0x08B1C688u, 0x000A3F70u, "special? not lowered yet"); return;
L_08B1C6C4:
    ctx.gpr[14] = (0u | ctx.gpr[10]);
    rt.unsupported(0x08B1C6C8u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B1C6D0:
    rt.unsupported(0x08B1C6D0u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B1C6F0:
    rt.unsupported(0x08B1C6F0u, 0x69797274u, "unknown not lowered yet"); return;
L_08B1C714:
    rt.unsupported(0x08B1C714u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B1C71C:
    rt.unsupported(0x08B1C71Cu, 0x462E2E2Eu, "cop1? not lowered yet"); return;
L_08B1C72C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<46u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<46u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<46u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C730u, 0x20656E6Fu, "unknown not lowered yet"); return;
L_08B1C738:
    rt.unsupported(0x08B1C738u, 0x76697264u, "unknown not lowered yet"); return;
L_08B1C748:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<9u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1C74Cu, 0x69206169u, "unknown not lowered yet"); return;
L_08B1C754:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<9u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(105u, 97u, 32u, 1u, 6u);
    rt.unsupported(0x08B1C75Cu, 0x000A7475u, "special? not lowered yet"); return;
L_08B1C760:
    rt.unsupported(0x08B1C760u, 0x61657209u, "vfpu0 not lowered yet"); return;
L_08B1C768:
    if (ctx.gpr[2] != ctx.gpr[15]) {
    rt.unsupported(0x08B1C76Cu, 0x61657220u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 805u, 0x08B2FF90u>(ctx, &aot_mem); return;
    }
    goto L_08B1C770;
L_08B1C770:
    ctx.gpr[15] = (0u & ctx.gpr[10]);
    goto L_08B1C774;
L_08B1C774:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<9u, 1u>(vfpu_d); }
    goto L_08B1C778;
L_08B1C778:
    rt.unsupported(0x08B1C778u, 0x63206169u, "vfpu0 not lowered yet"); return;
L_08B1C780:
    rt.unsupported(0x08B1C780u, 0x61657209u, "vfpu0 not lowered yet"); return;
L_08B1C78C:
    rt.unsupported(0x08B1C78Cu, 0x6964654Du, "unknown not lowered yet"); return;
L_08B1C7A0:
    rt.unsupported(0x08B1C7A0u, 0x6964654Du, "unknown not lowered yet"); return;
L_08B1C7B0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<116u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    if (0u == 0u) (void)(0u);
    goto L_08B1C7B8;
L_08B1C7B8:
    rt.unsupported(0x08B1C7B8u, 0x43534944u, "unknown not lowered yet"); return;
L_08B1C7C4:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    // nop
    goto L_08B1C7CC;
L_08B1C7CC:
    rt.unsupported(0x08B1C7CCu, 0x434D454Du, "unknown not lowered yet"); return;
L_08B1C7D4:
    rt.unsupported(0x08B1C7D4u, 0x434D454Du, "unknown not lowered yet"); return;
L_08B1C7DC:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08B1C7E0u, 0x73252073u, "unknown not lowered yet"); return;
L_08B1C7E8:
    rt.unsupported(0x08B1C7E8u, 0x434D454Du, "unknown not lowered yet"); return;
L_08B1C7F0:
    rt.unsupported(0x08B1C7F0u, 0x434D454Du, "unknown not lowered yet"); return;
L_08B1C7F8:
    rt.unsupported(0x08B1C7F8u, 0x7373654Du, "unknown not lowered yet"); return;
L_08B1C814:
    rt.unsupported(0x08B1C814u, 0x494E415Cu, "cop2/vfpu not lowered yet"); return;
L_08B1C820:
    ctx.gpr[27] = (ctx.gpr[9] & 18253u);
    // nop
    goto L_08B1C828;
L_08B1C828:
    rt.unsupported(0x08B1C828u, 0x494E415Cu, "cop2/vfpu not lowered yet"); return;
L_08B1C834:
    ctx.gpr[27] = (ctx.gpr[9] & 21065u);
    // nop
    goto L_08B1C83C;
L_08B1C83C:
    rt.unsupported(0x08B1C83Cu, 0x494E415Cu, "cop2/vfpu not lowered yet"); return;
L_08B1C84C:
    rt.unsupported(0x08B1C84Cu, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C854u, 0x4E4F5246u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 750u, 0x08B2F968u>(ctx, &aot_mem); return;
    }
    goto L_08B1C858;
L_08B1C858:
    ctx.gpr[14] = (ctx.gpr[10] & 17748u);
    rt.unsupported(0x08B1C85Cu, 0x4458542Eu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C860u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1C864:
    rt.unsupported(0x08B1C864u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C86Cu, 0x4E4F5246u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 751u, 0x08B2F980u>(ctx, &aot_mem); return;
    }
    goto L_08B1C870;
L_08B1C870:
    ctx.gpr[14] = (ctx.gpr[18] & 17748u);
    rt.unsupported(0x08B1C874u, 0x4458542Eu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C878u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1C87C:
    rt.unsupported(0x08B1C87Cu, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C884u, 0x544E4F46u, "control flow in delay slot"); return;
L_08B1C888:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.gpr[7] = (ctx.gpr[17] << (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 3u, 0x08B281D8u>(ctx, &aot_mem); return;
    }
    goto L_08B1C890;
L_08B1C890:
    rt.unsupported(0x08B1C890u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(21832) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 755u, 0x08B2F9ACu>(ctx, &aot_mem); return;
    }
    goto L_08B1C89C;
L_08B1C89C:
    ctx.gpr[4] = (ctx.gpr[26] ^ 22612u);
    rt.unsupported(0x08B1C8A0u, 0x00000031u, "special? not lowered yet"); return;
L_08B1C8A4:
    rt.unsupported(0x08B1C8A4u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C8ACu, 0x54524150u, "control flow in delay slot"); return;
L_08B1C8B0:
    rt.unsupported(0x08B1C8B0u, 0x454C4349u, "cop1? not lowered yet"); return;
L_08B1C8BC:
    rt.unsupported(0x08B1C8BCu, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C8C4u, 0x4353494Du, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 758u, 0x08B2F9D8u>(ctx, &aot_mem); return;
    }
    goto L_08B1C8C8;
L_08B1C8C8:
    rt.unsupported(0x08B1C8C8u, 0x4458542Eu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C8CCu, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1C8D0:
    rt.unsupported(0x08B1C8D0u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C8D8u, 0x454E4547u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 760u, 0x08B2F9ECu>(ctx, &aot_mem); return;
    }
    goto L_08B1C8DC;
L_08B1C8DC:
    ctx.gpr[3] = (ctx.gpr[18] < static_cast<std::uint32_t>(18770) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[26] ^ 22612u);
    rt.unsupported(0x08B1C8E4u, 0x00000031u, "special? not lowered yet"); return;
L_08B1C8E8:
    rt.unsupported(0x08B1C8E8u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.gpr[1] = (ctx.gpr[26] & 21575u);
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 762u, 0x08B2FA04u>(ctx, &aot_mem); return;
    }
    goto L_08B1C8F4;
L_08B1C8F4:
    if (ctx.gpr[18] == ctx.gpr[9]) {
    rt.unsupported(0x08B1C8F8u, 0x0000313Bu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 332u, 0x08B2D9B0u>(ctx, &aot_mem); return;
    }
    goto L_08B1C8FC;
L_08B1C8FC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    rt.unsupported(0x08B1C900u, 0x4D415C54u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 229u, 0x08B31A70u>(ctx, &aot_mem); return;
    }
    goto L_08B1C904;
L_08B1C904:
    rt.unsupported(0x08B1C904u, 0x43495245u, "unknown not lowered yet"); return;
L_08B1C914:
    rt.unsupported(0x08B1C918u, 0x52465C54u, "control flow in delay slot"); return;
L_08B1C91C:
    rt.unsupported(0x08B1C91Cu, 0x48434E45u, "cop2/vfpu not lowered yet"); return;
L_08B1C928:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    rt.unsupported(0x08B1C92Cu, 0x45475C54u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 231u, 0x08B31A9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1C930;
L_08B1C930:
    rt.unsupported(0x08B1C930u, 0x4E414D52u, "unknown not lowered yet"); return;
L_08B1C93C:
    rt.unsupported(0x08B1C940u, 0x54495C54u, "control flow in delay slot"); return;
L_08B1C944:
    rt.unsupported(0x08B1C944u, 0x41494C41u, "unknown not lowered yet"); return;
L_08B1C950:
    rt.unsupported(0x08B1C954u, 0x50535C54u, "control flow in delay slot"); return;
L_08B1C958:
    rt.unsupported(0x08B1C95Cu, 0x58472E48u, "control flow in delay slot"); return;
L_08B1C960:
    rt.unsupported(0x08B1C960u, 0x00313B54u, "special? not lowered yet"); return;
L_08B1C964:
    rt.unsupported(0x08B1C964u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C96Cu, 0x4C4C4F43u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 766u, 0x08B2FA80u>(ctx, &aot_mem); return;
    }
    goto L_08B1C970;
L_08B1C970:
    rt.unsupported(0x08B1C970u, 0x4E45475Cu, "unknown not lowered yet"); return;
L_08B1C980:
    rt.unsupported(0x08B1C980u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C988u, 0x4C4C4F43u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 768u, 0x08B2FA9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1C98C;
L_08B1C98C:
    rt.unsupported(0x08B1C98Cu, 0x4845565Cu, "cop2/vfpu not lowered yet"); return;
L_08B1C99C:
    rt.unsupported(0x08B1C99Cu, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C9A4u, 0x4C4C4F43u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 769u, 0x08B2FAB8u>(ctx, &aot_mem); return;
    }
    goto L_08B1C9A8;
L_08B1C9A8:
    rt.unsupported(0x08B1C9A8u, 0x4445505Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1C9ACu, 0x4F432E53u, "unknown not lowered yet"); return;
L_08B1C9B4:
    rt.unsupported(0x08B1C9B4u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C9BCu, 0x4C4C4F43u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 772u, 0x08B2FAD0u>(ctx, &aot_mem); return;
    }
    goto L_08B1C9C0;
L_08B1C9BC:
    rt.unsupported(0x08B1C9BCu, 0x4C4C4F43u, "unknown not lowered yet"); return;
L_08B1C9C0:
    rt.unsupported(0x08B1C9C0u, 0x4145575Cu, "unknown not lowered yet"); return;
L_08B1C9CC:
    rt.unsupported(0x08B1C9CCu, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1C9D0:
    rt.unsupported(0x08B1C9D0u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C9D8u, 0x454E4547u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 774u, 0x08B2FAECu>(ctx, &aot_mem); return;
    }
    goto L_08B1C9DC;
L_08B1C9DC:
    rt.unsupported(0x08B1C9E0u, 0x5F524941u, "control flow in delay slot"); return;
L_08B1C9E4:
    ctx.gpr[15] = (ctx.gpr[18] < static_cast<std::uint32_t>(19542) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[26] ^ 17988u);
    rt.unsupported(0x08B1C9ECu, 0x00000031u, "special? not lowered yet"); return;
L_08B1C9F0:
    rt.unsupported(0x08B1C9F0u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1C9F8u, 0x454E4547u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 776u, 0x08B2FB0Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1C9FC;
L_08B1C9FC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CA00u, 0x45454857u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 686u, 0x08B2EF48u>(ctx, &aot_mem); return;
    }
    goto L_08B1CA04;
L_08B1CA04:
    rt.unsupported(0x08B1CA04u, 0x442E534Cu, "cop1? not lowered yet"); return;
L_08B1CA10:
    rt.unsupported(0x08B1CA10u, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CA18u, 0x454E4547u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 777u, 0x08B2FB2Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CA1C;
L_08B1CA1C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CA20u, 0x4F525241u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 688u, 0x08B2EF68u>(ctx, &aot_mem); return;
    }
    goto L_08B1CA24;
L_08B1CA24:
    rt.unsupported(0x08B1CA24u, 0x46442E57u, "cop1? not lowered yet"); return;
L_08B1CA2C:
    rt.unsupported(0x08B1CA2Cu, 0x444F4D5Cu, "unsupported CFC1 control register"); return;
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CA34u, 0x454E4547u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 778u, 0x08B2FB48u>(ctx, &aot_mem); return;
    }
    goto L_08B1CA38;
L_08B1CA38:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CA3Cu, 0x454E4F5Au, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 691u, 0x08B2EF84u>(ctx, &aot_mem); return;
    }
    goto L_08B1CA40;
L_08B1CA40:
    rt.unsupported(0x08B1CA40u, 0x424C5943u, "unknown not lowered yet"); return;
L_08B1CA4C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CA50u, 0x41485C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 363u, 0x08B2DBC0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CA54;
L_08B1CA54:
    rt.unsupported(0x08B1CA54u, 0x494C444Eu, "cop2/vfpu not lowered yet"); return;
L_08B1CA64:
    rt.unsupported(0x08B1CA68u, 0x55535C41u, "control flow in delay slot"); return;
L_08B1CA6C:
    rt.unsupported(0x08B1CA6Cu, 0x43414652u, "unknown not lowered yet"); return;
L_08B1CA78:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CA7Cu, 0x45505C41u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 367u, 0x08B2DBECu>(ctx, &aot_mem); return;
    }
    goto L_08B1CA80;
L_08B1CA80:
    rt.unsupported(0x08B1CA80u, 0x41545344u, "unknown not lowered yet"); return;
L_08B1CA90:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CA94u, 0x49545C41u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 368u, 0x08B2DC04u>(ctx, &aot_mem); return;
    }
    goto L_08B1CA98;
L_08B1CA98:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    rt.unsupported(0x08B1CA9Cu, 0x41442E43u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 492u, 0x08B2DFD0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CAA0;
L_08B1CAA0:
    rt.unsupported(0x08B1CAA0u, 0x00313B54u, "special? not lowered yet"); return;
L_08B1CAA4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CAA8u, 0x41505C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 370u, 0x08B2DC18u>(ctx, &aot_mem); return;
    }
    goto L_08B1CAAC;
L_08B1CAAC:
    rt.unsupported(0x08B1CAACu, 0x43495452u, "unknown not lowered yet"); return;
L_08B1CABC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CAC0u, 0x45445C41u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 372u, 0x08B2DC30u>(ctx, &aot_mem); return;
    }
    goto L_08B1CAC4;
L_08B1CAC4:
    rt.unsupported(0x08B1CAC4u, 0x4C554146u, "unknown not lowered yet"); return;
L_08B1CAD0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CAD4u, 0x45445C41u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 375u, 0x08B2DC44u>(ctx, &aot_mem); return;
    }
    goto L_08B1CAD8;
L_08B1CAD8:
    rt.unsupported(0x08B1CAD8u, 0x4C554146u, "unknown not lowered yet"); return;
L_08B1CAE4:
    rt.unsupported(0x08B1CAE8u, 0x54475C41u, "control flow in delay slot"); return;
L_08B1CAEC:
    rt.unsupported(0x08B1CAECu, 0x43565F41u, "unknown not lowered yet"); return;
L_08B1CAF8:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CAFCu, 0x424F5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 378u, 0x08B2DC6Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CB00;
L_08B1CB00:
    rt.unsupported(0x08B1CB04u, 0x5441442Eu, "control flow in delay slot"); return;
L_08B1CB08:
    rt.unsupported(0x08B1CB08u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1CB0C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB10u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 381u, 0x08B2DC80u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB14;
L_08B1CB14:
    rt.unsupported(0x08B1CB14u, 0x4F5A2E50u, "unknown not lowered yet"); return;
L_08B1CB1C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB20u, 0x414E5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 383u, 0x08B2DC90u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB24;
L_08B1CB24:
    ctx.gpr[7] = (ctx.gpr[18] < static_cast<std::uint32_t>(18774) ? 1u : 0u);
    ctx.gpr[14] = (ctx.gpr[26] ^ 20314u);
    rt.unsupported(0x08B1CB2Cu, 0x00000031u, "special? not lowered yet"); return;
L_08B1CB30:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB34u, 0x4E495C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 384u, 0x08B2DCA4u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB38;
L_08B1CB38:
    if (static_cast<std::int32_t>(ctx.gpr[17]) <= 0) {
    ctx.gpr[27] = (ctx.gpr[9] & 20047u);
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 64u, 0x08B30854u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB40;
L_08B1CB40:
    // nop
    goto L_08B1CB44;
L_08B1CB44:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB48u, 0x41575C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 386u, 0x08B2DCB8u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB4C;
L_08B1CB4C:
    if (ctx.gpr[2] == ctx.gpr[18]) {
    rt.unsupported(0x08B1CB50u, 0x442E4F52u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 505u, 0x08B2E0A0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB54;
L_08B1CB54:
    ctx.gpr[27] = (ctx.gpr[9] & 21569u);
    // nop
    goto L_08B1CB5C;
L_08B1CB5C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB60u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 388u, 0x08B2DCD0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB64;
L_08B1CB64:
    if (ctx.gpr[25] == ctx.gpr[14]) {
    ctx.gpr[27] = (ctx.gpr[9] & 19779u);
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 33u, 0x08B3048Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CB6C;
L_08B1CB6C:
    // nop
    goto L_08B1CB70;
L_08B1CB70:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB74u, 0x41435C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 390u, 0x08B2DCE4u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB78;
L_08B1CB78:
    rt.unsupported(0x08B1CB78u, 0x4C4F4352u, "unknown not lowered yet"); return;
L_08B1CB84:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB88u, 0x45505C41u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 393u, 0x08B2DCF8u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB8C;
L_08B1CB8C:
    rt.unsupported(0x08B1CB8Cu, 0x41442E44u, "unknown not lowered yet"); return;
L_08B1CB94:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CB98u, 0x49465C41u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 395u, 0x08B2DD08u>(ctx, &aot_mem); return;
    }
    goto L_08B1CB9C;
L_08B1CB9C:
    rt.unsupported(0x08B1CB9Cu, 0x49465453u, "cop2/vfpu not lowered yet"); return;
L_08B1CBAC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CBB0u, 0x45575C41u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 398u, 0x08B2DD20u>(ctx, &aot_mem); return;
    }
    goto L_08B1CBB4;
L_08B1CBB4:
    rt.unsupported(0x08B1CBB4u, 0x4E4F5041u, "unknown not lowered yet"); return;
L_08B1CBC0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CBC4u, 0x45505C41u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 401u, 0x08B2DD34u>(ctx, &aot_mem); return;
    }
    goto L_08B1CBC8;
L_08B1CBC8:
    rt.unsupported(0x08B1CBCCu, 0x5441442Eu, "control flow in delay slot"); return;
L_08B1CBD0:
    rt.unsupported(0x08B1CBD0u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1CBD4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CBD8u, 0x41505C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 404u, 0x08B2DD48u>(ctx, &aot_mem); return;
    }
    goto L_08B1CBDC;
L_08B1CBDC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CBE0u, 0x47494C46u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 651u, 0x08B2ED30u>(ctx, &aot_mem); return;
    }
    goto L_08B1CBE4;
L_08B1CBE4:
    rt.unsupported(0x08B1CBE4u, 0x442E5448u, "cop1? not lowered yet"); return;
L_08B1CBF0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CBF4u, 0x41505C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 408u, 0x08B2DD64u>(ctx, &aot_mem); return;
    }
    goto L_08B1CBF8;
L_08B1CBF8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CBFCu, 0x47494C46u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 653u, 0x08B2ED4Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CC00;
L_08B1CC00:
    ctx.gpr[18] = (ctx.gpr[17] < static_cast<std::uint32_t>(21576) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[26] ^ 16708u);
    rt.unsupported(0x08B1CC08u, 0x00000031u, "special? not lowered yet"); return;
L_08B1CC0C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CC10u, 0x41505C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 412u, 0x08B2DD80u>(ctx, &aot_mem); return;
    }
    goto L_08B1CC14;
L_08B1CC14:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CC18u, 0x47494C46u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 655u, 0x08B2ED68u>(ctx, &aot_mem); return;
    }
    goto L_08B1CC1C;
L_08B1CC1C:
    ctx.gpr[19] = (ctx.gpr[17] < static_cast<std::uint32_t>(21576) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[26] ^ 16708u);
    rt.unsupported(0x08B1CC24u, 0x00000031u, "special? not lowered yet"); return;
L_08B1CC28:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CC2Cu, 0x41505C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 415u, 0x08B2DD9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CC30;
L_08B1CC30:
    rt.unsupported(0x08B1CC34u, 0x54415053u, "control flow in delay slot"); return;
L_08B1CC34:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CC38u, 0x442E3048u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 88u, 0x08B30D84u>(ctx, &aot_mem); return;
    }
    goto L_08B1CC3C;
L_08B1CC38:
    rt.unsupported(0x08B1CC38u, 0x442E3048u, "cop1? not lowered yet"); return;
L_08B1CC3C:
    ctx.gpr[27] = (ctx.gpr[9] & 21569u);
    // nop
    goto L_08B1CC44;
L_08B1CC44:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CC48u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 419u, 0x08B2DDB8u>(ctx, &aot_mem); return;
    }
    goto L_08B1CC4C;
L_08B1CC4C:
    rt.unsupported(0x08B1CC4Cu, 0x4C5C5350u, "unknown not lowered yet"); return;
L_08B1CC5C:
    rt.unsupported(0x08B1CC5Cu, 0x4148454Cu, "unknown not lowered yet"); return;
L_08B1CC68:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CC6Cu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 424u, 0x08B2DDDCu>(ctx, &aot_mem); return;
    }
    goto L_08B1CC70;
L_08B1CC70:
    rt.unsupported(0x08B1CC70u, 0x445C5350u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1CC78u, 0x5C4E574Fu, "control flow in delay slot"); return;
L_08B1CC78:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CC7Cu, 0x4E574F44u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 305u, 0x08B329B8u>(ctx, &aot_mem); return;
    }
    goto L_08B1CC80;
L_08B1CC7C:
    rt.unsupported(0x08B1CC7Cu, 0x4E574F44u, "unknown not lowered yet"); return;
L_08B1CC80:
    rt.unsupported(0x08B1CC80u, 0x4E574F54u, "unknown not lowered yet"); return;
L_08B1CC8C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CC90u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 430u, 0x08B2DE00u>(ctx, &aot_mem); return;
    }
    goto L_08B1CC94;
L_08B1CC94:
    rt.unsupported(0x08B1CC94u, 0x445C5350u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1CC9Cu, 0x5C53574Fu, "control flow in delay slot"); return;
L_08B1CCA0:
    rt.unsupported(0x08B1CCA0u, 0x4E574F44u, "unknown not lowered yet"); return;
L_08B1CCAC:
    rt.unsupported(0x08B1CCACu, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1CCB0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CCB4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 437u, 0x08B2DE24u>(ctx, &aot_mem); return;
    }
    goto L_08B1CCB8;
L_08B1CCB8:
    rt.unsupported(0x08B1CCB8u, 0x445C5350u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[26] == ctx.gpr[11]) {
    rt.unsupported(0x08B1CCC0u, 0x434F445Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 336u, 0x08B2D9FCu>(ctx, &aot_mem); return;
    }
    goto L_08B1CCC4;
L_08B1CCC4:
    rt.unsupported(0x08B1CCC4u, 0x492E534Bu, "cop2/vfpu not lowered yet"); return;
L_08B1CCD0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CCD4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 442u, 0x08B2DE44u>(ctx, &aot_mem); return;
    }
    goto L_08B1CCD8;
L_08B1CCD8:
    if (ctx.gpr[26] != ctx.gpr[28]) {
    rt.unsupported(0x08B1CCDCu, 0x49485341u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 226u, 0x08B31A1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CCE0;
L_08B1CCE0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CCE4u, 0x48534157u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 260u, 0x08B31E1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CCE8;
L_08B1CCE8:
    rt.unsupported(0x08B1CCE8u, 0x4E544E49u, "unknown not lowered yet"); return;
L_08B1CCF4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CCF8u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 446u, 0x08B2DE68u>(ctx, &aot_mem); return;
    }
    goto L_08B1CCFC;
L_08B1CCFC:
    if (ctx.gpr[26] != ctx.gpr[28]) {
    rt.unsupported(0x08B1CD00u, 0x49485341u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 228u, 0x08B31A40u>(ctx, &aot_mem); return;
    }
    goto L_08B1CD04;
L_08B1CD04:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CD08u, 0x48534157u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 262u, 0x08B31E40u>(ctx, &aot_mem); return;
    }
    goto L_08B1CD0C;
L_08B1CD0C:
    if (ctx.gpr[26] == ctx.gpr[20]) {
    rt.unsupported(0x08B1CD10u, 0x4544492Eu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 46u, 0x08B30634u>(ctx, &aot_mem); return;
    }
    goto L_08B1CD14;
L_08B1CD14:
    rt.unsupported(0x08B1CD14u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1CD18:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CD1Cu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 449u, 0x08B2DE8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CD20;
L_08B1CD20:
    rt.unsupported(0x08B1CD20u, 0x4F5C5350u, "unknown not lowered yet"); return;
L_08B1CD30:
    if (ctx.gpr[18] != ctx.gpr[18]) {
    rt.unsupported(0x08B1CD34u, 0x4544492Eu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 447u, 0x08B2DE6Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CD38;
L_08B1CD38:
    rt.unsupported(0x08B1CD38u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1CD3C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CD40u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 452u, 0x08B2DEB0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CD44;
L_08B1CD44:
    rt.unsupported(0x08B1CD44u, 0x4F5C5350u, "unknown not lowered yet"); return;
L_08B1CD60:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CD64u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 456u, 0x08B2DED4u>(ctx, &aot_mem); return;
    }
    goto L_08B1CD68;
L_08B1CD68:
    rt.unsupported(0x08B1CD68u, 0x475C5350u, "cop1? not lowered yet"); return;
L_08B1CD74:
    rt.unsupported(0x08B1CD74u, 0x4544492Eu, "cop1? not lowered yet"); return;
L_08B1CD7C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CD80u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 460u, 0x08B2DEF0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CD84;
L_08B1CD84:
    rt.unsupported(0x08B1CD84u, 0x425C5350u, "unknown not lowered yet"); return;
L_08B1CD94:
    rt.unsupported(0x08B1CD94u, 0x4544492Eu, "cop1? not lowered yet"); return;
L_08B1CD9C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CDA0u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 465u, 0x08B2DF10u>(ctx, &aot_mem); return;
    }
    goto L_08B1CDA4;
L_08B1CDA4:
    if (ctx.gpr[26] == ctx.gpr[28]) {
    rt.unsupported(0x08B1CDA8u, 0x49524154u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 235u, 0x08B31AE8u>(ctx, &aot_mem); return;
    }
    goto L_08B1CDAC;
L_08B1CDAC:
    if (ctx.gpr[26] == ctx.gpr[28]) {
    rt.unsupported(0x08B1CDB0u, 0x49524154u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 802u, 0x08B2FEFCu>(ctx, &aot_mem); return;
    }
    goto L_08B1CDB4;
L_08B1CDB4:
    rt.unsupported(0x08B1CDB4u, 0x492E4C53u, "cop2/vfpu not lowered yet"); return;
L_08B1CDC0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CDC4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 470u, 0x08B2DF34u>(ctx, &aot_mem); return;
    }
    goto L_08B1CDC8;
L_08B1CDC8:
    rt.unsupported(0x08B1CDC8u, 0x4E5C5350u, "unknown not lowered yet"); return;
L_08B1CDD8:
    if (ctx.gpr[2] != ctx.gpr[2]) {
    rt.unsupported(0x08B1CDDCu, 0x4544492Eu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 680u, 0x08B2EEE8u>(ctx, &aot_mem); return;
    }
    goto L_08B1CDE0;
L_08B1CDE0:
    rt.unsupported(0x08B1CDE0u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1CDE4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CDE8u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 475u, 0x08B2DF58u>(ctx, &aot_mem); return;
    }
    goto L_08B1CDEC;
L_08B1CDEC:
    rt.unsupported(0x08B1CDECu, 0x4E5C5350u, "unknown not lowered yet"); return;
L_08B1CE08:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CE0Cu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 480u, 0x08B2DF7Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CE10;
L_08B1CE10:
    rt.unsupported(0x08B1CE10u, 0x4E5C5350u, "unknown not lowered yet"); return;
L_08B1CE28:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CE2Cu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 485u, 0x08B2DF9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CE30;
L_08B1CE30:
    rt.unsupported(0x08B1CE30u, 0x425C5350u, "unknown not lowered yet"); return;
L_08B1CE3C:
    rt.unsupported(0x08B1CE3Cu, 0x4544492Eu, "cop1? not lowered yet"); return;
L_08B1CE44:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CE48u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 489u, 0x08B2DFB8u>(ctx, &aot_mem); return;
    }
    goto L_08B1CE4C;
L_08B1CE4C:
    rt.unsupported(0x08B1CE4Cu, 0x4D5C5350u, "unknown not lowered yet"); return;
L_08B1CE58:
    rt.unsupported(0x08B1CE58u, 0x4544492Eu, "cop1? not lowered yet"); return;
L_08B1CE60:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CE64u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 493u, 0x08B2DFD4u>(ctx, &aot_mem); return;
    }
    goto L_08B1CE68;
L_08B1CE68:
    rt.unsupported(0x08B1CE6Cu, 0x54484341u, "control flow in delay slot"); return;
L_08B1CE70:
    rt.unsupported(0x08B1CE70u, 0x4341595Cu, "unknown not lowered yet"); return;
L_08B1CE80:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CE84u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 495u, 0x08B2DFF4u>(ctx, &aot_mem); return;
    }
    goto L_08B1CE88;
L_08B1CE88:
    rt.unsupported(0x08B1CE88u, 0x435C5350u, "unknown not lowered yet"); return;
L_08B1CEA4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CEA8u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 498u, 0x08B2E018u>(ctx, &aot_mem); return;
    }
    goto L_08B1CEAC;
L_08B1CEAC:
    rt.unsupported(0x08B1CEACu, 0x435C5350u, "unknown not lowered yet"); return;
L_08B1CEB8:
    rt.unsupported(0x08B1CEB8u, 0x4544492Eu, "cop1? not lowered yet"); return;
L_08B1CEC0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CEC4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 501u, 0x08B2E034u>(ctx, &aot_mem); return;
    }
    goto L_08B1CEC8;
L_08B1CEC8:
    rt.unsupported(0x08B1CEC8u, 0x485C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1CED8:
    ctx.gpr[27] = (ctx.gpr[9] & 17732u);
    // nop
    goto L_08B1CEE0;
L_08B1CEE0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CEE4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 502u, 0x08B2E054u>(ctx, &aot_mem); return;
    }
    goto L_08B1CEE8;
L_08B1CEE8:
    rt.unsupported(0x08B1CEE8u, 0x4C5C5350u, "unknown not lowered yet"); return;
L_08B1CF04:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CF08u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 503u, 0x08B2E078u>(ctx, &aot_mem); return;
    }
    goto L_08B1CF0C;
L_08B1CF0C:
    rt.unsupported(0x08B1CF10u, 0x50495254u, "control flow in delay slot"); return;
L_08B1CF14:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1CF18u, 0x49525453u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 2u, 0x08B30024u>(ctx, &aot_mem); return;
    }
    goto L_08B1CF1C;
L_08B1CF1C:
    rt.unsupported(0x08B1CF1Cu, 0x424C4350u, "unknown not lowered yet"); return;
L_08B1CF28:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CF2Cu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 504u, 0x08B2E09Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1CF30;
L_08B1CF30:
    rt.unsupported(0x08B1CF30u, 0x415C5350u, "unknown not lowered yet"); return;
L_08B1CF4C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CF50u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 506u, 0x08B2E0C0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CF54;
L_08B1CF54:
    rt.unsupported(0x08B1CF54u, 0x485C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1CF6C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CF70u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 507u, 0x08B2E0E0u>(ctx, &aot_mem); return;
    }
    goto L_08B1CF74;
L_08B1CF74:
    rt.unsupported(0x08B1CF74u, 0x485C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1CF8C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CF90u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 508u, 0x08B2E100u>(ctx, &aot_mem); return;
    }
    goto L_08B1CF94;
L_08B1CF94:
    rt.unsupported(0x08B1CF94u, 0x435C5350u, "unknown not lowered yet"); return;
L_08B1CFA4:
    rt.unsupported(0x08B1CFA4u, 0x48545245u, "cop2/vfpu not lowered yet"); return;
L_08B1CFB0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CFB4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 509u, 0x08B2E124u>(ctx, &aot_mem); return;
    }
    goto L_08B1CFB8;
L_08B1CFB8:
    rt.unsupported(0x08B1CFB8u, 0x4D5C5350u, "unknown not lowered yet"); return;
L_08B1CFD4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CFD8u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 510u, 0x08B2E148u>(ctx, &aot_mem); return;
    }
    goto L_08B1CFDC;
L_08B1CFDC:
    rt.unsupported(0x08B1CFDCu, 0x495C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1CFEC:
    rt.unsupported(0x08B1CFECu, 0x4653444Eu, "cop1? not lowered yet"); return;
L_08B1CFF8:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1CFFCu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 512u, 0x08B2E16Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D000;
L_08B1D000:
    rt.unsupported(0x08B1D000u, 0x4C5C5350u, "unknown not lowered yet"); return;
L_08B1D010:
    rt.unsupported(0x08B1D010u, 0x4148454Cu, "unknown not lowered yet"); return;
L_08B1D01C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D020u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 514u, 0x08B2E190u>(ctx, &aot_mem); return;
    }
    goto L_08B1D024;
L_08B1D024:
    rt.unsupported(0x08B1D024u, 0x445C5350u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D02Cu, 0x5C4E574Fu, "control flow in delay slot"); return;
L_08B1D030:
    rt.unsupported(0x08B1D030u, 0x4E574F44u, "unknown not lowered yet"); return;
L_08B1D040:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D044u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 515u, 0x08B2E1B4u>(ctx, &aot_mem); return;
    }
    goto L_08B1D048;
L_08B1D048:
    rt.unsupported(0x08B1D048u, 0x445C5350u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D050u, 0x5C53574Fu, "control flow in delay slot"); return;
L_08B1D054:
    rt.unsupported(0x08B1D054u, 0x4E574F44u, "unknown not lowered yet"); return;
L_08B1D060:
    rt.unsupported(0x08B1D060u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1D064:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D068u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 516u, 0x08B2E1D8u>(ctx, &aot_mem); return;
    }
    goto L_08B1D06C;
L_08B1D06C:
    rt.unsupported(0x08B1D06Cu, 0x445C5350u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[26] == ctx.gpr[11]) {
    rt.unsupported(0x08B1D074u, 0x434F445Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 418u, 0x08B2DDB0u>(ctx, &aot_mem); return;
    }
    goto L_08B1D078;
L_08B1D078:
    rt.unsupported(0x08B1D078u, 0x492E534Bu, "cop2/vfpu not lowered yet"); return;
L_08B1D084:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D088u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 517u, 0x08B2E1F8u>(ctx, &aot_mem); return;
    }
    goto L_08B1D08C;
L_08B1D08C:
    if (ctx.gpr[26] != ctx.gpr[28]) {
    rt.unsupported(0x08B1D090u, 0x49485341u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 258u, 0x08B31DD0u>(ctx, &aot_mem); return;
    }
    goto L_08B1D094;
L_08B1D094:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1D098u, 0x48534157u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 277u, 0x08B321D0u>(ctx, &aot_mem); return;
    }
    goto L_08B1D09C;
L_08B1D09C:
    rt.unsupported(0x08B1D09Cu, 0x4E544E49u, "unknown not lowered yet"); return;
L_08B1D0A8:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D0ACu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 518u, 0x08B2E21Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D0B0;
L_08B1D0B0:
    if (ctx.gpr[26] != ctx.gpr[28]) {
    rt.unsupported(0x08B1D0B4u, 0x49485341u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 259u, 0x08B31DF4u>(ctx, &aot_mem); return;
    }
    goto L_08B1D0B8;
L_08B1D0B8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1D0BCu, 0x48534157u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 279u, 0x08B321F4u>(ctx, &aot_mem); return;
    }
    goto L_08B1D0C0;
L_08B1D0C0:
    if (ctx.gpr[26] == ctx.gpr[20]) {
    rt.unsupported(0x08B1D0C4u, 0x4C50492Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 70u, 0x08B309E8u>(ctx, &aot_mem); return;
    }
    goto L_08B1D0C8;
L_08B1D0C8:
    rt.unsupported(0x08B1D0C8u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1D0CC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D0D0u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 520u, 0x08B2E240u>(ctx, &aot_mem); return;
    }
    goto L_08B1D0D4;
L_08B1D0D4:
    rt.unsupported(0x08B1D0D4u, 0x4F5C5350u, "unknown not lowered yet"); return;
L_08B1D0E4:
    if (ctx.gpr[18] != ctx.gpr[18]) {
    rt.unsupported(0x08B1D0E8u, 0x4C50492Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 519u, 0x08B2E220u>(ctx, &aot_mem); return;
    }
    goto L_08B1D0EC;
L_08B1D0EC:
    rt.unsupported(0x08B1D0ECu, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1D0F0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D0F4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 521u, 0x08B2E264u>(ctx, &aot_mem); return;
    }
    goto L_08B1D0F8;
L_08B1D0F8:
    rt.unsupported(0x08B1D0F8u, 0x4F5C5350u, "unknown not lowered yet"); return;
L_08B1D114:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D118u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 522u, 0x08B2E288u>(ctx, &aot_mem); return;
    }
    goto L_08B1D11C;
L_08B1D11C:
    rt.unsupported(0x08B1D11Cu, 0x475C5350u, "cop1? not lowered yet"); return;
L_08B1D128:
    rt.unsupported(0x08B1D128u, 0x4C50492Eu, "unknown not lowered yet"); return;
L_08B1D130:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D134u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 523u, 0x08B2E2A4u>(ctx, &aot_mem); return;
    }
    goto L_08B1D138;
L_08B1D138:
    rt.unsupported(0x08B1D138u, 0x425C5350u, "unknown not lowered yet"); return;
L_08B1D148:
    rt.unsupported(0x08B1D148u, 0x4C50492Eu, "unknown not lowered yet"); return;
L_08B1D150:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D154u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 524u, 0x08B2E2C4u>(ctx, &aot_mem); return;
    }
    goto L_08B1D158;
L_08B1D158:
    if (ctx.gpr[26] == ctx.gpr[28]) {
    rt.unsupported(0x08B1D15Cu, 0x49524154u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 264u, 0x08B31E9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D160;
L_08B1D160:
    if (ctx.gpr[26] == ctx.gpr[28]) {
    rt.unsupported(0x08B1D164u, 0x49524154u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 19u, 0x08B302B0u>(ctx, &aot_mem); return;
    }
    goto L_08B1D168;
L_08B1D168:
    rt.unsupported(0x08B1D168u, 0x492E4C53u, "cop2/vfpu not lowered yet"); return;
L_08B1D174:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D178u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 526u, 0x08B2E2E8u>(ctx, &aot_mem); return;
    }
    goto L_08B1D17C;
L_08B1D17C:
    rt.unsupported(0x08B1D17Cu, 0x4E5C5350u, "unknown not lowered yet"); return;
L_08B1D18C:
    if (ctx.gpr[2] != ctx.gpr[2]) {
    rt.unsupported(0x08B1D190u, 0x4C50492Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 724u, 0x08B2F29Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D194;
L_08B1D194:
    rt.unsupported(0x08B1D194u, 0x0000313Bu, "special? not lowered yet"); return;
L_08B1D198:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D19Cu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 527u, 0x08B2E30Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D1A0;
L_08B1D1A0:
    rt.unsupported(0x08B1D1A0u, 0x4E5C5350u, "unknown not lowered yet"); return;
L_08B1D1B8:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D1BCu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 528u, 0x08B2E32Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D1C0;
L_08B1D1C0:
    rt.unsupported(0x08B1D1C0u, 0x4E5C5350u, "unknown not lowered yet"); return;
L_08B1D1DC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D1E0u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 529u, 0x08B2E350u>(ctx, &aot_mem); return;
    }
    goto L_08B1D1E4;
L_08B1D1E4:
    rt.unsupported(0x08B1D1E4u, 0x435C5350u, "unknown not lowered yet"); return;
L_08B1D200:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D204u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 530u, 0x08B2E374u>(ctx, &aot_mem); return;
    }
    goto L_08B1D208;
L_08B1D208:
    rt.unsupported(0x08B1D208u, 0x415C5350u, "unknown not lowered yet"); return;
L_08B1D224:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D228u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 531u, 0x08B2E398u>(ctx, &aot_mem); return;
    }
    goto L_08B1D22C;
L_08B1D22C:
    rt.unsupported(0x08B1D22Cu, 0x485C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1D244:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D248u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 532u, 0x08B2E3B8u>(ctx, &aot_mem); return;
    }
    goto L_08B1D24C;
L_08B1D24C:
    rt.unsupported(0x08B1D24Cu, 0x485C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1D264:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D268u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 533u, 0x08B2E3D8u>(ctx, &aot_mem); return;
    }
    goto L_08B1D26C;
L_08B1D26C:
    rt.unsupported(0x08B1D26Cu, 0x495C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1D27C:
    rt.unsupported(0x08B1D27Cu, 0x4653444Eu, "cop1? not lowered yet"); return;
L_08B1D288:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D28Cu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 534u, 0x08B2E3FCu>(ctx, &aot_mem); return;
    }
    goto L_08B1D290;
L_08B1D290:
    rt.unsupported(0x08B1D290u, 0x425C5350u, "unknown not lowered yet"); return;
L_08B1D29C:
    rt.unsupported(0x08B1D29Cu, 0x4C50492Eu, "unknown not lowered yet"); return;
L_08B1D2A4:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D2A8u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 535u, 0x08B2E418u>(ctx, &aot_mem); return;
    }
    goto L_08B1D2AC;
L_08B1D2AC:
    rt.unsupported(0x08B1D2ACu, 0x4D5C5350u, "unknown not lowered yet"); return;
L_08B1D2B8:
    rt.unsupported(0x08B1D2B8u, 0x4C50492Eu, "unknown not lowered yet"); return;
L_08B1D2C0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D2C4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 536u, 0x08B2E434u>(ctx, &aot_mem); return;
    }
    goto L_08B1D2C8;
L_08B1D2C8:
    rt.unsupported(0x08B1D2CCu, 0x54484341u, "control flow in delay slot"); return;
L_08B1D2D0:
    rt.unsupported(0x08B1D2D0u, 0x4341595Cu, "unknown not lowered yet"); return;
L_08B1D2E0:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D2E4u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 537u, 0x08B2E454u>(ctx, &aot_mem); return;
    }
    goto L_08B1D2E8;
L_08B1D2E8:
    rt.unsupported(0x08B1D2E8u, 0x435C5350u, "unknown not lowered yet"); return;
L_08B1D2F4:
    rt.unsupported(0x08B1D2F4u, 0x4C50492Eu, "unknown not lowered yet"); return;
L_08B1D2FC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D300u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 538u, 0x08B2E470u>(ctx, &aot_mem); return;
    }
    goto L_08B1D304;
L_08B1D304:
    rt.unsupported(0x08B1D304u, 0x485C5350u, "cop2/vfpu not lowered yet"); return;
L_08B1D314:
    ctx.gpr[27] = (ctx.gpr[9] & 19536u);
    // nop
    goto L_08B1D31C;
L_08B1D31C:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D320u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 539u, 0x08B2E490u>(ctx, &aot_mem); return;
    }
    goto L_08B1D324;
L_08B1D324:
    rt.unsupported(0x08B1D324u, 0x4C5C5350u, "unknown not lowered yet"); return;
L_08B1D340:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D344u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 541u, 0x08B2E4B4u>(ctx, &aot_mem); return;
    }
    goto L_08B1D348;
L_08B1D348:
    rt.unsupported(0x08B1D34Cu, 0x50495254u, "control flow in delay slot"); return;
L_08B1D350:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    rt.unsupported(0x08B1D354u, 0x49525453u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 30u, 0x08B30460u>(ctx, &aot_mem); return;
    }
    goto L_08B1D358;
L_08B1D358:
    rt.unsupported(0x08B1D358u, 0x424C4350u, "unknown not lowered yet"); return;
L_08B1D364:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D368u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 542u, 0x08B2E4D8u>(ctx, &aot_mem); return;
    }
    goto L_08B1D36C;
L_08B1D36C:
    rt.unsupported(0x08B1D36Cu, 0x435C5350u, "unknown not lowered yet"); return;
L_08B1D37C:
    rt.unsupported(0x08B1D37Cu, 0x48545245u, "cop2/vfpu not lowered yet"); return;
L_08B1D388:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D38Cu, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 543u, 0x08B2E4FCu>(ctx, &aot_mem); return;
    }
    goto L_08B1D390;
L_08B1D390:
    rt.unsupported(0x08B1D390u, 0x4D5C5350u, "unknown not lowered yet"); return;
L_08B1D3A4:
    ctx.gpr[27] = (ctx.gpr[9] & 19536u);
    // nop
    goto L_08B1D3AC;
L_08B1D3AC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D3B0u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 544u, 0x08B2E520u>(ctx, &aot_mem); return;
    }
    goto L_08B1D3B4;
L_08B1D3B4:
    rt.unsupported(0x08B1D3B4u, 0x475C5350u, "cop1? not lowered yet"); return;
L_08B1D3C0:
    ctx.gpr[27] = (ctx.gpr[9] & 17732u);
    // nop
    goto L_08B1D3C8;
L_08B1D3C8:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D3CCu, 0x434F5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 545u, 0x08B2E53Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D3D0;
L_08B1D3D0:
    ctx.gpr[21] = (ctx.gpr[18] < static_cast<std::uint32_t>(19523) ? 1u : 0u);
    ctx.gpr[12] = (ctx.gpr[26] ^ 20553u);
    rt.unsupported(0x08B1D3D8u, 0x00000031u, "special? not lowered yet"); return;
L_08B1D3DC:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D3E0u, 0x414D5C41u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 546u, 0x08B2E550u>(ctx, &aot_mem); return;
    }
    goto L_08B1D3E4;
L_08B1D3E0:
    rt.unsupported(0x08B1D3E0u, 0x414D5C41u, "unknown not lowered yet"); return;
L_08B1D3E4:
    rt.unsupported(0x08B1D3E8u, 0x53485441u, "control flow in delay slot"); return;
L_08B1D3EC:
    rt.unsupported(0x08B1D3ECu, 0x4C50492Eu, "unknown not lowered yet"); return;
L_08B1D3F4:
    rt.unsupported(0x08B1D3F4u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D3F8u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D408:
    rt.unsupported(0x08B1D408u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D40Cu, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D41C:
    rt.unsupported(0x08B1D41Cu, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D420u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D430:
    rt.unsupported(0x08B1D430u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D434u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D444:
    rt.unsupported(0x08B1D444u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D448u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D458:
    rt.unsupported(0x08B1D458u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D45Cu, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D46C:
    rt.unsupported(0x08B1D46Cu, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D470u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D480:
    rt.unsupported(0x08B1D480u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D484u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D494:
    rt.unsupported(0x08B1D494u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D498u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D4A8:
    rt.unsupported(0x08B1D4A8u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D4ACu, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D4BC:
    rt.unsupported(0x08B1D4BCu, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D4C0u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D4D0:
    rt.unsupported(0x08B1D4D0u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D4D4u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D4E4:
    rt.unsupported(0x08B1D4E4u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D4E8u, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D4F8:
    rt.unsupported(0x08B1D4F8u, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D4FCu, 0x414F4C5Cu, "unknown not lowered yet"); return;
L_08B1D50C:
    rt.unsupported(0x08B1D50Cu, 0x4458545Cu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D510u, 0x4C50535Cu, "unknown not lowered yet"); return;
L_08B1D520:
    rt.unsupported(0x08B1D520u, 0x44414F4Cu, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[9] = (0x08B1D52Cu);
    ctx.gpr[14] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1D52Cu) goto L_08B1D52C;
    return;
L_08B1D52C:
    rt.unsupported(0x08B1D52Cu, 0x00000073u, "special? not lowered yet"); return;
L_08B1D5CC:
    if (ctx.gpr[2] != ctx.gpr[12]) {
    rt.unsupported(0x08B1D5D0u, 0x41472049u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 309u, 0x08B32B04u>(ctx, &aot_mem); return;
    }
    goto L_08B1D5D4;
L_08B1D5D4:
    rt.unsupported(0x08B1D5D4u, 0x0000454Du, "special? not lowered yet"); return;
L_08B1D5D8:
    if (ctx.gpr[25] != 0u) {
    rt.unsupported(0x08B1D5DCu, 0x49544941u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1109u, 0x08B27E84u>(ctx, &aot_mem); return;
    }
    goto L_08B1D5E0;
L_08B1D5E0:
    rt.unsupported(0x08B1D5E0u, 0x203A474Eu, "unknown not lowered yet"); return;
L_08B1D5EC:
    rt.unsupported(0x08B1D5ECu, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B1D5F8:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B1D5FCu, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B1D600u, 0x412F5249u, "unknown not lowered yet"); return;
L_08B1D610:
    if (ctx.gpr[18] == ctx.gpr[3]) {
    ctx.gpr[25] = (ctx.gpr[18] | 23105u);
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 52u, 0x08B29328u>(ctx, &aot_mem); return;
    }
    goto L_08B1D618;
L_08B1D618:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B1D61Cu, 0x00000033u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 40u, 0x08B28F00u>(ctx, &aot_mem); return;
    }
    goto L_08B1D620;
L_08B1D620:
    rt.unsupported(0x08B1D620u, 0x43202A2Au, "unknown not lowered yet"); return;
L_08B1D690:
    ctx.gpr[12] = (ctx.gpr[3] + ctx.gpr[19]);
    goto L_08B1D694;
L_08B1D694:
    ctx.execute_vfpu_compare3(102u, 108u, 111u, 1u, 6u);
    rt.unsupported(0x08B1D698u, 0x00000072u, "special? not lowered yet"); return;
L_08B1D69C:
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? ctx.gpr[3] : ctx.gpr[4]);
    goto L_08B1D6A0;
L_08B1D6A0:
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[3] : ctx.gpr[14]);
    goto L_08B1D6A4;
L_08B1D6A4:
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[24]) ? ctx.gpr[3] : ctx.gpr[24]);
    goto L_08B1D6A8;
L_08B1D6A8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1D6ACu, 0x00006D6Fu, "special? not lowered yet"); return;
L_08B1D6B0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<111u, 109u, 115u, 1u>();
    ctx.gpr[12] = (0u | 0u);
    goto L_08B1D6BC;
L_08B1D6BC:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<118u, 97u, 1u, 2u>();
    rt.unsupported(0x08B1D6C4u, 0x20736920u, "unknown not lowered yet"); return;
L_08B1D6D0:
    rt.unsupported(0x08B1D6D0u, 0x6E6F7277u, "vfpu3 not lowered yet"); return;
L_08B1D6EC:
    rt.unsupported(0x08B1D6ECu, 0x6874616Du, "unknown not lowered yet"); return;
L_08B1D6F4:
    rt.unsupported(0x08B1D6F4u, 0x00006970u, "special? not lowered yet"); return;
L_08B1D6F8:
    rt.unsupported(0x08B1D6F8u, 0x00726C70u, "special? not lowered yet"); return;
L_08B1D6FC:
    ctx.gpr[18] = (ctx.gpr[19] & 27760u);
    // nop
    goto L_08B1D704;
L_08B1D704:
    ctx.gpr[18] = (ctx.gpr[27] & 27760u);
    // nop
    goto L_08B1D70C;
L_08B1D70C:
    ctx.gpr[18] = (ctx.gpr[3] | 27760u);
    // nop
    goto L_08B1D714;
L_08B1D714:
    ctx.gpr[18] = (ctx.gpr[11] | 27760u);
    // nop
    goto L_08B1D71C;
L_08B1D71C:
    ctx.gpr[18] = (ctx.gpr[19] | 27760u);
    // nop
    goto L_08B1D724;
L_08B1D724:
    ctx.gpr[18] = (ctx.gpr[27] | 27760u);
    // nop
    goto L_08B1D72C;
L_08B1D72C:
    ctx.gpr[18] = (ctx.gpr[3] ^ 27760u);
    // nop
    goto L_08B1D734;
L_08B1D734:
    ctx.gpr[18] = (ctx.gpr[11] ^ 27760u);
    // nop
    goto L_08B1D73C;
L_08B1D73C:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B1D740u, 0x00000030u, "special? not lowered yet"); return;
L_08B1D744:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B1D748u, 0x00000031u, "special? not lowered yet"); return;
L_08B1D74C:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B1D750u, 0x00000032u, "special? not lowered yet"); return;
L_08B1D754:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B1D758u, 0x00000033u, "special? not lowered yet"); return;
L_08B1D75C:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B1D760u, 0x00000034u, "special? not lowered yet"); return;
L_08B1D764:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B1D768u, 0x00000035u, "special? not lowered yet"); return;
L_08B1D76C:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B1D770u, 0x00000036u, "special? not lowered yet"); return;
L_08B1D774:
    // nop
    goto L_08B1D778;
L_08B1D778:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D77Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B1D780:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D784u, 0x00003272u, "special? not lowered yet"); return;
L_08B1D788:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D78Cu, 0x00003372u, "special? not lowered yet"); return;
L_08B1D790:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D794u, 0x00003472u, "special? not lowered yet"); return;
L_08B1D798:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D79Cu, 0x00003572u, "special? not lowered yet"); return;
L_08B1D7A0:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7A4u, 0x00003672u, "special? not lowered yet"); return;
L_08B1D7A8:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7ACu, 0x00003772u, "special? not lowered yet"); return;
L_08B1D7B0:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7B4u, 0x00003872u, "special? not lowered yet"); return;
L_08B1D7B8:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7BCu, 0x00003972u, "special? not lowered yet"); return;
L_08B1D7C0:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7C4u, 0x00303172u, "special? not lowered yet"); return;
L_08B1D7C8:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7CCu, 0x00313172u, "special? not lowered yet"); return;
L_08B1D7D0:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7D4u, 0x00323172u, "special? not lowered yet"); return;
L_08B1D7D8:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7DCu, 0x00333172u, "special? not lowered yet"); return;
L_08B1D7E0:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7E4u, 0x00343172u, "special? not lowered yet"); return;
L_08B1D7E8:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7ECu, 0x00353172u, "special? not lowered yet"); return;
L_08B1D7F0:
    ctx.execute_vfpu_vcmp_ct<115u, 112u, 1u, 3u>();
    rt.unsupported(0x08B1D7F4u, 0x00363172u, "special? not lowered yet"); return;
L_08B1D804:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 121u, 0x08B3112Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D80C;
L_08B1D80C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 193u, 0x08B3151Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D814;
L_08B1D814:
    rt.unsupported(0x08B1D814u, 0x6E646944u, "vfpu3 not lowered yet"); return;
L_08B1D848:
    rt.unsupported(0x08B1D848u, 0x45444F4Du, "cop1? not lowered yet"); return;
L_08B1D860:
    // nop
    goto L_08B1D864;
L_08B1D864:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    rt.unsupported(0x08B1D868u, 0x6E696D61u, "vfpu3 not lowered yet"); return;
L_08B1D86C:
    rt.unsupported(0x08B1D86Cu, 0x75622067u, "unknown not lowered yet"); return;
L_08B1D894:
    rt.unsupported(0x08B1D894u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B1D8D0:
    rt.unsupported(0x08B1D8D0u, 0x6E6E6143u, "vfpu3 not lowered yet"); return;
L_08B1D8E0:
    rt.unsupported(0x08B1D8E0u, 0x4F4C4E55u, "unknown not lowered yet"); return;
L_08B1D8F8:
    rt.unsupported(0x08B1D8F8u, 0x72617453u, "unknown not lowered yet"); return;
L_08B1D90C:
    rt.unsupported(0x08B1D90Cu, 0x20646E45u, "unknown not lowered yet"); return;
L_08B1D91C:
    if (ctx.gpr[2] != ctx.gpr[20]) {
    rt.unsupported(0x08B1D920u, 0x20474E49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 671u, 0x08B2EE6Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D924;
L_08B1D924:
    if (ctx.gpr[26] == ctx.gpr[19]) {
    rt.unsupported(0x08B1D928u, 0x204E4F49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 798u, 0x08B2FE5Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1D92C;
L_08B1D92C:
    if (ctx.gpr[26] == ctx.gpr[5]) {
    rt.unsupported(0x08B1D930u, 0x2054274Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 203u, 0x08B31640u>(ctx, &aot_mem); return;
    }
    goto L_08B1D934;
L_08B1D934:
    if (ctx.gpr[10] != ctx.gpr[17]) {
    rt.unsupported(0x08B1D938u, 0x20455249u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 673u, 0x08B2EE80u>(ctx, &aot_mem); return;
    }
    goto L_08B1D93C;
L_08B1D93C:
    rt.unsupported(0x08B1D93Cu, 0x45444F4Du, "cop1? not lowered yet"); return;
L_08B1D948:
    if (ctx.gpr[2] != ctx.gpr[20]) {
    rt.unsupported(0x08B1D94Cu, 0x20474E49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 675u, 0x08B2EE98u>(ctx, &aot_mem); return;
    }
    goto L_08B1D950;
L_08B1D950:
    rt.unsupported(0x08B1D950u, 0x49424D41u, "cop2/vfpu not lowered yet"); return;
L_08B1D960:
    if (ctx.gpr[26] == ctx.gpr[5]) {
    rt.unsupported(0x08B1D964u, 0x2054274Eu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 206u, 0x08B31674u>(ctx, &aot_mem); return;
    }
    goto L_08B1D968;
L_08B1D968:
    if (ctx.gpr[10] != ctx.gpr[17]) {
    rt.unsupported(0x08B1D96Cu, 0x20455249u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 677u, 0x08B2EEB4u>(ctx, &aot_mem); return;
    }
    goto L_08B1D970;
L_08B1D970:
    rt.unsupported(0x08B1D970u, 0x45444F4Du, "cop1? not lowered yet"); return;
L_08B1D97C:
    ctx.execute_vfpu_compare3(99u, 115u, 116u, 1u, 6u);
    rt.unsupported(0x08B1D980u, 0x615F696Eu, "vfpu0 not lowered yet"); return;
L_08B1D988:
    ctx.execute_vfpu_vscl_ct<103u, 101u, 110u, 1u>();
    rt.unsupported(0x08B1D98Cu, 0x00636972u, "special? not lowered yet"); return;
L_08B1D990:
    rt.unsupported(0x08B1D990u, 0x4F4D454Du, "unknown not lowered yet"); return;
L_08B1D9C4:
    // nop
    (void)(ctx.pc = 0x09153924u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B1D9CC:
    rt.unsupported(0x08B1D9CCu, 0x41544F54u, "unknown not lowered yet"); return;
L_08B1D9DC:
    rt.unsupported(0x08B1D9DCu, 0x4E454D47u, "unknown not lowered yet"); return;
L_08B1DA00:
    ctx.execute_vfpu_vscl_ct<103u, 111u, 110u, 1u>();
    rt.unsupported(0x08B1DA04u, 0x746E6920u, "unknown not lowered yet"); return;
L_08B1DA1C:
    rt.unsupported(0x08B1DA1Cu, 0x69626D41u, "unknown not lowered yet"); return;
L_08B1DA34:
    rt.unsupported(0x08B1DA34u, 0x6E726157u, "vfpu3 not lowered yet"); return;
L_08B1DA64:
    rt.unsupported(0x08B1DA64u, 0x69626D41u, "unknown not lowered yet"); return;
L_08B1DA7C:
    rt.unsupported(0x08B1DA7Cu, 0x6E726157u, "vfpu3 not lowered yet"); return;
L_08B1DAAC:
    rt.unsupported(0x08B1DAACu, 0x4F4D4D49u, "unknown not lowered yet"); return;
L_08B1DAB8:
    ctx.execute_vfpu_vscl_ct<109u, 111u, 100u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<44u, 32u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<115u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<102u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1DAC8u, 0x6973202Cu, "unknown not lowered yet"); return;
L_08B1DADC:
    ctx.execute_vfpu_vcmp_ct<101u, 120u, 1u, 4u>();
    rt.unsupported(0x08B1DAE0u, 0x20747369u, "unknown not lowered yet"); return;
L_08B1DB08:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 3u>();
    ctx.gpr[19] = (ctx.gpr[3] < static_cast<std::uint32_t>(9504) ? 1u : 0u);
    rt.unsupported(0x08B1DB10u, 0x7A697320u, "unknown not lowered yet"); return;
L_08B1DB28:
    ctx.execute_vfpu_vminmax(97u, 110u, 105u, 1u, false);
    ctx.gpr[19] = (ctx.gpr[3] < static_cast<std::uint32_t>(9504) ? 1u : 0u);
    ctx.execute_vfpu_vhdp(32u, 114u, 101u, 1u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1DB38u, 0x6973202Cu, "unknown not lowered yet"); return;
L_08B1DB50:
    ctx.execute_vfpu_compare3(105u, 109u, 109u, 1u, 6u);
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 6u>();
    rt.unsupported(0x08B1DB58u, 0x69252065u, "unknown not lowered yet"); return;
L_08B1DB64:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<77u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[19] = (ctx.gpr[19] ^ 27749u);
    rt.unsupported(0x08B1DB74u, 0x20202020u, "unknown not lowered yet"); return;
L_08B1DB80:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1DB88u, 0x78655420u, "unknown not lowered yet"); return;
L_08B1DB9C:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1DBA4u, 0x696E4120u, "unknown not lowered yet"); return;
L_08B1DBB8:
    ctx.execute_vfpu_vscl_ct<83u, 116u, 114u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<67u, 111u, 1u, 0u>();
    rt.unsupported(0x08B1DBC4u, 0x6973696Cu, "unknown not lowered yet"); return;
L_08B1DC04:
    rt.unsupported(0x08B1DC04u, 0x474D492Eu, "cop1? not lowered yet"); return;
L_08B1DC10:
    rt.unsupported(0x08B1DC10u, 0x4E524157u, "unknown not lowered yet"); return;
L_08B1DC3C:
    rt.unsupported(0x08B1DC3Cu, 0x4E492054u, "unknown not lowered yet"); return;
L_08B1DC54:
    if (0u == 0u) (void)(0u);
    goto L_08B1DC58;
L_08B1DC58:
    rt.unsupported(0x08B1DC58u, 0x20444142u, "unknown not lowered yet"); return;
L_08B1DC64:
    rt.unsupported(0x08B1DC64u, 0x4E554843u, "unknown not lowered yet"); return;
L_08B1DC9C:
    rt.unsupported(0x08B1DC9Cu, 0x20444142u, "unknown not lowered yet"); return;
L_08B1DCA8:
    rt.unsupported(0x08B1DCA8u, 0x4E554843u, "unknown not lowered yet"); return;
L_08B1DCC0:
    rt.unsupported(0x08B1DCC0u, 0x20444142u, "unknown not lowered yet"); return;
L_08B1DCD0:
    rt.unsupported(0x08B1DCD0u, 0x20454C49u, "unknown not lowered yet"); return;
L_08B1DD00:
    rt.unsupported(0x08B1DD00u, 0x20444142u, "unknown not lowered yet"); return;
L_08B1DD4C:
    rt.unsupported(0x08B1DD50u, 0x5F545345u, "control flow in delay slot"); return;
L_08B1DD54:
    rt.unsupported(0x08B1DD54u, 0x45444F4Du, "cop1? not lowered yet"); return;
L_08B1DD78:
    rt.unsupported(0x08B1DD78u, 0x45525453u, "cop1? not lowered yet"); return;
L_08B1DD94:
    rt.unsupported(0x08B1DD94u, 0x4C494146u, "unknown not lowered yet"); return;
L_08B1DDB4:
    rt.unsupported(0x08B1DDB4u, 0x4F4C4552u, "unknown not lowered yet"); return;
L_08B1DDC8:
    rt.unsupported(0x08B1DDC8u, 0x4F4C4552u, "unknown not lowered yet"); return;
L_08B1DDE4:
    rt.unsupported(0x08B1DDE4u, 0x4F4C4552u, "unknown not lowered yet"); return;
L_08B1DDFC:
    rt.unsupported(0x08B1DDFCu, 0x4F4C4552u, "unknown not lowered yet"); return;
L_08B1DE14:
    rt.unsupported(0x08B1DE14u, 0x4B435546u, "cop2/vfpu not lowered yet"); return;
L_08B1DE54:
    // nop
    ctx.gpr[14] = (0u | ctx.gpr[10]);
    goto L_08B1DE5C;
L_08B1DE5C:
    rt.unsupported(0x08B1DE5Cu, 0x20444550u, "unknown not lowered yet"); return;
L_08B1DE6C:
    if (ctx.gpr[1] == 0u) {
    rt.unsupported(0x08B1DE70u, 0x20534445u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 241u, 0x08B31BA8u>(ctx, &aot_mem); return;
    }
    goto L_08B1DE74;
L_08B1DE74:
    rt.unsupported(0x08B1DE74u, 0x44204F54u, "cop1? not lowered yet"); return;
L_08B1DE80:
    rt.unsupported(0x08B1DE80u, 0x49595254u, "cop2/vfpu not lowered yet"); return;
L_08B1DE8C:
    rt.unsupported(0x08B1DE8Cu, 0x45564F4Du, "cop1? not lowered yet"); return;
L_08B1DEA0:
    rt.unsupported(0x08B1DEA0u, 0x43435553u, "unknown not lowered yet"); return;
L_08B1DEAC:
    rt.unsupported(0x08B1DEACu, 0x4C494146u, "unknown not lowered yet"); return;
L_08B1DEB4:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    rt.unsupported(0x08B1DEB8u, 0x434E4547u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 173u, 0x08B313CCu>(ctx, &aot_mem); return;
    }
    goto L_08B1DEBC;
L_08B1DEBC:
    rt.unsupported(0x08B1DEBCu, 0x45562059u, "cop1? not lowered yet"); return;
L_08B1DECC:
    rt.unsupported(0x08B1DECCu, 0x43412047u, "unknown not lowered yet"); return;
L_08B1DEDC:
    if (ctx.gpr[17] != 0u) {
    rt.unsupported(0x08B1DEE0u, 0x43494845u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 243u, 0x08B31C18u>(ctx, &aot_mem); return;
    }
    goto L_08B1DEE4;
L_08B1DEE4:
    rt.unsupported(0x08B1DEE4u, 0x2053454Cu, "unknown not lowered yet"); return;
L_08B1DEF4:
    rt.unsupported(0x08B1DEF4u, 0x49595254u, "cop2/vfpu not lowered yet"); return;
L_08B1DF00:
    rt.unsupported(0x08B1DF00u, 0x45564F4Du, "cop1? not lowered yet"); return;
L_08B1DF18:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B1DF1Cu, 0x74206465u, "unknown not lowered yet"); return;
L_08B1DF30:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B1DF34u, 0x74206465u, "unknown not lowered yet"); return;
L_08B1DF48:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1DF4Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B1DF68:
    rt.unsupported(0x08B1DF68u, 0x20444142u, "unknown not lowered yet"); return;
L_08B1DFA8:
    ctx.gpr[19] = (ctx.gpr[27] + static_cast<std::uint32_t>(9568));
    rt.unsupported(0x08B1DFACu, 0x70786520u, "unknown not lowered yet"); return;
L_08B1DFB8:
    ctx.gpr[19] = (ctx.gpr[27] + static_cast<std::uint32_t>(9568));
    rt.unsupported(0x08B1DFBCu, 0x70786520u, "unknown not lowered yet"); return;
L_08B1DFE4:
    ctx.execute_vfpu_vminmax(60u, 110u, 97u, 1u, false);
    ctx.execute_vfpu_vscl_ct<101u, 62u, 32u, 1u>();
    rt.unsupported(0x08B1DFECu, 0x63657078u, "vfpu0 not lowered yet"); return;
L_08B1DFF4:
    // nop
    goto L_08B1DFF8;
L_08B1DFF8:
    rt.unsupported(0x08B1DFF8u, 0x61636F6Cu, "vfpu0 not lowered yet"); return;
L_08B1E008:
    rt.unsupported(0x08B1E008u, 0x61767075u, "vfpu0 not lowered yet"); return;
L_08B1E014:
    rt.unsupported(0x08B1E014u, 0x61726170u, "vfpu0 not lowered yet"); return;
L_08B1E020:
    ctx.gpr[14] = (ctx.gpr[3] + ctx.gpr[7]);
    goto L_08B1E024;
L_08B1E024:
    rt.unsupported(0x08B1E024u, 0x736E6F63u, "unknown not lowered yet"); return;
L_08B1E03C:
    ctx.execute_vfpu_vhdp(60u, 101u, 111u, 1u);
    rt.unsupported(0x08B1E040u, 0x7865203Eu, "unknown not lowered yet"); return;
L_08B1E04C:
    ctx.execute_vfpu_vminmax(105u, 116u, 101u, 1u, false);
    rt.unsupported(0x08B1E050u, 0x6E692073u, "vfpu3 not lowered yet"); return;
L_08B1E064:
    ctx.execute_vfpu_vminmax(60u, 110u, 97u, 1u, false);
    ctx.execute_vfpu_compare3(101u, 62u, 32u, 1u, 6u);
    (void)(ctx.gpr[19] < static_cast<std::uint32_t>(8306) ? 1u : 0u);
    rt.unsupported(0x08B1E070u, 0x20272E2Eu, "unknown not lowered yet"); return;
L_08B1E080:
    ctx.execute_vfpu_vhdp(115u, 101u, 108u, 1u);
    // nop
    goto L_08B1E088;
L_08B1E088:
    rt.unsupported(0x08B1E088u, 0x69626D61u, "unknown not lowered yet"); return;
L_08B1E0BC:
    rt.unsupported(0x08B1E0BCu, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B1E0D8:
    rt.unsupported(0x08B1E0D8u, 0x78656E75u, "unknown not lowered yet"); return;
L_08B1E0EC:
    rt.unsupported(0x08B1E0ECu, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B1E104:
    rt.unsupported(0x08B1E104u, 0x746E7973u, "unknown not lowered yet"); return;
L_08B1E114:
    rt.unsupported(0x08B1E114u, 0x69687760u, "unknown not lowered yet"); return;
L_08B1E134:
    rt.unsupported(0x08B1E134u, 0x726F6628u, "unknown not lowered yet"); return;
L_08B1E140:
    rt.unsupported(0x08B1E140u, 0x726F6628u, "unknown not lowered yet"); return;
L_08B1E14C:
    rt.unsupported(0x08B1E14Cu, 0x726F6628u, "unknown not lowered yet"); return;
L_08B1E154:
    rt.unsupported(0x08B1E154u, 0x74617265u, "unknown not lowered yet"); return;
L_08B1E15C:
    rt.unsupported(0x08B1E15Cu, 0x726F6628u, "unknown not lowered yet"); return;
L_08B1E168:
    rt.unsupported(0x08B1E168u, 0x20273D60u, "unknown not lowered yet"); return;
L_08B1E180:
    ctx.execute_vfpu_vcmp_ct<111u, 32u, 1u, 14u>();
    rt.unsupported(0x08B1E184u, 0x20706F6Fu, "unknown not lowered yet"); return;
L_08B1E2B4:
    rt.unsupported(0x08B1E2B8u, 0x089D04F8u, "control flow in delay slot"); return;
L_08B1E2D4:
    rt.unsupported(0x08B1E2D8u, 0x089D04F8u, "control flow in delay slot"); return;
L_08B1E3F8:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B1E3FCu, 0x4E203A72u, "unknown not lowered yet"); return;
L_08B1E4C0:
    ctx.gpr[13] = (ctx.gpr[9] < static_cast<std::uint32_t>(11611) ? 1u : 0u);
    if (ctx.gpr[18] == ctx.gpr[18]) {
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(21071));
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 749u, 0x08B2F948u>(ctx, &aot_mem); return;
    }
    goto L_08B1E4CC;
L_08B1E4CC:
    rt.unsupported(0x08B1E4CCu, 0x4F4C2058u, "unknown not lowered yet"); return;
L_08B1E4E4:
    // nop
    (void)(ctx.pc = 0x0974B4B4u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B1E4EC:
    ctx.gpr[13] = (ctx.gpr[9] < static_cast<std::uint32_t>(11611) ? 1u : 0u);
    rt.unsupported(0x08B1E4F0u, 0x434F4C20u, "unknown not lowered yet"); return;
L_08B1E518:
    ctx.gpr[13] = (ctx.gpr[9] < static_cast<std::uint32_t>(11611) ? 1u : 0u);
    rt.unsupported(0x08B1E51Cu, 0x4C4E5520u, "unknown not lowered yet"); return;
L_08B1E534:
    // nop
    (void)(ctx.pc = 0x0974B4B4u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B1E53C:
    rt.unsupported(0x08B1E53Cu, 0x4B656373u, "cop2/vfpu not lowered yet"); return;
L_08B1E578:
    rt.unsupported(0x08B1E578u, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E594:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(25964));
    rt.unsupported(0x08B1E598u, 0x00000A78u, "special? not lowered yet"); return;
L_08B1E59C:
    rt.unsupported(0x08B1E59Cu, 0x20756F59u, "unknown not lowered yet"); return;
L_08B1E5B8:
    rt.unsupported(0x08B1E5B8u, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E5D8:
    rt.unsupported(0x08B1E5D8u, 0x69727075u, "unknown not lowered yet"); return;
L_08B1E5E4:
    rt.unsupported(0x08B1E5E4u, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E624:
    rt.unsupported(0x08B1E624u, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E65C:
    rt.unsupported(0x08B1E65Cu, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E688:
    rt.unsupported(0x08B1E688u, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E6AC:
    rt.unsupported(0x08B1E6ACu, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E6B0:
    rt.unsupported(0x08B1E6B0u, 0x7420676Eu, "unknown not lowered yet"); return;
L_08B1E6D0:
    rt.unsupported(0x08B1E6D0u, 0x73692067u, "unknown not lowered yet"); return;
L_08B1E6D8:
    if (0u == 0u) (void)(0u);
    goto L_08B1E6DC;
L_08B1E6DC:
    rt.unsupported(0x08B1E6DCu, 0x69797254u, "unknown not lowered yet"); return;
L_08B1E6F8:
    rt.unsupported(0x08B1E6F8u, 0x20656E6Fu, "unknown not lowered yet"); return;
L_08B1E700:
    rt.unsupported(0x08B1E700u, 0x6165726Cu, "vfpu0 not lowered yet"); return;
L_08B1E708:
    rt.unsupported(0x08B1E708u, 0x696B6361u, "unknown not lowered yet"); return;
L_08B1E710:
    rt.unsupported(0x08B1E710u, 0x000A2174u, "special? not lowered yet"); return;
L_08B1E714:
    rt.unsupported(0x08B1E714u, 0x696B7341u, "unknown not lowered yet"); return;
L_08B1E718:
    ctx.execute_vfpu_vhdp(110u, 103u, 32u, 1u);
    rt.unsupported(0x08B1E71Cu, 0x7420726Fu, "unknown not lowered yet"); return;
L_08B1E744:
    rt.unsupported(0x08B1E744u, 0x44414544u, "unsupported CFC1 control register"); return;
    // nop
    goto L_08B1E74C;
L_08B1E74C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B1E750u, 0x00004445u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 397u, 0x08B33C58u>(ctx, &aot_mem); return;
    }
    goto L_08B1E754;
L_08B1E754:
    rt.unsupported(0x08B1E754u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B1E75C:
    rt.unsupported(0x08B1E75Cu, 0x74696157u, "unknown not lowered yet"); return;
L_08B1E77C:
    rt.unsupported(0x08B1E77Cu, 0x74696157u, "unknown not lowered yet"); return;
L_08B1E7C0:
    rt.unsupported(0x08B1E7C0u, 0x746E6157u, "unknown not lowered yet"); return;
L_08B1E800:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1E804u, 0x454E4F5Au, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 785u, 0x08B2FD50u>(ctx, &aot_mem); return;
    }
    goto L_08B1E808;
L_08B1E808:
    if (ctx.gpr[18] == ctx.gpr[1]) {
    rt.unsupported(0x08B1E80Cu, 0x464E495Fu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 733u, 0x08B2F588u>(ctx, &aot_mem); return;
    }
    goto L_08B1E810;
L_08B1E810:
    rt.unsupported(0x08B1E810u, 0x202D204Fu, "unknown not lowered yet"); return;
L_08B1E840:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1E844u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1E860:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1E864u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1E870:
    (void)(ctx.gpr[9] < static_cast<std::uint32_t>(25966) ? 1u : 0u);
    // nop
    (void)(ctx.pc = 0x09CC9480u, rt.invoke_chained_call(ctx, &aot_mem)); return;
L_08B1E878:
    // nop
    goto L_08B1E87C;
L_08B1E87C:
    rt.unsupported(0x08B1E87Cu, 0x4F4D4552u, "unknown not lowered yet"); return;
L_08B1E888:
    if (ctx.gpr[25] == 0u) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<111u, 1u>(vfpu_d); }
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 71u, 0x08B29D0Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1E890;
L_08B1E890:
    ctx.execute_vfpu_vscl_ct<32u, 100u, 111u, 1u>();
    rt.unsupported(0x08B1E894u, 0x74276E73u, "unknown not lowered yet"); return;
L_08B1E8DC:
    rt.unsupported(0x08B1E8E0u, 0x089DEC74u, "control flow in delay slot"); return;
L_08B1E8E4:
    rt.unsupported(0x08B1E8E8u, 0x089DEC74u, "control flow in delay slot"); return;
L_08B1E938:
    rt.unsupported(0x08B1E93Cu, 0x089DD028u, "control flow in delay slot"); return;
L_08B1E940:
    rt.unsupported(0x08B1E944u, 0x089DD0E4u, "control flow in delay slot"); return;
L_08B1E948:
    rt.unsupported(0x08B1E94Cu, 0x089DEC74u, "control flow in delay slot"); return;
L_08B1E950:
    rt.unsupported(0x08B1E954u, 0x089DD2C0u, "control flow in delay slot"); return;
L_08B1E958:
    rt.unsupported(0x08B1E95Cu, 0x089DD2ECu, "control flow in delay slot"); return;
L_08B1E960:
    rt.unsupported(0x08B1E964u, 0x089DD3DCu, "control flow in delay slot"); return;
L_08B1E968:
    rt.unsupported(0x08B1E96Cu, 0x089DEC74u, "control flow in delay slot"); return;
L_08B1E980:
    rt.unsupported(0x08B1E984u, 0x089DD648u, "control flow in delay slot"); return;
L_08B1E9AC:
    rt.unsupported(0x08B1E9B0u, 0x089DDD54u, "control flow in delay slot"); return;
L_08B1E9D4:
    rt.unsupported(0x08B1E9D8u, 0x089DEC74u, "control flow in delay slot"); return;
L_08B1E9F8:
    rt.unsupported(0x08B1E9FCu, 0x089DE548u, "control flow in delay slot"); return;
L_08B1EA84:
    rt.unsupported(0x08B1EA88u, 0x089DF068u, "control flow in delay slot"); return;
L_08B1EAE0:
    rt.unsupported(0x08B1EAE4u, 0x089DF938u, "control flow in delay slot"); return;
L_08B1EAE8:
    rt.unsupported(0x08B1EAECu, 0x089DFA5Cu, "control flow in delay slot"); return;
L_08B1EAF8:
    rt.unsupported(0x08B1EAFCu, 0x089DFB9Cu, "control flow in delay slot"); return;
L_08B1EB30:
    rt.unsupported(0x08B1EB34u, 0x089E05FCu, "control flow in delay slot"); return;
L_08B1EBB8:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1EBBCu, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1EBD4:
    if (0u == 0u) (void)(0u);
    goto L_08B1EBD8;
L_08B1EBD8:
    rt.unsupported(0x08B1EBD8u, 0x41455243u, "unknown not lowered yet"); return;
L_08B1EBE4:
    rt.unsupported(0x08B1EBE4u, 0x41435F4Du, "unknown not lowered yet"); return;
L_08B1EBF4:
    (void)(ctx.gpr[9] < static_cast<std::uint32_t>(19282) ? 1u : 0u);
    rt.unsupported(0x08B1EBF8u, 0x6B6E5520u, "unknown not lowered yet"); return;
L_08B1EC20:
    rt.unsupported(0x08B1EC24u, 0x089E1FC4u, "control flow in delay slot"); return;
L_08B1ED24:
    rt.unsupported(0x08B1ED28u, 0x089E5104u, "control flow in delay slot"); return;
L_08B1EEF4:
    rt.unsupported(0x08B1EEF8u, 0x089E845Cu, "control flow in delay slot"); return;
L_08B1EF20:
    rt.unsupported(0x08B1EF24u, 0x089E86D4u, "control flow in delay slot"); return;
L_08B1EF80:
    rt.unsupported(0x08B1EF84u, 0x089E7810u, "control flow in delay slot"); return;
L_08B1F090:
    rt.unsupported(0x08B1F090u, 0x006E6176u, "special? not lowered yet"); return;
L_08B1F094:
    rt.unsupported(0x08B1F094u, 0x69636976u, "unknown not lowered yet"); return;
L_08B1F0B4:
    ctx.execute_vfpu_vcmp_ct<111u, 117u, 1u, 3u>();
    rt.unsupported(0x08B1F0B8u, 0x74276E64u, "unknown not lowered yet"); return;
L_08B1F0F0:
    rt.unsupported(0x08B1F0F0u, 0x74756F66u, "unknown not lowered yet"); return;
L_08B1F0F8:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B1F0FCu, 0x45475241u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 321u, 0x08B32E34u>(ctx, &aot_mem); return;
    }
    goto L_08B1F100;
L_08B1F100:
    rt.unsupported(0x08B1F100u, 0x45562054u, "cop1? not lowered yet"); return;
L_08B1F120:
    ctx.lo = 0u;
    goto L_08B1F124;
L_08B1F124:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B1F128u, 0x45475241u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 322u, 0x08B32E60u>(ctx, &aot_mem); return;
    }
    goto L_08B1F12C;
L_08B1F12C:
    rt.unsupported(0x08B1F12Cu, 0x45562054u, "cop1? not lowered yet"); return;
L_08B1F154:
    rt.unsupported(0x08B1F154u, 0x41455243u, "unknown not lowered yet"); return;
L_08B1F164:
    rt.unsupported(0x08B1F164u, 0x45562059u, "cop1? not lowered yet"); return;
L_08B1F20C:
    rt.unsupported(0x08B1F210u, 0x089F6608u, "control flow in delay slot"); return;
L_08B1F250:
    rt.unsupported(0x08B1F250u, 0x6E6F6369u, "vfpu3 not lowered yet"); return;
L_08B1F26C:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B1F270u, 0x72696420u, "unknown not lowered yet"); return;
L_08B1F274:
    ctx.execute_vfpu_compare3(101u, 99u, 116u, 1u, 6u);
    rt.unsupported(0x08B1F278u, 0x70207972u, "unknown not lowered yet"); return;
L_08B1F2A8:
    rt.unsupported(0x08B1F2A8u, 0x74726170u, "unknown not lowered yet"); return;
L_08B1F300:
    rt.unsupported(0x08B1F300u, 0x20746F6Eu, "unknown not lowered yet"); return;
L_08B1F3E0:
    rt.unsupported(0x08B1F3E0u, 0x78656E75u, "unknown not lowered yet"); return;
L_08B1F400:
    rt.unsupported(0x08B1F400u, 0x20646162u, "unknown not lowered yet"); return;
L_08B1F414:
    rt.unsupported(0x08B1F414u, 0x20646162u, "unknown not lowered yet"); return;
L_08B1F440:
    rt.unsupported(0x08B1F440u, 0x20646162u, "unknown not lowered yet"); return;
L_08B1F460:
    rt.unsupported(0x08B1F460u, 0x20646162u, "unknown not lowered yet"); return;
L_08B1F470:
    rt.unsupported(0x08B1F470u, 0x61754C1Bu, "vfpu0 not lowered yet"); return;
L_08B1F478:
    rt.unsupported(0x08B1F478u, 0x20646162u, "unknown not lowered yet"); return;
L_08B1F48C:
    rt.unsupported(0x08B1F48Cu, 0x74726976u, "unknown not lowered yet"); return;
L_08B1F4C8:
    // nop
    goto L_08B1F4CC;
L_08B1F4CC:
    rt.unsupported(0x08B1F4CCu, 0x74207325u, "unknown not lowered yet"); return;
L_08B1F504:
    rt.unsupported(0x08B1F504u, 0x74207325u, "unknown not lowered yet"); return;
L_08B1F53C:
    rt.unsupported(0x08B1F53Cu, 0x00746E69u, "special? not lowered yet"); return;
L_08B1F540:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 122u, 1u>();
    rt.unsupported(0x08B1F544u, 0x0000745Fu, "special? not lowered yet"); return;
L_08B1F548:
    rt.unsupported(0x08B1F548u, 0x74736E49u, "unknown not lowered yet"); return;
L_08B1F554:
    rt.memory().memory_barrier();
    goto L_08B1F558;
L_08B1F558:
    rt.unsupported(0x08B1F558u, 0x00000041u, "special? not lowered yet"); return;
L_08B1F55C:
    (void)(0u >> 1u);
    goto L_08B1F560;
L_08B1F560:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    goto L_08B1F564;
L_08B1F564:
    rt.unsupported(0x08B1F564u, 0x626D756Eu, "vfpu0 not lowered yet"); return;
L_08B1F56C:
    rt.unsupported(0x08B1F56Cu, 0x6E6B6E75u, "vfpu3 not lowered yet"); return;
L_08B1F588:
    rt.unsupported(0x08B1F588u, 0x616E6962u, "vfpu0 not lowered yet"); return;
L_08B1F598:
    if (static_cast<std::int32_t>(ctx.gpr[10]) > 0) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 317u, 0x08B36290u>(ctx, &aot_mem); return;
    }
    goto L_08B1F5A0;
L_08B1F5A0:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    goto L_08B1F5A4;
L_08B1F5A4:
    rt.unsupported(0x08B1F5A4u, 0x6E69616Du, "vfpu3 not lowered yet"); return;
L_08B1F5AC:
    rt.unsupported(0x08B1F5ACu, 0x0061754Cu, "syscall not lowered yet"); return;
L_08B1F5B0:
    // nop
    goto L_08B1F5B4;
L_08B1F5B4:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 4u>();
    // nop
    goto L_08B1F5BC;
L_08B1F5BC:
    rt.unsupported(0x08B1F5BCu, 0x6174283Du, "vfpu0 not lowered yet"); return;
L_08B1F5CC:
    rt.unsupported(0x08B1F5CCu, 0x626F6C67u, "vfpu0 not lowered yet"); return;
L_08B1F5D4:
    rt.unsupported(0x08B1F5D4u, 0x756C6176u, "unknown not lowered yet"); return;
L_08B1F600:
    rt.unsupported(0x08B1F600u, 0x0000003Fu, "special? not lowered yet"); return;
L_08B1F604:
    rt.unsupported(0x08B1F604u, 0x61636F6Cu, "vfpu0 not lowered yet"); return;
L_08B1F60C:
    ctx.execute_vfpu_vcmp_ct<105u, 101u, 1u, 6u>();
    (void)(0u & 0u);
    goto L_08B1F614;
L_08B1F614:
    rt.unsupported(0x08B1F614u, 0x6874656Du, "unknown not lowered yet"); return;
L_08B1F61C:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B1F620u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B1F628:
    rt.unsupported(0x08B1F628u, 0x73252073u, "unknown not lowered yet"); return;
L_08B1F638:
    rt.unsupported(0x08B1F638u, 0x756C6176u, "unknown not lowered yet"); return;
L_08B1F640:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B1F644u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B1F65C:
    rt.unsupported(0x08B1F65Cu, 0x636E6F63u, "vfpu0 not lowered yet"); return;
L_08B1F668:
    ctx.execute_vfpu_vhdp(112u, 101u, 114u, 1u);
    rt.unsupported(0x08B1F66Cu, 0x206D726Fu, "unknown not lowered yet"); return;
L_08B1F674:
    rt.unsupported(0x08B1F674u, 0x74656D68u, "unknown not lowered yet"); return;
L_08B1F680:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B1F684u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B1F6A4:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B1F6A8u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B1F6C4:
    ctx.gpr[26] = (ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(14948));
    rt.unsupported(0x08B1F6CCu, 0x00000073u, "special? not lowered yet"); return;
L_08B1F758:
    // nop
    ctx.pc = 0x02803D10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B1F818:
    ctx.execute_vfpu_compare3(95u, 95u, 116u, 1u, 6u);
    rt.unsupported(0x08B1F81Cu, 0x69727473u, "unknown not lowered yet"); return;
L_08B1F824:
    ctx.execute_vfpu_vscl_ct<78u, 97u, 109u, 1u>();
    // nop
    goto L_08B1F82C;
L_08B1F82C:
    rt.unsupported(0x08B1F82Cu, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1F838:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    goto L_08B1F83C;
L_08B1F83C:
    ctx.execute_vfpu_vscl_ct<78u, 97u, 109u, 1u>();
    // nop
    goto L_08B1F844;
L_08B1F844:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    jump_target = 0u;
    ctx.gpr[12] = (0x08B1F850u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 5u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1F850u) goto L_08B1F850;
    return;
L_08B1F84C:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 5u));
    goto L_08B1F850;
L_08B1F850:
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1F854u, 0x00007275u, "special? not lowered yet"); return;
L_08B1F858:
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1F85Cu, 0x69577275u, "unknown not lowered yet"); return;
L_08B1F868:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1F870u, 0x00007275u, "special? not lowered yet"); return;
L_08B1F874:
    ctx.execute_vfpu_compare3(73u, 115u, 67u, 1u, 6u);
    rt.unsupported(0x08B1F878u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B1F880:
    rt.unsupported(0x08B1F880u, 0x69736F50u, "unknown not lowered yet"); return;
L_08B1F88C:
    rt.unsupported(0x08B1F88Cu, 0x72617453u, "unknown not lowered yet"); return;
L_08B1F898:
    rt.unsupported(0x08B1F898u, 0x7466654Cu, "unknown not lowered yet"); return;
L_08B1F8A4:
    rt.unsupported(0x08B1F8A4u, 0x68676952u, "unknown not lowered yet"); return;
L_08B1F8B0:
    ctx.execute_vfpu_compare3(85u, 112u, 68u, 1u, 6u);
    rt.unsupported(0x08B1F8B4u, 0x00006E77u, "special? not lowered yet"); return;
L_08B1F8B8:
    rt.unsupported(0x08B1F8B8u, 0x6E776F44u, "vfpu3 not lowered yet"); return;
L_08B1F8C4:
    rt.unsupported(0x08B1F8C4u, 0x736F7243u, "unknown not lowered yet"); return;
L_08B1F8D0:
    rt.unsupported(0x08B1F8D0u, 0x63726943u, "vfpu0 not lowered yet"); return;
L_08B1F8DC:
    rt.unsupported(0x08B1F8DCu, 0x61697254u, "vfpu0 not lowered yet"); return;
L_08B1F8EC:
    ctx.execute_vfpu_vscl_ct<76u, 97u, 116u, 1u>();
    rt.unsupported(0x08B1F8F0u, 0x0079636Eu, "special? not lowered yet"); return;
L_08B1F8F4:
    ctx.execute_vfpu_vcmp_ct<115u, 80u, 1u, 9u>();
    rt.unsupported(0x08B1F8F8u, 0x6E697961u, "vfpu3 not lowered yet"); return;
L_08B1F900:
    rt.unsupported(0x08B1F900u, 0x70736552u, "unknown not lowered yet"); return;
L_08B1F908:
    rt.unsupported(0x08B1F908u, 0x74696157u, "unknown not lowered yet"); return;
L_08B1F914:
    // nop
    goto L_08B1F918;
L_08B1F918:
    rt.unsupported(0x08B1F918u, 0x74696157u, "unknown not lowered yet"); return;
L_08B1F924:
    rt.unsupported(0x08B1F924u, 0x43646E41u, "unknown not lowered yet"); return;
L_08B1F934:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    rt.unsupported(0x08B1F938u, 0x7469736Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 51u, 0x08B38E84u>(ctx, &aot_mem); return;
    }
    goto L_08B1F93C;
L_08B1F93C:
    rt.unsupported(0x08B1F93Cu, 0x006E6F69u, "special? not lowered yet"); return;
L_08B1F940:
    ctx.gpr[20] = (ctx.vfpu_scalar_bits_ct<83u>());
    rt.unsupported(0x08B1F944u, 0x69646165u, "unknown not lowered yet"); return;
L_08B1F94C:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    rt.unsupported(0x08B1F950u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 55u, 0x08B38E9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1F954;
L_08B1F954:
    rt.unsupported(0x08B1F954u, 0x70696C42u, "unknown not lowered yet"); return;
L_08B1F964:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    rt.unsupported(0x08B1F968u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 59u, 0x08B38EB4u>(ctx, &aot_mem); return;
    }
    goto L_08B1F96C;
L_08B1F96C:
    rt.unsupported(0x08B1F96Cu, 0x70696C42u, "unknown not lowered yet"); return;
L_08B1F978:
    if (ctx.gpr[19] == ctx.gpr[20]) {
    rt.unsupported(0x08B1F97Cu, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 62u, 0x08B38EC8u>(ctx, &aot_mem); return;
    }
    goto L_08B1F980;
L_08B1F980:
    rt.unsupported(0x08B1F980u, 0x70696C42u, "unknown not lowered yet"); return;
L_08B1F990:
    // nop
    goto L_08B1F994;
L_08B1F994:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[11]);
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 215u, 0x08B3B2BCu>(ctx, &aot_mem); return;
    }
    goto L_08B1F99C;
L_08B1F998:
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[11]);
    goto L_08B1F99C;
L_08B1F99C:
    ctx.gpr[20] = (ctx.vfpu_scalar_bits_ct<83u>());
    rt.unsupported(0x08B1F9A0u, 0x746C6165u, "unknown not lowered yet"); return;
L_08B1F9A8:
    ctx.execute_vfpu_vscl_ct<73u, 115u, 68u, 1u>();
    ctx.gpr[12] = (0u + 0u);
    goto L_08B1F9B0;
L_08B1F9B0:
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 207u, 0x08B3AAB8u>(ctx, &aot_mem); return;
    }
    goto L_08B1F9B8;
L_08B1F9B8:
    rt.unsupported(0x08B1F9B8u, 0x00007372u, "special? not lowered yet"); return;
L_08B1F9BC:
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 208u, 0x08B3AAC4u>(ctx, &aot_mem); return;
    }
    goto L_08B1F9C4;
L_08B1F9C4:
    rt.unsupported(0x08B1F9C4u, 0x78457372u, "unknown not lowered yet"); return;
L_08B1F9C8:
    rt.unsupported(0x08B1F9C8u, 0x74706563u, "unknown not lowered yet"); return;
L_08B1F9D0:
    rt.unsupported(0x08B1F9D0u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B1F9D8:
    rt.unsupported(0x08B1F9D8u, 0x72657961u, "unknown not lowered yet"); return;
L_08B1F9E0:
    rt.unsupported(0x08B1F9E0u, 0x70726157u, "unknown not lowered yet"); return;
L_08B1F9F4:
    rt.unsupported(0x08B1F9F4u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FA00:
    rt.unsupported(0x08B1FA00u, 0x69746341u, "unknown not lowered yet"); return;
L_08B1FA10:
    rt.unsupported(0x08B1FA10u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FA18:
    rt.unsupported(0x08B1FA18u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FA24:
    rt.unsupported(0x08B1FA24u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FA30:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1FA38u, 0x00007275u, "special? not lowered yet"); return;
L_08B1FA3C:
    rt.unsupported(0x08B1FA3Cu, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FA4C:
    rt.unsupported(0x08B1FA4Cu, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FA58:
    rt.unsupported(0x08B1FA58u, 0x72756F6Cu, "unknown not lowered yet"); return;
L_08B1FA60:
    rt.unsupported(0x08B1FA60u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FA70:
    ctx.execute_vfpu_vcmp_ct<115u, 80u, 1u, 9u>();
    rt.unsupported(0x08B1FA74u, 0x72657961u, "unknown not lowered yet"); return;
L_08B1FA88:
    ctx.execute_vfpu_vcmp_ct<115u, 80u, 1u, 9u>();
    rt.unsupported(0x08B1FA8Cu, 0x72657961u, "unknown not lowered yet"); return;
L_08B1FA98:
    rt.unsupported(0x08B1FA98u, 0x74697845u, "unknown not lowered yet"); return;
L_08B1FAA0:
    rt.unsupported(0x08B1FAA0u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B1FAB0:
    rt.unsupported(0x08B1FAB0u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B1FAC0:
    rt.unsupported(0x08B1FAC0u, 0x00000072u, "special? not lowered yet"); return;
L_08B1FAC4:
    rt.unsupported(0x08B1FAC4u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B1FAC8:
    ctx.execute_vfpu_vcmp_ct<101u, 80u, 1u, 4u>();
    rt.unsupported(0x08B1FACCu, 0x72657961u, "unknown not lowered yet"); return;
L_08B1FAD8:
    rt.unsupported(0x08B1FAD8u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FAE8:
    rt.unsupported(0x08B1FAE8u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FAFC:
    rt.unsupported(0x08B1FAFCu, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FB10:
    rt.unsupported(0x08B1FB10u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FB20:
    rt.unsupported(0x08B1FB20u, 0x61736944u, "vfpu0 not lowered yet"); return;
L_08B1FB2C:
    rt.unsupported(0x08B1FB2Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B1FB30:
    rt.unsupported(0x08B1FB30u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FB40:
    ctx.execute_vfpu_vminmax(84u, 101u, 97u, 1u, false);
    rt.unsupported(0x08B1FB44u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FB4C:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 76u, 0x08B3909Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1FB54;
L_08B1FB54:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<82u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<114u, 66u, 1u, 1u>();
    goto L_08B1FB5C;
L_08B1FB5C:
    rt.unsupported(0x08B1FB5Cu, 0x68537069u, "unknown not lowered yet"); return;
L_08B1FB68:
    // nop
    goto L_08B1FB6C;
L_08B1FB6C:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 77u, 0x08B390BCu>(ctx, &aot_mem); return;
    }
    goto L_08B1FB74;
L_08B1FB74:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<82u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1FB78u, 0x63497261u, "vfpu0 not lowered yet"); return;
L_08B1FB80:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 79u, 0x08B390D0u>(ctx, &aot_mem); return;
    }
    goto L_08B1FB88;
L_08B1FB88:
    rt.unsupported(0x08B1FB88u, 0x696C4272u, "unknown not lowered yet"); return;
L_08B1FB9C:
    rt.unsupported(0x08B1FB9Cu, 0x4D746553u, "unknown not lowered yet"); return;
L_08B1FBA0:
    rt.unsupported(0x08B1FBA0u, 0x69746C75u, "unknown not lowered yet"); return;
L_08B1FBA8:
    rt.unsupported(0x08B1FBA8u, 0x694D7265u, "unknown not lowered yet"); return;
L_08B1FBB8:
    rt.unsupported(0x08B1FBB8u, 0x61706552u, "vfpu0 not lowered yet"); return;
L_08B1FBC0:
    rt.unsupported(0x08B1FBC0u, 0x72657961u, "unknown not lowered yet"); return;
L_08B1FBC8:
    ctx.execute_vfpu_vscl_ct<105u, 99u, 108u, 1u>();
    // nop
    goto L_08B1FBD0;
L_08B1FBD0:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 81u, 0x08B39120u>(ctx, &aot_mem); return;
    }
    goto L_08B1FBD8;
L_08B1FBD8:
    ctx.execute_vfpu_vscl_ct<114u, 115u, 86u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    rt.unsupported(0x08B1FBE0u, 0x466E4F65u, "cop1? not lowered yet"); return;
L_08B1FBE8:
    rt.unsupported(0x08B1FBE8u, 0x73727542u, "unknown not lowered yet"); return;
L_08B1FC00:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B1FC04;
L_08B1FC04:
    ctx.execute_vfpu_compare3(73u, 115u, 76u, 1u, 6u);
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 4u, 0x08B38198u>(ctx, &aot_mem); return;
    }
    goto L_08B1FC10;
L_08B1FC10:
    if (ctx.gpr[19] != ctx.gpr[14]) {
    rt.unsupported(0x08B1FC14u, 0x63696865u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 278u, 0x08B321DCu>(ctx, &aot_mem); return;
    }
    goto L_08B1FC18;
L_08B1FC18:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B1FC1C;
L_08B1FC1C:
    rt.unsupported(0x08B1FC1Cu, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B1FC38:
    ctx.execute_vfpu_vscl_ct<71u, 105u, 118u, 1u>();
    rt.unsupported(0x08B1FC3Cu, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1FC54:
    ctx.execute_vfpu_vscl_ct<71u, 105u, 118u, 1u>();
    rt.unsupported(0x08B1FC58u, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08B1FC74:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    ctx.execute_vfpu_compare3(118u, 101u, 76u, 1u, 6u);
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 5u, 0x08B3820Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1FC84;
L_08B1FC84:
    if (ctx.gpr[19] == ctx.gpr[15]) {
    rt.unsupported(0x08B1FC88u, 0x72616461u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 363u, 0x08B33650u>(ctx, &aot_mem); return;
    }
    goto L_08B1FC8C;
L_08B1FC8C:
    rt.unsupported(0x08B1FC8Cu, 0x45726F46u, "cop1? not lowered yet"); return;
L_08B1FC98:
    rt.unsupported(0x08B1FC98u, 0x4C746547u, "unknown not lowered yet"); return;
L_08B1FCAC:
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B1FCB0;
L_08B1FCB0:
    rt.unsupported(0x08B1FCB0u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B1FCBC:
    rt.unsupported(0x08B1FCBCu, 0x6E696F50u, "vfpu3 not lowered yet"); return;
L_08B1FCC4:
    ctx.execute_vfpu_compare3(73u, 115u, 76u, 1u, 6u);
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 7u, 0x08B38258u>(ctx, &aot_mem); return;
    }
    goto L_08B1FCD0;
L_08B1FCD0:
    rt.unsupported(0x08B1FCD0u, 0x746E4572u, "unknown not lowered yet"); return;
L_08B1FCE4:
    if (ctx.gpr[3] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 83u, 0x08B39234u>(ctx, &aot_mem); return;
    }
    goto L_08B1FCEC;
L_08B1FCEC:
    rt.unsupported(0x08B1FCECu, 0x61654872u, "vfpu0 not lowered yet"); return;
L_08B1FCF4:
    rt.unsupported(0x08B1FCF4u, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B1FD0C:
    rt.unsupported(0x08B1FD0Cu, 0x72417349u, "unknown not lowered yet"); return;
L_08B1FD24:
    ctx.execute_vfpu_vcmp_ct<115u, 80u, 1u, 9u>();
    rt.unsupported(0x08B1FD28u, 0x72657961u, "unknown not lowered yet"); return;
L_08B1FD34:
    rt.unsupported(0x08B1FD34u, 0x67676F54u, "vfpu1 not lowered yet"); return;
L_08B1FD44:
    rt.unsupported(0x08B1FD44u, 0x6E6F4372u, "vfpu3 not lowered yet"); return;
L_08B1FD50:
    ctx.execute_vfpu_compare3(73u, 115u, 76u, 1u, 6u);
    if (ctx.gpr[3] == ctx.gpr[12]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 11u, 0x08B382E4u>(ctx, &aot_mem); return;
    }
    goto L_08B1FD5C;
L_08B1FD5C:
    ctx.execute_vfpu_compare3(114u, 68u, 114u, 1u, 6u);
    rt.unsupported(0x08B1FD60u, 0x6E696E77u, "vfpu3 not lowered yet"); return;
L_08B1FD68:
    if (ctx.gpr[3] == ctx.gpr[16]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 9u, 0x08B382A0u>(ctx, &aot_mem); return;
    }
    goto L_08B1FD70;
L_08B1FD70:
    ctx.execute_vfpu_vcmp_ct<67u, 111u, 1u, 2u>();
    if (ctx.gpr[3] != ctx.gpr[18]) {
    rt.unsupported(0x08B1FD78u, 0x7261436Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 14u, 0x08B3D334u>(ctx, &aot_mem); return;
    }
    goto L_08B1FD7C;
L_08B1FD7C:
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B1FD80u, 0x00007275u, "special? not lowered yet"); return;
L_08B1FD8C:
    rt.unsupported(0x08B1FD8Cu, 0x2061754Cu, "unknown not lowered yet"); return;
L_08B1FDA4:
    rt.unsupported(0x08B1FDA4u, 0x74736F74u, "unknown not lowered yet"); return;
L_08B1FDB0:
    rt.unsupported(0x08B1FDB0u, 0x69797254u, "unknown not lowered yet"); return;
L_08B1FDF0:
    // nop
    goto L_08B1FDF4;
L_08B1FDF4:
    rt.unsupported(0x08B1FDF4u, 0x70726157u, "unknown not lowered yet"); return;
L_08B1FE14:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    goto L_08B1FE1C;
L_08B1FE1C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B1FE24u, 0x7244202Au, "unknown not lowered yet"); return;
L_08B1FE30:
    rt.unsupported(0x08B1FE30u, 0x70736552u, "unknown not lowered yet"); return;
L_08B1FE4C:
    ctx.execute_vfpu_vscl_ct<109u, 32u, 118u, 1u>();
    ctx.execute_vfpu_vcmp_ct<105u, 99u, 1u, 8u>();
    goto L_08B1FE54;
L_08B1FE54:
    ctx.gpr[1] = (0u | 0u);
    goto L_08B1FE58;
L_08B1FE58:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    goto L_08B1FE5C;
L_08B1FE5C:
    rt.unsupported(0x08B1FE5Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B1FE64:
    rt.unsupported(0x08B1FE64u, 0x72612065u, "unknown not lowered yet"); return;
L_08B1FE6C:
    rt.unsupported(0x08B1FE6Cu, 0x616C7020u, "vfpu0 not lowered yet"); return;
L_08B1FE74:
    rt.unsupported(0x08B1FE74u, 0x000A2E2Eu, "special? not lowered yet"); return;
L_08B1FE78:
    rt.unsupported(0x08B1FE78u, 0x6E696F44u, "vfpu3 not lowered yet"); return;
L_08B1FE7C:
    ctx.execute_vfpu_vscl_ct<103u, 32u, 114u, 1u>();
    rt.unsupported(0x08B1FE80u, 0x77617073u, "unknown not lowered yet"); return;
L_08B1FE84:
    rt.unsupported(0x08B1FE84u, 0x7461206Eu, "unknown not lowered yet"); return;
L_08B1FE8C:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(26149));
    (void)(0u ^ 0u);
    goto L_08B1FE94;
L_08B1FE94:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1FE98u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B1FEBC:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    rt.unsupported(0x08B1FEC0u, 0x4F435245u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 335u, 0x08B33000u>(ctx, &aot_mem); return;
    }
    goto L_08B1FEC4;
L_08B1FEC4:
    rt.unsupported(0x08B1FEC4u, 0x4F52544Eu, "unknown not lowered yet"); return;
L_08B1FECC:
    rt.unsupported(0x08B1FED0u, 0x5449534Fu, "control flow in delay slot"); return;
L_08B1FED4:
    jump_target = ctx.gpr[2];
    ctx.gpr[9] = (0x08B1FEDCu);
    rt.unsupported(0x08B1FED8u, 0x48544553u, "cop2/vfpu not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B1FEDCu) goto L_08B1FEDC;
    return;
L_08B1FED8:
    rt.unsupported(0x08B1FED8u, 0x48544553u, "cop2/vfpu not lowered yet"); return;
L_08B1FEDC:
    rt.unsupported(0x08B1FEDCu, 0x49444145u, "cop2/vfpu not lowered yet"); return;
L_08B1FF18:
    rt.unsupported(0x08B1FF18u, 0x73646550u, "unknown not lowered yet"); return;
L_08B1FF20:
    rt.unsupported(0x08B1FF20u, 0x69686556u, "unknown not lowered yet"); return;
L_08B1FF2C:
    ctx.execute_vfpu_vscl_ct<79u, 98u, 106u, 1u>();
    ctx.gpr[14] = (ctx.gpr[3] - ctx.gpr[19]);
    goto L_08B1FF34;
L_08B1FF34:
    rt.unsupported(0x08B1FF34u, 0x69647541u, "unknown not lowered yet"); return;
L_08B1FF70:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 0u>();
    rt.unsupported(0x08B1FF74u, 0x61682073u, "vfpu0 not lowered yet"); return;
L_08B1FF7C:
    rt.unsupported(0x08B1FF7Cu, 0x206D6565u, "unknown not lowered yet"); return;
L_08B1FF90:
    rt.unsupported(0x08B1FF90u, 0x72617473u, "unknown not lowered yet"); return;
L_08B1FF9C:
    rt.unsupported(0x08B1FF9Cu, 0x6B636F6Cu, "unknown not lowered yet"); return;
L_08B1FFA8:
    rt.unsupported(0x08B1FFA8u, 0x70736964u, "unknown not lowered yet"); return;
L_08B1FFB4:
    ctx.execute_vfpu_vminmax(95u, 115u, 101u, 1u, false);
    (void)(0u + 0u);
    goto L_08B1FFBC;
L_08B1FFBC:
    ctx.execute_vfpu_vminmax(102u, 114u, 97u, 1u, false);
    ctx.execute_vfpu_compare3(101u, 32u, 99u, 1u, 6u);
    rt.unsupported(0x08B1FFC4u, 0x20746E75u, "unknown not lowered yet"); return;
L_08B1FFD0:
    ctx.execute_vfpu_vminmax(102u, 114u, 97u, 1u, false);
    ctx.execute_vfpu_compare3(101u, 32u, 108u, 1u, 6u);
    rt.unsupported(0x08B1FFD8u, 0x20207373u, "unknown not lowered yet"); return;
L_08B1FFF0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1FFF4u, 0x746C754Du, "unknown not lowered yet"); return;
}

void recomp_unit_0198(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0198_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_198(Runtime &runtime) {
    runtime.register_generated_unit(198u, 0x08B1C000u, 16384u, &recomp_unit_0198, &recomp_unit_0198_entry);
    runtime.register_function(0x08B1C108u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C124u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C12Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C138u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C144u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C14Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C158u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C194u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C1C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C1C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C1D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C1E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C210u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C21Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C228u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C23Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C254u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C25Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C268u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C27Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C284u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C290u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C29Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C2ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C2B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C2D4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C2E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C2FCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C300u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C31Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C328u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C33Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C344u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C368u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C380u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C38Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C3A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C3B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C3D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C400u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C428u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C42Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C444u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C44Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C468u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C474u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C484u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C48Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C4F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C504u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C50Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C510u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C514u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C51Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C520u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C524u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C528u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C550u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C578u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C5A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C5C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C5F4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C618u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C620u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C634u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C640u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C648u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C658u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C66Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C67Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C688u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C6C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C6D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C6F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C714u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C71Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C72Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C738u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C748u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C754u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C760u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C768u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C770u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C774u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C778u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C780u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C78Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7CCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7D4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C7F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C814u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C820u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C828u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C834u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C83Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C84Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C858u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C864u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C870u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C87Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C888u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C890u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C89Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8F4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C8FCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C904u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C914u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C91Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C928u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C930u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C93Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C944u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C950u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C958u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C960u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C964u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C970u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C980u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C98Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C99Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9CCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1C9FCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA04u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA10u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA1Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA24u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA2Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA38u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA40u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA4Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA64u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA78u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA80u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA90u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CA98u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAA0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAA4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CABCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAC4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAD0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAD8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CAF8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB00u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB08u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB0Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB14u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB1Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB24u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB38u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB40u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB44u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB4Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB5Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB64u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB70u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB78u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB84u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB8Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB94u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CB9Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBB4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBC0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBC8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBD0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBD4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBDCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBF0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CBF8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC00u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC0Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC14u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC1Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC28u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC34u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC38u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC3Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC44u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC4Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC5Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC68u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC70u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC78u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC7Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC80u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC8Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CC94u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCA0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCB0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCB8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCC4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCD0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCD8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCE0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCE8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCF4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CCFCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD04u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD0Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD14u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD18u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD20u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD38u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD3Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD44u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD60u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD68u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD7Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD84u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD94u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CD9Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDA4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDB4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDC0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDC8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDD8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDE0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CDECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE08u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE10u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE28u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE3Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE44u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE4Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE58u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE60u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE68u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE70u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE80u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CE88u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CEA4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CEACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CEB8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CEC0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CEC8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CED8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CEE0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CEE8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF04u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF0Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF14u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF1Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF28u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF4Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF8Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CF94u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CFA4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CFB0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CFB8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CFD4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CFDCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CFECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1CFF8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D000u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D010u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D01Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D024u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D030u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D040u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D048u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D054u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D060u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D064u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D06Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D078u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D084u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D08Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D094u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D09Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0CCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0D4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D0F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D114u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D11Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D128u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D130u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D138u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D148u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D150u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D158u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D160u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D168u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D174u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D17Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D18Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D194u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D198u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D1A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D1B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D1C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D1DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D1E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D200u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D208u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D224u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D22Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D244u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D24Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D264u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D26Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D27Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D288u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D290u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D29Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2F4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D2FCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D304u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D314u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D31Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D324u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D340u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D348u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D350u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D358u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D364u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D36Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D37Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D388u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D390u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D3F4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D408u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D41Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D430u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D444u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D458u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D46Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D480u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D494u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D4A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D4BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D4D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D4E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D4F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D50Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D520u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D52Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D5CCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D5D4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D5D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D5E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D5ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D5F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D610u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D618u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D620u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D690u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D694u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D69Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6F4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D6FCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D704u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D70Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D714u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D71Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D724u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D72Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D734u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D73Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D744u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D74Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D754u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D75Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D764u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D76Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D774u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D778u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D780u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D788u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D790u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D798u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7E8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D7F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D804u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D80Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D814u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D848u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D860u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D864u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D86Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D894u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D8D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D8E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D8F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D90Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D91Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D924u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D92Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D934u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D93Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D948u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D950u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D960u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D968u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D970u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D97Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D988u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D990u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D9C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D9CCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1D9DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DA00u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DA1Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DA34u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DA64u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DA7Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DAACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DAB8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DADCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DB08u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DB28u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DB50u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DB64u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DB80u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DB9Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DBB8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DC04u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DC10u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DC3Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DC54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DC58u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DC64u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DC9Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DCA8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DCC0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DCD0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DD00u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DD4Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DD54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DD78u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DD94u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DDB4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DDC8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DDE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DDFCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DE14u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DE54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DE5Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DE6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DE74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DE80u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DE8Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DEA0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DEACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DEB4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DEBCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DECCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DEDCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DEE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DEF4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DF00u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DF18u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DF30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DF48u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DF68u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DFA8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DFB8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DFE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DFF4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1DFF8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E008u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E014u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E020u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E024u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E03Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E04Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E064u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E080u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E088u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E0BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E0D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E0ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E104u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E114u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E134u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E140u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E14Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E154u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E15Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E168u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E180u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E2B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E2D4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E3F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E4C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E4CCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E4E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E4ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E518u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E534u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E53Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E578u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E594u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E59Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E5B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E5D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E5E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E624u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E65Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E688u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E6ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E6B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E6D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E6D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E6DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E6F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E700u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E708u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E710u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E714u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E718u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E744u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E74Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E754u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E75Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E77Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E7C0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E800u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E808u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E810u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E840u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E860u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E870u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E878u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E87Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E888u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E890u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E8DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E8E4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E938u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E940u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E948u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E950u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E958u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E960u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E968u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E980u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E9ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E9D4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1E9F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EA84u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EAE0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EAE8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EAF8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EB30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EBB8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EBD4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EBD8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EBE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EBF4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EC20u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1ED24u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EEF4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EF20u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1EF80u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F090u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F094u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F0B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F0F0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F0F8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F100u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F120u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F124u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F12Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F154u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F164u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F20Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F250u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F26Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F274u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F2A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F300u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F3E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F400u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F414u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F440u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F460u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F470u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F478u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F48Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F4C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F4CCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F504u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F53Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F540u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F548u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F554u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F558u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F55Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F560u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F564u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F56Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F588u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F598u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5A0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5ACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5B4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5CCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F5D4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F600u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F604u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F60Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F614u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F61Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F628u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F638u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F640u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F65Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F668u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F674u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F680u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F6A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F6C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F758u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F818u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F824u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F82Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F838u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F83Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F844u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F84Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F850u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F858u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F868u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F874u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F880u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F88Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F898u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8A4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8DCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8ECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F8F4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F900u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F908u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F914u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F918u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F924u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F934u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F93Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F940u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F94Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F954u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F964u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F96Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F978u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F980u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F990u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F994u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F998u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F99Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9A8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9B0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9B8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9BCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9C4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9C8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9D0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9D8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9E0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1F9F4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA00u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA10u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA18u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA24u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA3Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA4Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA58u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA60u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA70u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA88u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FA98u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FAA0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FAB0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FAC0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FAC4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FAC8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FAD8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FAE8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FAFCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB10u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB20u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB2Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB40u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB4Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB5Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB68u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB80u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB88u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FB9Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FBA0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FBA8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FBB8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FBC0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FBC8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FBD0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FBD8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FBE8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC00u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC04u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC10u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC18u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC1Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC38u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC84u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC8Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FC98u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCACu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCB0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCBCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCC4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCD0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCE4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCECu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FCF4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD0Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD24u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD34u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD44u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD50u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD5Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD68u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD70u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD7Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FD8Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FDA4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FDB0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FDF0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FDF4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE14u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE1Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE30u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE4Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE54u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE58u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE5Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE64u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE6Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE74u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE78u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE7Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE84u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE8Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FE94u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FEBCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FEC4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FECCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FED4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FED8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FEDCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF18u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF20u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF2Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF34u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF70u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF7Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF90u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FF9Cu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FFA8u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FFB4u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FFBCu, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FFD0u, &recomp_unit_0198, "recomp_unit_0198");
    runtime.register_function(0x08B1FFF0u, &recomp_unit_0198, "recomp_unit_0198");
}
} // namespace psprecomp
