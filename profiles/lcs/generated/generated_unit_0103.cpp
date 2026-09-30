#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0103[4095] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 13, 0, 14, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61,
    0, 0, 0, 62, 0, 0, 0, 63, 0, 64, 0, 65, 66, 0, 67, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0,
    0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 93, 0,
    94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100,
    0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 114,
    0, 115, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 122, 0, 0,
    123, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 134,
    0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    148, 0, 0, 0, 149, 0, 150, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 162, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 171, 172, 0, 173, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 209, 0, 210,
    0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 0, 0, 0,
    0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 226,
    0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0,
    0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0,
    0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0,
    0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    261, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0,
    0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0,
    273, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 282,
    0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285,
    0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 290, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 298, 299, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 307,
    0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 0, 318,
    0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 324, 0, 325, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 331, 0, 332, 0, 333, 0, 334, 0, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339,
    0, 340, 0, 341, 342, 0, 343, 0, 0, 344, 0, 345, 0, 346, 347, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 356, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 366, 367, 0, 368, 0,
    0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0, 381, 0, 382, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 387, 0,
    388, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395,
    0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 414,
    0, 0, 415, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0,
    419, 0, 0, 420, 0, 0, 421, 0, 422, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0, 428,
    0, 429, 0, 430, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 436, 0, 437, 438, 0, 439, 440, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 444, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 448,
    0, 449, 0, 450, 0, 0, 451, 0, 452, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0,
    455, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 462, 463, 0, 464, 465, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 472, 0, 473, 0, 474, 0, 475, 0,
    476, 0, 477, 478, 0, 479, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0,
    0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 489, 0, 0, 490,
    0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 494, 0, 0, 495, 496, 0, 497, 0, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502,
    0, 503, 504, 0, 505, 0, 0, 0, 506, 507, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 511, 0, 0, 0, 512, 0,
    0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0,
    0, 0, 521, 0, 522, 0, 523, 0, 0, 0, 524, 0, 0, 525, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0,
    0, 530, 0, 0, 0, 531, 0, 532, 0, 533, 0, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0,
    0, 0, 540, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 543, 0, 544, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 0,
    0, 0, 0, 549, 0, 550, 0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0,
    0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 563,
    0, 564, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 570, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 575, 0, 576, 0, 0,
    577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0,
    586, 0, 0, 587, 0, 588, 0, 0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0,
    595, 0, 0, 596, 0, 597, 0, 598, 0, 0, 0, 599, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 604, 0, 605,
    0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 611, 0, 612, 0,
    0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0,
    619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 628, 0, 0, 629, 0, 630, 0, 631, 632, 0, 633, 0, 0, 0,
    634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 638,
    0, 639, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 642, 0, 643, 0, 0, 0, 644, 0, 645, 0, 646, 0, 647, 0, 0, 0, 648, 0, 0,
    649, 0, 0, 650, 0, 651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 664,
    0, 665, 666, 0, 0, 667, 0, 668, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 673, 0,
    0, 0, 674, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 682,
    0, 0, 683, 0, 684, 0, 685, 686, 0, 687, 688, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 690, 0, 0, 691, 0, 692, 0, 693, 0, 694, 0,
    695, 0, 696, 0, 697, 0, 698, 699, 0, 700, 0, 0, 701, 0, 702, 0, 703, 0, 704, 0, 705, 0, 706, 0, 707, 708, 0, 709, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 714, 0, 0, 715,
    0, 0, 0, 716, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 719, 0, 0, 720, 0, 721, 0, 0, 0, 0, 0, 722, 0, 0, 0,
    0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 725, 0, 726, 0, 0, 727, 0, 0, 728, 0, 0, 729, 0, 730, 0, 0,
    0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 735, 0, 0,
    736, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0,
    742, 0, 743, 0, 744, 745, 0, 746, 747, 0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 752, 0, 753,
    0, 754, 0, 755, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 757, 0, 0, 758, 0, 759, 0, 0, 0, 760, 0, 761, 0, 762, 0, 763, 0, 764,
    0, 0, 0, 765, 0, 766, 0, 767, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0,
    0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 777, 0, 0, 778, 0, 0, 0, 779, 0, 0, 780,
    0, 781, 0, 0, 782, 0, 783, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0,
    794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 795, 0, 796, 0, 797, 0, 798, 0, 0, 799, 0, 800, 0, 801, 0, 802, 0, 803, 0, 804, 805, 0, 806, 0, 0, 807, 0, 0,
    0, 0, 808, 0, 0, 0, 0, 809, 0, 810, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0,
    0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0,
    0, 0, 0, 821, 0, 822, 0, 823, 0, 824, 0, 0, 0, 825, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 828,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 834, 0,
    835, 836, 0, 837, 0, 0, 0, 838, 0, 839, 0, 840, 841, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 844, 0,
    0, 0, 845, 0, 0, 0, 0, 0, 846, 0, 847, 0, 848, 0, 0, 849, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0,
    0, 852, 0, 853, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0,
    856, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 858, 0, 859, 0, 0, 0, 0, 860, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 866, 0, 867, 0, 868, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0, 871, 0, 0, 0, 0, 872, 0, 0, 873,
    0, 0, 0, 0, 0, 0, 874, 0, 0, 875, 0, 0, 876, 0, 0, 0, 0, 0, 0, 877, 0, 0, 878, 0, 0, 0, 0, 0, 0, 879, 0, 0,
    0, 880, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 883, 0, 884, 0, 0, 885, 0, 0, 0, 886, 0, 0,
    887, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0, 889, 0, 0, 0, 0, 0, 890, 0, 0, 0, 891, 0, 0, 892, 0, 893, 0, 894, 0,
    0, 895, 0, 0, 0, 0, 0, 896, 0, 0, 0, 897, 0, 0, 898, 0, 899, 0, 900, 0, 901, 0, 0, 0, 0, 902, 0, 0, 0, 903, 0, 0,
    0, 0, 0, 0, 0, 904, 0, 905, 0, 0, 0, 0, 0, 906, 907, 0, 0, 0, 908, 0, 0, 909, 0, 910, 0, 911, 912, 0, 913, 914, 0, 0,
    0, 0, 0, 0, 0, 0, 915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 916, 0, 0, 917, 0, 0, 918, 0, 919, 0,
    920, 0, 0, 921, 0, 922, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 923, 0, 0, 0, 0, 924, 0, 0, 925, 0, 926, 0, 927, 0,
    0, 0, 0, 0, 0, 0, 928, 0, 0, 0, 0, 0, 929, 0, 930, 0, 0, 0, 0, 0, 931, 0, 932, 0, 0, 933, 0, 0, 934, 0, 0, 0,
    0, 0, 935, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 936, 0, 0, 0, 937, 0, 0, 0, 0, 938, 0,
    0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 0, 940, 0, 0, 941, 0, 0, 942, 0, 0, 0, 0, 0, 943, 0, 944, 0, 945, 0, 0, 946,
};
void recomp_unit_0103_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089A0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0103[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A0000;
    case 2u: goto L_089A0010;
    case 3u: goto L_089A0030;
    case 4u: goto L_089A004C;
    case 5u: goto L_089A005C;
    case 6u: goto L_089A0080;
    case 7u: goto L_089A00A0;
    case 8u: goto L_089A00AC;
    case 9u: goto L_089A00BC;
    case 10u: goto L_089A00CC;
    case 11u: goto L_089A00D8;
    case 12u: goto L_089A00F8;
    case 13u: goto L_089A010C;
    case 14u: goto L_089A0114;
    case 15u: goto L_089A0124;
    case 16u: goto L_089A012C;
    case 17u: goto L_089A0134;
    case 18u: goto L_089A0140;
    case 19u: goto L_089A014C;
    case 20u: goto L_089A0174;
    case 21u: goto L_089A0188;
    case 22u: goto L_089A0190;
    case 23u: goto L_089A0198;
    case 24u: goto L_089A01A0;
    case 25u: goto L_089A01B0;
    case 26u: goto L_089A01CC;
    case 27u: goto L_089A01DC;
    case 28u: goto L_089A01F4;
    case 29u: goto L_089A0210;
    case 30u: goto L_089A0230;
    case 31u: goto L_089A0238;
    case 32u: goto L_089A0240;
    case 33u: goto L_089A0248;
    case 34u: goto L_089A0250;
    case 35u: goto L_089A0258;
    case 36u: goto L_089A026C;
    case 37u: goto L_089A028C;
    case 38u: goto L_089A0294;
    case 39u: goto L_089A02A4;
    case 40u: goto L_089A02E8;
    case 41u: goto L_089A02F8;
    case 42u: goto L_089A0318;
    case 43u: goto L_089A0330;
    case 44u: goto L_089A033C;
    case 45u: goto L_089A0348;
    case 46u: goto L_089A0358;
    case 47u: goto L_089A039C;
    case 48u: goto L_089A03A4;
    case 49u: goto L_089A03B4;
    case 50u: goto L_089A03C0;
    case 51u: goto L_089A03C8;
    case 52u: goto L_089A03D8;
    case 53u: goto L_089A03F8;
    case 54u: goto L_089A0418;
    case 55u: goto L_089A043C;
    case 56u: goto L_089A0444;
    case 57u: goto L_089A044C;
    case 58u: goto L_089A0454;
    case 59u: goto L_089A0464;
    case 60u: goto L_089A0474;
    case 61u: goto L_089A047C;
    case 62u: goto L_089A048C;
    case 63u: goto L_089A049C;
    case 64u: goto L_089A04A4;
    case 65u: goto L_089A04AC;
    case 66u: goto L_089A04B0;
    case 67u: goto L_089A04B8;
    case 68u: goto L_089A04D0;
    case 69u: goto L_089A04D8;
    case 70u: goto L_089A04E8;
    case 71u: goto L_089A04F8;
    case 72u: goto L_089A0524;
    case 73u: goto L_089A052C;
    case 74u: goto L_089A0570;
    case 75u: goto L_089A0578;
    case 76u: goto L_089A0588;
    case 77u: goto L_089A0598;
    case 78u: goto L_089A05D0;
    case 79u: goto L_089A05D8;
    case 80u: goto L_089A05FC;
    case 81u: goto L_089A0634;
    case 82u: goto L_089A063C;
    case 83u: goto L_089A064C;
    case 84u: goto L_089A0660;
    case 85u: goto L_089A0680;
    case 86u: goto L_089A06A8;
    case 87u: goto L_089A06B0;
    case 88u: goto L_089A06C0;
    case 89u: goto L_089A06C8;
    case 90u: goto L_089A06D8;
    case 91u: goto L_089A06E4;
    case 92u: goto L_089A06EC;
    case 93u: goto L_089A06F8;
    case 94u: goto L_089A0700;
    case 95u: goto L_089A0708;
    case 96u: goto L_089A0718;
    case 97u: goto L_089A0728;
    case 98u: goto L_089A0734;
    case 99u: goto L_089A0774;
    case 100u: goto L_089A077C;
    case 101u: goto L_089A0784;
    case 102u: goto L_089A078C;
    case 103u: goto L_089A0794;
    case 104u: goto L_089A079C;
    case 105u: goto L_089A07AC;
    case 106u: goto L_089A07B4;
    case 107u: goto L_089A07BC;
    case 108u: goto L_089A07C4;
    case 109u: goto L_089A07CC;
    case 110u: goto L_089A07DC;
    case 111u: goto L_089A07E8;
    case 112u: goto L_089A07F0;
    case 113u: goto L_089A07F8;
    case 114u: goto L_089A07FC;
    case 115u: goto L_089A0804;
    case 116u: goto L_089A0818;
    case 117u: goto L_089A0824;
    case 118u: goto L_089A0834;
    case 119u: goto L_089A0844;
    case 120u: goto L_089A085C;
    case 121u: goto L_089A0870;
    case 122u: goto L_089A0874;
    case 123u: goto L_089A0880;
    case 124u: goto L_089A0894;
    case 125u: goto L_089A089C;
    case 126u: goto L_089A08A4;
    case 127u: goto L_089A08AC;
    case 128u: goto L_089A08B8;
    case 129u: goto L_089A08C4;
    case 130u: goto L_089A08D0;
    case 131u: goto L_089A08D4;
    case 132u: goto L_089A08E0;
    case 133u: goto L_089A08F4;
    case 134u: goto L_089A08FC;
    case 135u: goto L_089A0910;
    case 136u: goto L_089A0918;
    case 137u: goto L_089A0938;
    case 138u: goto L_089A0944;
    case 139u: goto L_089A0950;
    case 140u: goto L_089A095C;
    case 141u: goto L_089A0990;
    case 142u: goto L_089A099C;
    case 143u: goto L_089A09AC;
    case 144u: goto L_089A09B4;
    case 145u: goto L_089A09C0;
    case 146u: goto L_089A09CC;
    case 147u: goto L_089A09F4;
    case 148u: goto L_089A0A00;
    case 149u: goto L_089A0A10;
    case 150u: goto L_089A0A18;
    case 151u: goto L_089A0A1C;
    case 152u: goto L_089A0A3C;
    case 153u: goto L_089A0A54;
    case 154u: goto L_089A0A60;
    case 155u: goto L_089A0A8C;
    case 156u: goto L_089A0A98;
    case 157u: goto L_089A0AAC;
    case 158u: goto L_089A0AB8;
    case 159u: goto L_089A0AC8;
    case 160u: goto L_089A0AD0;
    case 161u: goto L_089A0AE0;
    case 162u: goto L_089A0AE4;
    case 163u: goto L_089A0B0C;
    case 164u: goto L_089A0B1C;
    case 165u: goto L_089A0B28;
    case 166u: goto L_089A0B68;
    case 167u: goto L_089A0B98;
    case 168u: goto L_089A0BA4;
    case 169u: goto L_089A0BB4;
    case 170u: goto L_089A0C10;
    case 171u: goto L_089A0C18;
    case 172u: goto L_089A0C1C;
    case 173u: goto L_089A0C24;
    case 174u: goto L_089A0C28;
    case 175u: goto L_089A0C3C;
    case 176u: goto L_089A0C5C;
    case 177u: goto L_089A0C7C;
    case 178u: goto L_089A0C9C;
    case 179u: goto L_089A0CAC;
    case 180u: goto L_089A0CB4;
    case 181u: goto L_089A0CBC;
    case 182u: goto L_089A0CC4;
    case 183u: goto L_089A0CD0;
    case 184u: goto L_089A0CDC;
    case 185u: goto L_089A0CEC;
    case 186u: goto L_089A0D3C;
    case 187u: goto L_089A0D50;
    case 188u: goto L_089A0D60;
    case 189u: goto L_089A0D68;
    case 190u: goto L_089A0DA4;
    case 191u: goto L_089A0DAC;
    case 192u: goto L_089A0DBC;
    case 193u: goto L_089A0DD8;
    case 194u: goto L_089A0DE4;
    case 195u: goto L_089A0DF0;
    case 196u: goto L_089A0DFC;
    case 197u: goto L_089A0E1C;
    case 198u: goto L_089A0E24;
    case 199u: goto L_089A0E40;
    case 200u: goto L_089A0E4C;
    case 201u: goto L_089A0E54;
    case 202u: goto L_089A0E78;
    case 203u: goto L_089A0E88;
    case 204u: goto L_089A0E90;
    case 205u: goto L_089A0EA4;
    case 206u: goto L_089A0ED4;
    case 207u: goto L_089A0EDC;
    case 208u: goto L_089A0EE8;
    case 209u: goto L_089A0EF4;
    case 210u: goto L_089A0EFC;
    case 211u: goto L_089A0F04;
    case 212u: goto L_089A0F14;
    case 213u: goto L_089A0F28;
    case 214u: goto L_089A0F50;
    case 215u: goto L_089A0F58;
    case 216u: goto L_089A0F60;
    case 217u: goto L_089A0F6C;
    case 218u: goto L_089A0F84;
    case 219u: goto L_089A0F90;
    case 220u: goto L_089A0F98;
    case 221u: goto L_089A0FA4;
    case 222u: goto L_089A0FBC;
    case 223u: goto L_089A0FC4;
    case 224u: goto L_089A0FDC;
    case 225u: goto L_089A0FE8;
    case 226u: goto L_089A0FFC;
    case 227u: goto L_089A100C;
    case 228u: goto L_089A1024;
    case 229u: goto L_089A102C;
    case 230u: goto L_089A1034;
    case 231u: goto L_089A1040;
    case 232u: goto L_089A104C;
    case 233u: goto L_089A1060;
    case 234u: goto L_089A1074;
    case 235u: goto L_089A1084;
    case 236u: goto L_089A109C;
    case 237u: goto L_089A10B0;
    case 238u: goto L_089A10D0;
    case 239u: goto L_089A10F0;
    case 240u: goto L_089A1120;
    case 241u: goto L_089A1130;
    case 242u: goto L_089A113C;
    case 243u: goto L_089A115C;
    case 244u: goto L_089A1170;
    case 245u: goto L_089A11A8;
    case 246u: goto L_089A11B8;
    case 247u: goto L_089A11C4;
    case 248u: goto L_089A11CC;
    case 249u: goto L_089A11D4;
    case 250u: goto L_089A11E8;
    case 251u: goto L_089A11F8;
    case 252u: goto L_089A1204;
    case 253u: goto L_089A120C;
    case 254u: goto L_089A1230;
    case 255u: goto L_089A1268;
    case 256u: goto L_089A1278;
    case 257u: goto L_089A1284;
    case 258u: goto L_089A12A4;
    case 259u: goto L_089A12B8;
    case 260u: goto L_089A12F4;
    case 261u: goto L_089A1300;
    case 262u: goto L_089A1308;
    case 263u: goto L_089A131C;
    case 264u: goto L_089A132C;
    case 265u: goto L_089A1340;
    case 266u: goto L_089A134C;
    case 267u: goto L_089A1368;
    case 268u: goto L_089A1374;
    case 269u: goto L_089A1384;
    case 270u: goto L_089A13B4;
    case 271u: goto L_089A13F0;
    case 272u: goto L_089A13F8;
    case 273u: goto L_089A1400;
    case 274u: goto L_089A1408;
    case 275u: goto L_089A1418;
    case 276u: goto L_089A1438;
    case 277u: goto L_089A1440;
    case 278u: goto L_089A1448;
    case 279u: goto L_089A1450;
    case 280u: goto L_089A146C;
    case 281u: goto L_089A1474;
    case 282u: goto L_089A147C;
    case 283u: goto L_089A1494;
    case 284u: goto L_089A14D0;
    case 285u: goto L_089A14FC;
    case 286u: goto L_089A1508;
    case 287u: goto L_089A1520;
    case 288u: goto L_089A1530;
    case 289u: goto L_089A1540;
    case 290u: goto L_089A1548;
    case 291u: goto L_089A1550;
    case 292u: goto L_089A1558;
    case 293u: goto L_089A1584;
    case 294u: goto L_089A1590;
    case 295u: goto L_089A15A8;
    case 296u: goto L_089A15B4;
    case 297u: goto L_089A15C0;
    case 298u: goto L_089A15CC;
    case 299u: goto L_089A15D0;
    case 300u: goto L_089A15D8;
    case 301u: goto L_089A15EC;
    case 302u: goto L_089A1600;
    case 303u: goto L_089A1630;
    case 304u: goto L_089A165C;
    case 305u: goto L_089A1664;
    case 306u: goto L_089A1674;
    case 307u: goto L_089A167C;
    case 308u: goto L_089A1684;
    case 309u: goto L_089A1698;
    case 310u: goto L_089A16B0;
    case 311u: goto L_089A16C0;
    case 312u: goto L_089A16C8;
    case 313u: goto L_089A16D0;
    case 314u: goto L_089A16D8;
    case 315u: goto L_089A16E0;
    case 316u: goto L_089A16E8;
    case 317u: goto L_089A16F0;
    case 318u: goto L_089A16FC;
    case 319u: goto L_089A1704;
    case 320u: goto L_089A1710;
    case 321u: goto L_089A171C;
    case 322u: goto L_089A1728;
    case 323u: goto L_089A1734;
    case 324u: goto L_089A1738;
    case 325u: goto L_089A1740;
    case 326u: goto L_089A1744;
    case 327u: goto L_089A1754;
    case 328u: goto L_089A1774;
    case 329u: goto L_089A17A0;
    case 330u: goto L_089A17A8;
    case 331u: goto L_089A17B8;
    case 332u: goto L_089A17C0;
    case 333u: goto L_089A17C8;
    case 334u: goto L_089A17D0;
    case 335u: goto L_089A17DC;
    case 336u: goto L_089A17E4;
    case 337u: goto L_089A17EC;
    case 338u: goto L_089A17F4;
    case 339u: goto L_089A17FC;
    case 340u: goto L_089A1804;
    case 341u: goto L_089A180C;
    case 342u: goto L_089A1810;
    case 343u: goto L_089A1818;
    case 344u: goto L_089A1824;
    case 345u: goto L_089A182C;
    case 346u: goto L_089A1834;
    case 347u: goto L_089A1838;
    case 348u: goto L_089A1840;
    case 349u: goto L_089A1858;
    case 350u: goto L_089A1864;
    case 351u: goto L_089A1884;
    case 352u: goto L_089A1898;
    case 353u: goto L_089A18AC;
    case 354u: goto L_089A18E8;
    case 355u: goto L_089A18F0;
    case 356u: goto L_089A18F8;
    case 357u: goto L_089A1908;
    case 358u: goto L_089A1920;
    case 359u: goto L_089A1928;
    case 360u: goto L_089A1930;
    case 361u: goto L_089A1938;
    case 362u: goto L_089A1940;
    case 363u: goto L_089A1950;
    case 364u: goto L_089A195C;
    case 365u: goto L_089A1964;
    case 366u: goto L_089A196C;
    case 367u: goto L_089A1970;
    case 368u: goto L_089A1978;
    case 369u: goto L_089A198C;
    case 370u: goto L_089A19A0;
    case 371u: goto L_089A19DC;
    case 372u: goto L_089A19E4;
    case 373u: goto L_089A1A00;
    case 374u: goto L_089A1A18;
    case 375u: goto L_089A1A2C;
    case 376u: goto L_089A1A3C;
    case 377u: goto L_089A1A5C;
    case 378u: goto L_089A1A8C;
    case 379u: goto L_089A1A94;
    case 380u: goto L_089A1AA4;
    case 381u: goto L_089A1AAC;
    case 382u: goto L_089A1AB4;
    case 383u: goto L_089A1ABC;
    case 384u: goto L_089A1AC4;
    case 385u: goto L_089A1AE4;
    case 386u: goto L_089A1AF0;
    case 387u: goto L_089A1AF8;
    case 388u: goto L_089A1B00;
    case 389u: goto L_089A1B04;
    case 390u: goto L_089A1B0C;
    case 391u: goto L_089A1B30;
    case 392u: goto L_089A1B40;
    case 393u: goto L_089A1B48;
    case 394u: goto L_089A1B68;
    case 395u: goto L_089A1B7C;
    case 396u: goto L_089A1B88;
    case 397u: goto L_089A1B90;
    case 398u: goto L_089A1BAC;
    case 399u: goto L_089A1BC4;
    case 400u: goto L_089A1BD8;
    case 401u: goto L_089A1BE8;
    case 402u: goto L_089A1C0C;
    case 403u: goto L_089A1C20;
    case 404u: goto L_089A1C4C;
    case 405u: goto L_089A1C54;
    case 406u: goto L_089A1C68;
    case 407u: goto L_089A1C74;
    case 408u: goto L_089A1C8C;
    case 409u: goto L_089A1CAC;
    case 410u: goto L_089A1CC8;
    case 411u: goto L_089A1CD0;
    case 412u: goto L_089A1CDC;
    case 413u: goto L_089A1CF4;
    case 414u: goto L_089A1CFC;
    case 415u: goto L_089A1D08;
    case 416u: goto L_089A1D18;
    case 417u: goto L_089A1D20;
    case 418u: goto L_089A1D78;
    case 419u: goto L_089A1D80;
    case 420u: goto L_089A1D8C;
    case 421u: goto L_089A1D98;
    case 422u: goto L_089A1DA0;
    case 423u: goto L_089A1DA8;
    case 424u: goto L_089A1DB8;
    case 425u: goto L_089A1DD8;
    case 426u: goto L_089A1DE0;
    case 427u: goto L_089A1DF0;
    case 428u: goto L_089A1DFC;
    case 429u: goto L_089A1E04;
    case 430u: goto L_089A1E0C;
    case 431u: goto L_089A1E10;
    case 432u: goto L_089A1E24;
    case 433u: goto L_089A1E38;
    case 434u: goto L_089A1E44;
    case 435u: goto L_089A1E50;
    case 436u: goto L_089A1E58;
    case 437u: goto L_089A1E60;
    case 438u: goto L_089A1E64;
    case 439u: goto L_089A1E6C;
    case 440u: goto L_089A1E70;
    case 441u: goto L_089A1E9C;
    case 442u: goto L_089A1EA8;
    case 443u: goto L_089A1EC0;
    case 444u: goto L_089A1EC8;
    case 445u: goto L_089A1ED0;
    case 446u: goto L_089A1EE4;
    case 447u: goto L_089A1EF4;
    case 448u: goto L_089A1EFC;
    case 449u: goto L_089A1F04;
    case 450u: goto L_089A1F0C;
    case 451u: goto L_089A1F18;
    case 452u: goto L_089A1F20;
    case 453u: goto L_089A1F24;
    case 454u: goto L_089A1F6C;
    case 455u: goto L_089A1F80;
    case 456u: goto L_089A1F94;
    case 457u: goto L_089A1F9C;
    case 458u: goto L_089A1FAC;
    case 459u: goto L_089A1FBC;
    case 460u: goto L_089A1FC8;
    case 461u: goto L_089A1FD4;
    case 462u: goto L_089A1FE0;
    case 463u: goto L_089A1FE4;
    case 464u: goto L_089A1FEC;
    case 465u: goto L_089A1FF0;
    case 466u: goto L_089A2050;
    case 467u: goto L_089A2090;
    case 468u: goto L_089A20A0;
    case 469u: goto L_089A20C4;
    case 470u: goto L_089A20CC;
    case 471u: goto L_089A20D4;
    case 472u: goto L_089A20E0;
    case 473u: goto L_089A20E8;
    case 474u: goto L_089A20F0;
    case 475u: goto L_089A20F8;
    case 476u: goto L_089A2100;
    case 477u: goto L_089A2108;
    case 478u: goto L_089A210C;
    case 479u: goto L_089A2114;
    case 480u: goto L_089A2118;
    case 481u: goto L_089A2144;
    case 482u: goto L_089A215C;
    case 483u: goto L_089A2170;
    case 484u: goto L_089A218C;
    case 485u: goto L_089A21AC;
    case 486u: goto L_089A21B8;
    case 487u: goto L_089A21CC;
    case 488u: goto L_089A21EC;
    case 489u: goto L_089A21F0;
    case 490u: goto L_089A21FC;
    case 491u: goto L_089A2204;
    case 492u: goto L_089A221C;
    case 493u: goto L_089A2230;
    case 494u: goto L_089A2238;
    case 495u: goto L_089A2244;
    case 496u: goto L_089A2248;
    case 497u: goto L_089A2250;
    case 498u: goto L_089A225C;
    case 499u: goto L_089A2264;
    case 500u: goto L_089A226C;
    case 501u: goto L_089A2274;
    case 502u: goto L_089A227C;
    case 503u: goto L_089A2284;
    case 504u: goto L_089A2288;
    case 505u: goto L_089A2290;
    case 506u: goto L_089A22A0;
    case 507u: goto L_089A22A4;
    case 508u: goto L_089A22B8;
    case 509u: goto L_089A22D4;
    case 510u: goto L_089A22DC;
    case 511u: goto L_089A22E8;
    case 512u: goto L_089A22F8;
    case 513u: goto L_089A2308;
    case 514u: goto L_089A2318;
    case 515u: goto L_089A2330;
    case 516u: goto L_089A2338;
    case 517u: goto L_089A2340;
    case 518u: goto L_089A2360;
    case 519u: goto L_089A236C;
    case 520u: goto L_089A2378;
    case 521u: goto L_089A2388;
    case 522u: goto L_089A2390;
    case 523u: goto L_089A2398;
    case 524u: goto L_089A23A8;
    case 525u: goto L_089A23B4;
    case 526u: goto L_089A23BC;
    case 527u: goto L_089A23C4;
    case 528u: goto L_089A23E0;
    case 529u: goto L_089A23F8;
    case 530u: goto L_089A2404;
    case 531u: goto L_089A2414;
    case 532u: goto L_089A241C;
    case 533u: goto L_089A2424;
    case 534u: goto L_089A2434;
    case 535u: goto L_089A2440;
    case 536u: goto L_089A244C;
    case 537u: goto L_089A2454;
    case 538u: goto L_089A246C;
    case 539u: goto L_089A2474;
    case 540u: goto L_089A2488;
    case 541u: goto L_089A2494;
    case 542u: goto L_089A24AC;
    case 543u: goto L_089A24B4;
    case 544u: goto L_089A24BC;
    case 545u: goto L_089A24C8;
    case 546u: goto L_089A24D8;
    case 547u: goto L_089A24E8;
    case 548u: goto L_089A24F4;
    case 549u: goto L_089A250C;
    case 550u: goto L_089A2514;
    case 551u: goto L_089A251C;
    case 552u: goto L_089A2528;
    case 553u: goto L_089A2534;
    case 554u: goto L_089A25AC;
    case 555u: goto L_089A25C8;
    case 556u: goto L_089A25D0;
    case 557u: goto L_089A25F8;
    case 558u: goto L_089A2608;
    case 559u: goto L_089A261C;
    case 560u: goto L_089A2628;
    case 561u: goto L_089A2644;
    case 562u: goto L_089A265C;
    case 563u: goto L_089A267C;
    case 564u: goto L_089A2684;
    case 565u: goto L_089A268C;
    case 566u: goto L_089A26A0;
    case 567u: goto L_089A26C4;
    case 568u: goto L_089A26EC;
    case 569u: goto L_089A26F4;
    case 570u: goto L_089A271C;
    case 571u: goto L_089A2720;
    case 572u: goto L_089A2730;
    case 573u: goto L_089A275C;
    case 574u: goto L_089A2764;
    case 575u: goto L_089A276C;
    case 576u: goto L_089A2774;
    case 577u: goto L_089A2780;
    case 578u: goto L_089A279C;
    case 579u: goto L_089A27AC;
    case 580u: goto L_089A27B4;
    case 581u: goto L_089A27BC;
    case 582u: goto L_089A27C4;
    case 583u: goto L_089A27CC;
    case 584u: goto L_089A27E8;
    case 585u: goto L_089A27F8;
    case 586u: goto L_089A2800;
    case 587u: goto L_089A280C;
    case 588u: goto L_089A2814;
    case 589u: goto L_089A2824;
    case 590u: goto L_089A282C;
    case 591u: goto L_089A283C;
    case 592u: goto L_089A2848;
    case 593u: goto L_089A2854;
    case 594u: goto L_089A286C;
    case 595u: goto L_089A2880;
    case 596u: goto L_089A288C;
    case 597u: goto L_089A2894;
    case 598u: goto L_089A289C;
    case 599u: goto L_089A28AC;
    case 600u: goto L_089A28B8;
    case 601u: goto L_089A28C0;
    case 602u: goto L_089A28D8;
    case 603u: goto L_089A28E8;
    case 604u: goto L_089A28F4;
    case 605u: goto L_089A28FC;
    case 606u: goto L_089A2914;
    case 607u: goto L_089A2928;
    case 608u: goto L_089A293C;
    case 609u: goto L_089A2954;
    case 610u: goto L_089A2960;
    case 611u: goto L_089A2970;
    case 612u: goto L_089A2978;
    case 613u: goto L_089A2984;
    case 614u: goto L_089A29A0;
    case 615u: goto L_089A29BC;
    case 616u: goto L_089A29C8;
    case 617u: goto L_089A29E0;
    case 618u: goto L_089A29F8;
    case 619u: goto L_089A2A00;
    case 620u: goto L_089A2A10;
    case 621u: goto L_089A2A28;
    case 622u: goto L_089A2A30;
    case 623u: goto L_089A2A48;
    case 624u: goto L_089A2A6C;
    case 625u: goto L_089A2A7C;
    case 626u: goto L_089A2AAC;
    case 627u: goto L_089A2AB8;
    case 628u: goto L_089A2AC8;
    case 629u: goto L_089A2AD4;
    case 630u: goto L_089A2ADC;
    case 631u: goto L_089A2AE4;
    case 632u: goto L_089A2AE8;
    case 633u: goto L_089A2AF0;
    case 634u: goto L_089A2B00;
    case 635u: goto L_089A2B18;
    case 636u: goto L_089A2B50;
    case 637u: goto L_089A2B70;
    case 638u: goto L_089A2B7C;
    case 639u: goto L_089A2B84;
    case 640u: goto L_089A2B9C;
    case 641u: goto L_089A2BA4;
    case 642u: goto L_089A2BB4;
    case 643u: goto L_089A2BBC;
    case 644u: goto L_089A2BCC;
    case 645u: goto L_089A2BD4;
    case 646u: goto L_089A2BDC;
    case 647u: goto L_089A2BE4;
    case 648u: goto L_089A2BF4;
    case 649u: goto L_089A2C00;
    case 650u: goto L_089A2C0C;
    case 651u: goto L_089A2C14;
    case 652u: goto L_089A2C1C;
    case 653u: goto L_089A2C24;
    case 654u: goto L_089A2C2C;
    case 655u: goto L_089A2C34;
    case 656u: goto L_089A2C3C;
    case 657u: goto L_089A2C44;
    case 658u: goto L_089A2C4C;
    case 659u: goto L_089A2C54;
    case 660u: goto L_089A2C5C;
    case 661u: goto L_089A2C64;
    case 662u: goto L_089A2C6C;
    case 663u: goto L_089A2C74;
    case 664u: goto L_089A2C7C;
    case 665u: goto L_089A2C84;
    case 666u: goto L_089A2C88;
    case 667u: goto L_089A2C94;
    case 668u: goto L_089A2C9C;
    case 669u: goto L_089A2CA0;
    case 670u: goto L_089A2CB4;
    case 671u: goto L_089A2CE8;
    case 672u: goto L_089A2CF0;
    case 673u: goto L_089A2CF8;
    case 674u: goto L_089A2D08;
    case 675u: goto L_089A2D10;
    case 676u: goto L_089A2D24;
    case 677u: goto L_089A2D34;
    case 678u: goto L_089A2D44;
    case 679u: goto L_089A2D50;
    case 680u: goto L_089A2D6C;
    case 681u: goto L_089A2D74;
    case 682u: goto L_089A2D7C;
    case 683u: goto L_089A2D88;
    case 684u: goto L_089A2D90;
    case 685u: goto L_089A2D98;
    case 686u: goto L_089A2D9C;
    case 687u: goto L_089A2DA4;
    case 688u: goto L_089A2DA8;
    case 689u: goto L_089A2DC8;
    case 690u: goto L_089A2DD4;
    case 691u: goto L_089A2DE0;
    case 692u: goto L_089A2DE8;
    case 693u: goto L_089A2DF0;
    case 694u: goto L_089A2DF8;
    case 695u: goto L_089A2E00;
    case 696u: goto L_089A2E08;
    case 697u: goto L_089A2E10;
    case 698u: goto L_089A2E18;
    case 699u: goto L_089A2E1C;
    case 700u: goto L_089A2E24;
    case 701u: goto L_089A2E30;
    case 702u: goto L_089A2E38;
    case 703u: goto L_089A2E40;
    case 704u: goto L_089A2E48;
    case 705u: goto L_089A2E50;
    case 706u: goto L_089A2E58;
    case 707u: goto L_089A2E60;
    case 708u: goto L_089A2E64;
    case 709u: goto L_089A2E6C;
    case 710u: goto L_089A2EA8;
    case 711u: goto L_089A2EB8;
    case 712u: goto L_089A2ED8;
    case 713u: goto L_089A2EE0;
    case 714u: goto L_089A2EF0;
    case 715u: goto L_089A2EFC;
    case 716u: goto L_089A2F0C;
    case 717u: goto L_089A2F18;
    case 718u: goto L_089A2F38;
    case 719u: goto L_089A2F44;
    case 720u: goto L_089A2F50;
    case 721u: goto L_089A2F58;
    case 722u: goto L_089A2F70;
    case 723u: goto L_089A2F94;
    case 724u: goto L_089A2FB0;
    case 725u: goto L_089A2FC0;
    case 726u: goto L_089A2FC8;
    case 727u: goto L_089A2FD4;
    case 728u: goto L_089A2FE0;
    case 729u: goto L_089A2FEC;
    case 730u: goto L_089A2FF4;
    case 731u: goto L_089A3004;
    case 732u: goto L_089A300C;
    case 733u: goto L_089A3030;
    case 734u: goto L_089A306C;
    case 735u: goto L_089A3074;
    case 736u: goto L_089A3080;
    case 737u: goto L_089A309C;
    case 738u: goto L_089A30AC;
    case 739u: goto L_089A30C4;
    case 740u: goto L_089A30D4;
    case 741u: goto L_089A30F4;
    case 742u: goto L_089A3100;
    case 743u: goto L_089A3108;
    case 744u: goto L_089A3110;
    case 745u: goto L_089A3114;
    case 746u: goto L_089A311C;
    case 747u: goto L_089A3120;
    case 748u: goto L_089A3128;
    case 749u: goto L_089A3144;
    case 750u: goto L_089A315C;
    case 751u: goto L_089A3164;
    case 752u: goto L_089A3174;
    case 753u: goto L_089A317C;
    case 754u: goto L_089A3184;
    case 755u: goto L_089A318C;
    case 756u: goto L_089A319C;
    case 757u: goto L_089A31B8;
    case 758u: goto L_089A31C4;
    case 759u: goto L_089A31CC;
    case 760u: goto L_089A31DC;
    case 761u: goto L_089A31E4;
    case 762u: goto L_089A31EC;
    case 763u: goto L_089A31F4;
    case 764u: goto L_089A31FC;
    case 765u: goto L_089A320C;
    case 766u: goto L_089A3214;
    case 767u: goto L_089A321C;
    case 768u: goto L_089A3230;
    case 769u: goto L_089A324C;
    case 770u: goto L_089A3254;
    case 771u: goto L_089A3264;
    case 772u: goto L_089A3278;
    case 773u: goto L_089A3288;
    case 774u: goto L_089A3290;
    case 775u: goto L_089A32B8;
    case 776u: goto L_089A32C8;
    case 777u: goto L_089A32D4;
    case 778u: goto L_089A32E0;
    case 779u: goto L_089A32F0;
    case 780u: goto L_089A32FC;
    case 781u: goto L_089A3304;
    case 782u: goto L_089A3310;
    case 783u: goto L_089A3318;
    case 784u: goto L_089A3328;
    case 785u: goto L_089A3344;
    case 786u: goto L_089A338C;
    case 787u: goto L_089A33A0;
    case 788u: goto L_089A33BC;
    case 789u: goto L_089A33CC;
    case 790u: goto L_089A33F8;
    case 791u: goto L_089A342C;
    case 792u: goto L_089A3440;
    case 793u: goto L_089A3478;
    case 794u: goto L_089A3480;
    case 795u: goto L_089A3510;
    case 796u: goto L_089A3518;
    case 797u: goto L_089A3520;
    case 798u: goto L_089A3528;
    case 799u: goto L_089A3534;
    case 800u: goto L_089A353C;
    case 801u: goto L_089A3544;
    case 802u: goto L_089A354C;
    case 803u: goto L_089A3554;
    case 804u: goto L_089A355C;
    case 805u: goto L_089A3560;
    case 806u: goto L_089A3568;
    case 807u: goto L_089A3574;
    case 808u: goto L_089A3588;
    case 809u: goto L_089A359C;
    case 810u: goto L_089A35A4;
    case 811u: goto L_089A35AC;
    case 812u: goto L_089A35C8;
    case 813u: goto L_089A35D0;
    case 814u: goto L_089A3640;
    case 815u: goto L_089A365C;
    case 816u: goto L_089A3674;
    case 817u: goto L_089A3688;
    case 818u: goto L_089A36B8;
    case 819u: goto L_089A36C4;
    case 820u: goto L_089A36F4;
    case 821u: goto L_089A370C;
    case 822u: goto L_089A3714;
    case 823u: goto L_089A371C;
    case 824u: goto L_089A3724;
    case 825u: goto L_089A3734;
    case 826u: goto L_089A3744;
    case 827u: goto L_089A3774;
    case 828u: goto L_089A377C;
    case 829u: goto L_089A37A8;
    case 830u: goto L_089A37BC;
    case 831u: goto L_089A37C4;
    case 832u: goto L_089A37DC;
    case 833u: goto L_089A37EC;
    case 834u: goto L_089A37F8;
    case 835u: goto L_089A3800;
    case 836u: goto L_089A3804;
    case 837u: goto L_089A380C;
    case 838u: goto L_089A381C;
    case 839u: goto L_089A3824;
    case 840u: goto L_089A382C;
    case 841u: goto L_089A3830;
    case 842u: goto L_089A3838;
    case 843u: goto L_089A3870;
    case 844u: goto L_089A3878;
    case 845u: goto L_089A3888;
    case 846u: goto L_089A38A0;
    case 847u: goto L_089A38A8;
    case 848u: goto L_089A38B0;
    case 849u: goto L_089A38BC;
    case 850u: goto L_089A38D0;
    case 851u: goto L_089A38F4;
    case 852u: goto L_089A3904;
    case 853u: goto L_089A390C;
    case 854u: goto L_089A3950;
    case 855u: goto L_089A3970;
    case 856u: goto L_089A3980;
    case 857u: goto L_089A3994;
    case 858u: goto L_089A39AC;
    case 859u: goto L_089A39B4;
    case 860u: goto L_089A39C8;
    case 861u: goto L_089A39D4;
    case 862u: goto L_089A3A08;
    case 863u: goto L_089A3A28;
    case 864u: goto L_089A3A30;
    case 865u: goto L_089A3A40;
    case 866u: goto L_089A3A5C;
    case 867u: goto L_089A3A64;
    case 868u: goto L_089A3A6C;
    case 869u: goto L_089A3AB0;
    case 870u: goto L_089A3AC4;
    case 871u: goto L_089A3ADC;
    case 872u: goto L_089A3AF0;
    case 873u: goto L_089A3AFC;
    case 874u: goto L_089A3B18;
    case 875u: goto L_089A3B24;
    case 876u: goto L_089A3B30;
    case 877u: goto L_089A3B4C;
    case 878u: goto L_089A3B58;
    case 879u: goto L_089A3B74;
    case 880u: goto L_089A3B84;
    case 881u: goto L_089A3B94;
    case 882u: goto L_089A3BC8;
    case 883u: goto L_089A3BD0;
    case 884u: goto L_089A3BD8;
    case 885u: goto L_089A3BE4;
    case 886u: goto L_089A3BF4;
    case 887u: goto L_089A3C00;
    case 888u: goto L_089A3C18;
    case 889u: goto L_089A3C34;
    case 890u: goto L_089A3C4C;
    case 891u: goto L_089A3C5C;
    case 892u: goto L_089A3C68;
    case 893u: goto L_089A3C70;
    case 894u: goto L_089A3C78;
    case 895u: goto L_089A3C84;
    case 896u: goto L_089A3C9C;
    case 897u: goto L_089A3CAC;
    case 898u: goto L_089A3CB8;
    case 899u: goto L_089A3CC0;
    case 900u: goto L_089A3CC8;
    case 901u: goto L_089A3CD0;
    case 902u: goto L_089A3CE4;
    case 903u: goto L_089A3CF4;
    case 904u: goto L_089A3D14;
    case 905u: goto L_089A3D1C;
    case 906u: goto L_089A3D34;
    case 907u: goto L_089A3D38;
    case 908u: goto L_089A3D48;
    case 909u: goto L_089A3D54;
    case 910u: goto L_089A3D5C;
    case 911u: goto L_089A3D64;
    case 912u: goto L_089A3D68;
    case 913u: goto L_089A3D70;
    case 914u: goto L_089A3D74;
    case 915u: goto L_089A3D98;
    case 916u: goto L_089A3DD8;
    case 917u: goto L_089A3DE4;
    case 918u: goto L_089A3DF0;
    case 919u: goto L_089A3DF8;
    case 920u: goto L_089A3E00;
    case 921u: goto L_089A3E0C;
    case 922u: goto L_089A3E14;
    case 923u: goto L_089A3E48;
    case 924u: goto L_089A3E5C;
    case 925u: goto L_089A3E68;
    case 926u: goto L_089A3E70;
    case 927u: goto L_089A3E78;
    case 928u: goto L_089A3E98;
    case 929u: goto L_089A3EB0;
    case 930u: goto L_089A3EB8;
    case 931u: goto L_089A3ED0;
    case 932u: goto L_089A3ED8;
    case 933u: goto L_089A3EE4;
    case 934u: goto L_089A3EF0;
    case 935u: goto L_089A3F08;
    case 936u: goto L_089A3F54;
    case 937u: goto L_089A3F64;
    case 938u: goto L_089A3F78;
    case 939u: goto L_089A3F84;
    case 940u: goto L_089A3FAC;
    case 941u: goto L_089A3FB8;
    case 942u: goto L_089A3FC4;
    case 943u: goto L_089A3FDC;
    case 944u: goto L_089A3FE4;
    case 945u: goto L_089A3FEC;
    case 946u: goto L_089A3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A0000:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089A0010;
L_089A0010:
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
        goto L_089A0030;
    }
    goto L_089A0030;
L_089A0030:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_089A005C;
      }
      goto L_089A004C;
    }
L_089A004C:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    goto L_089A005C;
L_089A005C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1764), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0080:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A00A0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089A37EC;
L_089A00A0:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(784));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-513));
      if (branch_taken) {
          goto L_089A00CC;
      }
      goto L_089A00AC;
    }
L_089A00AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A00CC;
      }
      goto L_089A00BC;
    }
L_089A00BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_089A00CC;
L_089A00CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0190;
      }
      goto L_089A00D8;
    }
L_089A00D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089A0114;
      }
      goto L_089A00F8;
    }
L_089A00F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x089A010Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 38u, 0x08AA8314u>(ctx, &aot_mem) && ctx.pc == 0x089A010Cu) goto L_089A010C;
    return;
L_089A010C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0124;
      }
      goto L_089A0114;
    }
L_089A0114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089A0124;
L_089A0124:
    ctx.gpr[31] = (0x089A012Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A37EC;
L_089A012C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0140;
      }
      goto L_089A0134;
    }
L_089A0134:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A0140u);
    ctx.gpr[5] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0140u) goto L_089A0140;
    return;
L_089A0140:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A014Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 72u, 0x08AA86F4u>(ctx, &aot_mem) && ctx.pc == 0x089A014Cu) goto L_089A014C;
    return;
L_089A014C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0188;
      }
      goto L_089A0174;
    }
L_089A0174:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089A0188u);
    ctx.gpr[7] = (0u | 1u);
    goto L_089A0598;
L_089A0188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A01F4;
      }
      goto L_089A0190;
    }
L_089A0190:
    ctx.gpr[31] = (0x089A0198u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A37EC;
L_089A0198:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A01CC;
      }
      goto L_089A01A0;
    }
L_089A01A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1764)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3192)));
    ctx.gpr[31] = (0x089A01B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 137u, 0x08AA8E98u>(ctx, &aot_mem) && ctx.pc == 0x089A01B0u) goto L_089A01B0;
    return;
L_089A01B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A01F4;
      }
      goto L_089A01CC;
    }
L_089A01CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1764)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089A01DCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 137u, 0x08AA8E98u>(ctx, &aot_mem) && ctx.pc == 0x089A01DCu) goto L_089A01DC;
    return;
L_089A01DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089A01F4;
L_089A01F4:
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
L_089A0210:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A026C;
      }
      goto L_089A0230;
    }
L_089A0230:
    ctx.gpr[31] = (0x089A0238u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(784));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 81u, 0x08AA8838u>(ctx, &aot_mem) && ctx.pc == 0x089A0238u) goto L_089A0238;
    return;
L_089A0238:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0258;
      }
      goto L_089A0240;
    }
L_089A0240:
    ctx.gpr[31] = (0x089A0248u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A37EC;
L_089A0248:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A028C;
      }
      goto L_089A0250;
    }
L_089A0250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0294;
      }
      goto L_089A0258;
    }
L_089A0258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A0294;
      }
      goto L_089A026C;
    }
L_089A026C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A0294;
      }
      goto L_089A028C;
    }
L_089A028C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A0294;
L_089A0294:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A02A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1764), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1780), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1760), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1328), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A02F8;
      }
      goto L_089A02E8;
    }
L_089A02E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_089A02F8;
L_089A02F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089A0318u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0318u) goto L_089A0318;
    return;
L_089A0318:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
      if (branch_taken) {
          goto L_089A033C;
      }
      goto L_089A0330;
    }
L_089A0330:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A0348;
      }
      goto L_089A033C;
    }
L_089A033C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_089A0348;
L_089A0348:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0358:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1760)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1760));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1328));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089A03A4;
      }
      goto L_089A039C;
    }
L_089A039C:
    ctx.gpr[31] = (0x089A03A4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A03A4u) goto L_089A03A4;
    return;
L_089A03A4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1760), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A03B4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A03B4u) goto L_089A03B4;
    return;
L_089A03B4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089A03C8;
      }
      goto L_089A03C0;
    }
L_089A03C0:
    ctx.gpr[31] = (0x089A03C8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A03C8u) goto L_089A03C8;
    return;
L_089A03C8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1328), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A03D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A03D8u) goto L_089A03D8;
    return;
L_089A03D8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1780), 0u);
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
L_089A03F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
      if (branch_taken) {
          goto L_089A043C;
      }
      goto L_089A0418;
    }
L_089A0418:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), 0u);
    goto L_089A043C;
L_089A043C:
    ctx.gpr[31] = (0x089A0444u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A37EC;
L_089A0444:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0454;
      }
      goto L_089A044C;
    }
L_089A044C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A0454;
L_089A0454:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0464:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 57u);
      if (branch_taken) {
          goto L_089A04A4;
      }
      goto L_089A0474;
    }
L_089A0474:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A04A4;
      }
      goto L_089A047C;
    }
L_089A047C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A04A4;
      }
      goto L_089A048C;
    }
L_089A048C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 45u);
      if (branch_taken) {
          goto L_089A04A4;
      }
      goto L_089A049C;
    }
L_089A049C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A04AC;
      }
      goto L_089A04A4;
    }
L_089A04A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A04B0;
      }
      goto L_089A04AC;
    }
L_089A04AC:
    ctx.gpr[2] = (0u | 1u);
    goto L_089A04B0;
L_089A04B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A04B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A04D0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(784));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 60u, 0x08AA85E8u>(ctx, &aot_mem) && ctx.pc == 0x089A04D0u) goto L_089A04D0;
    return;
L_089A04D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A04E8;
      }
      goto L_089A04D8;
    }
L_089A04D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089A04E8;
L_089A04E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A04F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089A052C;
      }
      goto L_089A0524;
    }
L_089A0524:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0588;
      }
      goto L_089A052C;
    }
L_089A052C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1764), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A0570u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0464;
L_089A0570:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0588;
      }
      goto L_089A0578;
    }
L_089A0578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_089A0588;
L_089A0588:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0598:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089A05D8;
      }
      goto L_089A05D0;
    }
L_089A05D0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A064C;
      }
      goto L_089A05D8;
    }
L_089A05D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1760), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A05FCu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A05FCu) goto L_089A05FC;
    return;
L_089A05FC:
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9200u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (ctx.gpr[17] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1764), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A0634u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0464;
L_089A0634:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A064C;
      }
      goto L_089A063C;
    }
L_089A063C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_089A064C;
L_089A064C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_089A0708;
      }
      goto L_089A0680;
    }
L_089A0680:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A06A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0464;
L_089A06A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A06C0;
      }
      goto L_089A06B0;
    }
L_089A06B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    goto L_089A06C0;
L_089A06C0:
    ctx.gpr[31] = (0x089A06C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A37EC;
L_089A06C8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_089A06E4;
      }
      goto L_089A06D8;
    }
L_089A06D8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A06EC;
      }
      goto L_089A06E4;
    }
L_089A06E4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[5]);
    goto L_089A06EC;
L_089A06EC:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089A0700;
      }
      goto L_089A06F8;
    }
L_089A06F8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0708;
      }
      goto L_089A0700;
    }
L_089A0700:
    ctx.gpr[31] = (0x089A0708u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 790u, 0x0899FF10u>(ctx, &aot_mem) && ctx.pc == 0x089A0708u) goto L_089A0708;
    return;
L_089A0708:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0718:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A0728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0728u) goto L_089A0728;
    return;
L_089A0728:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0734:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1924)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089A078C;
      }
      goto L_089A0774;
    }
L_089A0774:
    ctx.gpr[31] = (0x089A077Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089A077Cu) goto L_089A077C;
    return;
L_089A077C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A07B4;
      }
      goto L_089A0784;
    }
L_089A0784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0794;
      }
      goto L_089A078C;
    }
L_089A078C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0AE4;
      }
      goto L_089A0794;
    }
L_089A0794:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0AE4;
      }
      goto L_089A079C;
    }
L_089A079C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_089A0AE4;
      }
      goto L_089A07AC;
    }
L_089A07AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0AE4;
      }
      goto L_089A07B4;
    }
L_089A07B4:
    ctx.gpr[31] = (0x089A07BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0660;
L_089A07BC:
    ctx.gpr[31] = (0x089A07C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A03F8;
L_089A07C4:
    ctx.gpr[31] = (0x089A07CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x089A07CCu) goto L_089A07CC;
    return;
L_089A07CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0804;
      }
      goto L_089A07DC;
    }
L_089A07DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A07FC;
      }
      goto L_089A07E8;
    }
L_089A07E8:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A07FC;
    }
    goto L_089A07F0;
L_089A07F0:
    ctx.gpr[31] = (0x089A07F8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A07F8u) goto L_089A07F8;
    return;
L_089A07F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A07FC;
L_089A07FC:
    ctx.gpr[31] = (0x089A0804u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1C4C;
L_089A0804:
    ctx.gpr[4] = (0u | 42u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A089C;
      }
      goto L_089A0818;
    }
L_089A0818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A0824u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A0824u) goto L_089A0824;
    return;
L_089A0824:
    ctx.gpr[4] = (16640u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A085C;
      }
      goto L_089A0834;
    }
L_089A0834:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089A0844u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x089A0844u) goto L_089A0844;
    return;
L_089A0844:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A0874;
      }
      goto L_089A085C;
    }
L_089A085C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A0870u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089A0870u) goto L_089A0870;
    return;
L_089A0870:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_089A0874;
L_089A0874:
    ctx.gpr[4] = (0u | 121u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A08D4;
      }
      goto L_089A0880;
    }
L_089A0880:
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089A0894u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x089A0894u) goto L_089A0894;
    return;
L_089A0894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A08D4;
      }
      goto L_089A089C;
    }
L_089A089C:
    ctx.gpr[31] = (0x089A08A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A37EC;
L_089A08A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A08D4;
      }
      goto L_089A08AC;
    }
L_089A08AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A08B8u);
    ctx.gpr[5] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A08B8u) goto L_089A08B8;
    return;
L_089A08B8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A08D4;
      }
      goto L_089A08C4;
    }
L_089A08C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A08D0u);
    ctx.gpr[5] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A08D0u) goto L_089A08D0;
    return;
L_089A08D0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_089A08D4;
L_089A08D4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A08F4;
      }
      goto L_089A08E0;
    }
L_089A08E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] | 16u);
      if (branch_taken) {
          goto L_089A0AE0;
      }
      goto L_089A08F4;
    }
L_089A08F4:
    ctx.gpr[31] = (0x089A08FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A37EC;
L_089A08FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] | 16u);
      if (branch_taken) {
          goto L_089A0A18;
      }
      goto L_089A0910;
    }
L_089A0910:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
        goto L_089A0A1C;
    }
    goto L_089A0918;
L_089A0918:
    ctx.gpr[9] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[9] = (20224u << 16u);
    ctx.gpr[8] = (0u | 130u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089A0944;
      }
      goto L_089A0938;
    }
L_089A0938:
    ctx.gpr[8] = (0u | 131u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089A09B4;
      }
      goto L_089A0944;
    }
L_089A0944:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089A095C;
      }
      goto L_089A0950;
    }
L_089A0950:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_089A095C;
L_089A095C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
        goto L_089A099C;
    }
    goto L_089A0990;
L_089A0990:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A09AC;
      }
      goto L_089A099C;
    }
L_089A099C:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A09AC;
L_089A09AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A0AE0;
      }
      goto L_089A09B4;
    }
L_089A09B4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089A09CC;
      }
      goto L_089A09C0;
    }
L_089A09C0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_089A09CC;
L_089A09CC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (17402u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[14];
        goto L_089A0A00;
    }
    goto L_089A09F4;
L_089A09F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A0A10;
      }
      goto L_089A0A00;
    }
L_089A0A00:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A0A10;
L_089A0A10:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A0AE0;
      }
      goto L_089A0A18;
    }
L_089A0A18:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    goto L_089A0A1C;
L_089A0A1C:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[8] = (0u | 1000u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0AD0;
      }
      goto L_089A0A3C;
    }
L_089A0A3C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (20224u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_089A0A60;
      }
      goto L_089A0A54;
    }
L_089A0A54:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089A0A60;
L_089A0A60:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
      if (branch_taken) {
          goto L_089A0A98;
      }
      goto L_089A0A8C;
    }
L_089A0A8C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_089A0A98;
L_089A0A98:
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_089A0AB8;
    }
    goto L_089A0AAC;
L_089A0AAC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A0AC8;
      }
      goto L_089A0AB8;
    }
L_089A0AB8:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089A0AC8;
L_089A0AC8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A0AE0;
      }
      goto L_089A0AD0;
    }
L_089A0AD0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
    goto L_089A0AE0;
L_089A0AE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[6]);
    goto L_089A0AE4;
L_089A0AE4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0B0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A0B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 347u, 0x089ADDC8u>(ctx, &aot_mem) && ctx.pc == 0x089A0B1Cu) goto L_089A0B1C;
    return;
L_089A0B1C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0B28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16325u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A0C24;
      }
      goto L_089A0B68;
    }
L_089A0B68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089A0B98u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x089A0B98u) goto L_089A0B98;
    return;
L_089A0B98:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0C1C;
      }
      goto L_089A0BA4;
    }
L_089A0BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0C1C;
      }
      goto L_089A0BB4;
    }
L_089A0BB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16261u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15897u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089A0C10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x089A0C10u) goto L_089A0C10;
    return;
L_089A0C10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0C1C;
      }
      goto L_089A0C18;
    }
L_089A0C18:
    ctx.gpr[17] = (0u | 1u);
    goto L_089A0C1C;
L_089A0C1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_089A0C28;
      }
      goto L_089A0C24;
    }
L_089A0C24:
    ctx.gpr[2] = (0u | 0u);
    goto L_089A0C28;
L_089A0C28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0C3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 2048u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0CDC;
      }
      goto L_089A0C5C;
    }
L_089A0C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089A0C7Cu);
    ctx.gpr[5] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 476u, 0x08A8AE48u>(ctx, &aot_mem) && ctx.pc == 0x089A0C7Cu) goto L_089A0C7C;
    return;
L_089A0C7C:
    ctx.gpr[4] = (0u | 22u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A0C9Cu);
    ctx.gpr[6] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089A0C9Cu) goto L_089A0C9C;
    return;
L_089A0C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0CC4;
      }
      goto L_089A0CAC;
    }
L_089A0CAC:
    ctx.gpr[31] = (0x089A0CB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 97u, 0x088D48F8u>(ctx, &aot_mem) && ctx.pc == 0x089A0CB4u) goto L_089A0CB4;
    return;
L_089A0CB4:
    ctx.gpr[31] = (0x089A0CBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 311u, 0x088D55F0u>(ctx, &aot_mem) && ctx.pc == 0x089A0CBCu) goto L_089A0CBC;
    return;
L_089A0CBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0CDC;
      }
      goto L_089A0CC4;
    }
L_089A0CC4:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0CDC;
      }
      goto L_089A0CD0;
    }
L_089A0CD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A0CDCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 230u, 0x088D514Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0CDCu) goto L_089A0CDC;
    return;
L_089A0CDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0CEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (16513u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
      if (branch_taken) {
          goto L_089A0E90;
      }
      goto L_089A0D3C;
    }
L_089A0D3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0E90;
      }
      goto L_089A0D50;
    }
L_089A0D50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 55u);
      if (branch_taken) {
          goto L_089A0E90;
      }
      goto L_089A0D60;
    }
L_089A0D60:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A0E90;
      }
      goto L_089A0D68;
    }
L_089A0D68:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089A0DA4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x089A0DA4u) goto L_089A0DA4;
    return;
L_089A0DA4:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_089A0E54;
    }
    goto L_089A0DAC;
L_089A0DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0E90;
      }
      goto L_089A0DBC;
    }
L_089A0DBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28884)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A0E90;
      }
      goto L_089A0DD8;
    }
L_089A0DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A0DE4u);
    ctx.gpr[5] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A0DE4u) goto L_089A0DE4;
    return;
L_089A0DE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0E24;
      }
      goto L_089A0DF0;
    }
L_089A0DF0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089A0DFCu);
    ctx.gpr[5] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 476u, 0x08A8AE48u>(ctx, &aot_mem) && ctx.pc == 0x089A0DFCu) goto L_089A0DFC;
    return;
L_089A0DFC:
    ctx.gpr[4] = (0u | 86u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A0E1Cu);
    ctx.gpr[6] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089A0E1Cu) goto L_089A0E1C;
    return;
L_089A0E1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0E4C;
      }
      goto L_089A0E24;
    }
L_089A0E24:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A0E4C;
      }
      goto L_089A0E40;
    }
L_089A0E40:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28884)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A0E4C;
L_089A0E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0E90;
      }
      goto L_089A0E54;
    }
L_089A0E54:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (16294u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A0E88;
      }
      goto L_089A0E78;
    }
L_089A0E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0E90;
      }
      goto L_089A0E88;
    }
L_089A0E88:
    ctx.gpr[31] = (0x089A0E90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0EA4;
L_089A0E90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A0EA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_089A0EFC;
      }
      goto L_089A0ED4;
    }
L_089A0ED4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A0EFC;
      }
      goto L_089A0EDC;
    }
L_089A0EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A0EE8u);
    ctx.gpr[5] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A0EE8u) goto L_089A0EE8;
    return;
L_089A0EE8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
        goto L_089A0F04;
    }
    goto L_089A0EF4;
L_089A0EF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0F14;
      }
      goto L_089A0EFC;
    }
L_089A0EFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A10D0;
      }
      goto L_089A0F04;
    }
L_089A0F04:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A0F58;
      }
      goto L_089A0F14;
    }
L_089A0F14:
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089A0F28u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 314u, 0x08865714u>(ctx, &aot_mem) && ctx.pc == 0x089A0F28u) goto L_089A0F28;
    return;
L_089A0F28:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28884)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A0F60;
      }
      goto L_089A0F50;
    }
L_089A0F50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A0FC4;
      }
      goto L_089A0F58;
    }
L_089A0F58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A10D0;
      }
      goto L_089A0F60;
    }
L_089A0F60:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089A0F6Cu);
    ctx.gpr[5] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 476u, 0x08A8AE48u>(ctx, &aot_mem) && ctx.pc == 0x089A0F6Cu) goto L_089A0F6C;
    return;
L_089A0F6C:
    ctx.gpr[4] = (0u | 84u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A0F84u);
    ctx.gpr[6] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0F84u) goto L_089A0F84;
    return;
L_089A0F84:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A0F90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A37EC;
L_089A0F90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A109C;
      }
      goto L_089A0F98;
    }
L_089A0F98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A0FA4u);
    ctx.gpr[5] = (0u | 106u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0FA4u) goto L_089A0FA4;
    return;
L_089A0FA4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 35u);
    ctx.gpr[31] = (0x089A0FBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089A0FBCu) goto L_089A0FBC;
    return;
L_089A0FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A109C;
      }
      goto L_089A0FC4;
    }
L_089A0FC4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7827));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u | 6u);
      if (branch_taken) {
          goto L_089A0FFC;
      }
      goto L_089A0FDC;
    }
L_089A0FDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A1074;
      }
      goto L_089A0FE8;
    }
L_089A0FE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1074;
      }
      goto L_089A0FFC;
    }
L_089A0FFC:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A100Cu);
    ctx.gpr[6] = (0u | 141u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089A100Cu) goto L_089A100C;
    return;
L_089A100C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089A1024u);
    ctx.gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1024u) goto L_089A1024;
    return;
L_089A1024:
    ctx.gpr[31] = (0x089A102Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A37EC;
L_089A102C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1040;
      }
      goto L_089A1034;
    }
L_089A1034:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A1040u);
    ctx.gpr[5] = (0u | 106u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1040u) goto L_089A1040;
    return;
L_089A1040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A109C;
      }
      goto L_089A104C;
    }
L_089A104C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A109C;
      }
      goto L_089A1060;
    }
L_089A1060:
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A109C;
      }
      goto L_089A1074;
    }
L_089A1074:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A1084u);
    ctx.gpr[6] = (0u | 141u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1084u) goto L_089A1084;
    return;
L_089A1084:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A109Cu);
    ctx.gpr[6] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089A109Cu) goto L_089A109C;
    return;
L_089A109C:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A10B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12336));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089A10B0u) goto L_089A10B0;
    return;
L_089A10B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A10D0;
L_089A10D0:
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
L_089A10F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_089A11D4;
      }
      goto L_089A1120;
    }
L_089A1120:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089A113C;
      }
      goto L_089A1130;
    }
L_089A1130:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089A113C;
L_089A113C:
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089A115Cu);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A115Cu) goto L_089A115C;
    return;
L_089A115C:
    ctx.gpr[6] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A1170u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089A1170u) goto L_089A1170;
    return;
L_089A1170:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[21]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A11CC;
      }
      goto L_089A11A8;
    }
L_089A11A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A11C4;
      }
      goto L_089A11B8;
    }
L_089A11B8:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A11CC;
      }
      goto L_089A11C4;
    }
L_089A11C4:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), ctx.gpr[4]);
    goto L_089A11CC;
L_089A11CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A120C;
      }
      goto L_089A11D4;
    }
L_089A11D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A120C;
      }
      goto L_089A11E8;
    }
L_089A11E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1204;
      }
      goto L_089A11F8;
    }
L_089A11F8:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A120C;
      }
      goto L_089A1204;
    }
L_089A1204:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1788), ctx.gpr[4]);
    goto L_089A120C;
L_089A120C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1230:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_089A1308;
      }
      goto L_089A1268;
    }
L_089A1268:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_089A1284;
      }
      goto L_089A1278;
    }
L_089A1278:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089A1284;
L_089A1284:
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089A12A4u);
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A12A4u) goto L_089A12A4;
    return;
L_089A12A4:
    ctx.gpr[6] = (ctx.gpr[22] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A12B8u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089A12B8u) goto L_089A12B8;
    return;
L_089A12B8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1300;
      }
      goto L_089A12F4;
    }
L_089A12F4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1792), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    goto L_089A1300;
L_089A1300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1384;
      }
      goto L_089A1308;
    }
L_089A1308:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1384;
      }
      goto L_089A131C;
    }
L_089A131C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1384;
      }
      goto L_089A132C;
    }
L_089A132C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A134C;
      }
      goto L_089A1340;
    }
L_089A1340:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089A134C;
L_089A134C:
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_089A1374;
    }
    goto L_089A1368;
L_089A1368:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A1384;
      }
      goto L_089A1374;
    }
L_089A1374:
    ctx.gpr[16] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    goto L_089A1384;
L_089A1384:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1792), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A13B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] << 24u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A13F0u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
    goto L_089A37EC;
L_089A13F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A146C;
      }
      goto L_089A13F8;
    }
L_089A13F8:
    ctx.gpr[31] = (0x089A1400u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089A1400u) goto L_089A1400;
    return;
L_089A1400:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1450;
      }
      goto L_089A1408;
    }
L_089A1408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1440;
      }
      goto L_089A1418;
    }
L_089A1418:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(1172));
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(1176));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[18] = (2228u << 16u);
      if (branch_taken) {
          goto L_089A1474;
      }
      goto L_089A1438;
    }
L_089A1438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A14D0;
      }
      goto L_089A1440;
    }
L_089A1440:
    ctx.gpr[31] = (0x089A1448u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x089A1448u) goto L_089A1448;
    return;
L_089A1448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A1600;
      }
      goto L_089A1450;
    }
L_089A1450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (8u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A1600;
      }
      goto L_089A146C;
    }
L_089A146C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A1600;
      }
      goto L_089A1474;
    }
L_089A1474:
    ctx.gpr[31] = (0x089A147Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A147Cu) goto L_089A147C;
    return;
L_089A147C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28732)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28736)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A1494u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089A1494u) goto L_089A1494;
    return;
L_089A1494:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28724)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28728)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] << 24u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
    goto L_089A14D0;
L_089A14D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26612)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089A14FCu);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 83u, 0x08978980u>(ctx, &aot_mem) && ctx.pc == 0x089A14FCu) goto L_089A14FC;
    return;
L_089A14FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089A1590;
      }
      goto L_089A1508;
    }
L_089A1508:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_089A1530;
    }
    goto L_089A1520;
L_089A1520:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A1530;
      }
      goto L_089A1530;
    }
L_089A1530:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A1558;
      }
      goto L_089A1540;
    }
L_089A1540:
    ctx.gpr[31] = (0x089A1548u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1F80;
L_089A1548:
    ctx.gpr[31] = (0x089A1550u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x089A1550u) goto L_089A1550;
    return;
L_089A1550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A1600;
      }
      goto L_089A1558;
    }
L_089A1558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26612)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1168))))));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089A1584u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 83u, 0x08978980u>(ctx, &aot_mem) && ctx.pc == 0x089A1584u) goto L_089A1584;
    return;
L_089A1584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1508;
      }
      goto L_089A1590;
    }
L_089A1590:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1168), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A15D8;
      }
      goto L_089A15A8;
    }
L_089A15A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A15D0;
      }
      goto L_089A15B4;
    }
L_089A15B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A15D0;
    }
    goto L_089A15C0;
L_089A15C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089A15CCu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A15CCu) goto L_089A15CC;
    return;
L_089A15CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A15D0;
L_089A15D0:
    ctx.gpr[31] = (0x089A15D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1C4C;
L_089A15D8:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A15ECu);
    ctx.gpr[5] = (0u | 2u);
    goto L_089A246C;
L_089A15EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_089A1600;
L_089A1600:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A165Cu);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089A165Cu) goto L_089A165C;
    return;
L_089A165C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A167C;
      }
      goto L_089A1664;
    }
L_089A1664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[18] = (0u | 6u);
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
        goto L_089A1684;
    }
    goto L_089A1674;
L_089A1674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A16B0;
      }
      goto L_089A167C;
    }
L_089A167C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1754;
      }
      goto L_089A1684;
    }
L_089A1684:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A16B0;
      }
      goto L_089A1698;
    }
L_089A1698:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A16E0;
      }
      goto L_089A16B0;
    }
L_089A16B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[17] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A16D8;
      }
      goto L_089A16C0;
    }
L_089A16C0:
    ctx.gpr[31] = (0x089A16C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 265u, 0x0899DB50u>(ctx, &aot_mem) && ctx.pc == 0x089A16C8u) goto L_089A16C8;
    return;
L_089A16C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A16E8;
      }
      goto L_089A16D0;
    }
L_089A16D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A16F0;
      }
      goto L_089A16D8;
    }
L_089A16D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1754;
      }
      goto L_089A16E0;
    }
L_089A16E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1754;
      }
      goto L_089A16E8;
    }
L_089A16E8:
    ctx.gpr[31] = (0x089A16F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 311u, 0x088D55F0u>(ctx, &aot_mem) && ctx.pc == 0x089A16F0u) goto L_089A16F0;
    return;
L_089A16F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089A1704;
      }
      goto L_089A16FC;
    }
L_089A16FC:
    ctx.gpr[31] = (0x089A1704u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x089A1704u) goto L_089A1704;
    return;
L_089A1704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
        goto L_089A1744;
    }
    goto L_089A1710;
L_089A1710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1738;
      }
      goto L_089A171C;
    }
L_089A171C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A1738;
    }
    goto L_089A1728;
L_089A1728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089A1734u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A1734u) goto L_089A1734;
    return;
L_089A1734:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A1738;
L_089A1738:
    ctx.gpr[31] = (0x089A1740u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1C4C;
L_089A1740:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
    goto L_089A1744;
L_089A1744:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089A1754;
L_089A1754:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_089A1774:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A17A0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089A17A0u) goto L_089A17A0;
    return;
L_089A17A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A17C0;
      }
      goto L_089A17A8;
    }
L_089A17A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[18] = (0u | 7u);
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1328)));
        goto L_089A17C8;
    }
    goto L_089A17B8;
L_089A17B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A17D0;
      }
      goto L_089A17C0;
    }
L_089A17C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1864;
      }
      goto L_089A17C8;
    }
L_089A17C8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089A17F4;
      }
      goto L_089A17D0;
    }
L_089A17D0:
    ctx.gpr[19] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089A17EC;
      }
      goto L_089A17DC;
    }
L_089A17DC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A17FC;
      }
      goto L_089A17E4;
    }
L_089A17E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1864;
      }
      goto L_089A17EC;
    }
L_089A17EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1864;
      }
      goto L_089A17F4;
    }
L_089A17F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1864;
      }
      goto L_089A17FC;
    }
L_089A17FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089A1810;
      }
      goto L_089A1804;
    }
L_089A1804:
    ctx.gpr[31] = (0x089A180Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x089A180Cu) goto L_089A180C;
    return;
L_089A180C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    goto L_089A1810;
L_089A1810:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089A1840;
      }
      goto L_089A1818;
    }
L_089A1818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1838;
      }
      goto L_089A1824;
    }
L_089A1824:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A1838;
    }
    goto L_089A182C;
L_089A182C:
    ctx.gpr[31] = (0x089A1834u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A1834u) goto L_089A1834;
    return;
L_089A1834:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A1838;
L_089A1838:
    ctx.gpr[31] = (0x089A1840u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089A1C4C;
L_089A1840:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1328), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x089A1858u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A1858u) goto L_089A1858;
    return;
L_089A1858:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A1864u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089A246C;
L_089A1864:
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
L_089A1884:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A1898u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x089A1898u) goto L_089A1898;
    return;
L_089A1898:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1360), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A18AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(840)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089A1930;
      }
      goto L_089A18E8;
    }
L_089A18E8:
    ctx.gpr[31] = (0x089A18F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089A18F0u) goto L_089A18F0;
    return;
L_089A18F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1928;
      }
      goto L_089A18F8;
    }
L_089A18F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1928;
      }
      goto L_089A1908;
    }
L_089A1908:
    ctx.gpr[6] = (16457u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_089A1938;
      }
      goto L_089A1920;
    }
L_089A1920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
      if (branch_taken) {
          goto L_089A19A0;
      }
      goto L_089A1928;
    }
L_089A1928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1A3C;
      }
      goto L_089A1930;
    }
L_089A1930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1A3C;
      }
      goto L_089A1938;
    }
L_089A1938:
    ctx.gpr[31] = (0x089A1940u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x089A1940u) goto L_089A1940;
    return;
L_089A1940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A1978;
      }
      goto L_089A1950;
    }
L_089A1950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1970;
      }
      goto L_089A195C;
    }
L_089A195C:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A1970;
    }
    goto L_089A1964;
L_089A1964:
    ctx.gpr[31] = (0x089A196Cu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A196Cu) goto L_089A196C;
    return;
L_089A196C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A1970;
L_089A1970:
    ctx.gpr[31] = (0x089A1978u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089A1C4C;
L_089A1978:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A198Cu);
    ctx.gpr[5] = (0u | 4u);
    goto L_089A246C;
L_089A198C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    goto L_089A19A0;
L_089A19A0:
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1396), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089A19DCu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089A19DCu) goto L_089A19DC;
    return;
L_089A19DC:
    ctx.gpr[31] = (0x089A19E4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A19E4u) goto L_089A19E4;
    return;
L_089A19E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089A1A18;
      }
      goto L_089A1A00;
    }
L_089A1A00:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A1A3C;
      }
      goto L_089A1A18;
    }
L_089A1A18:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089A1A3C;
      }
      goto L_089A1A2C;
    }
L_089A1A2C:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A1A3C;
L_089A1A3C:
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
L_089A1A5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A1A8Cu);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089A1A8Cu) goto L_089A1A8C;
    return;
L_089A1A8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1AB4;
      }
      goto L_089A1A94;
    }
L_089A1A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1AB4;
      }
      goto L_089A1AA4;
    }
L_089A1AA4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1ABC;
      }
      goto L_089A1AAC;
    }
L_089A1AAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1BE8;
      }
      goto L_089A1AB4;
    }
L_089A1AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1BE8;
      }
      goto L_089A1ABC;
    }
L_089A1ABC:
    ctx.gpr[31] = (0x089A1AC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x089A1AC4u) goto L_089A1AC4;
    return;
L_089A1AC4:
    ctx.gpr[6] = (16457u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.gpr[5] = (0u | 11u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089A1B0C;
      }
      goto L_089A1AE4;
    }
L_089A1AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1B04;
      }
      goto L_089A1AF0;
    }
L_089A1AF0:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A1B04;
    }
    goto L_089A1AF8;
L_089A1AF8:
    ctx.gpr[31] = (0x089A1B00u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A1B00u) goto L_089A1B00;
    return;
L_089A1B00:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A1B04;
L_089A1B04:
    ctx.gpr[31] = (0x089A1B0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1C4C;
L_089A1B0C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A1B30u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089A246C;
L_089A1B30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1392), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1392));
    ctx.gpr[31] = (0x089A1B40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A1B40u) goto L_089A1B40;
    return;
L_089A1B40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089A1B68;
      }
      goto L_089A1B48;
    }
L_089A1B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089A1B7C;
      }
      goto L_089A1B68;
    }
L_089A1B68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089A1B7C;
L_089A1B7C:
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089A1B88u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1B88u) goto L_089A1B88;
    return;
L_089A1B88:
    ctx.gpr[31] = (0x089A1B90u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089A1B90u) goto L_089A1B90;
    return;
L_089A1B90:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[16] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089A1BC4;
      }
      goto L_089A1BAC;
    }
L_089A1BAC:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A1BE8;
      }
      goto L_089A1BC4;
    }
L_089A1BC4:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089A1BE8;
      }
      goto L_089A1BD8;
    }
L_089A1BD8:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A1BE8;
L_089A1BE8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089A1C0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A1C20u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1C20u) goto L_089A1C20;
    return;
L_089A1C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1784), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1C4C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_089A1C54;
L_089A1C54:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(872), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A1C54;
      }
      goto L_089A1C68;
    }
L_089A1C68:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1C74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1328)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A1DA0;
      }
      goto L_089A1C8C;
    }
L_089A1C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1DA0;
      }
      goto L_089A1CAC;
    }
L_089A1CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1D20;
      }
      goto L_089A1CC8;
    }
L_089A1CC8:
    ctx.gpr[31] = (0x089A1CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A1CD0u) goto L_089A1CD0;
    return;
L_089A1CD0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_089A1CF4;
    }
    goto L_089A1CDC;
L_089A1CDC:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_089A1CFC;
      }
      goto L_089A1CF4;
    }
L_089A1CF4:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    goto L_089A1CFC;
L_089A1CFC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A1D08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A13B4;
L_089A1D08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A1D18u);
    ctx.gpr[6] = (0u | 20000u);
    goto L_089A1A5C;
L_089A1D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1DA8;
      }
      goto L_089A1D20;
    }
L_089A1D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A1D80;
      }
      goto L_089A1D78;
    }
L_089A1D78:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1721), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089A1D80;
L_089A1D80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A1D8Cu);
    ctx.gpr[5] = (0u | 122u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1D8Cu) goto L_089A1D8C;
    return;
L_089A1D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[31] = (0x089A1D98u);
    ctx.gpr[5] = (0u | 124u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1D98u) goto L_089A1D98;
    return;
L_089A1D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1DA8;
      }
      goto L_089A1DA0;
    }
L_089A1DA0:
    ctx.gpr[31] = (0x089A1DA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x089A1DA8u) goto L_089A1DA8;
    return;
L_089A1DA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1DB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A1DD8u);
    ctx.gpr[5] = (0u | 152u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A1DD8u) goto L_089A1DD8;
    return;
L_089A1DD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_089A1DF0;
      }
      goto L_089A1DE0;
    }
L_089A1DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_089A1DF0;
L_089A1DF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1E10;
      }
      goto L_089A1DFC;
    }
L_089A1DFC:
    ctx.gpr[31] = (0x089A1E04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A37EC;
L_089A1E04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1E10;
      }
      goto L_089A1E0C;
    }
L_089A1E0C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(0u));
    goto L_089A1E10;
L_089A1E10:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A1E38;
      }
      goto L_089A1E24;
    }
L_089A1E24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (65528u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_089A1E38;
L_089A1E38:
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 55u);
      if (branch_taken) {
          goto L_089A1E70;
      }
      goto L_089A1E44;
    }
L_089A1E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1E64;
      }
      goto L_089A1E50;
    }
L_089A1E50:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A1E64;
    }
    goto L_089A1E58;
L_089A1E58:
    ctx.gpr[31] = (0x089A1E60u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A1E60u) goto L_089A1E60;
    return;
L_089A1E60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A1E64;
L_089A1E64:
    ctx.gpr[31] = (0x089A1E6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1C4C;
L_089A1E6C:
    ctx.gpr[4] = (0u | 55u);
    goto L_089A1E70;
L_089A1E70:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089A1E9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089A1E9Cu) goto L_089A1E9C;
    return;
L_089A1E9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089A1EA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 565u, 0x0899F0E4u>(ctx, &aot_mem) && ctx.pc == 0x089A1EA8u) goto L_089A1EA8;
    return;
L_089A1EA8:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089A1EC0u);
    ctx.gpr[8] = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x089A1EC0u) goto L_089A1EC0;
    return;
L_089A1EC0:
    ctx.gpr[31] = (0x089A1EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089A1EC8u) goto L_089A1EC8;
    return;
L_089A1EC8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A1F0C;
      }
      goto L_089A1ED0;
    }
L_089A1ED0:
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089A1EE4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 450u, 0x088D6278u>(ctx, &aot_mem) && ctx.pc == 0x089A1EE4u) goto L_089A1EE4;
    return;
L_089A1EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1EFC;
      }
      goto L_089A1EF4;
    }
L_089A1EF4:
    ctx.gpr[31] = (0x089A1EFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 620u, 0x08A86F44u>(ctx, &aot_mem) && ctx.pc == 0x089A1EFCu) goto L_089A1EFC;
    return;
L_089A1EFC:
    ctx.gpr[31] = (0x089A1F04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 318u, 0x08A82980u>(ctx, &aot_mem) && ctx.pc == 0x089A1F04u) goto L_089A1F04;
    return;
L_089A1F04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089A1F24;
      }
      goto L_089A1F0C;
    }
L_089A1F0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(0u));
        goto L_089A1F24;
    }
    goto L_089A1F18;
L_089A1F18:
    ctx.gpr[31] = (0x089A1F20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 620u, 0x08A86F44u>(ctx, &aot_mem) && ctx.pc == 0x089A1F20u) goto L_089A1F20;
    return;
L_089A1F20:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(0u));
    goto L_089A1F24;
L_089A1F24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1812), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1825), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089A1F6Cu);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x089A1F6Cu) goto L_089A1F6C;
    return;
L_089A1F6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A1F80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A1F94u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089A1F94u) goto L_089A1F94;
    return;
L_089A1F94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A1FAC;
      }
      goto L_089A1F9C;
    }
L_089A1F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2090;
      }
      goto L_089A1FAC;
    }
L_089A1FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), 0u);
        goto L_089A1FF0;
    }
    goto L_089A1FBC;
L_089A1FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A1FE4;
      }
      goto L_089A1FC8;
    }
L_089A1FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A1FE4;
    }
    goto L_089A1FD4;
L_089A1FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089A1FE0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A1FE0u) goto L_089A1FE0;
    return;
L_089A1FE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A1FE4;
L_089A1FE4:
    ctx.gpr[31] = (0x089A1FECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1C4C;
L_089A1FEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), 0u);
    goto L_089A1FF0;
L_089A1FF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1392), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1400), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A2050u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 311u, 0x088D55F0u>(ctx, &aot_mem) && ctx.pc == 0x089A2050u) goto L_089A2050;
    return;
L_089A2050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    goto L_089A2090;
L_089A2090:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A20A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (0u | 54u);
      if (branch_taken) {
          goto L_089A20E8;
      }
      goto L_089A20C4;
    }
L_089A20C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_089A20E8;
      }
      goto L_089A20CC;
    }
L_089A20CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A20E8;
      }
      goto L_089A20D4;
    }
L_089A20D4:
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
        goto L_089A20F0;
    }
    goto L_089A20E0;
L_089A20E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_089A2118;
      }
      goto L_089A20E8;
    }
L_089A20E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A21B8;
      }
      goto L_089A20F0;
    }
L_089A20F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A210C;
      }
      goto L_089A20F8;
    }
L_089A20F8:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A210C;
    }
    goto L_089A2100;
L_089A2100:
    ctx.gpr[31] = (0x089A2108u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A2108u) goto L_089A2108;
    return;
L_089A2108:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A210C;
L_089A210C:
    ctx.gpr[31] = (0x089A2114u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1C4C;
L_089A2114:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_089A2118;
L_089A2118:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (49280u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A2144u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 450u, 0x088D6278u>(ctx, &aot_mem) && ctx.pc == 0x089A2144u) goto L_089A2144;
    return;
L_089A2144:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A215Cu);
    ctx.gpr[6] = (0u | 160u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089A215Cu) goto L_089A215C;
    return;
L_089A215C:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A2170u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11676));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089A2170u) goto L_089A2170;
    return;
L_089A2170:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A21AC;
      }
      goto L_089A218C;
    }
L_089A218C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1708), ctx.gpr[4]);
    goto L_089A21AC;
L_089A21AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A21B8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 565u, 0x0899F0E4u>(ctx, &aot_mem) && ctx.pc == 0x089A21B8u) goto L_089A21B8;
    return;
L_089A21B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A21CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A21F0;
      }
      goto L_089A21EC;
    }
L_089A21EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    goto L_089A21F0;
L_089A21F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A21FCu);
    ctx.gpr[5] = (0u | 162u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A21FCu) goto L_089A21FC;
    return;
L_089A21FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2238;
      }
      goto L_089A2204;
    }
L_089A2204:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A221Cu);
    ctx.gpr[6] = (0u | 161u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089A221Cu) goto L_089A221C;
    return;
L_089A221C:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A2230u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11612));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089A2230u) goto L_089A2230;
    return;
L_089A2230:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_089A2248;
      }
      goto L_089A2238;
    }
L_089A2238:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089A2244u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 137u, 0x0899D2A4u>(ctx, &aot_mem) && ctx.pc == 0x089A2244u) goto L_089A2244;
    return;
L_089A2244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    goto L_089A2248;
L_089A2248:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A2264;
      }
      goto L_089A2250;
    }
L_089A2250:
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
        goto L_089A226C;
    }
    goto L_089A225C;
L_089A225C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2290;
      }
      goto L_089A2264;
    }
L_089A2264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A22A4;
      }
      goto L_089A226C;
    }
L_089A226C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2288;
      }
      goto L_089A2274;
    }
L_089A2274:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A2288;
    }
    goto L_089A227C;
L_089A227C:
    ctx.gpr[31] = (0x089A2284u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A2284u) goto L_089A2284;
    return;
L_089A2284:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A2288;
L_089A2288:
    ctx.gpr[31] = (0x089A2290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1C4C;
L_089A2290:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A22A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089A22A0u) goto L_089A22A0;
    return;
L_089A22A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    goto L_089A22A4;
L_089A22A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A22B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A22D4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089A22D4u) goto L_089A22D4;
    return;
L_089A22D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2454;
      }
      goto L_089A22DC;
    }
L_089A22DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A22E8u);
    ctx.gpr[5] = (0u | 160u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A22E8u) goto L_089A22E8;
    return;
L_089A22E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A22F8u);
    ctx.gpr[5] = (0u | 161u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A22F8u) goto L_089A22F8;
    return;
L_089A22F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A2308u);
    ctx.gpr[5] = (0u | 162u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A2308u) goto L_089A2308;
    return;
L_089A2308:
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2338;
      }
      goto L_089A2318;
    }
L_089A2318:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A2330u);
    ctx.gpr[6] = (0u | 162u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089A2330u) goto L_089A2330;
    return;
L_089A2330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2454;
      }
      goto L_089A2338;
    }
L_089A2338:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A23BC;
      }
      goto L_089A2340;
    }
L_089A2340:
    ctx.gpr[4] = (16051u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A2454;
      }
      goto L_089A2360;
    }
L_089A2360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(740)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2454;
      }
      goto L_089A236C;
    }
L_089A236C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A2378u);
    ctx.gpr[5] = (0u | 258u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 544u, 0x0899EF90u>(ctx, &aot_mem) && ctx.pc == 0x089A2378u) goto L_089A2378;
    return;
L_089A2378:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2454;
      }
      goto L_089A2388;
    }
L_089A2388:
    ctx.gpr[31] = (0x089A2390u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A37EC;
L_089A2390:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2454;
      }
      goto L_089A2398;
    }
L_089A2398:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089A23A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 650u, 0x088A7DE8u>(ctx, &aot_mem) && ctx.pc == 0x089A23A8u) goto L_089A23A8;
    return;
L_089A23A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x089A23B4u);
    ctx.gpr[5] = (0u | 258u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 400u, 0x08982300u>(ctx, &aot_mem) && ctx.pc == 0x089A23B4u) goto L_089A23B4;
    return;
L_089A23B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2454;
      }
      goto L_089A23BC;
    }
L_089A23BC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2454;
      }
      goto L_089A23C4;
    }
L_089A23C4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A2454;
      }
      goto L_089A23E0;
    }
L_089A23E0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A2454;
      }
      goto L_089A23F8;
    }
L_089A23F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A2404u);
    ctx.gpr[5] = (0u | 258u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 565u, 0x0899F0E4u>(ctx, &aot_mem) && ctx.pc == 0x089A2404u) goto L_089A2404;
    return;
L_089A2404:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2440;
      }
      goto L_089A2414;
    }
L_089A2414:
    ctx.gpr[31] = (0x089A241Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A37EC;
L_089A241C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2440;
      }
      goto L_089A2424;
    }
L_089A2424:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089A2434u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 650u, 0x088A7DE8u>(ctx, &aot_mem) && ctx.pc == 0x089A2434u) goto L_089A2434;
    return;
L_089A2434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x089A2440u);
    ctx.gpr[5] = (0u | 258u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 410u, 0x089823A4u>(ctx, &aot_mem) && ctx.pc == 0x089A2440u) goto L_089A2440;
    return;
L_089A2440:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.gpr[31] = (0x089A244Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x089A244Cu) goto L_089A244C;
    return;
L_089A244C:
    ctx.gpr[4] = (0u | 45u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1708), ctx.gpr[4]);
    goto L_089A2454;
L_089A2454:
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
L_089A246C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(852), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A2488u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 339u, 0x089722CCu>(ctx, &aot_mem) && ctx.pc == 0x089A2488u) goto L_089A2488;
    return;
L_089A2488:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_089A24C8;
      }
      goto L_089A2494;
    }
L_089A2494:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] & 16u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A24B4;
      }
      goto L_089A24AC;
    }
L_089A24AC:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089A24B4;
L_089A24B4:
    ctx.gpr[31] = (0x089A24BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 342u, 0x088658A8u>(ctx, &aot_mem) && ctx.pc == 0x089A24BCu) goto L_089A24BC;
    return;
L_089A24BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2494;
      }
      goto L_089A24C8;
    }
L_089A24C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A24D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A24E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 339u, 0x089722CCu>(ctx, &aot_mem) && ctx.pc == 0x089A24E8u) goto L_089A24E8;
    return;
L_089A24E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2528;
      }
      goto L_089A24F4;
    }
L_089A24F4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] & 16u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2514;
      }
      goto L_089A250C;
    }
L_089A250C:
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089A2514;
L_089A2514:
    ctx.gpr[31] = (0x089A251Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 342u, 0x088658A8u>(ctx, &aot_mem) && ctx.pc == 0x089A251Cu) goto L_089A251C;
    return;
L_089A251C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A24F4;
      }
      goto L_089A2528;
    }
L_089A2528:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2534:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17204u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[22];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1362))))));
    ctx.gpr[6] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(19632));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089A25ACu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089A25ACu) goto L_089A25AC;
    return;
L_089A25AC:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089A25C8u);
    ctx.gpr[6] = (0u | 1u);
    goto L_089A04F8;
L_089A25C8:
    ctx.gpr[31] = (0x089A25D0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 236u, 0x08A1D284u>(ctx, &aot_mem) && ctx.pc == 0x089A25D0u) goto L_089A25D0;
    return;
L_089A25D0:
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089A2608;
      }
      goto L_089A25F8;
    }
L_089A25F8:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
      if (branch_taken) {
          goto L_089A2628;
      }
      goto L_089A2608;
    }
L_089A2608:
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A2628;
      }
      goto L_089A261C;
    }
L_089A261C:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_089A2628;
L_089A2628:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089A2644;
    }
    goto L_089A2644;
L_089A2644:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_089A267C;
      }
      goto L_089A265C;
    }
L_089A265C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A26A0;
      }
      goto L_089A267C;
    }
L_089A267C:
    ctx.gpr[31] = (0x089A2684u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x089A2684u) goto L_089A2684;
    return;
L_089A2684:
    ctx.gpr[31] = (0x089A268Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0660;
L_089A268C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), ctx.gpr[4]);
    goto L_089A26A0;
L_089A26A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A26C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1368)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A271C;
      }
      goto L_089A26EC;
    }
L_089A26EC:
    ctx.gpr[31] = (0x089A26F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x089A26F4u) goto L_089A26F4;
    return;
L_089A26F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1362))))));
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19632));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1362), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A2720;
      }
      goto L_089A271C;
    }
L_089A271C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089A2720;
L_089A2720:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2730:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2774;
      }
      goto L_089A275C;
    }
L_089A275C:
    ctx.gpr[31] = (0x089A2764u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x089A2764u) goto L_089A2764;
    return;
L_089A2764:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2774;
      }
      goto L_089A276C;
    }
L_089A276C:
    ctx.gpr[31] = (0x089A2774u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0660;
L_089A2774:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A27B4;
      }
      goto L_089A2780;
    }
L_089A2780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A27B4;
      }
      goto L_089A279C;
    }
L_089A279C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A27C4;
      }
      goto L_089A27AC;
    }
L_089A27AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2814;
      }
      goto L_089A27B4;
    }
L_089A27B4:
    ctx.gpr[31] = (0x089A27BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A29A0;
L_089A27BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2984;
      }
      goto L_089A27C4;
    }
L_089A27C4:
    ctx.gpr[31] = (0x089A27CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A29A0;
L_089A27CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1784), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A280C;
      }
      goto L_089A27E8;
    }
L_089A27E8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_089A2800;
      }
      goto L_089A27F8;
    }
L_089A27F8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A280C;
      }
      goto L_089A2800;
    }
L_089A2800:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A280Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 319u, 0x0889942Cu>(ctx, &aot_mem) && ctx.pc == 0x089A280Cu) goto L_089A280C;
    return;
L_089A280C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2984;
      }
      goto L_089A2814;
    }
L_089A2814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2894;
      }
      goto L_089A2824;
    }
L_089A2824:
    ctx.gpr[31] = (0x089A282Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A282Cu) goto L_089A282C;
    return;
L_089A282C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2880;
      }
      goto L_089A283C;
    }
L_089A283C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A2848u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A2848u) goto L_089A2848;
    return;
L_089A2848:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A286C;
      }
      goto L_089A2854;
    }
L_089A2854:
    ctx.gpr[5] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089A286C;
L_089A286C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A2954;
      }
      goto L_089A2880;
    }
L_089A2880:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A288Cu);
    ctx.gpr[5] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A288Cu) goto L_089A288C;
    return;
L_089A288C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2954;
      }
      goto L_089A2894;
    }
L_089A2894:
    ctx.gpr[31] = (0x089A289Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A289Cu) goto L_089A289C;
    return;
L_089A289C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A28D8;
      }
      goto L_089A28AC;
    }
L_089A28AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A28B8u);
    ctx.gpr[5] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 336u, 0x08865854u>(ctx, &aot_mem) && ctx.pc == 0x089A28B8u) goto L_089A28B8;
    return;
L_089A28B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A28D8;
      }
      goto L_089A28C0;
    }
L_089A28C0:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A28D8u);
    ctx.gpr[6] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089A28D8u) goto L_089A28D8;
    return;
L_089A28D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2954;
      }
      goto L_089A28E8;
    }
L_089A28E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A28F4u);
    ctx.gpr[5] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 336u, 0x08865854u>(ctx, &aot_mem) && ctx.pc == 0x089A28F4u) goto L_089A28F4;
    return;
L_089A28F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2954;
      }
      goto L_089A28FC;
    }
L_089A28FC:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A2914u);
    ctx.gpr[6] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089A2914u) goto L_089A2914;
    return;
L_089A2914:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A2928u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089A2928u) goto L_089A2928;
    return;
L_089A2928:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x089A293Cu);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x089A293Cu) goto L_089A293C;
    return;
L_089A293C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 1024u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[31] = (0x089A2954u);
    ctx.gpr[5] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2954u) goto L_089A2954;
    return;
L_089A2954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1784)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_089A2984;
      }
      goto L_089A2960;
    }
L_089A2960:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2984;
      }
      goto L_089A2970;
    }
L_089A2970:
    ctx.gpr[31] = (0x089A2978u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A29A0;
L_089A2978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1784), ctx.gpr[4]);
    goto L_089A2984;
L_089A2984:
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
L_089A29A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A29BCu);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A29BCu) goto L_089A29BC;
    return;
L_089A29BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A29E0;
      }
      goto L_089A29C8;
    }
L_089A29C8:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089A29E0;
L_089A29E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A29F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0660;
L_089A29F8:
    ctx.gpr[31] = (0x089A2A00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2A00u) goto L_089A2A00;
    return;
L_089A2A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2A6C;
      }
      goto L_089A2A10;
    }
L_089A2A10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[5]);
    ctx.gpr[31] = (0x089A2A28u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x089A2A28u) goto L_089A2A28;
    return;
L_089A2A28:
    ctx.gpr[31] = (0x089A2A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A2A30u) goto L_089A2A30;
    return;
L_089A2A30:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28716)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28720)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A2A48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089A2A48u) goto L_089A2A48;
    return;
L_089A2A48:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089A2A6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A13B4;
L_089A2A6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2A7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 20u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[19];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089A2AB8;
      }
      goto L_089A2AAC;
    }
L_089A2AAC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[31] = (0x089A2AB8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x089A2AB8u) goto L_089A2AB8;
    return;
L_089A2AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2AF0;
      }
      goto L_089A2AC8;
    }
L_089A2AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2AE8;
      }
      goto L_089A2AD4;
    }
L_089A2AD4:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A2AE8;
    }
    goto L_089A2ADC;
L_089A2ADC:
    ctx.gpr[31] = (0x089A2AE4u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A2AE4u) goto L_089A2AE4;
    return;
L_089A2AE4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A2AE8;
L_089A2AE8:
    ctx.gpr[31] = (0x089A2AF0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089A1C4C;
L_089A2AF0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089A2B00u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089A246C;
L_089A2B00:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1780), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089A2B18u);
    ctx.gpr[7] = (0u | 1u);
    goto L_089A0598;
L_089A2B18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1784), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1780), ctx.gpr[4]);
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
L_089A2B50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089A2BA4;
      }
      goto L_089A2B70;
    }
L_089A2B70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2BA4;
      }
      goto L_089A2B7C;
    }
L_089A2B7C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2BA4;
      }
      goto L_089A2B84;
    }
L_089A2B84:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089A2B9Cu);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 686u, 0x08977618u>(ctx, &aot_mem) && ctx.pc == 0x089A2B9Cu) goto L_089A2B9C;
    return;
L_089A2B9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2C6C;
      }
      goto L_089A2BA4;
    }
L_089A2BA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2C64;
      }
      goto L_089A2BB4;
    }
L_089A2BB4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089A2C5C;
      }
      goto L_089A2BBC;
    }
L_089A2BBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 60u);
      if (branch_taken) {
          goto L_089A2C54;
      }
      goto L_089A2BCC;
    }
L_089A2BCC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 61u);
      if (branch_taken) {
          goto L_089A2C54;
      }
      goto L_089A2BD4;
    }
L_089A2BD4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 47u);
      if (branch_taken) {
          goto L_089A2C54;
      }
      goto L_089A2BDC;
    }
L_089A2BDC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2C54;
      }
      goto L_089A2BE4;
    }
L_089A2BE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A2C4C;
      }
      goto L_089A2BF4;
    }
L_089A2BF4:
    ctx.gpr[6] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A2C44;
      }
      goto L_089A2C00;
    }
L_089A2C00:
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2C3C;
      }
      goto L_089A2C0C;
    }
L_089A2C0C:
    ctx.gpr[31] = (0x089A2C14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A37EC;
L_089A2C14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2C34;
      }
      goto L_089A2C1C;
    }
L_089A2C1C:
    ctx.gpr[31] = (0x089A2C24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089A380C;
L_089A2C24:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
        goto L_089A2C88;
    }
    goto L_089A2C2C;
L_089A2C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2C74;
      }
      goto L_089A2C34;
    }
L_089A2C34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2CA0;
      }
      goto L_089A2C3C;
    }
L_089A2C3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2CA0;
      }
      goto L_089A2C44;
    }
L_089A2C44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2CA0;
      }
      goto L_089A2C4C;
    }
L_089A2C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A2CA0;
      }
      goto L_089A2C54;
    }
L_089A2C54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2CA0;
      }
      goto L_089A2C5C;
    }
L_089A2C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2CA0;
      }
      goto L_089A2C64;
    }
L_089A2C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2CA0;
      }
      goto L_089A2C6C;
    }
L_089A2C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2CA0;
      }
      goto L_089A2C74;
    }
L_089A2C74:
    ctx.gpr[31] = (0x089A2C7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A380C;
L_089A2C7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2C9C;
      }
      goto L_089A2C84;
    }
L_089A2C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    goto L_089A2C88;
L_089A2C88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2C9C;
      }
      goto L_089A2C94;
    }
L_089A2C94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2CA0;
      }
      goto L_089A2C9C;
    }
L_089A2C9C:
    ctx.gpr[2] = (0u | 1u);
    goto L_089A2CA0;
L_089A2CA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2CB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (0u | 24u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089A2D74;
      }
      goto L_089A2CE8;
    }
L_089A2CE8:
    ctx.gpr[31] = (0x089A2CF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 368u, 0x0899E2A8u>(ctx, &aot_mem) && ctx.pc == 0x089A2CF0u) goto L_089A2CF0;
    return;
L_089A2CF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2D74;
      }
      goto L_089A2CF8;
    }
L_089A2CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2D74;
      }
      goto L_089A2D08;
    }
L_089A2D08:
    ctx.gpr[31] = (0x089A2D10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 716u, 0x0899FA68u>(ctx, &aot_mem) && ctx.pc == 0x089A2D10u) goto L_089A2D10;
    return;
L_089A2D10:
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089A2D24u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A2D24u) goto L_089A2D24;
    return;
L_089A2D24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(604));
    ctx.gpr[31] = (0x089A2D34u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A2D34u) goto L_089A2D34;
    return;
L_089A2D34:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1332));
    ctx.gpr[31] = (0x089A2D44u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A2D44u) goto L_089A2D44;
    return;
L_089A2D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[31] = (0x089A2D50u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A2D50u) goto L_089A2D50;
    return;
L_089A2D50:
    ctx.gpr[4] = (16128u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1260), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A2D7C;
      }
      goto L_089A2D6C;
    }
L_089A2D6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2DA4;
      }
      goto L_089A2D74;
    }
L_089A2D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2DA8;
      }
      goto L_089A2D7C;
    }
L_089A2D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2D9C;
      }
      goto L_089A2D88;
    }
L_089A2D88:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A2D9C;
    }
    goto L_089A2D90;
L_089A2D90:
    ctx.gpr[31] = (0x089A2D98u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A2D98u) goto L_089A2D98;
    return;
L_089A2D98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A2D9C;
L_089A2D9C:
    ctx.gpr[31] = (0x089A2DA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1C4C;
L_089A2DA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[17]);
    goto L_089A2DA8;
L_089A2DA8:
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
L_089A2DC8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A2DF0;
      }
      goto L_089A2DD4;
    }
L_089A2DD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A2DF8;
      }
      goto L_089A2DE0;
    }
L_089A2DE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A2E18;
      }
      goto L_089A2DE8;
    }
L_089A2DE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2E18;
      }
      goto L_089A2DF0;
    }
L_089A2DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2E1C;
      }
      goto L_089A2DF8;
    }
L_089A2DF8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A2E10;
      }
      goto L_089A2E00;
    }
L_089A2E00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2E18;
      }
      goto L_089A2E08;
    }
L_089A2E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2E1C;
      }
      goto L_089A2E10;
    }
L_089A2E10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A2E1C;
      }
      goto L_089A2E18;
    }
L_089A2E18:
    ctx.gpr[2] = (0u | 1u);
    goto L_089A2E1C;
L_089A2E1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2E24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A2E40;
      }
      goto L_089A2E30;
    }
L_089A2E30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A2E60;
      }
      goto L_089A2E38;
    }
L_089A2E38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2E60;
      }
      goto L_089A2E40;
    }
L_089A2E40:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A2E58;
      }
      goto L_089A2E48;
    }
L_089A2E48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2E60;
      }
      goto L_089A2E50;
    }
L_089A2E50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A2E64;
      }
      goto L_089A2E58;
    }
L_089A2E58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A2E64;
      }
      goto L_089A2E60;
    }
L_089A2E60:
    ctx.gpr[2] = (0u | 1u);
    goto L_089A2E64;
L_089A2E64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A2E6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (50298u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (0u | 43u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-33));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A2EB8;
      }
      goto L_089A2EA8;
    }
L_089A2EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089A2EB8u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 314u, 0x08865714u>(ctx, &aot_mem) && ctx.pc == 0x089A2EB8u) goto L_089A2EB8;
    return;
L_089A2EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089A2EE0;
      }
      goto L_089A2ED8;
    }
L_089A2ED8:
    ctx.gpr[31] = (0x089A2EE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2EE0u) goto L_089A2EE0;
    return;
L_089A2EE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2F38;
      }
      goto L_089A2EF0;
    }
L_089A2EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1400)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2F38;
      }
      goto L_089A2EFC;
    }
L_089A2EFC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A2F0Cu);
    ctx.gpr[6] = (0u | 10000u);
    goto L_089A1A5C;
L_089A2F0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A2F18u);
    ctx.gpr[5] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A2F18u) goto L_089A2F18;
    return;
L_089A2F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1400), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] & ctx.gpr[16]);
      if (branch_taken) {
          goto L_089A300C;
      }
      goto L_089A2F38;
    }
L_089A2F38:
    ctx.gpr[4] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A2FB0;
      }
      goto L_089A2F44;
    }
L_089A2F44:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A2F50u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x089A2F50u) goto L_089A2F50;
    return;
L_089A2F50:
    ctx.gpr[31] = (0x089A2F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089A2F58u) goto L_089A2F58;
    return;
L_089A2F58:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28716)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28720)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A2F70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089A2F70u) goto L_089A2F70;
    return;
L_089A2F70:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089A2F94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089A13B4;
L_089A2F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] & ctx.gpr[16]);
      if (branch_taken) {
          goto L_089A300C;
      }
      goto L_089A2FB0;
    }
L_089A2FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_089A2FC8;
      }
      goto L_089A2FC0;
    }
L_089A2FC0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A2FE0;
      }
      goto L_089A2FC8;
    }
L_089A2FC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A2FD4u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089A246C;
L_089A2FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
      if (branch_taken) {
          goto L_089A2FF4;
      }
      goto L_089A2FE0;
    }
L_089A2FE0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089A2FECu);
    ctx.gpr[5] = (0u | 1u);
    goto L_089A246C;
L_089A2FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    goto L_089A2FF4;
L_089A2FF4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089A3004u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A3004u) goto L_089A3004;
    return;
L_089A3004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[16] = (ctx.gpr[4] & ctx.gpr[16]);
    goto L_089A300C;
L_089A300C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[16]);
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
L_089A3030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 41u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A3074;
      }
      goto L_089A306C;
    }
L_089A306C:
    ctx.gpr[31] = (0x089A3074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3074u) goto L_089A3074;
    return;
L_089A3074:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3080:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A31F4;
      }
      goto L_089A309C;
    }
L_089A309C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 146u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A3144;
      }
      goto L_089A30AC;
    }
L_089A30AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A30C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0660;
L_089A30C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 45u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_089A3128;
    }
    goto L_089A30D4;
L_089A30D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1776), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 42u);
      if (branch_taken) {
          goto L_089A3120;
      }
      goto L_089A30F4;
    }
L_089A30F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3114;
      }
      goto L_089A3100;
    }
L_089A3100:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A3114;
    }
    goto L_089A3108;
L_089A3108:
    ctx.gpr[31] = (0x089A3110u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A3110u) goto L_089A3110;
    return;
L_089A3110:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A3114;
L_089A3114:
    ctx.gpr[31] = (0x089A311Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1C4C;
L_089A311C:
    ctx.gpr[4] = (0u | 42u);
    goto L_089A3120;
L_089A3120:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_089A3128;
L_089A3128:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A321C;
      }
      goto L_089A3144;
    }
L_089A3144:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A318C;
      }
      goto L_089A315C;
    }
L_089A315C:
    ctx.gpr[31] = (0x089A3164u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0660;
L_089A3164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_089A317C;
      }
      goto L_089A3174;
    }
L_089A3174:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A321C;
      }
      goto L_089A317C;
    }
L_089A317C:
    ctx.gpr[31] = (0x089A3184u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3184u) goto L_089A3184;
    return;
L_089A3184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A321C;
      }
      goto L_089A318C;
    }
L_089A318C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A321C;
      }
      goto L_089A319C;
    }
L_089A319C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089A31C4;
      }
      goto L_089A31B8;
    }
L_089A31B8:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A31C4;
L_089A31C4:
    ctx.gpr[31] = (0x089A31CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0660;
L_089A31CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_089A31E4;
      }
      goto L_089A31DC;
    }
L_089A31DC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A321C;
      }
      goto L_089A31E4;
    }
L_089A31E4:
    ctx.gpr[31] = (0x089A31ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089A31ECu) goto L_089A31EC;
    return;
L_089A31EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A321C;
      }
      goto L_089A31F4;
    }
L_089A31F4:
    ctx.gpr[31] = (0x089A31FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A0660;
L_089A31FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_089A3214;
      }
      goto L_089A320C;
    }
L_089A320C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A321C;
      }
      goto L_089A3214;
    }
L_089A3214:
    ctx.gpr[31] = (0x089A321Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089A321Cu) goto L_089A321C;
    return;
L_089A321C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3230:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A324Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A3B74;
L_089A324C:
    ctx.gpr[31] = (0x089A3254u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 776u, 0x089BB520u>(ctx, &aot_mem) && ctx.pc == 0x089A3254u) goto L_089A3254;
    return;
L_089A3254:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3288;
      }
      goto L_089A3278;
    }
L_089A3278:
    ctx.gpr[6] = (61440u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089A3288;
L_089A3288:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3304;
      }
      goto L_089A32B8;
    }
L_089A32B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3304;
      }
      goto L_089A32C8;
    }
L_089A32C8:
    ctx.gpr[5] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3304;
      }
      goto L_089A32D4;
    }
L_089A32D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1400)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3304;
      }
      goto L_089A32E0;
    }
L_089A32E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    ctx.gpr[31] = (0x089A32F0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089A32F0u) goto L_089A32F0;
    return;
L_089A32F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1400), ctx.gpr[2]);
    ctx.gpr[31] = (0x089A32FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 347u, 0x089ADDC8u>(ctx, &aot_mem) && ctx.pc == 0x089A32FCu) goto L_089A32FC;
    return;
L_089A32FC:
    ctx.gpr[31] = (0x089A3304u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089A3304u) goto L_089A3304;
    return;
L_089A3304:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), 0u);
    ctx.gpr[31] = (0x089A3310u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A3B74;
L_089A3310:
    ctx.gpr[31] = (0x089A3318u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 776u, 0x089BB520u>(ctx, &aot_mem) && ctx.pc == 0x089A3318u) goto L_089A3318;
    return;
L_089A3318:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A3344u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x089A3344u) goto L_089A3344;
    return;
L_089A3344:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(836), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), 0u);
    ctx.gpr[31] = (0x089A338Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x089A338Cu) goto L_089A338C;
    return;
L_089A338C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A33A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089A342C;
      }
      goto L_089A33BC;
    }
L_089A33BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 147u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A342C;
      }
      goto L_089A33CC;
    }
L_089A33CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (65520u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A33F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089A0660;
L_089A33F8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1776), 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.gpr[31] = (0x089A342Cu);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089A342Cu) goto L_089A342C;
    return;
L_089A342C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3440:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089A3478u);
    ctx.gpr[4] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 533u, 0x08A92664u>(ctx, &aot_mem) && ctx.pc == 0x089A3478u) goto L_089A3478;
    return;
L_089A3478:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A35AC;
      }
      goto L_089A3480;
    }
L_089A3480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17168));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089A3528;
      }
      goto L_089A3510;
    }
L_089A3510:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089A3560;
      }
      goto L_089A3518;
    }
L_089A3518:
    ctx.gpr[31] = (0x089A3520u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 571u, 0x08A06CC4u>(ctx, &aot_mem) && ctx.pc == 0x089A3520u) goto L_089A3520;
    return;
L_089A3520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A3560;
      }
      goto L_089A3528;
    }
L_089A3528:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A3544;
      }
      goto L_089A3534;
    }
L_089A3534:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3554;
      }
      goto L_089A353C;
    }
L_089A353C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3560;
      }
      goto L_089A3544;
    }
L_089A3544:
    ctx.gpr[31] = (0x089A354Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 575u, 0x08A06D0Cu>(ctx, &aot_mem) && ctx.pc == 0x089A354Cu) goto L_089A354C;
    return;
L_089A354C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089A3560;
      }
      goto L_089A3554;
    }
L_089A3554:
    ctx.gpr[31] = (0x089A355Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 579u, 0x08A06D54u>(ctx, &aot_mem) && ctx.pc == 0x089A355Cu) goto L_089A355C;
    return;
L_089A355C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089A3560;
L_089A3560:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3588;
      }
      goto L_089A3568;
    }
L_089A3568:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(656), ctx.gpr[4]);
    ctx.gpr[31] = (0x089A3574u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(656));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089A3574u) goto L_089A3574;
    return;
L_089A3574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089A359C;
      }
      goto L_089A3588;
    }
L_089A3588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089A359C;
L_089A359C:
    ctx.gpr[31] = (0x089A35A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 539u, 0x08A92708u>(ctx, &aot_mem) && ctx.pc == 0x089A35A4u) goto L_089A35A4;
    return;
L_089A35A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A3674;
      }
      goto L_089A35AC;
    }
L_089A35AC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089A35C8u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 533u, 0x08A92664u>(ctx, &aot_mem) && ctx.pc == 0x089A35C8u) goto L_089A35C8;
    return;
L_089A35C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A365C;
      }
      goto L_089A35D0;
    }
L_089A35D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x089A3640u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 539u, 0x08A92708u>(ctx, &aot_mem) && ctx.pc == 0x089A3640u) goto L_089A3640;
    return;
L_089A3640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A3674;
      }
      goto L_089A365C;
    }
L_089A365C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    goto L_089A3674;
L_089A3674:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089A36B8u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 533u, 0x08A92664u>(ctx, &aot_mem) && ctx.pc == 0x089A36B8u) goto L_089A36B8;
    return;
L_089A36B8:
    ctx.gpr[4] = (65024u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089A3724;
      }
      goto L_089A36C4;
    }
L_089A36C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17168));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A3724;
      }
      goto L_089A36F4;
    }
L_089A36F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A370Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 571u, 0x08A06CC4u>(ctx, &aot_mem) && ctx.pc == 0x089A370Cu) goto L_089A370C;
    return;
L_089A370C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A371C;
      }
      goto L_089A3714;
    }
L_089A3714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089A3734;
      }
      goto L_089A371C;
    }
L_089A371C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3734;
      }
      goto L_089A3724;
    }
L_089A3724:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089A3734;
L_089A3734:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089A3774u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 533u, 0x08A92664u>(ctx, &aot_mem) && ctx.pc == 0x089A3774u) goto L_089A3774;
    return;
L_089A3774:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A37C4;
      }
      goto L_089A377C;
    }
L_089A377C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089A37C4;
      }
      goto L_089A37A8;
    }
L_089A37A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[31] = (0x089A37BCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 571u, 0x08A06CC4u>(ctx, &aot_mem) && ctx.pc == 0x089A37BCu) goto L_089A37BC;
    return;
L_089A37BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A37DC;
      }
      goto L_089A37C4;
    }
L_089A37C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    goto L_089A37DC;
L_089A37DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A37EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3800;
      }
      goto L_089A37F8;
    }
L_089A37F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A3804;
      }
      goto L_089A3800;
    }
L_089A3800:
    ctx.gpr[2] = (0u | 0u);
    goto L_089A3804;
L_089A3804:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A380C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_089A382C;
      }
      goto L_089A381C;
    }
L_089A381C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A382C;
      }
      goto L_089A3824;
    }
L_089A3824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089A3830;
      }
      goto L_089A382C;
    }
L_089A382C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089A3830;
L_089A3830:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3838:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A3870u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089A3870u) goto L_089A3870;
    return;
L_089A3870:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3888;
      }
      goto L_089A3878;
    }
L_089A3878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A38A8;
      }
      goto L_089A3888;
    }
L_089A3888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
        goto L_089A38B0;
    }
    goto L_089A38A0;
L_089A38A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A39D4;
      }
      goto L_089A38A8;
    }
L_089A38A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A39D4;
      }
      goto L_089A38B0;
    }
L_089A38B0:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A39D4;
      }
      goto L_089A38BC;
    }
L_089A38BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16262u << 16u);
      if (branch_taken) {
          goto L_089A39C8;
      }
      goto L_089A38D0;
    }
L_089A38D0:
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    goto L_089A38F4;
L_089A38F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1828)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089A3904u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 591u, 0x0888707Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3904u) goto L_089A3904;
    return;
L_089A3904:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A39B4;
      }
      goto L_089A390C;
    }
L_089A390C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1828)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A39B4;
      }
      goto L_089A3950;
    }
L_089A3950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(39))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(39))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A39B4;
      }
      goto L_089A3970;
    }
L_089A3970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A39B4;
      }
      goto L_089A3980;
    }
L_089A3980:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089A3994u);
    ctx.gpr[7] = (0u | 0u);
    goto L_089A0598;
L_089A3994:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[5]);
    ctx.gpr[31] = (0x089A39ACu);
    ctx.gpr[5] = (0u | 154u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A39ACu) goto L_089A39AC;
    return;
L_089A39AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A39D4;
      }
      goto L_089A39B4;
    }
L_089A39B4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089A38F4;
      }
      goto L_089A39C8;
    }
L_089A39C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[4]);
    goto L_089A39D4;
L_089A39D4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3A08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    ctx.gpr[31] = (0x089A3A28u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089A3A28u) goto L_089A3A28;
    return;
L_089A3A28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3A40;
      }
      goto L_089A3A30;
    }
L_089A3A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A3A64;
      }
      goto L_089A3A40;
    }
L_089A3A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089A3A6C;
      }
      goto L_089A3A5C;
    }
L_089A3A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3B58;
      }
      goto L_089A3A64;
    }
L_089A3A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3B58;
      }
      goto L_089A3A6C;
    }
L_089A3A6C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089A3AB0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0EF8u>(ctx, &aot_mem) && ctx.pc == 0x089A3AB0u) goto L_089A3AB0;
    return;
L_089A3AB0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3B18;
      }
      goto L_089A3AC4;
    }
L_089A3AC4:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A3AFC;
      }
      goto L_089A3ADC;
    }
L_089A3ADC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(216)));
    ctx.gpr[6] = (ctx.gpr[18] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3AFC;
      }
      goto L_089A3AF0;
    }
L_089A3AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    goto L_089A3AFC;
L_089A3AFC:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3AC4;
      }
      goto L_089A3B18;
    }
L_089A3B18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 40000u);
      if (branch_taken) {
          goto L_089A3B4C;
      }
      goto L_089A3B24;
    }
L_089A3B24:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3B4C;
      }
      goto L_089A3B30;
    }
L_089A3B30:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089A3B4Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_089A0598;
L_089A3B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), ctx.gpr[4]);
    goto L_089A3B58;
L_089A3B58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3B74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1380)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1380)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A3B94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 28u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[18];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089A3D74;
      }
      goto L_089A3BC8;
    }
L_089A3BC8:
    ctx.gpr[31] = (0x089A3BD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089A3BD0u) goto L_089A3BD0;
    return;
L_089A3BD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3D74;
      }
      goto L_089A3BD8;
    }
L_089A3BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3D74;
      }
      goto L_089A3BE4;
    }
L_089A3BE4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089A3D74;
      }
      goto L_089A3BF4;
    }
L_089A3BF4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(541)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3D74;
      }
      goto L_089A3C00;
    }
L_089A3C00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1800)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3D74;
      }
      goto L_089A3C18;
    }
L_089A3C18:
    ctx.gpr[7] = (16329u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[7] = (ctx.gpr[7] | 4059u);
    ctx.gpr[6] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_089A3C84;
      }
      goto L_089A3C34;
    }
L_089A3C34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089A3C68;
      }
      goto L_089A3C4C;
    }
L_089A3C4C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A3C68;
      }
      goto L_089A3C5C;
    }
L_089A3C5C:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
      if (branch_taken) {
          goto L_089A3C78;
      }
      goto L_089A3C68;
    }
L_089A3C68:
    ctx.gpr[31] = (0x089A3C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3C70u) goto L_089A3C70;
    return;
L_089A3C70:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    goto L_089A3C78;
L_089A3C78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
      if (branch_taken) {
          goto L_089A3CD0;
      }
      goto L_089A3C84;
    }
L_089A3C84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089A3CB8;
      }
      goto L_089A3C9C;
    }
L_089A3C9C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A3CB8;
      }
      goto L_089A3CAC;
    }
L_089A3CAC:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
      if (branch_taken) {
          goto L_089A3CC8;
      }
      goto L_089A3CB8;
    }
L_089A3CB8:
    ctx.gpr[31] = (0x089A3CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3CC0u) goto L_089A3CC0;
    return;
L_089A3CC0:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    goto L_089A3CC8;
L_089A3CC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089A3CD0;
L_089A3CD0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089A3CE4;
    }
    goto L_089A3CE4;
L_089A3CE4:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A3D74;
      }
      goto L_089A3CF4;
    }
L_089A3CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1784), ctx.gpr[4]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 2u);
      if (branch_taken) {
          goto L_089A3D38;
      }
      goto L_089A3D14;
    }
L_089A3D14:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3D38;
      }
      goto L_089A3D1C;
    }
L_089A3D1C:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089A3D34u);
    ctx.gpr[6] = (0u | 125u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089A3D34u) goto L_089A3D34;
    return;
L_089A3D34:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), ctx.gpr[2]);
    goto L_089A3D38;
L_089A3D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
        goto L_089A3D74;
    }
    goto L_089A3D48;
L_089A3D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3D68;
      }
      goto L_089A3D54;
    }
L_089A3D54:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089A3D68;
    }
    goto L_089A3D5C;
L_089A3D5C:
    ctx.gpr[31] = (0x089A3D64u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089A3D64u) goto L_089A3D64;
    return;
L_089A3D64:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089A3D68;
L_089A3D68:
    ctx.gpr[31] = (0x089A3D70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089A1C4C;
L_089A3D70:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
    goto L_089A3D74;
L_089A3D74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_089A3D98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3DE4;
      }
      goto L_089A3DD8;
    }
L_089A3DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3E78;
      }
      goto L_089A3DE4;
    }
L_089A3DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089A3E14;
      }
      goto L_089A3DF0;
    }
L_089A3DF0:
    ctx.gpr[31] = (0x089A3DF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3DF8u) goto L_089A3DF8;
    return;
L_089A3DF8:
    ctx.gpr[31] = (0x089A3E00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x089A3E00u) goto L_089A3E00;
    return;
L_089A3E00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A3E0Cu);
    ctx.gpr[5] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 530u, 0x08886B78u>(ctx, &aot_mem) && ctx.pc == 0x089A3E0Cu) goto L_089A3E0C;
    return;
L_089A3E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3FF8;
      }
      goto L_089A3E14;
    }
L_089A3E14:
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
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A3E70;
      }
      goto L_089A3E48;
    }
L_089A3E48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A3E5Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 56u, 0x089A4300u>(ctx, &aot_mem) && ctx.pc == 0x089A3E5Cu) goto L_089A3E5C;
    return;
L_089A3E5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A3E68u);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3E68u) goto L_089A3E68;
    return;
L_089A3E68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3FF8;
      }
      goto L_089A3E70;
    }
L_089A3E70:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), 0u);
      if (branch_taken) {
          goto L_089A3FF8;
      }
      goto L_089A3E78;
    }
L_089A3E78:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089A3E98u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 525u, 0x0888E8D4u>(ctx, &aot_mem) && ctx.pc == 0x089A3E98u) goto L_089A3E98;
    return;
L_089A3E98:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A3EB0u);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3EB0u) goto L_089A3EB0;
    return;
L_089A3EB0:
    ctx.gpr[31] = (0x089A3EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089A3EB8u) goto L_089A3EB8;
    return;
L_089A3EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089A3EE4;
      }
      goto L_089A3ED0;
    }
L_089A3ED0:
    ctx.gpr[31] = (0x089A3ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089A3ED8u) goto L_089A3ED8;
    return;
L_089A3ED8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089A3EE4u);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3EE4u) goto L_089A3EE4;
    return;
L_089A3EE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A3EF0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089A246C;
L_089A3EF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089A3F08u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 234u, 0x08A1D254u>(ctx, &aot_mem) && ctx.pc == 0x089A3F08u) goto L_089A3F08;
    return;
L_089A3F08:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A3F64;
      }
      goto L_089A3F54;
    }
L_089A3F54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089A3F84;
      }
      goto L_089A3F64;
    }
L_089A3F64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A3F84;
      }
      goto L_089A3F78;
    }
L_089A3F78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089A3F84;
L_089A3F84:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A3FF8;
      }
      goto L_089A3FAC;
    }
L_089A3FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089A3FB8u);
    ctx.gpr[5] = (0u | 125u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089A3FB8u) goto L_089A3FB8;
    return;
L_089A3FB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A3FDC;
      }
      goto L_089A3FC4;
    }
L_089A3FC4:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089A3FDC;
L_089A3FDC:
    ctx.gpr[31] = (0x089A3FE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089A3FE4u) goto L_089A3FE4;
    return;
L_089A3FE4:
    ctx.gpr[31] = (0x089A3FECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x089A3FECu) goto L_089A3FEC;
    return;
L_089A3FEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089A3FF8u);
    ctx.gpr[5] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 530u, 0x08886B78u>(ctx, &aot_mem) && ctx.pc == 0x089A3FF8u) goto L_089A3FF8;
    return;
L_089A3FF8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.pc = 0x089A4000u; return;
}

void recomp_unit_0103(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0103_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_103(Runtime &runtime) {
    runtime.register_generated_unit(103u, 0x089A0000u, 16384u, &recomp_unit_0103, &recomp_unit_0103_entry);
    runtime.register_function(0x089A0000u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0010u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0030u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A004Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A005Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0080u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A00A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A00ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A00BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A00CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A00D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A00F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A010Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0114u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0124u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A012Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0134u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0140u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A014Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0174u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0188u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0190u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0198u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A01F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0210u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0230u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0238u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0240u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0248u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0250u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0258u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A026Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A028Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0294u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A02F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0318u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0330u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A033Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0348u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0358u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A039Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A03F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0418u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A043Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0444u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A044Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0454u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0464u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0474u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A047Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A048Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A049Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A04F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0524u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A052Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0570u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0578u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0588u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0598u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A05D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A05D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A05FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0634u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A063Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A064Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0660u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0680u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A06F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0700u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0708u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0718u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0728u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0734u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0774u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A077Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0784u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A078Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0794u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A079Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A07FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0804u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0818u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0824u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0834u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0844u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A085Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0870u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0874u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0880u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0894u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A089Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A08FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0910u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0918u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0938u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0944u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0950u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A095Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0990u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A099Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A09F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0A98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AE0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0AE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0B98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0BA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0BB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0C9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CBCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0CECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0D68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DBCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0DFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0E90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0EA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0ED4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0EDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0EE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0EF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0EFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0F98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FBCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A0FFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A100Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1024u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A102Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1034u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1040u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A104Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1060u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1074u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1084u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A109Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A10B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A10D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A10F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1120u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1130u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A113Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A115Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1170u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A11F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1204u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A120Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1230u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1268u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1278u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1284u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A12A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A12B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A12F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1300u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1308u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A131Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A132Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1340u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A134Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1368u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1374u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1384u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A13B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A13F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A13F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1400u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1408u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1418u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1438u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1440u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1448u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1450u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A146Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1474u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A147Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1494u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A14FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1508u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1520u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1530u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1540u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1548u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1550u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1558u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1584u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1590u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A15ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1600u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1630u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A165Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1664u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1674u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A167Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1684u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1698u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A16FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1704u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1710u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A171Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1728u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1734u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1738u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1740u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1744u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1754u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1774u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A17FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1804u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A180Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1810u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1818u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1824u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A182Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1834u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1838u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1840u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1858u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1864u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1884u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1898u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A18F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1908u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1920u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1928u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1930u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1938u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1940u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1950u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A195Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1964u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A196Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1970u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1978u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A198Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A19E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1A94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1ABCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1AF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1B90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1BE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1C8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1CACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1CC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1CD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1CDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1CF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1CFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D80u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D8Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1D98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DA0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DE0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1DFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E38u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E44u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E64u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1E9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1ED0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1EFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F04u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F20u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F80u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1F9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FBCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FD4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FE0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A1FF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2050u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2090u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A20F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2100u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2108u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A210Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2114u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2118u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2144u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A215Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2170u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A218Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A21FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2204u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A221Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2230u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2238u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2244u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2248u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2250u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A225Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2264u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A226Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2274u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A227Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2284u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2288u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2290u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A22F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2308u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2318u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2330u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2338u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2340u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2360u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A236Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2378u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2388u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2390u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2398u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A23F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2404u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2414u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A241Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2424u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2434u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2440u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A244Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2454u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A246Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2474u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2488u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2494u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A24F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A250Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2514u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A251Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2528u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2534u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A25F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2608u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A261Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2628u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2644u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A265Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A267Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2684u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A268Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A26A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A26C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A26ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A26F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A271Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2720u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2730u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A275Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2764u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A276Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2774u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2780u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A279Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A27F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2800u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A280Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2814u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2824u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A282Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A283Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2848u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2854u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A286Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2880u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A288Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2894u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A289Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28C0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28D8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28E8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A28FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2914u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2928u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A293Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2954u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2960u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2970u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2978u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2984u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A29A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A29BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A29C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A29E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A29F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2A7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AD4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2ADCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2AF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2B9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BBCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BCCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BD4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2BF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C2Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C3Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C44u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C64u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2C9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CA0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CB4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2CF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D44u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D7Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D88u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D90u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2D9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DA4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DD4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DE0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DE8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2DF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E10u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E38u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E60u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E64u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2E6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EA8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2ED8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EE0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2EFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F38u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F44u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F50u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2F94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FD4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FE0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A2FF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3004u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A300Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3030u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A306Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3074u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3080u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A309Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A30ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A30C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A30D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A30F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3100u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3108u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3110u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3114u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A311Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3120u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3128u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3144u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A315Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3164u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3174u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A317Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3184u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A318Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A319Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31E4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A31FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A320Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3214u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A321Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3230u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A324Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3254u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3264u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3278u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3288u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3290u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32E0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32F0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A32FCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3304u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3310u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3318u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3328u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3344u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A338Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33CCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A33F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A342Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3440u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3478u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3480u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3510u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3518u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3520u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3528u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3534u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A353Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3544u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A354Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3554u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A355Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3560u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3568u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3574u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3588u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A359Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35A4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A35D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3640u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A365Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3674u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3688u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A36B8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A36C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A36F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A370Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3714u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A371Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3724u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3734u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3744u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3774u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A377Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37C4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37DCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37ECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A37F8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3800u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3804u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A380Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A381Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3824u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A382Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3830u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3838u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3870u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3878u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3888u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38A0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38A8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38B0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38BCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38D0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A38F4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3904u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A390Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3950u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3970u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3980u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3994u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A39ACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A39B4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A39C8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A39D4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A28u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A40u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A64u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3A6Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3AB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3AC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3ADCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3AF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3AFCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B24u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B30u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B58u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3B94u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3BF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C18u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C4Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3C9Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CC0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CC8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CD0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3CF4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D1Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D34u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D38u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D64u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D74u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3D98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3DD8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3DE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3DF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3DF8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E00u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E0Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E14u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E48u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E5Cu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E68u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E70u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3E98u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3EB0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3EB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3ED0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3ED8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3EE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3EF0u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F08u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F54u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F64u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F78u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3F84u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FACu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FB8u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FC4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FDCu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FE4u, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FECu, &recomp_unit_0103, "recomp_unit_0103");
    runtime.register_function(0x089A3FF8u, &recomp_unit_0103, "recomp_unit_0103");
}
} // namespace psprecomp
