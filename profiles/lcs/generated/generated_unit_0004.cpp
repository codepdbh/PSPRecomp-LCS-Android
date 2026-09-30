#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0004[4095] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0,
    9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16, 17, 0, 0, 18, 0, 0, 0,
    19, 0, 0, 0, 0, 20, 21, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 28, 29, 0, 0,
    30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 33, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 40, 0, 41,
    0, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 49, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0,
    0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 0,
    0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 73,
    0, 74, 0, 0, 75, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0,
    0, 84, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0,
    95, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 123, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 149, 0,
    0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0,
    166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0,
    190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 223, 224, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 231, 0, 232, 0, 0, 233,
    0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0,
    0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0,
    259, 0, 0, 260, 0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0,
    0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0,
    306, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0,
    0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 326, 0, 327, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 329, 330, 0, 331, 0, 0, 332, 0, 333, 0, 0, 334, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337,
    0, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345,
    0, 0, 346, 0, 347, 0, 348, 0, 349, 0, 0, 0, 0, 350, 0, 0, 351, 352, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0,
    356, 0, 0, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 361, 362, 0, 363, 0, 364, 0, 0, 0, 0, 365, 0, 366, 0, 0, 367, 0,
    0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0,
    0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0,
    382, 0, 0, 0, 383, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0,
    393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 397, 0, 0, 0, 0, 398, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 403, 0, 0, 404, 0, 405, 0,
    0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0,
    0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 416, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0,
    420, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0,
    0, 428, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 434, 0, 0,
    0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0,
    0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 448,
    0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 454, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 458,
    0, 0, 0, 459, 0, 460, 0, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 464, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0,
    0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 472, 473, 0, 0, 0, 0, 0, 474, 0, 0,
    0, 475, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 484, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 489, 0, 0, 0, 0, 490,
    491, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0,
    0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 502, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0,
    505, 0, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 512, 0, 513, 0, 0,
    0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 520, 0, 521, 0, 0, 522,
    0, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 529, 0, 0, 0,
    0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 533, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0,
    0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 551, 0, 0, 552, 0, 0, 0, 553,
    0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0,
    560, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0,
    0, 563, 0, 0, 564, 0, 565, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0,
    571, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 577, 0, 0, 0, 0, 0, 578, 0, 579,
    0, 580, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 587, 0,
    0, 0, 588, 0, 0, 0, 589, 0, 0, 590, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 598, 0, 599, 0, 0, 600, 0, 601, 0, 602, 0, 0, 603, 0, 0,
    604, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 0, 0, 0, 0, 608, 609, 0, 610, 0, 0, 0, 0, 0, 0, 611, 612, 0, 613, 614, 0, 615,
    0, 0, 616, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 0, 620, 0, 0, 621, 0, 0, 622, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624,
    0, 625, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 631, 0, 632, 0, 0, 0, 633,
    0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 639, 0, 0,
    0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0,
    0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 652, 0,
    653, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0,
    0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 668, 0, 669, 0, 0, 670, 0, 0, 0, 0, 671, 0,
    672, 0, 0, 0, 673, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 680,
    0, 0, 0, 681, 0, 682, 0, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0, 686, 0, 0, 687, 0, 688, 0, 0, 0, 689,
    0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 694, 0, 0, 695, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0,
    699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 707,
    0, 0, 708, 0, 709, 0, 710, 0, 711, 0, 0, 712, 0, 713, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 716, 717, 0, 0, 0, 718, 0, 0,
    0, 0, 0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 723, 0, 724, 0, 725, 0, 726, 0, 727, 0, 0, 0,
    0, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0,
    0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0,
    0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0,
    745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 750, 0,
    0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 754, 0, 0, 755, 0, 756, 0, 757, 0, 758, 0, 0, 0, 0, 0, 759,
    0, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0, 765, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 768, 0, 0, 769, 0, 0, 770, 0, 0, 771, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 772, 0, 773, 0, 774, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 0, 777, 0, 0, 778, 0,
    0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0,
    0, 783, 0, 0, 0, 0, 784, 0, 0, 785, 0, 0, 786, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 789, 0, 790, 0, 0,
    0, 0, 0, 791, 0, 0, 0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 796, 0, 0,
    797, 0, 0, 798, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 801, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 803, 0,
    804, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 806, 0, 0, 807, 0, 0, 808, 0, 0, 809, 0, 0, 810, 0, 0, 811, 0, 0, 812, 0,
    0, 813, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 817, 0, 0, 0, 818, 0, 0, 0, 819, 0, 0, 820, 0, 0, 0, 821,
    0, 0, 0, 822, 0, 823, 0, 0, 824, 0, 825, 0, 826, 0, 0, 0, 0, 0, 827, 0, 0, 0, 828, 0, 0, 829, 0, 0, 0, 0, 830, 0,
    0, 0, 831, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 836, 0, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0,
    839, 0, 0, 0, 840, 0, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0,
    0, 844, 0, 0, 0, 845, 0, 0, 846, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0,
    0, 0, 849, 0, 0, 0, 0, 0, 850, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853,
    0, 854, 0, 0, 855, 0, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 858, 0, 0, 859, 0, 0, 860, 0, 0,
    0, 0, 861, 0, 0, 862, 0, 0, 0, 863, 0, 864, 0, 865, 0, 866, 0, 867, 0, 868, 0, 0, 0, 869, 0, 0, 870, 0, 0, 0, 0, 0,
    0, 0, 871, 0, 0, 0, 872, 0, 0, 0, 873, 0, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 0, 0, 0, 876, 0,
    0, 0, 877, 0, 0, 878, 0, 0, 0, 879, 0, 880, 0, 0, 881, 0, 0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 884, 0, 0, 885, 0,
    0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 887, 0, 0, 0, 888, 0, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0,
    0, 0, 891, 0, 0, 0, 892, 0, 0, 893, 0, 0, 0, 894, 0, 895, 0, 0, 896, 0, 0, 0, 0, 0, 0, 897, 0, 898, 0, 0, 0, 899,
    0, 0, 900, 0, 0, 0, 0, 0, 0, 0, 901, 0, 0, 0, 902, 0, 0, 0, 903, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 905, 0, 0, 0, 0, 906, 0, 0, 0, 907, 0, 0, 908, 0, 0, 0, 909, 0, 910, 0, 0, 911, 0, 0, 0, 0, 0, 0, 912, 0, 0,
    0, 913, 0, 914, 0, 915, 0, 916, 0, 917, 0, 918, 0, 0, 0, 919, 0, 0, 920, 0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0, 922, 0,
    0, 0, 923, 0, 0, 0, 0, 924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 925, 0, 0, 0, 0, 926, 0, 0, 0, 927, 0, 0, 928, 0, 0,
    0, 929, 0, 930, 0, 0, 931, 0, 0, 0, 0, 0, 0, 932, 0, 933, 0, 0, 0, 934, 0, 0, 935, 0, 0, 0, 0, 0, 0, 0, 936, 0,
    0, 0, 937, 0, 0, 0, 938, 0, 0, 0, 0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 0, 940, 0, 0, 0, 0, 941, 0, 0, 0, 942, 0,
    0, 943, 0, 0, 0, 944, 0, 945, 0, 0, 946, 0, 0, 0, 0, 0, 0, 947, 0, 948, 0, 0, 0, 949, 0, 0, 950, 0, 0, 0, 0, 0,
    0, 0, 951, 0, 0, 0, 952, 0, 0, 0, 953, 0, 0, 0, 0, 954, 0, 0, 0, 0, 0, 0, 0, 0, 0, 955, 0, 0, 0, 0, 956, 0,
    0, 0, 957, 0, 0, 958, 0, 0, 0, 959, 0, 960, 0, 0, 961, 0, 0, 0, 0, 0, 0, 962, 0, 963, 0, 964, 0, 965, 0, 966, 0, 0,
    967, 0, 968, 0, 0, 0, 0, 0, 969, 0, 0, 0, 0, 0, 0, 0, 970, 0, 971, 0, 972, 0, 973, 0, 974, 0, 0, 0, 0, 0, 975, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 976, 0, 0, 0, 0, 977, 0, 0, 0, 0, 978, 0, 0, 0, 0, 979, 0, 0, 0, 0, 0, 980,
};
void recomp_unit_0004_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08814000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0004[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08814000;
    case 2u: goto L_0881400C;
    case 3u: goto L_08814028;
    case 4u: goto L_08814038;
    case 5u: goto L_08814044;
    case 6u: goto L_08814054;
    case 7u: goto L_0881405C;
    case 8u: goto L_0881406C;
    case 9u: goto L_08814080;
    case 10u: goto L_08814088;
    case 11u: goto L_08814090;
    case 12u: goto L_08814098;
    case 13u: goto L_088140A0;
    case 14u: goto L_088140BC;
    case 15u: goto L_088140CC;
    case 16u: goto L_088140E0;
    case 17u: goto L_088140E4;
    case 18u: goto L_088140F0;
    case 19u: goto L_08814100;
    case 20u: goto L_08814114;
    case 21u: goto L_08814118;
    case 22u: goto L_08814124;
    case 23u: goto L_08814134;
    case 24u: goto L_0881413C;
    case 25u: goto L_08814144;
    case 26u: goto L_0881414C;
    case 27u: goto L_0881415C;
    case 28u: goto L_08814170;
    case 29u: goto L_08814174;
    case 30u: goto L_08814180;
    case 31u: goto L_08814190;
    case 32u: goto L_088141A4;
    case 33u: goto L_088141A8;
    case 34u: goto L_088141B4;
    case 35u: goto L_088141BC;
    case 36u: goto L_088141C4;
    case 37u: goto L_088141D4;
    case 38u: goto L_088141E0;
    case 39u: goto L_088141EC;
    case 40u: goto L_088141F4;
    case 41u: goto L_088141FC;
    case 42u: goto L_08814208;
    case 43u: goto L_08814210;
    case 44u: goto L_08814218;
    case 45u: goto L_08814220;
    case 46u: goto L_08814228;
    case 47u: goto L_08814230;
    case 48u: goto L_08814238;
    case 49u: goto L_08814244;
    case 50u: goto L_0881424C;
    case 51u: goto L_08814254;
    case 52u: goto L_08814260;
    case 53u: goto L_08814268;
    case 54u: goto L_08814274;
    case 55u: goto L_08814284;
    case 56u: goto L_08814290;
    case 57u: goto L_08814298;
    case 58u: goto L_088142A8;
    case 59u: goto L_088142B0;
    case 60u: goto L_088142C0;
    case 61u: goto L_088142CC;
    case 62u: goto L_088142D8;
    case 63u: goto L_088142E0;
    case 64u: goto L_088142EC;
    case 65u: goto L_088142F4;
    case 66u: goto L_08814304;
    case 67u: goto L_08814310;
    case 68u: goto L_08814318;
    case 69u: goto L_08814338;
    case 70u: goto L_0881435C;
    case 71u: goto L_0881436C;
    case 72u: goto L_08814374;
    case 73u: goto L_0881437C;
    case 74u: goto L_08814384;
    case 75u: goto L_08814390;
    case 76u: goto L_08814394;
    case 77u: goto L_088143AC;
    case 78u: goto L_088143C0;
    case 79u: goto L_088143D4;
    case 80u: goto L_088143DC;
    case 81u: goto L_088143E4;
    case 82u: goto L_088143EC;
    case 83u: goto L_088143F8;
    case 84u: goto L_08814404;
    case 85u: goto L_0881440C;
    case 86u: goto L_0881441C;
    case 87u: goto L_08814424;
    case 88u: goto L_08814430;
    case 89u: goto L_08814440;
    case 90u: goto L_08814448;
    case 91u: goto L_08814450;
    case 92u: goto L_08814458;
    case 93u: goto L_08814460;
    case 94u: goto L_08814468;
    case 95u: goto L_08814480;
    case 96u: goto L_08814488;
    case 97u: goto L_088144A4;
    case 98u: goto L_088144AC;
    case 99u: goto L_088144BC;
    case 100u: goto L_088144C4;
    case 101u: goto L_088144D4;
    case 102u: goto L_088144E0;
    case 103u: goto L_08814500;
    case 104u: goto L_0881450C;
    case 105u: goto L_08814518;
    case 106u: goto L_08814520;
    case 107u: goto L_08814530;
    case 108u: goto L_08814538;
    case 109u: goto L_08814540;
    case 110u: goto L_08814548;
    case 111u: goto L_08814554;
    case 112u: goto L_0881455C;
    case 113u: goto L_08814568;
    case 114u: goto L_08814594;
    case 115u: goto L_0881459C;
    case 116u: goto L_088145A4;
    case 117u: goto L_088145B0;
    case 118u: goto L_088145B8;
    case 119u: goto L_088145C4;
    case 120u: goto L_088145CC;
    case 121u: goto L_088145D8;
    case 122u: goto L_08814604;
    case 123u: goto L_0881460C;
    case 124u: goto L_08814614;
    case 125u: goto L_08814624;
    case 126u: goto L_0881462C;
    case 127u: goto L_08814638;
    case 128u: goto L_08814658;
    case 129u: goto L_08814660;
    case 130u: goto L_08814668;
    case 131u: goto L_08814674;
    case 132u: goto L_08814690;
    case 133u: goto L_0881469C;
    case 134u: goto L_088146A4;
    case 135u: goto L_088146AC;
    case 136u: goto L_088146B4;
    case 137u: goto L_088146BC;
    case 138u: goto L_088146C4;
    case 139u: goto L_088146CC;
    case 140u: goto L_088146D4;
    case 141u: goto L_088146DC;
    case 142u: goto L_088146F0;
    case 143u: goto L_08814714;
    case 144u: goto L_0881472C;
    case 145u: goto L_08814740;
    case 146u: goto L_0881474C;
    case 147u: goto L_08814758;
    case 148u: goto L_0881476C;
    case 149u: goto L_08814778;
    case 150u: goto L_0881478C;
    case 151u: goto L_08814794;
    case 152u: goto L_088147A8;
    case 153u: goto L_088147BC;
    case 154u: goto L_088147C8;
    case 155u: goto L_088147DC;
    case 156u: goto L_088147E8;
    case 157u: goto L_08814804;
    case 158u: goto L_08814810;
    case 159u: goto L_0881481C;
    case 160u: goto L_0881482C;
    case 161u: goto L_08814838;
    case 162u: goto L_08814848;
    case 163u: goto L_08814850;
    case 164u: goto L_08814860;
    case 165u: goto L_08814874;
    case 166u: goto L_08814880;
    case 167u: goto L_08814894;
    case 168u: goto L_088148AC;
    case 169u: goto L_088148B4;
    case 170u: goto L_088148C8;
    case 171u: goto L_088148D0;
    case 172u: goto L_088148D8;
    case 173u: goto L_088148E0;
    case 174u: goto L_088148E8;
    case 175u: goto L_088148FC;
    case 176u: goto L_08814914;
    case 177u: goto L_08814928;
    case 178u: goto L_0881493C;
    case 179u: goto L_08814944;
    case 180u: goto L_0881495C;
    case 181u: goto L_08814970;
    case 182u: goto L_0881497C;
    case 183u: goto L_0881498C;
    case 184u: goto L_088149A4;
    case 185u: goto L_088149C0;
    case 186u: goto L_088149D4;
    case 187u: goto L_088149DC;
    case 188u: goto L_088149EC;
    case 189u: goto L_088149F4;
    case 190u: goto L_08814A00;
    case 191u: goto L_08814A08;
    case 192u: goto L_08814A10;
    case 193u: goto L_08814A18;
    case 194u: goto L_08814A20;
    case 195u: goto L_08814A28;
    case 196u: goto L_08814A30;
    case 197u: goto L_08814A44;
    case 198u: goto L_08814A5C;
    case 199u: goto L_08814A70;
    case 200u: goto L_08814A84;
    case 201u: goto L_08814A8C;
    case 202u: goto L_08814AA4;
    case 203u: goto L_08814AB8;
    case 204u: goto L_08814AC4;
    case 205u: goto L_08814AD4;
    case 206u: goto L_08814AEC;
    case 207u: goto L_08814B08;
    case 208u: goto L_08814B1C;
    case 209u: goto L_08814B24;
    case 210u: goto L_08814B30;
    case 211u: goto L_08814B38;
    case 212u: goto L_08814B40;
    case 213u: goto L_08814B48;
    case 214u: goto L_08814B54;
    case 215u: goto L_08814B70;
    case 216u: goto L_08814B8C;
    case 217u: goto L_08814B94;
    case 218u: goto L_08814BA8;
    case 219u: goto L_08814BC0;
    case 220u: goto L_08814BCC;
    case 221u: goto L_08814BD4;
    case 222u: goto L_08814BF4;
    case 223u: goto L_08814C04;
    case 224u: goto L_08814C08;
    case 225u: goto L_08814C10;
    case 226u: goto L_08814C18;
    case 227u: goto L_08814C20;
    case 228u: goto L_08814C2C;
    case 229u: goto L_08814C48;
    case 230u: goto L_08814C64;
    case 231u: goto L_08814C68;
    case 232u: goto L_08814C70;
    case 233u: goto L_08814C7C;
    case 234u: goto L_08814C8C;
    case 235u: goto L_08814C98;
    case 236u: goto L_08814CA8;
    case 237u: goto L_08814CB0;
    case 238u: goto L_08814CC8;
    case 239u: goto L_08814CD8;
    case 240u: goto L_08814CF4;
    case 241u: goto L_08814D04;
    case 242u: goto L_08814D10;
    case 243u: goto L_08814D18;
    case 244u: goto L_08814D28;
    case 245u: goto L_08814D34;
    case 246u: goto L_08814D40;
    case 247u: goto L_08814D54;
    case 248u: goto L_08814D60;
    case 249u: goto L_08814D68;
    case 250u: goto L_08814D88;
    case 251u: goto L_08814D94;
    case 252u: goto L_08814DA0;
    case 253u: goto L_08814DA8;
    case 254u: goto L_08814DC0;
    case 255u: goto L_08814DD4;
    case 256u: goto L_08814DDC;
    case 257u: goto L_08814DE8;
    case 258u: goto L_08814DF4;
    case 259u: goto L_08814E00;
    case 260u: goto L_08814E0C;
    case 261u: goto L_08814E14;
    case 262u: goto L_08814E20;
    case 263u: goto L_08814E30;
    case 264u: goto L_08814E3C;
    case 265u: goto L_08814E4C;
    case 266u: goto L_08814E54;
    case 267u: goto L_08814E64;
    case 268u: goto L_08814E6C;
    case 269u: goto L_08814E74;
    case 270u: goto L_08814E84;
    case 271u: goto L_08814E8C;
    case 272u: goto L_08814E94;
    case 273u: goto L_08814E9C;
    case 274u: goto L_08814EA4;
    case 275u: goto L_08814EC0;
    case 276u: goto L_08814EC8;
    case 277u: goto L_08814ED4;
    case 278u: goto L_08814EDC;
    case 279u: goto L_08814EE8;
    case 280u: goto L_08814F08;
    case 281u: goto L_08814F14;
    case 282u: goto L_08814F1C;
    case 283u: goto L_08814F40;
    case 284u: goto L_08814F4C;
    case 285u: goto L_08814F60;
    case 286u: goto L_08814F6C;
    case 287u: goto L_08814F90;
    case 288u: goto L_08814F98;
    case 289u: goto L_08814FA4;
    case 290u: goto L_08814FC0;
    case 291u: goto L_08814FEC;
    case 292u: goto L_08815024;
    case 293u: goto L_08815034;
    case 294u: goto L_08815058;
    case 295u: goto L_08815070;
    case 296u: goto L_08815090;
    case 297u: goto L_088150B4;
    case 298u: goto L_088150DC;
    case 299u: goto L_088150F0;
    case 300u: goto L_0881511C;
    case 301u: goto L_08815124;
    case 302u: goto L_08815130;
    case 303u: goto L_0881513C;
    case 304u: goto L_0881515C;
    case 305u: goto L_08815178;
    case 306u: goto L_08815180;
    case 307u: goto L_08815184;
    case 308u: goto L_08815190;
    case 309u: goto L_088151A4;
    case 310u: goto L_088151B8;
    case 311u: goto L_088151C8;
    case 312u: goto L_088151D4;
    case 313u: goto L_088151F4;
    case 314u: goto L_08815204;
    case 315u: goto L_0881520C;
    case 316u: goto L_0881521C;
    case 317u: goto L_08815228;
    case 318u: goto L_08815238;
    case 319u: goto L_08815248;
    case 320u: goto L_08815278;
    case 321u: goto L_088152A0;
    case 322u: goto L_088152AC;
    case 323u: goto L_088152C4;
    case 324u: goto L_088152D0;
    case 325u: goto L_088152DC;
    case 326u: goto L_088152F0;
    case 327u: goto L_088152F8;
    case 328u: goto L_0881530C;
    case 329u: goto L_08815320;
    case 330u: goto L_08815324;
    case 331u: goto L_0881532C;
    case 332u: goto L_08815338;
    case 333u: goto L_08815340;
    case 334u: goto L_0881534C;
    case 335u: goto L_08815354;
    case 336u: goto L_08815360;
    case 337u: goto L_0881537C;
    case 338u: goto L_0881538C;
    case 339u: goto L_08815394;
    case 340u: goto L_088153A0;
    case 341u: goto L_088153BC;
    case 342u: goto L_088153CC;
    case 343u: goto L_088153D4;
    case 344u: goto L_088153E0;
    case 345u: goto L_088153FC;
    case 346u: goto L_08815408;
    case 347u: goto L_08815410;
    case 348u: goto L_08815418;
    case 349u: goto L_08815420;
    case 350u: goto L_08815434;
    case 351u: goto L_08815440;
    case 352u: goto L_08815444;
    case 353u: goto L_08815458;
    case 354u: goto L_08815460;
    case 355u: goto L_08815478;
    case 356u: goto L_08815480;
    case 357u: goto L_08815490;
    case 358u: goto L_08815498;
    case 359u: goto L_088154A0;
    case 360u: goto L_088154B4;
    case 361u: goto L_088154BC;
    case 362u: goto L_088154C0;
    case 363u: goto L_088154C8;
    case 364u: goto L_088154D0;
    case 365u: goto L_088154E4;
    case 366u: goto L_088154EC;
    case 367u: goto L_088154F8;
    case 368u: goto L_08815508;
    case 369u: goto L_08815510;
    case 370u: goto L_08815538;
    case 371u: goto L_08815554;
    case 372u: goto L_08815564;
    case 373u: goto L_08815570;
    case 374u: goto L_08815584;
    case 375u: goto L_08815594;
    case 376u: goto L_088155A0;
    case 377u: goto L_088155B0;
    case 378u: goto L_088155C0;
    case 379u: goto L_088155CC;
    case 380u: goto L_088155D8;
    case 381u: goto L_088155F0;
    case 382u: goto L_08815600;
    case 383u: goto L_08815610;
    case 384u: goto L_08815618;
    case 385u: goto L_08815620;
    case 386u: goto L_08815628;
    case 387u: goto L_08815648;
    case 388u: goto L_08815650;
    case 389u: goto L_08815670;
    case 390u: goto L_088156AC;
    case 391u: goto L_088156BC;
    case 392u: goto L_088156EC;
    case 393u: goto L_08815700;
    case 394u: goto L_08815708;
    case 395u: goto L_08815744;
    case 396u: goto L_08815754;
    case 397u: goto L_08815784;
    case 398u: goto L_08815798;
    case 399u: goto L_0881579C;
    case 400u: goto L_088157C8;
    case 401u: goto L_088157D0;
    case 402u: goto L_088157DC;
    case 403u: goto L_088157E4;
    case 404u: goto L_088157F0;
    case 405u: goto L_088157F8;
    case 406u: goto L_08815818;
    case 407u: goto L_0881582C;
    case 408u: goto L_08815838;
    case 409u: goto L_08815840;
    case 410u: goto L_08815854;
    case 411u: goto L_08815860;
    case 412u: goto L_08815868;
    case 413u: goto L_08815888;
    case 414u: goto L_0881589C;
    case 415u: goto L_088158A8;
    case 416u: goto L_088158B0;
    case 417u: goto L_088158C4;
    case 418u: goto L_088158D0;
    case 419u: goto L_088158E4;
    case 420u: goto L_08815900;
    case 421u: goto L_0881590C;
    case 422u: goto L_08815914;
    case 423u: goto L_08815928;
    case 424u: goto L_08815938;
    case 425u: goto L_08815950;
    case 426u: goto L_08815958;
    case 427u: goto L_08815974;
    case 428u: goto L_08815984;
    case 429u: goto L_0881599C;
    case 430u: goto L_088159A4;
    case 431u: goto L_088159C4;
    case 432u: goto L_088159E0;
    case 433u: goto L_088159EC;
    case 434u: goto L_088159F4;
    case 435u: goto L_08815A08;
    case 436u: goto L_08815A20;
    case 437u: goto L_08815A28;
    case 438u: goto L_08815A44;
    case 439u: goto L_08815A5C;
    case 440u: goto L_08815A6C;
    case 441u: goto L_08815A84;
    case 442u: goto L_08815A90;
    case 443u: goto L_08815AA8;
    case 444u: goto L_08815AB4;
    case 445u: goto L_08815ACC;
    case 446u: goto L_08815AD8;
    case 447u: goto L_08815AF0;
    case 448u: goto L_08815AFC;
    case 449u: goto L_08815B04;
    case 450u: goto L_08815B10;
    case 451u: goto L_08815B18;
    case 452u: goto L_08815B28;
    case 453u: goto L_08815B3C;
    case 454u: goto L_08815B44;
    case 455u: goto L_08815B50;
    case 456u: goto L_08815B58;
    case 457u: goto L_08815B74;
    case 458u: goto L_08815B7C;
    case 459u: goto L_08815B8C;
    case 460u: goto L_08815B94;
    case 461u: goto L_08815BA4;
    case 462u: goto L_08815BAC;
    case 463u: goto L_08815BBC;
    case 464u: goto L_08815BC4;
    case 465u: goto L_08815BCC;
    case 466u: goto L_08815BD4;
    case 467u: goto L_08815BF0;
    case 468u: goto L_08815C08;
    case 469u: goto L_08815C20;
    case 470u: goto L_08815C38;
    case 471u: goto L_08815C4C;
    case 472u: goto L_08815C58;
    case 473u: goto L_08815C5C;
    case 474u: goto L_08815C74;
    case 475u: goto L_08815C84;
    case 476u: goto L_08815C98;
    case 477u: goto L_08815CA0;
    case 478u: goto L_08815CBC;
    case 479u: goto L_08815CC4;
    case 480u: goto L_08815CE4;
    case 481u: goto L_08815D30;
    case 482u: goto L_08815D40;
    case 483u: goto L_08815D58;
    case 484u: goto L_08815D90;
    case 485u: goto L_08815D98;
    case 486u: goto L_08815DA4;
    case 487u: goto L_08815DD8;
    case 488u: goto L_08815DE0;
    case 489u: goto L_08815DE8;
    case 490u: goto L_08815DFC;
    case 491u: goto L_08815E00;
    case 492u: goto L_08815E0C;
    case 493u: goto L_08815E14;
    case 494u: goto L_08815E38;
    case 495u: goto L_08815E44;
    case 496u: goto L_08815E5C;
    case 497u: goto L_08815E64;
    case 498u: goto L_08815E88;
    case 499u: goto L_08815E94;
    case 500u: goto L_08815EBC;
    case 501u: goto L_08815EC8;
    case 502u: goto L_08815ED0;
    case 503u: goto L_08815EDC;
    case 504u: goto L_08815EE8;
    case 505u: goto L_08815F00;
    case 506u: goto L_08815F10;
    case 507u: goto L_08815F1C;
    case 508u: goto L_08815F28;
    case 509u: goto L_08815F3C;
    case 510u: goto L_08815F58;
    case 511u: goto L_08815F64;
    case 512u: goto L_08815F6C;
    case 513u: goto L_08815F74;
    case 514u: goto L_08815F8C;
    case 515u: goto L_08815F9C;
    case 516u: goto L_08815FA8;
    case 517u: goto L_08815FB8;
    case 518u: goto L_08815FC8;
    case 519u: goto L_08815FDC;
    case 520u: goto L_08815FE8;
    case 521u: goto L_08815FF0;
    case 522u: goto L_08815FFC;
    case 523u: goto L_0881600C;
    case 524u: goto L_08816024;
    case 525u: goto L_08816030;
    case 526u: goto L_08816040;
    case 527u: goto L_08816058;
    case 528u: goto L_08816060;
    case 529u: goto L_08816070;
    case 530u: goto L_08816084;
    case 531u: goto L_08816094;
    case 532u: goto L_088160A4;
    case 533u: goto L_088160B4;
    case 534u: goto L_088160BC;
    case 535u: goto L_088160CC;
    case 536u: goto L_088160E4;
    case 537u: goto L_088160F4;
    case 538u: goto L_08816104;
    case 539u: goto L_08816114;
    case 540u: goto L_08816124;
    case 541u: goto L_08816134;
    case 542u: goto L_08816144;
    case 543u: goto L_0881618C;
    case 544u: goto L_088161CC;
    case 545u: goto L_088161D4;
    case 546u: goto L_08816204;
    case 547u: goto L_08816228;
    case 548u: goto L_08816230;
    case 549u: goto L_08816250;
    case 550u: goto L_08816258;
    case 551u: goto L_08816260;
    case 552u: goto L_0881626C;
    case 553u: goto L_0881627C;
    case 554u: goto L_08816294;
    case 555u: goto L_088162AC;
    case 556u: goto L_088162C0;
    case 557u: goto L_088162C8;
    case 558u: goto L_088162D0;
    case 559u: goto L_088162F4;
    case 560u: goto L_08816300;
    case 561u: goto L_08816308;
    case 562u: goto L_08816370;
    case 563u: goto L_08816384;
    case 564u: goto L_08816390;
    case 565u: goto L_08816398;
    case 566u: goto L_088163A4;
    case 567u: goto L_088163AC;
    case 568u: goto L_088163CC;
    case 569u: goto L_088163DC;
    case 570u: goto L_088163EC;
    case 571u: goto L_08816400;
    case 572u: goto L_0881641C;
    case 573u: goto L_08816424;
    case 574u: goto L_0881642C;
    case 575u: goto L_0881644C;
    case 576u: goto L_08816454;
    case 577u: goto L_0881645C;
    case 578u: goto L_08816474;
    case 579u: goto L_0881647C;
    case 580u: goto L_08816484;
    case 581u: goto L_0881649C;
    case 582u: goto L_088164A4;
    case 583u: goto L_088164C0;
    case 584u: goto L_088164CC;
    case 585u: goto L_088164DC;
    case 586u: goto L_088164EC;
    case 587u: goto L_088164F8;
    case 588u: goto L_08816508;
    case 589u: goto L_08816518;
    case 590u: goto L_08816524;
    case 591u: goto L_0881652C;
    case 592u: goto L_08816540;
    case 593u: goto L_08816550;
    case 594u: goto L_0881655C;
    case 595u: goto L_08816598;
    case 596u: goto L_088165A0;
    case 597u: goto L_088165BC;
    case 598u: goto L_088165C4;
    case 599u: goto L_088165CC;
    case 600u: goto L_088165D8;
    case 601u: goto L_088165E0;
    case 602u: goto L_088165E8;
    case 603u: goto L_088165F4;
    case 604u: goto L_08816600;
    case 605u: goto L_0881660C;
    case 606u: goto L_08816614;
    case 607u: goto L_0881661C;
    case 608u: goto L_0881663C;
    case 609u: goto L_08816640;
    case 610u: goto L_08816648;
    case 611u: goto L_08816664;
    case 612u: goto L_08816668;
    case 613u: goto L_08816670;
    case 614u: goto L_08816674;
    case 615u: goto L_0881667C;
    case 616u: goto L_08816688;
    case 617u: goto L_08816690;
    case 618u: goto L_0881669C;
    case 619u: goto L_088166A8;
    case 620u: goto L_088166B8;
    case 621u: goto L_088166C4;
    case 622u: goto L_088166D0;
    case 623u: goto L_088166D4;
    case 624u: goto L_088166FC;
    case 625u: goto L_08816704;
    case 626u: goto L_0881670C;
    case 627u: goto L_08816730;
    case 628u: goto L_08816754;
    case 629u: goto L_0881678C;
    case 630u: goto L_088167DC;
    case 631u: goto L_088167E4;
    case 632u: goto L_088167EC;
    case 633u: goto L_088167FC;
    case 634u: goto L_08816808;
    case 635u: goto L_08816834;
    case 636u: goto L_08816844;
    case 637u: goto L_0881685C;
    case 638u: goto L_08816868;
    case 639u: goto L_08816874;
    case 640u: goto L_08816890;
    case 641u: goto L_088168A0;
    case 642u: goto L_088168B0;
    case 643u: goto L_088168C8;
    case 644u: goto L_088168D0;
    case 645u: goto L_088168E4;
    case 646u: goto L_088168F0;
    case 647u: goto L_08816914;
    case 648u: goto L_08816924;
    case 649u: goto L_08816938;
    case 650u: goto L_08816968;
    case 651u: goto L_08816970;
    case 652u: goto L_08816978;
    case 653u: goto L_08816980;
    case 654u: goto L_08816994;
    case 655u: goto L_088169A0;
    case 656u: goto L_088169C4;
    case 657u: goto L_088169D4;
    case 658u: goto L_088169E8;
    case 659u: goto L_08816A18;
    case 660u: goto L_08816A20;
    case 661u: goto L_08816A34;
    case 662u: goto L_08816A40;
    case 663u: goto L_08816A64;
    case 664u: goto L_08816A74;
    case 665u: goto L_08816A88;
    case 666u: goto L_08816AB8;
    case 667u: goto L_08816AC8;
    case 668u: goto L_08816AD0;
    case 669u: goto L_08816AD8;
    case 670u: goto L_08816AE4;
    case 671u: goto L_08816AF8;
    case 672u: goto L_08816B00;
    case 673u: goto L_08816B10;
    case 674u: goto L_08816B1C;
    case 675u: goto L_08816B28;
    case 676u: goto L_08816B4C;
    case 677u: goto L_08816B58;
    case 678u: goto L_08816B68;
    case 679u: goto L_08816B74;
    case 680u: goto L_08816B7C;
    case 681u: goto L_08816B8C;
    case 682u: goto L_08816B94;
    case 683u: goto L_08816BA0;
    case 684u: goto L_08816BBC;
    case 685u: goto L_08816BC8;
    case 686u: goto L_08816BD8;
    case 687u: goto L_08816BE4;
    case 688u: goto L_08816BEC;
    case 689u: goto L_08816BFC;
    case 690u: goto L_08816C04;
    case 691u: goto L_08816C10;
    case 692u: goto L_08816C2C;
    case 693u: goto L_08816C38;
    case 694u: goto L_08816C48;
    case 695u: goto L_08816C54;
    case 696u: goto L_08816C5C;
    case 697u: goto L_08816C6C;
    case 698u: goto L_08816C74;
    case 699u: goto L_08816C80;
    case 700u: goto L_08816C9C;
    case 701u: goto L_08816CA8;
    case 702u: goto L_08816CB8;
    case 703u: goto L_08816CC4;
    case 704u: goto L_08816CD0;
    case 705u: goto L_08816CDC;
    case 706u: goto L_08816CF4;
    case 707u: goto L_08816CFC;
    case 708u: goto L_08816D08;
    case 709u: goto L_08816D10;
    case 710u: goto L_08816D18;
    case 711u: goto L_08816D20;
    case 712u: goto L_08816D2C;
    case 713u: goto L_08816D34;
    case 714u: goto L_08816D40;
    case 715u: goto L_08816D50;
    case 716u: goto L_08816D60;
    case 717u: goto L_08816D64;
    case 718u: goto L_08816D74;
    case 719u: goto L_08816D98;
    case 720u: goto L_08816DA4;
    case 721u: goto L_08816DB0;
    case 722u: goto L_08816DC8;
    case 723u: goto L_08816DD0;
    case 724u: goto L_08816DD8;
    case 725u: goto L_08816DE0;
    case 726u: goto L_08816DE8;
    case 727u: goto L_08816DF0;
    case 728u: goto L_08816E08;
    case 729u: goto L_08816E10;
    case 730u: goto L_08816E2C;
    case 731u: goto L_08816E38;
    case 732u: goto L_08816E60;
    case 733u: goto L_08816E70;
    case 734u: goto L_08816E88;
    case 735u: goto L_08816EB0;
    case 736u: goto L_08816EB8;
    case 737u: goto L_08816EC4;
    case 738u: goto L_08816EDC;
    case 739u: goto L_08816EEC;
    case 740u: goto L_08816F08;
    case 741u: goto L_08816F30;
    case 742u: goto L_08816F44;
    case 743u: goto L_08816F50;
    case 744u: goto L_08816F70;
    case 745u: goto L_08816F80;
    case 746u: goto L_08816F94;
    case 747u: goto L_08816FBC;
    case 748u: goto L_08816FD8;
    case 749u: goto L_08816FEC;
    case 750u: goto L_08816FF8;
    case 751u: goto L_08817004;
    case 752u: goto L_08817010;
    case 753u: goto L_08817038;
    case 754u: goto L_08817040;
    case 755u: goto L_0881704C;
    case 756u: goto L_08817054;
    case 757u: goto L_0881705C;
    case 758u: goto L_08817064;
    case 759u: goto L_0881707C;
    case 760u: goto L_08817098;
    case 761u: goto L_088170A4;
    case 762u: goto L_088170B0;
    case 763u: goto L_088170D0;
    case 764u: goto L_088170E0;
    case 765u: goto L_088170F4;
    case 766u: goto L_0881711C;
    case 767u: goto L_0881713C;
    case 768u: goto L_08817150;
    case 769u: goto L_0881715C;
    case 770u: goto L_08817168;
    case 771u: goto L_08817174;
    case 772u: goto L_0881719C;
    case 773u: goto L_088171A4;
    case 774u: goto L_088171AC;
    case 775u: goto L_088171C4;
    case 776u: goto L_088171E0;
    case 777u: goto L_088171EC;
    case 778u: goto L_088171F8;
    case 779u: goto L_08817218;
    case 780u: goto L_08817228;
    case 781u: goto L_0881723C;
    case 782u: goto L_08817264;
    case 783u: goto L_08817284;
    case 784u: goto L_08817298;
    case 785u: goto L_088172A4;
    case 786u: goto L_088172B0;
    case 787u: goto L_088172BC;
    case 788u: goto L_088172E4;
    case 789u: goto L_088172EC;
    case 790u: goto L_088172F4;
    case 791u: goto L_0881730C;
    case 792u: goto L_08817324;
    case 793u: goto L_08817334;
    case 794u: goto L_08817340;
    case 795u: goto L_08817360;
    case 796u: goto L_08817374;
    case 797u: goto L_08817380;
    case 798u: goto L_0881738C;
    case 799u: goto L_08817398;
    case 800u: goto L_088173C0;
    case 801u: goto L_088173CC;
    case 802u: goto L_088173D8;
    case 803u: goto L_088173F8;
    case 804u: goto L_08817400;
    case 805u: goto L_08817420;
    case 806u: goto L_08817430;
    case 807u: goto L_0881743C;
    case 808u: goto L_08817448;
    case 809u: goto L_08817454;
    case 810u: goto L_08817460;
    case 811u: goto L_0881746C;
    case 812u: goto L_08817478;
    case 813u: goto L_08817484;
    case 814u: goto L_08817490;
    case 815u: goto L_0881749C;
    case 816u: goto L_088174B4;
    case 817u: goto L_088174C0;
    case 818u: goto L_088174D0;
    case 819u: goto L_088174E0;
    case 820u: goto L_088174EC;
    case 821u: goto L_088174FC;
    case 822u: goto L_0881750C;
    case 823u: goto L_08817514;
    case 824u: goto L_08817520;
    case 825u: goto L_08817528;
    case 826u: goto L_08817530;
    case 827u: goto L_08817548;
    case 828u: goto L_08817558;
    case 829u: goto L_08817564;
    case 830u: goto L_08817578;
    case 831u: goto L_08817588;
    case 832u: goto L_08817594;
    case 833u: goto L_0881759C;
    case 834u: goto L_088175B4;
    case 835u: goto L_088175C4;
    case 836u: goto L_088175D0;
    case 837u: goto L_088175E4;
    case 838u: goto L_088175F4;
    case 839u: goto L_08817600;
    case 840u: goto L_08817610;
    case 841u: goto L_0881761C;
    case 842u: goto L_08817638;
    case 843u: goto L_08817660;
    case 844u: goto L_08817684;
    case 845u: goto L_08817694;
    case 846u: goto L_088176A0;
    case 847u: goto L_088176BC;
    case 848u: goto L_088176E4;
    case 849u: goto L_08817708;
    case 850u: goto L_08817720;
    case 851u: goto L_0881772C;
    case 852u: goto L_08817750;
    case 853u: goto L_0881777C;
    case 854u: goto L_08817784;
    case 855u: goto L_08817790;
    case 856u: goto L_088177A4;
    case 857u: goto L_088177CC;
    case 858u: goto L_088177DC;
    case 859u: goto L_088177E8;
    case 860u: goto L_088177F4;
    case 861u: goto L_08817808;
    case 862u: goto L_08817814;
    case 863u: goto L_08817824;
    case 864u: goto L_0881782C;
    case 865u: goto L_08817834;
    case 866u: goto L_0881783C;
    case 867u: goto L_08817844;
    case 868u: goto L_0881784C;
    case 869u: goto L_0881785C;
    case 870u: goto L_08817868;
    case 871u: goto L_08817888;
    case 872u: goto L_08817898;
    case 873u: goto L_088178A8;
    case 874u: goto L_088178BC;
    case 875u: goto L_088178E4;
    case 876u: goto L_088178F8;
    case 877u: goto L_08817908;
    case 878u: goto L_08817914;
    case 879u: goto L_08817924;
    case 880u: goto L_0881792C;
    case 881u: goto L_08817938;
    case 882u: goto L_08817954;
    case 883u: goto L_0881795C;
    case 884u: goto L_0881796C;
    case 885u: goto L_08817978;
    case 886u: goto L_08817998;
    case 887u: goto L_088179A8;
    case 888u: goto L_088179B8;
    case 889u: goto L_088179CC;
    case 890u: goto L_088179F4;
    case 891u: goto L_08817A08;
    case 892u: goto L_08817A18;
    case 893u: goto L_08817A24;
    case 894u: goto L_08817A34;
    case 895u: goto L_08817A3C;
    case 896u: goto L_08817A48;
    case 897u: goto L_08817A64;
    case 898u: goto L_08817A6C;
    case 899u: goto L_08817A7C;
    case 900u: goto L_08817A88;
    case 901u: goto L_08817AA8;
    case 902u: goto L_08817AB8;
    case 903u: goto L_08817AC8;
    case 904u: goto L_08817ADC;
    case 905u: goto L_08817B04;
    case 906u: goto L_08817B18;
    case 907u: goto L_08817B28;
    case 908u: goto L_08817B34;
    case 909u: goto L_08817B44;
    case 910u: goto L_08817B4C;
    case 911u: goto L_08817B58;
    case 912u: goto L_08817B74;
    case 913u: goto L_08817B84;
    case 914u: goto L_08817B8C;
    case 915u: goto L_08817B94;
    case 916u: goto L_08817B9C;
    case 917u: goto L_08817BA4;
    case 918u: goto L_08817BAC;
    case 919u: goto L_08817BBC;
    case 920u: goto L_08817BC8;
    case 921u: goto L_08817BE8;
    case 922u: goto L_08817BF8;
    case 923u: goto L_08817C08;
    case 924u: goto L_08817C1C;
    case 925u: goto L_08817C44;
    case 926u: goto L_08817C58;
    case 927u: goto L_08817C68;
    case 928u: goto L_08817C74;
    case 929u: goto L_08817C84;
    case 930u: goto L_08817C8C;
    case 931u: goto L_08817C98;
    case 932u: goto L_08817CB4;
    case 933u: goto L_08817CBC;
    case 934u: goto L_08817CCC;
    case 935u: goto L_08817CD8;
    case 936u: goto L_08817CF8;
    case 937u: goto L_08817D08;
    case 938u: goto L_08817D18;
    case 939u: goto L_08817D2C;
    case 940u: goto L_08817D54;
    case 941u: goto L_08817D68;
    case 942u: goto L_08817D78;
    case 943u: goto L_08817D84;
    case 944u: goto L_08817D94;
    case 945u: goto L_08817D9C;
    case 946u: goto L_08817DA8;
    case 947u: goto L_08817DC4;
    case 948u: goto L_08817DCC;
    case 949u: goto L_08817DDC;
    case 950u: goto L_08817DE8;
    case 951u: goto L_08817E08;
    case 952u: goto L_08817E18;
    case 953u: goto L_08817E28;
    case 954u: goto L_08817E3C;
    case 955u: goto L_08817E64;
    case 956u: goto L_08817E78;
    case 957u: goto L_08817E88;
    case 958u: goto L_08817E94;
    case 959u: goto L_08817EA4;
    case 960u: goto L_08817EAC;
    case 961u: goto L_08817EB8;
    case 962u: goto L_08817ED4;
    case 963u: goto L_08817EDC;
    case 964u: goto L_08817EE4;
    case 965u: goto L_08817EEC;
    case 966u: goto L_08817EF4;
    case 967u: goto L_08817F00;
    case 968u: goto L_08817F08;
    case 969u: goto L_08817F20;
    case 970u: goto L_08817F40;
    case 971u: goto L_08817F48;
    case 972u: goto L_08817F50;
    case 973u: goto L_08817F58;
    case 974u: goto L_08817F60;
    case 975u: goto L_08817F78;
    case 976u: goto L_08817FA4;
    case 977u: goto L_08817FB8;
    case 978u: goto L_08817FCC;
    case 979u: goto L_08817FE0;
    case 980u: goto L_08817FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08814000:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-984));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2476)));
    goto L_0881400C;
L_0881400C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08814038;
      }
      goto L_08814028;
    }
L_08814028:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1528)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    goto L_08814038;
L_08814038:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    if (ctx.gpr[5] != ctx.gpr[9]) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1476)));
        goto L_0881405C;
    }
    goto L_08814044;
L_08814044:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1476)));
        goto L_0881405C;
    }
    goto L_08814054;
L_08814054:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1476), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881406C;
      }
      goto L_0881405C;
    }
L_0881405C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1476), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0881406C;
L_0881406C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881400C;
      }
      goto L_08814080;
    }
L_08814080:
    ctx.gpr[31] = (0x08814088u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08814088u) goto L_08814088;
    return;
L_08814088:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814220;
      }
      goto L_08814090;
    }
L_08814090:
    ctx.gpr[31] = (0x08814098u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 833u, 0x0889FDA4u>(ctx, &aot_mem) && ctx.pc == 0x08814098u) goto L_08814098;
    return;
L_08814098:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088141C4;
      }
      goto L_088140A0;
    }
L_088140A0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25184));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(146)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(138)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881414C;
      }
      goto L_088140BC;
    }
L_088140BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(146)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
        goto L_088140E0;
    }
    goto L_088140CC;
L_088140CC:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088140E4;
      }
      goto L_088140E0;
    }
L_088140E0:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088140E4;
L_088140E4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(138)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814144;
      }
      goto L_088140F0;
    }
L_088140F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(146)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
        goto L_08814114;
    }
    goto L_08814100;
L_08814100:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08814118;
      }
      goto L_08814114;
    }
L_08814114:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08814118;
L_08814118:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(138)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814144;
      }
      goto L_08814124;
    }
L_08814124:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(680), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881413C;
      }
      goto L_08814134;
    }
L_08814134:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08814238;
      }
      goto L_0881413C;
    }
L_0881413C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08814238;
      }
      goto L_08814144;
    }
L_08814144:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(680), 0u);
      if (branch_taken) {
          goto L_08814238;
      }
      goto L_0881414C;
    }
L_0881414C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(146)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
        goto L_08814170;
    }
    goto L_0881415C;
L_0881415C:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08814174;
      }
      goto L_08814170;
    }
L_08814170:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08814174;
L_08814174:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(138)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088141BC;
      }
      goto L_08814180;
    }
L_08814180:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(146)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
        goto L_088141A4;
    }
    goto L_08814190;
L_08814190:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088141A8;
      }
      goto L_088141A4;
    }
L_088141A4:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088141A8;
L_088141A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(138)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088141BC;
      }
      goto L_088141B4;
    }
L_088141B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(680), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08814238;
      }
      goto L_088141BC;
    }
L_088141BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(680), 0u);
      if (branch_taken) {
          goto L_08814238;
      }
      goto L_088141C4;
    }
L_088141C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08814238;
      }
      goto L_088141D4;
    }
L_088141D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(16174)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814238;
      }
      goto L_088141E0;
    }
L_088141E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2488)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814238;
      }
      goto L_088141EC;
    }
L_088141EC:
    ctx.gpr[31] = (0x088141F4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 452u, 0x08AFA094u>(ctx, &aot_mem) && ctx.pc == 0x088141F4u) goto L_088141F4;
    return;
L_088141F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814238;
      }
      goto L_088141FC;
    }
L_088141FC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08814208u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25184));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1016u, 0x08A97C88u>(ctx, &aot_mem) && ctx.pc == 0x08814208u) goto L_08814208;
    return;
L_08814208:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814218;
      }
      goto L_08814210;
    }
L_08814210:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(680), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08814238;
      }
      goto L_08814218;
    }
L_08814218:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(680), 0u);
      if (branch_taken) {
          goto L_08814238;
      }
      goto L_08814220;
    }
L_08814220:
    ctx.gpr[31] = (0x08814228u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 452u, 0x08AFA094u>(ctx, &aot_mem) && ctx.pc == 0x08814228u) goto L_08814228;
    return;
L_08814228:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814238;
      }
      goto L_08814230;
    }
L_08814230:
    ctx.gpr[31] = (0x08814238u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 314u, 0x0880AC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08814238u) goto L_08814238;
    return;
L_08814238:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08814244u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08814244u) goto L_08814244;
    return;
L_08814244:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2u << 16u);
      if (branch_taken) {
          goto L_08814274;
      }
      goto L_0881424C;
    }
L_0881424C:
    ctx.gpr[31] = (0x08814254u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08814254u) goto L_08814254;
    return;
L_08814254:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08814274;
      }
      goto L_08814260;
    }
L_08814260:
    ctx.gpr[31] = (0x08814268u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08814268u) goto L_08814268;
    return;
L_08814268:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08814B94;
      }
      goto L_08814274;
    }
L_08814274:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[17] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08814290;
      }
      goto L_08814284;
    }
L_08814284:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16173)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088142F4;
      }
      goto L_08814290;
    }
L_08814290:
    ctx.gpr[31] = (0x08814298u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 288u, 0x0880AA64u>(ctx, &aot_mem) && ctx.pc == 0x08814298u) goto L_08814298;
    return;
L_08814298:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088142F4;
      }
      goto L_088142A8;
    }
L_088142A8:
    ctx.gpr[31] = (0x088142B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x088142B0u) goto L_088142B0;
    return;
L_088142B0:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088142F4;
      }
      goto L_088142C0;
    }
L_088142C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088142E0;
      }
      goto L_088142CC;
    }
L_088142CC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088142D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 427u, 0x088A2208u>(ctx, &aot_mem) && ctx.pc == 0x088142D8u) goto L_088142D8;
    return;
L_088142D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08814C68;
      }
      goto L_088142E0;
    }
L_088142E0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088142ECu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 427u, 0x088A2208u>(ctx, &aot_mem) && ctx.pc == 0x088142ECu) goto L_088142EC;
    return;
L_088142EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08814C68;
      }
      goto L_088142F4;
    }
L_088142F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-955));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08814318;
      }
      goto L_08814304;
    }
L_08814304:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814310u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 427u, 0x088A2208u>(ctx, &aot_mem) && ctx.pc == 0x08814310u) goto L_08814310;
    return;
L_08814310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08814C68;
      }
      goto L_08814318;
    }
L_08814318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(721)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814C68;
      }
      goto L_08814338;
    }
L_08814338:
    ctx.gpr[4] = (15969u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 212u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (0u | 213u);
      if (branch_taken) {
          goto L_088143C0;
      }
      goto L_0881435C;
    }
L_0881435C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088143C0;
      }
      goto L_0881436C;
    }
L_0881436C:
    ctx.gpr[31] = (0x08814374u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08814374u) goto L_08814374;
    return;
L_08814374:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    ctx.gpr[4] = (15172u << 16u);
      if (branch_taken) {
          goto L_08814394;
      }
      goto L_0881437C;
    }
L_0881437C:
    ctx.gpr[31] = (0x08814384u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08814384u) goto L_08814384;
    return;
L_08814384:
    ctx.gpr[4] = (0u | 211u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (14979u << 16u);
      if (branch_taken) {
          goto L_088143AC;
      }
      goto L_08814390;
    }
L_08814390:
    ctx.gpr[4] = (15172u << 16u);
    goto L_08814394;
L_08814394:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088143C0;
      }
      goto L_088143AC;
    }
L_088143AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088143C0;
L_088143C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088144E0;
      }
      goto L_088143D4;
    }
L_088143D4:
    ctx.gpr[31] = (0x088143DCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x088143DCu) goto L_088143DC;
    return;
L_088143DC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088143F8;
      }
      goto L_088143E4;
    }
L_088143E4:
    ctx.gpr[31] = (0x088143ECu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x088143ECu) goto L_088143EC;
    return;
L_088143EC:
    ctx.gpr[4] = (0u | 211u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881440C;
      }
      goto L_088143F8;
    }
L_088143F8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814404u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 427u, 0x088A2208u>(ctx, &aot_mem) && ctx.pc == 0x08814404u) goto L_08814404;
    return;
L_08814404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088144E0;
      }
      goto L_0881440C;
    }
L_0881440C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1728)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814440;
      }
      goto L_0881441C;
    }
L_0881441C:
    ctx.gpr[31] = (0x08814424u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08814424u) goto L_08814424;
    return;
L_08814424:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-986));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088144D4;
      }
      goto L_08814430;
    }
L_08814430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088144D4;
      }
      goto L_08814440;
    }
L_08814440:
    ctx.gpr[31] = (0x08814448u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08814448u) goto L_08814448;
    return;
L_08814448:
    ctx.gpr[31] = (0x08814450u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08814450u) goto L_08814450;
    return;
L_08814450:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088144D4;
      }
      goto L_08814458;
    }
L_08814458:
    ctx.gpr[31] = (0x08814460u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08814460u) goto L_08814460;
    return;
L_08814460:
    ctx.gpr[31] = (0x08814468u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 835u, 0x08A97400u>(ctx, &aot_mem) && ctx.pc == 0x08814468u) goto L_08814468;
    return;
L_08814468:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088144D4;
      }
      goto L_08814480;
    }
L_08814480:
    ctx.gpr[31] = (0x08814488u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x08814488u) goto L_08814488;
    return;
L_08814488:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088144D4;
      }
      goto L_088144A4;
    }
L_088144A4:
    ctx.gpr[31] = (0x088144ACu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x088144ACu) goto L_088144AC;
    return;
L_088144AC:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088144D4;
      }
      goto L_088144BC;
    }
L_088144BC:
    ctx.gpr[31] = (0x088144C4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x088144C4u) goto L_088144C4;
    return;
L_088144C4:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088144E0;
      }
      goto L_088144D4;
    }
L_088144D4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088144E0u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 427u, 0x088A2208u>(ctx, &aot_mem) && ctx.pc == 0x088144E0u) goto L_088144E0;
    return;
L_088144E0:
    ctx.gpr[4] = (15477u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 49808u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881469C;
      }
      goto L_08814500;
    }
L_08814500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881469C;
      }
      goto L_0881450C;
    }
L_0881450C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1424));
    ctx.gpr[31] = (0x08814518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 341u, 0x08AF9800u>(ctx, &aot_mem) && ctx.pc == 0x08814518u) goto L_08814518;
    return;
L_08814518:
    ctx.gpr[31] = (0x08814520u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1236)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x08814520u) goto L_08814520;
    return;
L_08814520:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08814530u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x08814530u) goto L_08814530;
    return;
L_08814530:
    ctx.gpr[31] = (0x08814538u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08814538u) goto L_08814538;
    return;
L_08814538:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08814554;
      }
      goto L_08814540;
    }
L_08814540:
    ctx.gpr[31] = (0x08814548u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08814548u) goto L_08814548;
    return;
L_08814548:
    ctx.gpr[4] = (0u | 211u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881459C;
      }
      goto L_08814554;
    }
L_08814554:
    ctx.gpr[31] = (0x0881455Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881455Cu) goto L_0881455C;
    return;
L_0881455C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1504));
    ctx.gpr[31] = (0x08814568u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08814568u) goto L_08814568;
    return;
L_08814568:
    ctx.gpr[8] = (16184u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 20972u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (16230u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 26214u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814594u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 7u, 0x088A4094u>(ctx, &aot_mem) && ctx.pc == 0x08814594u) goto L_08814594;
    return;
L_08814594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08814690;
      }
      goto L_0881459C;
    }
L_0881459C:
    ctx.gpr[31] = (0x088145A4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x088145A4u) goto L_088145A4;
    return;
L_088145A4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-985));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088145C4;
      }
      goto L_088145B0;
    }
L_088145B0:
    ctx.gpr[31] = (0x088145B8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x088145B8u) goto L_088145B8;
    return;
L_088145B8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-986));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881460C;
      }
      goto L_088145C4;
    }
L_088145C4:
    ctx.gpr[31] = (0x088145CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x088145CCu) goto L_088145CC;
    return;
L_088145CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1520));
    ctx.gpr[31] = (0x088145D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x088145D8u) goto L_088145D8;
    return;
L_088145D8:
    ctx.gpr[8] = (16548u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (16204u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814604u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 7u, 0x088A4094u>(ctx, &aot_mem) && ctx.pc == 0x08814604u) goto L_08814604;
    return;
L_08814604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08814690;
      }
      goto L_0881460C;
    }
L_0881460C:
    ctx.gpr[31] = (0x08814614u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08814614u) goto L_08814614;
    return;
L_08814614:
    ctx.gpr[4] = (16580u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08814660;
      }
      goto L_08814624;
    }
L_08814624:
    ctx.gpr[31] = (0x0881462Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881462Cu) goto L_0881462C;
    return;
L_0881462C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    ctx.gpr[31] = (0x08814638u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08814638u) goto L_08814638;
    return;
L_08814638:
    ctx.gpr[8] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814658u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 7u, 0x088A4094u>(ctx, &aot_mem) && ctx.pc == 0x08814658u) goto L_08814658;
    return;
L_08814658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08814690;
      }
      goto L_08814660;
    }
L_08814660:
    ctx.gpr[31] = (0x08814668u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x08814668u) goto L_08814668;
    return;
L_08814668:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1552));
    ctx.gpr[31] = (0x08814674u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08814674u) goto L_08814674;
    return;
L_08814674:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814690u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 7u, 0x088A4094u>(ctx, &aot_mem) && ctx.pc == 0x08814690u) goto L_08814690;
    return;
L_08814690:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881469Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 299u, 0x0880AB60u>(ctx, &aot_mem) && ctx.pc == 0x0881469Cu) goto L_0881469C;
    return;
L_0881469C:
    ctx.gpr[31] = (0x088146A4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x088146A4u) goto L_088146A4;
    return;
L_088146A4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088149EC;
      }
      goto L_088146AC;
    }
L_088146AC:
    ctx.gpr[31] = (0x088146B4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x088146B4u) goto L_088146B4;
    return;
L_088146B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088149EC;
      }
      goto L_088146BC;
    }
L_088146BC:
    ctx.gpr[31] = (0x088146C4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088146C4u) goto L_088146C4;
    return;
L_088146C4:
    ctx.gpr[31] = (0x088146CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1048u, 0x08A97DB4u>(ctx, &aot_mem) && ctx.pc == 0x088146CCu) goto L_088146CC;
    return;
L_088146CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088148C8;
      }
      goto L_088146D4;
    }
L_088146D4:
    ctx.gpr[31] = (0x088146DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x088146DCu) goto L_088146DC;
    return;
L_088146DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(636)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(350));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088148C8;
      }
      goto L_088146F0;
    }
L_088146F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2492), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2496), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2512), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2508), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[31] = (0x08814714u);
    ctx.gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 110u, 0x08850B94u>(ctx, &aot_mem) && ctx.pc == 0x08814714u) goto L_08814714;
    return;
L_08814714:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1680));
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25888));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881472Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881472Cu) goto L_0881472C;
    return;
L_0881472C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814740u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08814740u) goto L_08814740;
    return;
L_08814740:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x0881474Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881474Cu) goto L_0881474C;
    return;
L_0881474C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08814758u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x08814758u) goto L_08814758;
    return;
L_08814758:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1636));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1632));
    ctx.gpr[31] = (0x0881476Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x0881476Cu) goto L_0881476C;
    return;
L_0881476C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08814778u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08814778u) goto L_08814778;
    return;
L_08814778:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0881478Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881478Cu) goto L_0881478C;
    return;
L_0881478C:
    ctx.gpr[31] = (0x08814794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08814794u) goto L_08814794;
    return;
L_08814794:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1600));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088147A8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 269u, 0x0880A900u>(ctx, &aot_mem) && ctx.pc == 0x088147A8u) goto L_088147A8;
    return;
L_088147A8:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088147BCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x088147BCu) goto L_088147BC;
    return;
L_088147BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088147C8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x088147C8u) goto L_088147C8;
    return;
L_088147C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088147DCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 485u, 0x0885ACA8u>(ctx, &aot_mem) && ctx.pc == 0x088147DCu) goto L_088147DC;
    return;
L_088147DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088147E8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x088147E8u) goto L_088147E8;
    return;
L_088147E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1680), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08814804u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08814804u) goto L_08814804;
    return;
L_08814804:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08814810u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08814810u) goto L_08814810;
    return;
L_08814810:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0881481Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x0881481Cu) goto L_0881481C;
    return;
L_0881481C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881482Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1632));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x0881482Cu) goto L_0881482C;
    return;
L_0881482C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08814838u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08814838u) goto L_08814838;
    return;
L_08814838:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08814848u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08814848u) goto L_08814848;
    return;
L_08814848:
    ctx.gpr[31] = (0x08814850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08814850u) goto L_08814850;
    return;
L_08814850:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08814860u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 269u, 0x0880A900u>(ctx, &aot_mem) && ctx.pc == 0x08814860u) goto L_08814860;
    return;
L_08814860:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08814874u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08814874u) goto L_08814874;
    return;
L_08814874:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08814880u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08814880u) goto L_08814880;
    return;
L_08814880:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814894u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 485u, 0x0885ACA8u>(ctx, &aot_mem) && ctx.pc == 0x08814894u) goto L_08814894;
    return;
L_08814894:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2492)));
    ctx.gpr[6] = (0u | 55u);
    ctx.gpr[31] = (0x088148ACu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088148ACu) goto L_088148AC;
    return;
L_088148AC:
    ctx.gpr[31] = (0x088148B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x088148B4u) goto L_088148B4;
    return;
L_088148B4:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(636), ctx.gpr[2]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2508)));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2512)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2496)));
      if (branch_taken) {
          goto L_08814B30;
      }
      goto L_088148C8;
    }
L_088148C8:
    ctx.gpr[31] = (0x088148D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088148D0u) goto L_088148D0;
    return;
L_088148D0:
    ctx.gpr[31] = (0x088148D8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1064u, 0x08A97E3Cu>(ctx, &aot_mem) && ctx.pc == 0x088148D8u) goto L_088148D8;
    return;
L_088148D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814B30;
      }
      goto L_088148E0;
    }
L_088148E0:
    ctx.gpr[31] = (0x088148E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x088148E8u) goto L_088148E8;
    return;
L_088148E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(636)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814B30;
      }
      goto L_088148FC;
    }
L_088148FC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1752));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2492), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 35u);
    ctx.gpr[31] = (0x08814914u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 110u, 0x08850B94u>(ctx, &aot_mem) && ctx.pc == 0x08814914u) goto L_08814914;
    return;
L_08814914:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1792));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08814928u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25856));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08814928u) goto L_08814928;
    return;
L_08814928:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1712));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0881493Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x0881493Cu) goto L_0881493C;
    return;
L_0881493C:
    ctx.gpr[31] = (0x08814944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08814944u) goto L_08814944;
    return;
L_08814944:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1728));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0881495Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2496), ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 269u, 0x0880A900u>(ctx, &aot_mem) && ctx.pc == 0x0881495Cu) goto L_0881495C;
    return;
L_0881495C:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1696));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08814970u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08814970u) goto L_08814970;
    return;
L_08814970:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881497Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881497Cu) goto L_0881497C;
    return;
L_0881497C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0881498Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 775u, 0x08857EF8u>(ctx, &aot_mem) && ctx.pc == 0x0881498Cu) goto L_0881498C;
    return;
L_0881498C:
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1744));
    ctx.gpr[31] = (0x088149A4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 397u, 0x08AF9BE4u>(ctx, &aot_mem) && ctx.pc == 0x088149A4u) goto L_088149A4;
    return;
L_088149A4:
    ctx.gpr[6] = (15564u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088149C0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 278u, 0x08851A70u>(ctx, &aot_mem) && ctx.pc == 0x088149C0u) goto L_088149C0;
    return;
L_088149C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088149D4u);
    ctx.gpr[6] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088149D4u) goto L_088149D4;
    return;
L_088149D4:
    ctx.gpr[31] = (0x088149DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x088149DCu) goto L_088149DC;
    return;
L_088149DC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(636), ctx.gpr[2]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2492)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2496)));
      if (branch_taken) {
          goto L_08814B30;
      }
      goto L_088149EC;
    }
L_088149EC:
    ctx.gpr[31] = (0x088149F4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x088149F4u) goto L_088149F4;
    return;
L_088149F4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-986));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08814B30;
      }
      goto L_08814A00;
    }
L_08814A00:
    ctx.gpr[31] = (0x08814A08u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08814A08u) goto L_08814A08;
    return;
L_08814A08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08814B30;
      }
      goto L_08814A10;
    }
L_08814A10:
    ctx.gpr[31] = (0x08814A18u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08814A18u) goto L_08814A18;
    return;
L_08814A18:
    ctx.gpr[31] = (0x08814A20u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1064u, 0x08A97E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08814A20u) goto L_08814A20;
    return;
L_08814A20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814B30;
      }
      goto L_08814A28;
    }
L_08814A28:
    ctx.gpr[31] = (0x08814A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x08814A30u) goto L_08814A30;
    return;
L_08814A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(636)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814B30;
      }
      goto L_08814A44;
    }
L_08814A44:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1864));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2496), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 26u);
    ctx.gpr[31] = (0x08814A5Cu);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 110u, 0x08850B94u>(ctx, &aot_mem) && ctx.pc == 0x08814A5Cu) goto L_08814A5C;
    return;
L_08814A5C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1904));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08814A70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25872));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08814A70u) goto L_08814A70;
    return;
L_08814A70:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1824));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814A84u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08814A84u) goto L_08814A84;
    return;
L_08814A84:
    ctx.gpr[31] = (0x08814A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08814A8Cu) goto L_08814A8C;
    return;
L_08814A8C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1840));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08814AA4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2492), ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 269u, 0x0880A900u>(ctx, &aot_mem) && ctx.pc == 0x08814AA4u) goto L_08814AA4;
    return;
L_08814AA4:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1808));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08814AB8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08814AB8u) goto L_08814AB8;
    return;
L_08814AB8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08814AC4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08814AC4u) goto L_08814AC4;
    return;
L_08814AC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814AD4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 775u, 0x08857EF8u>(ctx, &aot_mem) && ctx.pc == 0x08814AD4u) goto L_08814AD4;
    return;
L_08814AD4:
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1856));
    ctx.gpr[31] = (0x08814AECu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 397u, 0x08AF9BE4u>(ctx, &aot_mem) && ctx.pc == 0x08814AECu) goto L_08814AEC;
    return;
L_08814AEC:
    ctx.gpr[6] = (15564u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08814B08u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 278u, 0x08851A70u>(ctx, &aot_mem) && ctx.pc == 0x08814B08u) goto L_08814B08;
    return;
L_08814B08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08814B1Cu);
    ctx.gpr[6] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08814B1Cu) goto L_08814B1C;
    return;
L_08814B1C:
    ctx.gpr[31] = (0x08814B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x08814B24u) goto L_08814B24;
    return;
L_08814B24:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(636), ctx.gpr[2]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2496)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2492)));
    goto L_08814B30;
L_08814B30:
    ctx.gpr[31] = (0x08814B38u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08814B38u) goto L_08814B38;
    return;
L_08814B38:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08814C68;
      }
      goto L_08814B40;
    }
L_08814B40:
    ctx.gpr[31] = (0x08814B48u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08814B48u) goto L_08814B48;
    return;
L_08814B48:
    ctx.gpr[4] = (0u | 211u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (15901u << 16u);
      if (branch_taken) {
          goto L_08814C68;
      }
      goto L_08814B54;
    }
L_08814B54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 45613u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15248u << 16u);
      if (branch_taken) {
          goto L_08814C68;
      }
      goto L_08814B70;
    }
L_08814B70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 11744u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814C68;
      }
      goto L_08814B8C;
    }
L_08814B8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08814C68;
      }
      goto L_08814B94;
    }
L_08814B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814C68;
      }
      goto L_08814BA8;
    }
L_08814BA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08814BC0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08814BC0u) goto L_08814BC0;
    return;
L_08814BC0:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[16] = (0u | 212u);
      if (branch_taken) {
          goto L_08814BD4;
      }
      goto L_08814BCC;
    }
L_08814BCC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1496), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08814C08;
      }
      goto L_08814BD4;
    }
L_08814BD4:
    ctx.gpr[4] = (14851u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814C04;
      }
      goto L_08814BF4;
    }
L_08814BF4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08814C08;
      }
      goto L_08814C04;
    }
L_08814C04:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1496), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08814C08;
L_08814C08:
    ctx.gpr[31] = (0x08814C10u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08814C10u) goto L_08814C10;
    return;
L_08814C10:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08814C68;
      }
      goto L_08814C18;
    }
L_08814C18:
    ctx.gpr[31] = (0x08814C20u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08814C20u) goto L_08814C20;
    return;
L_08814C20:
    ctx.gpr[4] = (0u | 211u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (15901u << 16u);
      if (branch_taken) {
          goto L_08814C68;
      }
      goto L_08814C2C;
    }
L_08814C2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 45613u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15248u << 16u);
      if (branch_taken) {
          goto L_08814C68;
      }
      goto L_08814C48;
    }
L_08814C48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 11744u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814C68;
      }
      goto L_08814C64;
    }
L_08814C64:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08814C68;
L_08814C68:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814DF4;
      }
      goto L_08814C70;
    }
L_08814C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814DF4;
      }
      goto L_08814C7C;
    }
L_08814C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2468)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1920), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08814C8Cu);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1936));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08814C8Cu) goto L_08814C8C;
    return;
L_08814C8C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08814C98u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08814C98u) goto L_08814C98;
    return;
L_08814C98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08814CA8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x08814CA8u) goto L_08814CA8;
    return;
L_08814CA8:
    ctx.gpr[31] = (0x08814CB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 289u, 0x0880AA80u>(ctx, &aot_mem) && ctx.pc == 0x08814CB0u) goto L_08814CB0;
    return;
L_08814CB0:
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1920), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08814DF4;
      }
      goto L_08814CC8;
    }
L_08814CC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1720)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1464)));
    ctx.gpr[31] = (0x08814CD8u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x08814CD8u) goto L_08814CD8;
    return;
L_08814CD8:
    ctx.gpr[4] = (16134u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814DF4;
      }
      goto L_08814CF4;
    }
L_08814CF4:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1984));
    ctx.gpr[31] = (0x08814D04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 341u, 0x08AF9800u>(ctx, &aot_mem) && ctx.pc == 0x08814D04u) goto L_08814D04;
    return;
L_08814D04:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(2064));
    ctx.gpr[31] = (0x08814D10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 341u, 0x08AF9800u>(ctx, &aot_mem) && ctx.pc == 0x08814D10u) goto L_08814D10;
    return;
L_08814D10:
    ctx.gpr[31] = (0x08814D18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1236)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x08814D18u) goto L_08814D18;
    return;
L_08814D18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08814D28u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x08814D28u) goto L_08814D28;
    return;
L_08814D28:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(2144));
    ctx.gpr[31] = (0x08814D34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08814D34u) goto L_08814D34;
    return;
L_08814D34:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08814D40u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08814D40u) goto L_08814D40;
    return;
L_08814D40:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1952));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814D54u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 260u, 0x0880A83Cu>(ctx, &aot_mem) && ctx.pc == 0x08814D54u) goto L_08814D54;
    return;
L_08814D54:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08814D60u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08814D60u) goto L_08814D60;
    return;
L_08814D60:
    ctx.gpr[31] = (0x08814D68u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1920)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 282u, 0x0880A9F4u>(ctx, &aot_mem) && ctx.pc == 0x08814D68u) goto L_08814D68;
    return;
L_08814D68:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1920), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1968));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1968), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08814D88u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1920));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08814D88u) goto L_08814D88;
    return;
L_08814D88:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08814D94u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 292u, 0x0880AAC4u>(ctx, &aot_mem) && ctx.pc == 0x08814D94u) goto L_08814D94;
    return;
L_08814D94:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08814DA0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x08814DA0u) goto L_08814DA0;
    return;
L_08814DA0:
    ctx.gpr[31] = (0x08814DA8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x08814DA8u) goto L_08814DA8;
    return;
L_08814DA8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814DDC;
      }
      goto L_08814DC0;
    }
L_08814DC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08814DD4u);
    ctx.gpr[6] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08814DD4u) goto L_08814DD4;
    return;
L_08814DD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1464)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08814DDC;
L_08814DDC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08814DE8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 299u, 0x0880AB60u>(ctx, &aot_mem) && ctx.pc == 0x08814DE8u) goto L_08814DE8;
    return;
L_08814DE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08814DF4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 299u, 0x0880AB60u>(ctx, &aot_mem) && ctx.pc == 0x08814DF4u) goto L_08814DF4;
    return;
L_08814DF4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2460)));
    ctx.gpr[31] = (0x08814E00u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 220u, 0x08A292F8u>(ctx, &aot_mem) && ctx.pc == 0x08814E00u) goto L_08814E00;
    return;
L_08814E00:
    ctx.gpr[16] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x08814E0Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08814E0Cu) goto L_08814E0C;
    return;
L_08814E0C:
    ctx.gpr[31] = (0x08814E14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 309u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08814E14u) goto L_08814E14;
    return;
L_08814E14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08814E20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 443u, 0x08AFA020u>(ctx, &aot_mem) && ctx.pc == 0x08814E20u) goto L_08814E20;
    return;
L_08814E20:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08814E30u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08814E30u) goto L_08814E30;
    return;
L_08814E30:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08814E3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 215u, 0x08A292C8u>(ctx, &aot_mem) && ctx.pc == 0x08814E3Cu) goto L_08814E3C;
    return;
L_08814E3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08814E6C;
    }
    goto L_08814E4C;
L_08814E4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08814E84;
      }
      goto L_08814E54;
    }
L_08814E54:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08814E64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(704));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08814E64u) goto L_08814E64;
    return;
L_08814E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08814E84;
      }
      goto L_08814E6C;
    }
L_08814E6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814E84;
      }
      goto L_08814E74;
    }
L_08814E74:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08814E84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(688));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08814E84u) goto L_08814E84;
    return;
L_08814E84:
    ctx.gpr[31] = (0x08814E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08814E8Cu) goto L_08814E8C;
    return;
L_08814E8C:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08814F4C;
      }
      goto L_08814E94;
    }
L_08814E94:
    ctx.gpr[31] = (0x08814E9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2468)));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ED020u>(ctx, &aot_mem) && ctx.pc == 0x08814E9Cu) goto L_08814E9C;
    return;
L_08814E9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08814F4C;
      }
      goto L_08814EA4;
    }
L_08814EA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08814F4C;
      }
      goto L_08814EC0;
    }
L_08814EC0:
    ctx.gpr[31] = (0x08814EC8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08814EC8u) goto L_08814EC8;
    return;
L_08814EC8:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08814F4C;
      }
      goto L_08814ED4;
    }
L_08814ED4:
    ctx.gpr[31] = (0x08814EDCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08814EDCu) goto L_08814EDC;
    return;
L_08814EDC:
    ctx.gpr[4] = (0u | 138u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08814F1C;
      }
      goto L_08814EE8;
    }
L_08814EE8:
    ctx.gpr[5] = (48716u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2160));
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[31] = (0x08814F08u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08814F08u) goto L_08814F08;
    return;
L_08814F08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08814F14u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08814F14u) goto L_08814F14;
    return;
L_08814F14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08814F4C;
      }
      goto L_08814F1C;
    }
L_08814F1C:
    ctx.gpr[5] = (16281u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2176));
    ctx.gpr[5] = (48972u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[31] = (0x08814F40u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08814F40u) goto L_08814F40;
    return;
L_08814F40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08814F4Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08814F4Cu) goto L_08814F4C;
    return;
L_08814F4C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08814F60u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08814F60u) goto L_08814F60;
    return;
L_08814F60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08814F6Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08814F6Cu) goto L_08814F6C;
    return;
L_08814F6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(616)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08815180;
      }
      goto L_08814F90;
    }
L_08814F90:
    ctx.gpr[31] = (0x08814F98u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08814F98u) goto L_08814F98;
    return;
L_08814F98:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08815180;
      }
      goto L_08814FA4;
    }
L_08814FA4:
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2208));
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08814FC0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08814FC0u) goto L_08814FC0;
    return;
L_08814FC0:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (15436u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2228), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08814FECu);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x08814FECu) goto L_08814FEC;
    return;
L_08814FEC:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(2224));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 27u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08815024u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08815024u) goto L_08815024;
    return;
L_08815024:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(2240));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08815034u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08815034u) goto L_08815034;
    return;
L_08815034:
    ctx.gpr[4] = (48928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16160u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08815058u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x08815058u) goto L_08815058;
    return;
L_08815058:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2240)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[0];
    ctx.gpr[31] = (0x08815070u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2240), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x08815070u) goto L_08815070;
    return;
L_08815070:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2244)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[14] = ctx.fpr[13] + ctx.fpr[0];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2244), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08815090u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x08815090u) goto L_08815090;
    return;
L_08815090:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2248)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2192));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = ctx.fpr[14] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x088150B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2248), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088150B4u) goto L_088150B4;
    return;
L_088150B4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (0u | 57u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088150DCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088150DCu) goto L_088150DC;
    return;
L_088150DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x088150F0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088150F0u) goto L_088150F0;
    return;
L_088150F0:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (16128u << 16u);
    ctx.gpr[4] = (0u | 56u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881511Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881511Cu) goto L_0881511C;
    return;
L_0881511C:
    ctx.gpr[31] = (0x08815124u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1608)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 400u, 0x08AF9C04u>(ctx, &aot_mem) && ctx.pc == 0x08815124u) goto L_08815124;
    return;
L_08815124:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0881513C;
      }
      goto L_08815130;
    }
L_08815130:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0881513C;
L_0881513C:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (17820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08815178;
      }
      goto L_0881515C;
    }
L_0881515C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1696)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(280));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08815178u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08815178u) goto L_08815178;
    return;
L_08815178:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815184;
      }
      goto L_08815180;
    }
L_08815180:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08815184;
L_08815184:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 226 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088151B8;
      }
      goto L_08815190;
    }
L_08815190:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(616)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088151B8;
      }
      goto L_088151A4;
    }
L_088151A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088151B8;
L_088151B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2472), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2464), ctx.gpr[21]);
    ctx.gpr[31] = (0x088151C8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 628u, 0x0889F00Cu>(ctx, &aot_mem) && ctx.pc == 0x088151C8u) goto L_088151C8;
    return;
L_088151C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815238;
      }
      goto L_088151D4;
    }
L_088151D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2472), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2464), ctx.gpr[21]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08815238;
      }
      goto L_088151F4;
    }
L_088151F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2472), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2464), ctx.gpr[21]);
    ctx.gpr[31] = (0x08815204u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 833u, 0x0889FDA4u>(ctx, &aot_mem) && ctx.pc == 0x08815204u) goto L_08815204;
    return;
L_08815204:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815238;
      }
      goto L_0881520C;
    }
L_0881520C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2472), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2464), ctx.gpr[21]);
    ctx.gpr[31] = (0x0881521Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881521Cu) goto L_0881521C;
    return;
L_0881521C:
    ctx.gpr[4] = (0u | 154u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08815238;
      }
      goto L_08815228;
    }
L_08815228:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2472), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2464), ctx.gpr[21]);
    ctx.gpr[31] = (0x08815238u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 793u, 0x0891FBB8u>(ctx, &aot_mem) && ctx.pc == 0x08815238u) goto L_08815238;
    return;
L_08815238:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2472)));
    ctx.gpr[31] = (0x08815248u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 289u, 0x0880AA80u>(ctx, &aot_mem) && ctx.pc == 0x08815248u) goto L_08815248;
    return;
L_08815248:
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(2256));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(1248));
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[20] = (2227u << 16u);
    goto L_08815278;
L_08815278:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08815324;
      }
      goto L_088152A0;
    }
L_088152A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2480)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15651u << 16u);
      if (branch_taken) {
          goto L_08815324;
      }
      goto L_088152AC;
    }
L_088152AC:
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815324;
      }
      goto L_088152C4;
    }
L_088152C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2460)));
    ctx.gpr[31] = (0x088152D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 209u, 0x08A29280u>(ctx, &aot_mem) && ctx.pc == 0x088152D0u) goto L_088152D0;
    return;
L_088152D0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088152F8;
      }
      goto L_088152DC;
    }
L_088152DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2464)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[31] = (0x088152F0u);
    ctx.gpr[6] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088152F0u) goto L_088152F0;
    return;
L_088152F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881530C;
      }
      goto L_088152F8;
    }
L_088152F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2464)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[31] = (0x0881530Cu);
    ctx.gpr[6] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0881530Cu) goto L_0881530C;
    return;
L_0881530C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2256)));
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815324;
      }
      goto L_08815320;
    }
L_08815320:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2256)));
    goto L_08815324;
L_08815324:
    ctx.gpr[31] = (0x0881532Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x0881532Cu) goto L_0881532C;
    return;
L_0881532C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08815360;
      }
      goto L_08815338;
    }
L_08815338:
    ctx.gpr[31] = (0x08815340u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08815340u) goto L_08815340;
    return;
L_08815340:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08815360;
      }
      goto L_0881534C;
    }
L_0881534C:
    ctx.gpr[31] = (0x08815354u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08815354u) goto L_08815354;
    return;
L_08815354:
    ctx.gpr[4] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881538C;
      }
      goto L_08815360;
    }
L_08815360:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815408;
      }
      goto L_0881537C;
    }
L_0881537C:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08815408;
      }
      goto L_0881538C;
    }
L_0881538C:
    ctx.gpr[31] = (0x08815394u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08815394u) goto L_08815394;
    return;
L_08815394:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088153CC;
      }
      goto L_088153A0;
    }
L_088153A0:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815408;
      }
      goto L_088153BC;
    }
L_088153BC:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08815408;
      }
      goto L_088153CC;
    }
L_088153CC:
    ctx.gpr[31] = (0x088153D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x088153D4u) goto L_088153D4;
    return;
L_088153D4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08815408;
      }
      goto L_088153E0;
    }
L_088153E0:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815408;
      }
      goto L_088153FC;
    }
L_088153FC:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08815408;
L_08815408:
    ctx.gpr[31] = (0x08815410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08815410u) goto L_08815410;
    return;
L_08815410:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08815444;
      }
      goto L_08815418;
    }
L_08815418:
    ctx.gpr[31] = (0x08815420u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 372u, 0x08AF9994u>(ctx, &aot_mem) && ctx.pc == 0x08815420u) goto L_08815420;
    return;
L_08815420:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(676)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2468)));
      if (branch_taken) {
          goto L_08815440;
      }
      goto L_08815434;
    }
L_08815434:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08815444;
      }
      goto L_08815440;
    }
L_08815440:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    goto L_08815444;
L_08815444:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1408)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088154F8;
      }
      goto L_08815458;
    }
L_08815458:
    ctx.gpr[31] = (0x08815460u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 449u, 0x08AFA07Cu>(ctx, &aot_mem) && ctx.pc == 0x08815460u) goto L_08815460;
    return;
L_08815460:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815490;
      }
      goto L_08815478;
    }
L_08815478:
    ctx.gpr[31] = (0x08815480u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 449u, 0x08AFA07Cu>(ctx, &aot_mem) && ctx.pc == 0x08815480u) goto L_08815480;
    return;
L_08815480:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088154F8;
      }
      goto L_08815490;
    }
L_08815490:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088154A0;
      }
      goto L_08815498;
    }
L_08815498:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088154C0;
      }
      goto L_088154A0;
    }
L_088154A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[31] = (0x088154B4u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 440u, 0x08AF9FD0u>(ctx, &aot_mem) && ctx.pc == 0x088154B4u) goto L_088154B4;
    return;
L_088154B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088154EC;
      }
      goto L_088154BC;
    }
L_088154BC:
    ctx.gpr[4] = (0u | 1u);
    goto L_088154C0;
L_088154C0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088154D0;
      }
      goto L_088154C8;
    }
L_088154C8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088154F8;
      }
      goto L_088154D0;
    }
L_088154D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[31] = (0x088154E4u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 441u, 0x08AF9FF4u>(ctx, &aot_mem) && ctx.pc == 0x088154E4u) goto L_088154E4;
    return;
L_088154E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088154F8;
      }
      goto L_088154EC;
    }
L_088154EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16156)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[22];
      if (branch_taken) {
          goto L_08815510;
      }
      goto L_088154F8;
    }
L_088154F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08815510;
      }
      goto L_08815508;
    }
L_08815508:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16152)));
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[22];
    goto L_08815510;
L_08815510:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08815278;
      }
      goto L_08815538;
    }
L_08815538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2472)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (0u | 52u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08815564;
      }
      goto L_08815554;
    }
L_08815554:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08815570;
      }
      goto L_08815564;
    }
L_08815564:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08815570;
L_08815570:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(612)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088155B0;
      }
      goto L_08815584;
    }
L_08815584:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08815594u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16164)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08815594u) goto L_08815594;
    return;
L_08815594:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088155A0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 387u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x088155A0u) goto L_088155A0;
    return;
L_088155A0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_088155D8;
      }
      goto L_088155B0;
    }
L_088155B0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088155C0u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16160)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x088155C0u) goto L_088155C0;
    return;
L_088155C0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088155CCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 387u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x088155CCu) goto L_088155CC;
    return;
L_088155CC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_088155D8;
L_088155D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(612)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2480)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08815798;
      }
      goto L_088155F0;
    }
L_088155F0:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815610;
      }
      goto L_08815600;
    }
L_08815600:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(602))))));
        goto L_0881579C;
    }
    goto L_08815610;
L_08815610:
    ctx.gpr[31] = (0x08815618u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08815618u) goto L_08815618;
    return;
L_08815618:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(602))))));
        goto L_0881579C;
    }
    goto L_08815620;
L_08815620:
    ctx.gpr[31] = (0x08815628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 289u, 0x0880AA80u>(ctx, &aot_mem) && ctx.pc == 0x08815628u) goto L_08815628;
    return;
L_08815628:
    ctx.gpr[4] = (15395u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(602))))));
        goto L_0881579C;
    }
    goto L_08815648;
L_08815648:
    ctx.gpr[31] = (0x08815650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 282u, 0x0880A9F4u>(ctx, &aot_mem) && ctx.pc == 0x08815650u) goto L_08815650;
    return;
L_08815650:
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17658u << 16u);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08815708;
      }
      goto L_08815670;
    }
L_08815670:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (17274u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[7] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2260));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2264));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x088156ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x088156ACu) goto L_088156AC;
    return;
L_088156AC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088156BCu);
    ctx.gpr[17] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x088156BCu) goto L_088156BC;
    return;
L_088156BC:
    ctx.gpr[4] = (18076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088156ECu);
    ctx.gpr[18] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088156ECu) goto L_088156EC;
    return;
L_088156EC:
    ctx.gpr[5] = (ctx.gpr[18] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08815700u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 645u, 0x08A96C48u>(ctx, &aot_mem) && ctx.pc == 0x08815700u) goto L_08815700;
    return;
L_08815700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(602))))));
      if (branch_taken) {
          goto L_0881579C;
      }
      goto L_08815708;
    }
L_08815708:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (17174u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[7] = (16928u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2268));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2272));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2268), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08815744u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08815744u) goto L_08815744;
    return;
L_08815744:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08815754u);
    ctx.gpr[17] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08815754u) goto L_08815754;
    return;
L_08815754:
    ctx.gpr[4] = (17820u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08815784u);
    ctx.gpr[18] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08815784u) goto L_08815784;
    return;
L_08815784:
    ctx.gpr[5] = (ctx.gpr[18] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08815798u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 645u, 0x08A96C48u>(ctx, &aot_mem) && ctx.pc == 0x08815798u) goto L_08815798;
    return;
L_08815798:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(602))))));
    goto L_0881579C;
L_0881579C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088157F8;
      }
      goto L_088157C8;
    }
L_088157C8:
    ctx.gpr[31] = (0x088157D0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x088157D0u) goto L_088157D0;
    return;
L_088157D0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088157F8;
      }
      goto L_088157DC;
    }
L_088157DC:
    ctx.gpr[31] = (0x088157E4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x088157E4u) goto L_088157E4;
    return;
L_088157E4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088157F8;
      }
      goto L_088157F0;
    }
L_088157F0:
    ctx.gpr[31] = (0x088157F8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 406u, 0x089EA89Cu>(ctx, &aot_mem) && ctx.pc == 0x088157F8u) goto L_088157F8;
    return;
L_088157F8:
    ctx.gpr[4] = (17651u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815868;
      }
      goto L_08815818;
    }
L_08815818:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815838;
      }
      goto L_0881582C;
    }
L_0881582C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08815838;
L_08815838:
    ctx.gpr[31] = (0x08815840u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 392u, 0x08AF9B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08815840u) goto L_08815840;
    return;
L_08815840:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088158D0;
      }
      goto L_08815854;
    }
L_08815854:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08815860u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08815860u) goto L_08815860;
    return;
L_08815860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088158D0;
      }
      goto L_08815868;
    }
L_08815868:
    ctx.gpr[4] = (50419u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088158D0;
      }
      goto L_08815888;
    }
L_08815888:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088158A8;
      }
      goto L_0881589C;
    }
L_0881589C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088158A8;
L_088158A8:
    ctx.gpr[31] = (0x088158B0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 392u, 0x08AF9B8Cu>(ctx, &aot_mem) && ctx.pc == 0x088158B0u) goto L_088158B0;
    return;
L_088158B0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088158D0;
      }
      goto L_088158C4;
    }
L_088158C4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088158D0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x088158D0u) goto L_088158D0;
    return;
L_088158D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088159A4;
      }
      goto L_088158E4;
    }
L_088158E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881590C;
      }
      goto L_08815900;
    }
L_08815900:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0881590C;
L_0881590C:
    ctx.gpr[31] = (0x08815914u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 392u, 0x08AF9B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08815914u) goto L_08815914;
    return;
L_08815914:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815958;
      }
      goto L_08815928;
    }
L_08815928:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815958;
      }
      goto L_08815938;
    }
L_08815938:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08815950u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08815950u) goto L_08815950;
    return;
L_08815950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815A5C;
      }
      goto L_08815958;
    }
L_08815958:
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815A5C;
      }
      goto L_08815974;
    }
L_08815974:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815A5C;
      }
      goto L_08815984;
    }
L_08815984:
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0881599Cu);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x0881599Cu) goto L_0881599C;
    return;
L_0881599C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815A5C;
      }
      goto L_088159A4;
    }
L_088159A4:
    ctx.gpr[4] = (50419u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815A5C;
      }
      goto L_088159C4;
    }
L_088159C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088159EC;
      }
      goto L_088159E0;
    }
L_088159E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088159EC;
L_088159EC:
    ctx.gpr[31] = (0x088159F4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 392u, 0x08AF9B8Cu>(ctx, &aot_mem) && ctx.pc == 0x088159F4u) goto L_088159F4;
    return;
L_088159F4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815A28;
      }
      goto L_08815A08;
    }
L_08815A08:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08815A20u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08815A20u) goto L_08815A20;
    return;
L_08815A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815A5C;
      }
      goto L_08815A28;
    }
L_08815A28:
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815A5C;
      }
      goto L_08815A44;
    }
L_08815A44:
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08815A5Cu);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08815A5Cu) goto L_08815A5C;
    return;
L_08815A5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815B04;
      }
      goto L_08815A6C;
    }
L_08815A6C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(2288));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08815A84u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08815A84u) goto L_08815A84;
    return;
L_08815A84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08815A90u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08815A90u) goto L_08815A90;
    return;
L_08815A90:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(128));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08815AA8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08815AA8u) goto L_08815AA8;
    return;
L_08815AA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08815AB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08815AB4u) goto L_08815AB4;
    return;
L_08815AB4:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(144));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08815ACCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08815ACCu) goto L_08815ACC;
    return;
L_08815ACC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08815AD8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08815AD8u) goto L_08815AD8;
    return;
L_08815AD8:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(160));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08815AF0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08815AF0u) goto L_08815AF0;
    return;
L_08815AF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08815AFCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08815AFCu) goto L_08815AFC;
    return;
L_08815AFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08815C5C;
      }
      goto L_08815B04;
    }
L_08815B04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2481)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08815C5C;
      }
      goto L_08815B10;
    }
L_08815B10:
    ctx.gpr[31] = (0x08815B18u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 449u, 0x08AFA07Cu>(ctx, &aot_mem) && ctx.pc == 0x08815B18u) goto L_08815B18;
    return;
L_08815B18:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[30])) && ctx.fpr[0] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815B3C;
      }
      goto L_08815B28;
    }
L_08815B28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2484)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815B50;
      }
      goto L_08815B3C;
    }
L_08815B3C:
    ctx.gpr[31] = (0x08815B44u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08815B44u) goto L_08815B44;
    return;
L_08815B44:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08815C5C;
      }
      goto L_08815B50;
    }
L_08815B50:
    ctx.gpr[31] = (0x08815B58u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x08815B58u) goto L_08815B58;
    return;
L_08815B58:
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815C5C;
      }
      goto L_08815B74;
    }
L_08815B74:
    ctx.gpr[31] = (0x08815B7Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x08815B7Cu) goto L_08815B7C;
    return;
L_08815B7C:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815C5C;
      }
      goto L_08815B8C;
    }
L_08815B8C:
    ctx.gpr[31] = (0x08815B94u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x08815B94u) goto L_08815B94;
    return;
L_08815B94:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815C5C;
      }
      goto L_08815BA4;
    }
L_08815BA4:
    ctx.gpr[31] = (0x08815BACu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 431u, 0x08AF9E70u>(ctx, &aot_mem) && ctx.pc == 0x08815BACu) goto L_08815BAC;
    return;
L_08815BAC:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815BD4;
      }
      goto L_08815BBC;
    }
L_08815BBC:
    ctx.gpr[31] = (0x08815BC4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 432u, 0x08AF9E78u>(ctx, &aot_mem) && ctx.pc == 0x08815BC4u) goto L_08815BC4;
    return;
L_08815BC4:
    ctx.gpr[31] = (0x08815BCCu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08815BCCu) goto L_08815BCC;
    return;
L_08815BCC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08815C5C;
      }
      goto L_08815BD4;
    }
L_08815BD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815C38;
      }
      goto L_08815BF0;
    }
L_08815BF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1396)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815C38;
      }
      goto L_08815C08;
    }
L_08815C08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1400)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815C38;
      }
      goto L_08815C20;
    }
L_08815C20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1404)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815C5C;
      }
      goto L_08815C38;
    }
L_08815C38:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2304));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08815C4Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08815C4Cu) goto L_08815C4C;
    return;
L_08815C4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08815C58u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08815C58u) goto L_08815C58;
    return;
L_08815C58:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08815C5C;
L_08815C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (2u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815E44;
      }
      goto L_08815C74;
    }
L_08815C74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815E44;
      }
      goto L_08815C84;
    }
L_08815C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08815E44;
      }
      goto L_08815C98;
    }
L_08815C98:
    ctx.gpr[31] = (0x08815CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08815CA0u) goto L_08815CA0;
    return;
L_08815CA0:
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[31] = (0x08815CBCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08815CBCu) goto L_08815CBC;
    return;
L_08815CBC:
    ctx.gpr[31] = (0x08815CC4u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(136)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08815CC4u) goto L_08815CC4;
    return;
L_08815CC4:
    ctx.gpr[4] = (47875u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08815CE4u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08815CE4u) goto L_08815CE4;
    return;
L_08815CE4:
    ctx.gpr[4] = (47441u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 255u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 84u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2368), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2369), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2370), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2371), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (49440u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2320));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2336));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08815D30u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08815D30u) goto L_08815D30;
    return;
L_08815D30:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08815D40u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08815D40u) goto L_08815D40;
    return;
L_08815D40:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(2352));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08815D58u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08815D58u) goto L_08815D58;
    return;
L_08815D58:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (16179u << 16u);
    ctx.gpr[3] = (0u | 3000u);
    ctx.gpr[2] = (ctx.gpr[2] | 13107u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(2368));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08815D90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08815D90u) goto L_08815D90;
    return;
L_08815D90:
    ctx.gpr[31] = (0x08815D98u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08815D98u) goto L_08815D98;
    return;
L_08815D98:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08815DA4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08815DA4u) goto L_08815DA4;
    return;
L_08815DA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[2] = (16672u << 16u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08815DD8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x08815DD8u) goto L_08815DD8;
    return;
L_08815DD8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
        goto L_08815E00;
    }
    goto L_08815DE0;
L_08815DE0:
    ctx.gpr[31] = (0x08815DE8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08815DE8u) goto L_08815DE8;
    return;
L_08815DE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08815E44;
      }
      goto L_08815DFC;
    }
L_08815DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    goto L_08815E00;
L_08815E00:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08815E44;
      }
      goto L_08815E0C;
    }
L_08815E0C:
    ctx.gpr[31] = (0x08815E14u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08815E14u) goto L_08815E14;
    return;
L_08815E14:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08815E38u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 406u, 0x08A46A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08815E38u) goto L_08815E38;
    return;
L_08815E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08815E44;
L_08815E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2452), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08815EC8;
      }
      goto L_08815E5C;
    }
L_08815E5C:
    ctx.gpr[31] = (0x08815E64u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1464)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08815E64u) goto L_08815E64;
    return;
L_08815E64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (16585u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08815E88u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 257u, 0x0880A7ECu>(ctx, &aot_mem) && ctx.pc == 0x08815E88u) goto L_08815E88;
    return;
L_08815E88:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1464), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08815E94u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1472)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08815E94u) goto L_08815E94;
    return;
L_08815E94:
    ctx.gpr[4] = (49171u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[31] = (0x08815EBCu);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 257u, 0x0880A7ECu>(ctx, &aot_mem) && ctx.pc == 0x08815EBCu) goto L_08815EBC;
    return;
L_08815EBC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1472), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2452), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08815EC8;
L_08815EC8:
    ctx.gpr[31] = (0x08815ED0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 309u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08815ED0u) goto L_08815ED0;
    return;
L_08815ED0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(584)));
    ctx.gpr[31] = (0x08815EDCu);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x08815EDCu) goto L_08815EDC;
    return;
L_08815EDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(584)));
    ctx.gpr[31] = (0x08815EE8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x08815EE8u) goto L_08815EE8;
    return;
L_08815EE8:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08815F00u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08815F00u) goto L_08815F00;
    return;
L_08815F00:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08815F10u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 260u, 0x0880A83Cu>(ctx, &aot_mem) && ctx.pc == 0x08815F10u) goto L_08815F10;
    return;
L_08815F10:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[31] = (0x08815F1Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08815F1Cu) goto L_08815F1C;
    return;
L_08815F1C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08815F28u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08815F28u) goto L_08815F28;
    return;
L_08815F28:
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(2384));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(2400));
    goto L_08815F3C;
L_08815F3C:
    ctx.gpr[17] = (ctx.gpr[18] << 2u);
    ctx.gpr[17] = (ctx.gpr[30] + ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1408)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08816070;
      }
      goto L_08815F58;
    }
L_08815F58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08815F74;
      }
      goto L_08815F64;
    }
L_08815F64:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08815F74;
      }
      goto L_08815F6C;
    }
L_08815F6C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08816070;
      }
      goto L_08815F74;
    }
L_08815F74:
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    ctx.gpr[16] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08815F8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08815F8Cu) goto L_08815F8C;
    return;
L_08815F8C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2492), ctx.gpr[23]);
    ctx.gpr[31] = (0x08815F9Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08815F9Cu) goto L_08815F9C;
    return;
L_08815F9C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08815FA8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08815FA8u) goto L_08815FA8;
    return;
L_08815FA8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08815FB8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x08815FB8u) goto L_08815FB8;
    return;
L_08815FB8:
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08815FC8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08815FC8u) goto L_08815FC8;
    return;
L_08815FC8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08815FDCu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 438u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x08815FDCu) goto L_08815FDC;
    return;
L_08815FDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08815FE8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08815FE8u) goto L_08815FE8;
    return;
L_08815FE8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2492)));
      if (branch_taken) {
          goto L_08815FFC;
      }
      goto L_08815FF0;
    }
L_08815FF0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08816030;
      }
      goto L_08815FFC;
    }
L_08815FFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2492), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[31] = (0x0881600Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881600Cu) goto L_0881600C;
    return;
L_0881600C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08816024u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 805u, 0x0889FBC4u>(ctx, &aot_mem) && ctx.pc == 0x08816024u) goto L_08816024;
    return;
L_08816024:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1492), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2492)));
      if (branch_taken) {
          goto L_08816060;
      }
      goto L_08816030;
    }
L_08816030:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2492), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[31] = (0x08816040u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x08816040u) goto L_08816040;
    return;
L_08816040:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08816058u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 805u, 0x0889FBC4u>(ctx, &aot_mem) && ctx.pc == 0x08816058u) goto L_08816058;
    return;
L_08816058:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1492), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2492)));
    goto L_08816060;
L_08816060:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1460)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1492)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08816070;
L_08816070:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08815F3C;
      }
      goto L_08816084;
    }
L_08816084:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088160BC;
      }
      goto L_08816094;
    }
L_08816094:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[31] = (0x088160A4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 507u, 0x0881E4A8u>(ctx, &aot_mem) && ctx.pc == 0x088160A4u) goto L_088160A4;
    return;
L_088160A4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x088160B4u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 507u, 0x0881E4A8u>(ctx, &aot_mem) && ctx.pc == 0x088160B4u) goto L_088160B4;
    return;
L_088160B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08816144;
      }
      goto L_088160BC;
    }
L_088160BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08816144;
      }
      goto L_088160CC;
    }
L_088160CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08816144;
      }
      goto L_088160E4;
    }
L_088160E4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[31] = (0x088160F4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 507u, 0x0881E4A8u>(ctx, &aot_mem) && ctx.pc == 0x088160F4u) goto L_088160F4;
    return;
L_088160F4:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x08816104u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 507u, 0x0881E4A8u>(ctx, &aot_mem) && ctx.pc == 0x08816104u) goto L_08816104;
    return;
L_08816104:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08816114u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 507u, 0x0881E4A8u>(ctx, &aot_mem) && ctx.pc == 0x08816114u) goto L_08816114;
    return;
L_08816114:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[31] = (0x08816124u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 507u, 0x0881E4A8u>(ctx, &aot_mem) && ctx.pc == 0x08816124u) goto L_08816124;
    return;
L_08816124:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08816134u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 507u, 0x0881E4A8u>(ctx, &aot_mem) && ctx.pc == 0x08816134u) goto L_08816134;
    return;
L_08816134:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08816144u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 507u, 0x0881E4A8u>(ctx, &aot_mem) && ctx.pc == 0x08816144u) goto L_08816144;
    return;
L_08816144:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2516)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2520)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2524)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2528)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2532)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2536)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2540)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2544)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2548)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2552)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2556)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2560)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2564)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2568)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2572)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2576)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881618C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x088161CCu);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088161CCu) goto L_088161CC;
    return;
L_088161CC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08816204;
      }
      goto L_088161D4;
    }
L_088161D4:
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
    // nop
      if (branch_taken) {
          goto L_08816258;
      }
      goto L_08816204;
    }
L_08816204:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08816228u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08816228u) goto L_08816228;
    return;
L_08816228:
    ctx.gpr[31] = (0x08816230u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1081u, 0x08A97ED4u>(ctx, &aot_mem) && ctx.pc == 0x08816230u) goto L_08816230;
    return;
L_08816230:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08816260;
      }
      goto L_08816250;
    }
L_08816250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088162C0;
      }
      goto L_08816258;
    }
L_08816258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08816754;
      }
      goto L_08816260;
    }
L_08816260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088162AC;
      }
      goto L_0881626C;
    }
L_0881626C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088162AC;
      }
      goto L_0881627C;
    }
L_0881627C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088162C0;
      }
      goto L_08816294;
    }
L_08816294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 131u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088162C0;
      }
      goto L_088162AC;
    }
L_088162AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088162F4;
      }
      goto L_088162C0;
    }
L_088162C0:
    ctx.gpr[31] = (0x088162C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088162C8u) goto L_088162C8;
    return;
L_088162C8:
    ctx.gpr[31] = (0x088162D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1064u, 0x08A97E3Cu>(ctx, &aot_mem) && ctx.pc == 0x088162D0u) goto L_088162D0;
    return;
L_088162D0:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088162F4;
L_088162F4:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
    ctx.gpr[31] = (0x08816300u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08816300u) goto L_08816300;
    return;
L_08816300:
    ctx.gpr[31] = (0x08816308u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 799u, 0x08A97230u>(ctx, &aot_mem) && ctx.pc == 0x08816308u) goto L_08816308;
    return;
L_08816308:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (49024u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[26] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(760), static_cast<std::uint16_t>(0u));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
        goto L_08816370;
    }
    goto L_08816370;
L_08816370:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08816384;
    }
    goto L_08816384;
L_08816384:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(832), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08816390u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08816390u) goto L_08816390;
    return;
L_08816390:
    ctx.gpr[31] = (0x08816398u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08816398u) goto L_08816398;
    return;
L_08816398:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088163A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088163A4u) goto L_088163A4;
    return;
L_088163A4:
    ctx.gpr[31] = (0x088163ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x088163ACu) goto L_088163AC;
    return;
L_088163AC:
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 164u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[26] = ctx.fpr[26] / ctx.fpr[24];
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088163EC;
      }
      goto L_088163CC;
    }
L_088163CC:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088163EC;
      }
      goto L_088163DC;
    }
L_088163DC:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_088163EC;
L_088163EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_08816400;
    }
    goto L_08816400;
L_08816400:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088164CC;
      }
      goto L_0881641C;
    }
L_0881641C:
    ctx.gpr[31] = (0x08816424u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08816424u) goto L_08816424;
    return;
L_08816424:
    ctx.gpr[31] = (0x0881642Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x0881642Cu) goto L_0881642C;
    return;
L_0881642C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088164C0;
      }
      goto L_0881644C;
    }
L_0881644C:
    ctx.gpr[31] = (0x08816454u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08816454u) goto L_08816454;
    return;
L_08816454:
    ctx.gpr[31] = (0x0881645Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x0881645Cu) goto L_0881645C;
    return;
L_0881645C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088164C0;
      }
      goto L_08816474;
    }
L_08816474:
    ctx.gpr[31] = (0x0881647Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0881647Cu) goto L_0881647C;
    return;
L_0881647C:
    ctx.gpr[31] = (0x08816484u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08816484u) goto L_08816484;
    return;
L_08816484:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881649Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0881649Cu) goto L_0881649C;
    return;
L_0881649C:
    ctx.gpr[31] = (0x088164A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x088164A4u) goto L_088164A4;
    return;
L_088164A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1516), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881652C;
      }
      goto L_088164C0;
    }
L_088164C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_0881652C;
      }
      goto L_088164CC;
    }
L_088164CC:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08816508;
      }
      goto L_088164DC;
    }
L_088164DC:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088164F8;
      }
      goto L_088164EC;
    }
L_088164EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_0881652C;
      }
      goto L_088164F8;
    }
L_088164F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881652C;
      }
      goto L_08816508;
    }
L_08816508:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08816524;
      }
      goto L_08816518;
    }
L_08816518:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0881652C;
      }
      goto L_08816524;
    }
L_08816524:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_0881652C;
L_0881652C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
        goto L_08816550;
    }
    goto L_08816540;
L_08816540:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(832)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881655C;
      }
      goto L_08816550;
    }
L_08816550:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0881655C;
L_0881655C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5468)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08816670;
      }
      goto L_08816598;
    }
L_08816598:
    ctx.gpr[31] = (0x088165A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088165A0u) goto L_088165A0;
    return;
L_088165A0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(687)));
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_088165CC;
      }
      goto L_088165BC;
    }
L_088165BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08816668;
      }
      goto L_088165C4;
    }
L_088165C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088165E8;
      }
      goto L_088165CC;
    }
L_088165CC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881661C;
      }
      goto L_088165D8;
    }
L_088165D8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (15692u << 16u);
      if (branch_taken) {
          goto L_08816648;
      }
      goto L_088165E0;
    }
L_088165E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08816668;
      }
      goto L_088165E8;
    }
L_088165E8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816600;
      }
      goto L_088165F4;
    }
L_088165F4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(687), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08816614;
      }
      goto L_08816600;
    }
L_08816600:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816614;
      }
      goto L_0881660C;
    }
L_0881660C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(687), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08816614;
L_08816614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08816668;
      }
      goto L_0881661C;
    }
L_0881661C:
    ctx.gpr[5] = (15692u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08816640;
      }
      goto L_0881663C;
    }
L_0881663C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(687), static_cast<std::uint8_t>(0u));
    goto L_08816640;
L_08816640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08816668;
      }
      goto L_08816648;
    }
L_08816648:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08816668;
      }
      goto L_08816664;
    }
L_08816664:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(687), static_cast<std::uint8_t>(0u));
    goto L_08816668;
L_08816668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08816674;
      }
      goto L_08816670;
    }
L_08816670:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(687), static_cast<std::uint8_t>(0u));
    goto L_08816674;
L_08816674:
    ctx.gpr[31] = (0x0881667Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0881667Cu) goto L_0881667C;
    return;
L_0881667C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088166A8;
      }
      goto L_08816688;
    }
L_08816688:
    ctx.gpr[31] = (0x08816690u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08816690u) goto L_08816690;
    return;
L_08816690:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088166A8;
      }
      goto L_0881669C;
    }
L_0881669C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816754;
      }
      goto L_088166A8;
    }
L_088166A8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_088166D0;
      }
      goto L_088166B8;
    }
L_088166B8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16662)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
        goto L_088166D4;
    }
    goto L_088166C4;
L_088166C4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816754;
      }
      goto L_088166D0;
    }
L_088166D0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    goto L_088166D4;
L_088166D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (16015u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[5] = (ctx.gpr[5] | 23593u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881670C;
      }
      goto L_088166FC;
    }
L_088166FC:
    ctx.gpr[31] = (0x08816704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08816704u) goto L_08816704;
    return;
L_08816704:
    ctx.gpr[31] = (0x0881670Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 104u, 0x0894C834u>(ctx, &aot_mem) && ctx.pc == 0x0881670Cu) goto L_0881670C;
    return;
L_0881670C:
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
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08816754;
      }
      goto L_08816730;
    }
L_08816730:
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08816754;
L_08816754:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881678C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-3936));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 138u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3876), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3880), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3884), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3888), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3892), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3896), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3900), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3904), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3908), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3912), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3916), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3920), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3924), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3928), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3932), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088167E4;
      }
      goto L_088167DC;
    }
L_088167DC:
    ctx.gpr[31] = (0x088167E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 53u, 0x0886C918u>(ctx, &aot_mem) && ctx.pc == 0x088167E4u) goto L_088167E4;
    return;
L_088167E4:
    ctx.gpr[31] = (0x088167ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 509u, 0x0889E8ACu>(ctx, &aot_mem) && ctx.pc == 0x088167ECu) goto L_088167EC;
    return;
L_088167EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881685C;
      }
      goto L_088167FC;
    }
L_088167FC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[31] = (0x08816808u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08816808u) goto L_08816808;
    return;
L_08816808:
    ctx.gpr[5] = (15967u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 15204u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (48793u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08816834u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08816834u) goto L_08816834;
    return;
L_08816834:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08816844u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08816844u) goto L_08816844;
    return;
L_08816844:
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881685Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 520u, 0x089329DCu>(ctx, &aot_mem) && ctx.pc == 0x0881685Cu) goto L_0881685C;
    return;
L_0881685C:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08816868u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08816868u) goto L_08816868;
    return;
L_08816868:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08816874u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x08816874u) goto L_08816874;
    return;
L_08816874:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(648)));
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[12];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088177DC;
      }
      goto L_08816890;
    }
L_08816890:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08816AD0;
      }
      goto L_088168A0;
    }
L_088168A0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816AC8;
      }
      goto L_088168B0;
    }
L_088168B0:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08816970;
      }
      goto L_088168C8;
    }
L_088168C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08816AB8;
      }
      goto L_088168D0;
    }
L_088168D0:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x088168E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x088168E4u) goto L_088168E4;
    return;
L_088168E4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[31] = (0x088168F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x088168F0u) goto L_088168F0;
    return;
L_088168F0:
    ctx.gpr[5] = (15692u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x08816914u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08816914u) goto L_08816914;
    return;
L_08816914:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08816924u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08816924u) goto L_08816924;
    return;
L_08816924:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08816938u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08816938u) goto L_08816938;
    return;
L_08816938:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (15820u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.gpr[4] = (0u | 66u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08816968u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08816968u) goto L_08816968;
    return;
L_08816968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08816AB8;
      }
      goto L_08816970;
    }
L_08816970:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08816A20;
      }
      goto L_08816978;
    }
L_08816978:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816AB8;
      }
      goto L_08816980;
    }
L_08816980:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[31] = (0x08816994u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08816994u) goto L_08816994;
    return;
L_08816994:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[31] = (0x088169A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x088169A0u) goto L_088169A0;
    return;
L_088169A0:
    ctx.gpr[5] = (15692u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x088169C4u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088169C4u) goto L_088169C4;
    return;
L_088169C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088169D4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x088169D4u) goto L_088169D4;
    return;
L_088169D4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088169E8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088169E8u) goto L_088169E8;
    return;
L_088169E8:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (15820u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.gpr[4] = (0u | 66u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08816A18u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08816A18u) goto L_08816A18;
    return;
L_08816A18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08816AB8;
      }
      goto L_08816A20;
    }
L_08816A20:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[31] = (0x08816A34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08816A34u) goto L_08816A34;
    return;
L_08816A34:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[31] = (0x08816A40u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08816A40u) goto L_08816A40;
    return;
L_08816A40:
    ctx.gpr[5] = (15692u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x08816A64u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08816A64u) goto L_08816A64;
    return;
L_08816A64:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08816A74u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08816A74u) goto L_08816A74;
    return;
L_08816A74:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08816A88u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08816A88u) goto L_08816A88;
    return;
L_08816A88:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (15820u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.gpr[4] = (0u | 66u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08816AB8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08816AB8u) goto L_08816AB8;
    return;
L_08816AB8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088168B0;
      }
      goto L_08816AC8;
    }
L_08816AC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088177DC;
      }
      goto L_08816AD0;
    }
L_08816AD0:
    ctx.gpr[31] = (0x08816AD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08816AD8u) goto L_08816AD8;
    return;
L_08816AD8:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08816CD0;
      }
      goto L_08816AE4;
    }
L_08816AE4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08816AF8u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 341u, 0x08AF9800u>(ctx, &aot_mem) && ctx.pc == 0x08816AF8u) goto L_08816AF8;
    return;
L_08816AF8:
    ctx.gpr[31] = (0x08816B00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1180)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x08816B00u) goto L_08816B00;
    return;
L_08816B00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08816B10u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x08816B10u) goto L_08816B10;
    return;
L_08816B10:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x08816B1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x08816B1Cu) goto L_08816B1C;
    return;
L_08816B1C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08816B28u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08816B28u) goto L_08816B28;
    return;
L_08816B28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1488)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08816B4Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08816B4Cu) goto L_08816B4C;
    return;
L_08816B4C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08816B58u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08816B58u) goto L_08816B58;
    return;
L_08816B58:
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1344));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08816B68u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 423u, 0x08AF9E10u>(ctx, &aot_mem) && ctx.pc == 0x08816B68u) goto L_08816B68;
    return;
L_08816B68:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08816B74u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 427u, 0x08AF9E50u>(ctx, &aot_mem) && ctx.pc == 0x08816B74u) goto L_08816B74;
    return;
L_08816B74:
    ctx.gpr[31] = (0x08816B7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1192)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x08816B7Cu) goto L_08816B7C;
    return;
L_08816B7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08816B8Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x08816B8Cu) goto L_08816B8C;
    return;
L_08816B8C:
    ctx.gpr[31] = (0x08816B94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x08816B94u) goto L_08816B94;
    return;
L_08816B94:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08816BA0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08816BA0u) goto L_08816BA0;
    return;
L_08816BA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1480)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08816BBCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08816BBCu) goto L_08816BBC;
    return;
L_08816BBC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08816BC8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08816BC8u) goto L_08816BC8;
    return;
L_08816BC8:
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1280));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08816BD8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 423u, 0x08AF9E10u>(ctx, &aot_mem) && ctx.pc == 0x08816BD8u) goto L_08816BD8;
    return;
L_08816BD8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08816BE4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 427u, 0x08AF9E50u>(ctx, &aot_mem) && ctx.pc == 0x08816BE4u) goto L_08816BE4;
    return;
L_08816BE4:
    ctx.gpr[31] = (0x08816BECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1172)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x08816BECu) goto L_08816BEC;
    return;
L_08816BEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08816BFCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x08816BFCu) goto L_08816BFC;
    return;
L_08816BFC:
    ctx.gpr[31] = (0x08816C04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x08816C04u) goto L_08816C04;
    return;
L_08816C04:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08816C10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08816C10u) goto L_08816C10;
    return;
L_08816C10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1484)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08816C2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08816C2Cu) goto L_08816C2C;
    return;
L_08816C2C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08816C38u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08816C38u) goto L_08816C38;
    return;
L_08816C38:
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1312));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08816C48u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 423u, 0x08AF9E10u>(ctx, &aot_mem) && ctx.pc == 0x08816C48u) goto L_08816C48;
    return;
L_08816C48:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08816C54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 427u, 0x08AF9E50u>(ctx, &aot_mem) && ctx.pc == 0x08816C54u) goto L_08816C54;
    return;
L_08816C54:
    ctx.gpr[31] = (0x08816C5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1184)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x08816C5Cu) goto L_08816C5C;
    return;
L_08816C5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08816C6Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x08816C6Cu) goto L_08816C6C;
    return;
L_08816C6C:
    ctx.gpr[31] = (0x08816C74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x08816C74u) goto L_08816C74;
    return;
L_08816C74:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08816C80u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08816C80u) goto L_08816C80;
    return;
L_08816C80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1476)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08816C9Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08816C9Cu) goto L_08816C9C;
    return;
L_08816C9C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08816CA8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08816CA8u) goto L_08816CA8;
    return;
L_08816CA8:
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1248));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08816CB8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 423u, 0x08AF9E10u>(ctx, &aot_mem) && ctx.pc == 0x08816CB8u) goto L_08816CB8;
    return;
L_08816CB8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08816CC4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 427u, 0x08AF9E50u>(ctx, &aot_mem) && ctx.pc == 0x08816CC4u) goto L_08816CC4;
    return;
L_08816CC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08816CD0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 299u, 0x0880AB60u>(ctx, &aot_mem) && ctx.pc == 0x08816CD0u) goto L_08816CD0;
    return;
L_08816CD0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08816CDCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 372u, 0x08AF9994u>(ctx, &aot_mem) && ctx.pc == 0x08816CDCu) goto L_08816CDC;
    return;
L_08816CDC:
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08816CF4;
    }
    goto L_08816CF4;
L_08816CF4:
    ctx.gpr[31] = (0x08816CFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08816CFCu) goto L_08816CFC;
    return;
L_08816CFC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08816D40;
      }
      goto L_08816D08;
    }
L_08816D08:
    ctx.gpr[31] = (0x08816D10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08816D10u) goto L_08816D10;
    return;
L_08816D10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816D40;
      }
      goto L_08816D18;
    }
L_08816D18:
    ctx.gpr[31] = (0x08816D20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08816D20u) goto L_08816D20;
    return;
L_08816D20:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08816D40;
      }
      goto L_08816D2C;
    }
L_08816D2C:
    ctx.gpr[31] = (0x08816D34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08816D34u) goto L_08816D34;
    return;
L_08816D34:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088177DC;
      }
      goto L_08816D40;
    }
L_08816D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1740)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08816D60;
      }
      goto L_08816D50;
    }
L_08816D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08816D64;
      }
      goto L_08816D60;
    }
L_08816D60:
    ctx.gpr[18] = (0u | 1u);
    goto L_08816D64;
L_08816D64:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088177DC;
      }
      goto L_08816D74;
    }
L_08816D74:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088173C0;
      }
      goto L_08816D98;
    }
L_08816D98:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08816DA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08816DA4u) goto L_08816DA4;
    return;
L_08816DA4:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088173C0;
      }
      goto L_08816DB0;
    }
L_08816DB0:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08816DD8;
      }
      goto L_08816DC8;
    }
L_08816DC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088172EC;
      }
      goto L_08816DD0;
    }
L_08816DD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08816DF0;
      }
      goto L_08816DD8;
    }
L_08816DD8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08817040;
      }
      goto L_08816DE0;
    }
L_08816DE0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088171A4;
      }
      goto L_08816DE8;
    }
L_08816DE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088172EC;
      }
      goto L_08816DF0;
    }
L_08816DF0:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1248));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08816E08u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 314u, 0x0880DB08u>(ctx, &aot_mem) && ctx.pc == 0x08816E08u) goto L_08816E08;
    return;
L_08816E08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08816F30;
      }
      goto L_08816E10;
    }
L_08816E10:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[31] = (0x08816E2Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08816E2Cu) goto L_08816E2C;
    return;
L_08816E2C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08816E38u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08816E38u) goto L_08816E38;
    return;
L_08816E38:
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08816E60u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08816E60u) goto L_08816E60;
    return;
L_08816E60:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08816E70u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08816E70u) goto L_08816E70;
    return;
L_08816E70:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08816E88u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08816E88u) goto L_08816E88;
    return;
L_08816E88:
    ctx.gpr[4] = (0u | 67u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08816EB0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08816EB0u) goto L_08816EB0;
    return;
L_08816EB0:
    ctx.gpr[31] = (0x08816EB8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08816EB8u) goto L_08816EB8;
    return;
L_08816EB8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08816EC4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08816EC4u) goto L_08816EC4;
    return;
L_08816EC4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08816EDCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08816EDCu) goto L_08816EDC;
    return;
L_08816EDC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08816EECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08816EECu) goto L_08816EEC;
    return;
L_08816EEC:
    ctx.gpr[5] = (15692u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08816F08u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08816F08u) goto L_08816F08;
    return;
L_08816F08:
    ctx.gpr[4] = (0u | 67u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08816F30u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08816F30u) goto L_08816F30;
    return;
L_08816F30:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[31] = (0x08816F44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08816F44u) goto L_08816F44;
    return;
L_08816F44:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[31] = (0x08816F50u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08816F50u) goto L_08816F50;
    return;
L_08816F50:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08816F70u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08816F70u) goto L_08816F70;
    return;
L_08816F70:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08816F80u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08816F80u) goto L_08816F80;
    return;
L_08816F80:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08816F94u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08816F94u) goto L_08816F94;
    return;
L_08816F94:
    ctx.gpr[4] = (0u | 66u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08816FBCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08816FBCu) goto L_08816FBC;
    return;
L_08816FBC:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1408)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08817038;
      }
      goto L_08816FD8;
    }
L_08816FD8:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08816FECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08816FECu) goto L_08816FEC;
    return;
L_08816FEC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[31] = (0x08816FF8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08816FF8u) goto L_08816FF8;
    return;
L_08816FF8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08817004u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817004u) goto L_08817004;
    return;
L_08817004:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08817010u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817010u) goto L_08817010;
    return;
L_08817010:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1436)));
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1452));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08817038u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 293u, 0x08AE58CCu>(ctx, &aot_mem) && ctx.pc == 0x08817038u) goto L_08817038;
    return;
L_08817038:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088173C0;
      }
      goto L_08817040;
    }
L_08817040:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0881705C;
      }
      goto L_0881704C;
    }
L_0881704C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881705C;
      }
      goto L_08817054;
    }
L_08817054:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881719C;
      }
      goto L_0881705C;
    }
L_0881705C:
    ctx.gpr[31] = (0x08817064u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x08817064u) goto L_08817064;
    return;
L_08817064:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881711C;
      }
      goto L_0881707C;
    }
L_0881707C:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08817098u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 314u, 0x0880DB08u>(ctx, &aot_mem) && ctx.pc == 0x08817098u) goto L_08817098;
    return;
L_08817098:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[31] = (0x088170A4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x088170A4u) goto L_088170A4;
    return;
L_088170A4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[31] = (0x088170B0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x088170B0u) goto L_088170B0;
    return;
L_088170B0:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088170D0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088170D0u) goto L_088170D0;
    return;
L_088170D0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088170E0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x088170E0u) goto L_088170E0;
    return;
L_088170E0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088170F4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088170F4u) goto L_088170F4;
    return;
L_088170F4:
    ctx.gpr[4] = (0u | 66u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881711Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881711Cu) goto L_0881711C;
    return;
L_0881711C:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1408)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881719C;
      }
      goto L_0881713C;
    }
L_0881713C:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08817150u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817150u) goto L_08817150;
    return;
L_08817150:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[31] = (0x0881715Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x0881715Cu) goto L_0881715C;
    return;
L_0881715C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08817168u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817168u) goto L_08817168;
    return;
L_08817168:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08817174u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817174u) goto L_08817174;
    return;
L_08817174:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1436)));
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1452));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881719Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 293u, 0x08AE58CCu>(ctx, &aot_mem) && ctx.pc == 0x0881719Cu) goto L_0881719C;
    return;
L_0881719C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088173C0;
      }
      goto L_088171A4;
    }
L_088171A4:
    ctx.gpr[31] = (0x088171ACu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x088171ACu) goto L_088171AC;
    return;
L_088171AC:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08817264;
      }
      goto L_088171C4;
    }
L_088171C4:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088171E0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 314u, 0x0880DB08u>(ctx, &aot_mem) && ctx.pc == 0x088171E0u) goto L_088171E0;
    return;
L_088171E0:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[31] = (0x088171ECu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x088171ECu) goto L_088171EC;
    return;
L_088171EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[31] = (0x088171F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x088171F8u) goto L_088171F8;
    return;
L_088171F8:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08817218u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08817218u) goto L_08817218;
    return;
L_08817218:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08817228u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817228u) goto L_08817228;
    return;
L_08817228:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881723Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x0881723Cu) goto L_0881723C;
    return;
L_0881723C:
    ctx.gpr[4] = (0u | 66u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08817264u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08817264u) goto L_08817264;
    return;
L_08817264:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1408)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088172E4;
      }
      goto L_08817284;
    }
L_08817284:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08817298u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817298u) goto L_08817298;
    return;
L_08817298:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[31] = (0x088172A4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x088172A4u) goto L_088172A4;
    return;
L_088172A4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088172B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x088172B0u) goto L_088172B0;
    return;
L_088172B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088172BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x088172BCu) goto L_088172BC;
    return;
L_088172BC:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1436)));
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1452));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088172E4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 293u, 0x08AE58CCu>(ctx, &aot_mem) && ctx.pc == 0x088172E4u) goto L_088172E4;
    return;
L_088172E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088173C0;
      }
      goto L_088172EC;
    }
L_088172EC:
    ctx.gpr[31] = (0x088172F4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 372u, 0x08AF9994u>(ctx, &aot_mem) && ctx.pc == 0x088172F4u) goto L_088172F4;
    return;
L_088172F4:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08817324;
      }
      goto L_0881730C;
    }
L_0881730C:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1248));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08817324u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 314u, 0x0880DB08u>(ctx, &aot_mem) && ctx.pc == 0x08817324u) goto L_08817324;
    return;
L_08817324:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08817340;
      }
      goto L_08817334;
    }
L_08817334:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1456)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088173C0;
      }
      goto L_08817340;
    }
L_08817340:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1408)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088173C0;
      }
      goto L_08817360;
    }
L_08817360:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08817374u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817374u) goto L_08817374;
    return;
L_08817374:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x08817380u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817380u) goto L_08817380;
    return;
L_08817380:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881738Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881738Cu) goto L_0881738C;
    return;
L_0881738C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08817398u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817398u) goto L_08817398;
    return;
L_08817398:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1436)));
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1452));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088173C0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 293u, 0x08AE58CCu>(ctx, &aot_mem) && ctx.pc == 0x088173C0u) goto L_088173C0;
    return;
L_088173C0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x088173CCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 209u, 0x08A29280u>(ctx, &aot_mem) && ctx.pc == 0x088173CCu) goto L_088173CC;
    return;
L_088173CC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
      if (branch_taken) {
          goto L_088177CC;
      }
      goto L_088173D8;
    }
L_088173D8:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088177CC;
      }
      goto L_088173F8;
    }
L_088173F8:
    ctx.gpr[31] = (0x08817400u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 289u, 0x0880AA80u>(ctx, &aot_mem) && ctx.pc == 0x08817400u) goto L_08817400;
    return;
L_08817400:
    ctx.gpr[5] = (15395u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5464), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088177CC;
      }
      goto L_08817420;
    }
L_08817420:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08817430u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08817430u) goto L_08817430;
    return;
L_08817430:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088177CC;
      }
      goto L_0881743C;
    }
L_0881743C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08817448u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08817448u) goto L_08817448;
    return;
L_08817448:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088177CC;
      }
      goto L_08817454;
    }
L_08817454:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08817460u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08817460u) goto L_08817460;
    return;
L_08817460:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088177CC;
      }
      goto L_0881746C;
    }
L_0881746C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08817478u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08817478u) goto L_08817478;
    return;
L_08817478:
    ctx.gpr[4] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088177CC;
      }
      goto L_08817484;
    }
L_08817484:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08817490u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08817490u) goto L_08817490;
    return;
L_08817490:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088177CC;
      }
      goto L_0881749C;
    }
L_0881749C:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[31] = (0x088174B4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x088174B4u) goto L_088174B4;
    return;
L_088174B4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088174C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x088174C0u) goto L_088174C0;
    return;
L_088174C0:
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088174D0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x088174D0u) goto L_088174D0;
    return;
L_088174D0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x088174E0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x088174E0u) goto L_088174E0;
    return;
L_088174E0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088174ECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x088174ECu) goto L_088174EC;
    return;
L_088174EC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088174FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x088174FCu) goto L_088174FC;
    return;
L_088174FC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0881750Cu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x0881750Cu) goto L_0881750C;
    return;
L_0881750C:
    ctx.gpr[31] = (0x08817514u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817514u) goto L_08817514;
    return;
L_08817514:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08817520u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817520u) goto L_08817520;
    return;
L_08817520:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08817530;
      }
      goto L_08817528;
    }
L_08817528:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881759C;
      }
      goto L_08817530;
    }
L_08817530:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x08817548u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08817548u) goto L_08817548;
    return;
L_08817548:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08817558u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08817558u) goto L_08817558;
    return;
L_08817558:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[31] = (0x08817564u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08817564u) goto L_08817564;
    return;
L_08817564:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08817578u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08817578u) goto L_08817578;
    return;
L_08817578:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08817588u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08817588u) goto L_08817588;
    return;
L_08817588:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08817594u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08817594u) goto L_08817594;
    return;
L_08817594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817600;
      }
      goto L_0881759C;
    }
L_0881759C:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.gpr[31] = (0x088175B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x088175B4u) goto L_088175B4;
    return;
L_088175B4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088175C4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x088175C4u) goto L_088175C4;
    return;
L_088175C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[31] = (0x088175D0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x088175D0u) goto L_088175D0;
    return;
L_088175D0:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088175E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x088175E4u) goto L_088175E4;
    return;
L_088175E4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088175F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x088175F4u) goto L_088175F4;
    return;
L_088175F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08817600u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08817600u) goto L_08817600;
    return;
L_08817600:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08817610u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817610u) goto L_08817610;
    return;
L_08817610:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[31] = (0x0881761Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x0881761Cu) goto L_0881761C;
    return;
L_0881761C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[6] = (16000u << 16u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[31] = (0x08817638u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08817638u) goto L_08817638;
    return;
L_08817638:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08817660u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08817660u) goto L_08817660;
    return;
L_08817660:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5464)));
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088176E4;
      }
      goto L_08817684;
    }
L_08817684:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08817694u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817694u) goto L_08817694;
    return;
L_08817694:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[31] = (0x088176A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x088176A0u) goto L_088176A0;
    return;
L_088176A0:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[6] = (16000u << 16u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[31] = (0x088176BCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x088176BCu) goto L_088176BC;
    return;
L_088176BC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088176E4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088176E4u) goto L_088176E4;
    return;
L_088176E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5464)));
    ctx.gpr[4] = (15907u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088177CC;
      }
      goto L_08817708;
    }
L_08817708:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(1248));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[31] = (0x08817720u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817720u) goto L_08817720;
    return;
L_08817720:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881772Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x0881772Cu) goto L_0881772C;
    return;
L_0881772C:
    ctx.gpr[5] = (16000u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08817750u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08817750u) goto L_08817750;
    return;
L_08817750:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881777Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881777Cu) goto L_0881777C;
    return;
L_0881777C:
    ctx.gpr[31] = (0x08817784u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817784u) goto L_08817784;
    return;
L_08817784:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08817790u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817790u) goto L_08817790;
    return;
L_08817790:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088177A4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x088177A4u) goto L_088177A4;
    return;
L_088177A4:
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088177CCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088177CCu) goto L_088177CC;
    return;
L_088177CC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08816D74;
      }
      goto L_088177DC;
    }
L_088177DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08817ED4;
      }
      goto L_088177E8;
    }
L_088177E8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[31] = (0x088177F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x088177F4u) goto L_088177F4;
    return;
L_088177F4:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08817808u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 269u, 0x0880A900u>(ctx, &aot_mem) && ctx.pc == 0x08817808u) goto L_08817808;
    return;
L_08817808:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[31] = (0x08817814u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08817814u) goto L_08817814;
    return;
L_08817814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1740)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08817834;
      }
      goto L_08817824;
    }
L_08817824:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08817B74;
      }
      goto L_0881782C;
    }
L_0881782C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881784C;
      }
      goto L_08817834;
    }
L_08817834:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881795C;
      }
      goto L_0881783C;
    }
L_0881783C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08817A6C;
      }
      goto L_08817844;
    }
L_08817844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817B74;
      }
      goto L_0881784C;
    }
L_0881784C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x0881785Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x0881785Cu) goto L_0881785C;
    return;
L_0881785C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08817868u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817868u) goto L_08817868;
    return;
L_08817868:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08817888u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08817888u) goto L_08817888;
    return;
L_08817888:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08817898u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817898u) goto L_08817898;
    return;
L_08817898:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088178A8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x088178A8u) goto L_088178A8;
    return;
L_088178A8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088178BCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088178BCu) goto L_088178BC;
    return;
L_088178BC:
    ctx.gpr[4] = (0u | 66u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088178E4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088178E4u) goto L_088178E4;
    return;
L_088178E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08817954;
      }
      goto L_088178F8;
    }
L_088178F8:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[31] = (0x08817908u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817908u) goto L_08817908;
    return;
L_08817908:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[31] = (0x08817914u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817914u) goto L_08817914;
    return;
L_08817914:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08817924u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817924u) goto L_08817924;
    return;
L_08817924:
    ctx.gpr[31] = (0x0881792Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881792Cu) goto L_0881792C;
    return;
L_0881792C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08817938u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817938u) goto L_08817938;
    return;
L_08817938:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1453));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817954u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 293u, 0x08AE58CCu>(ctx, &aot_mem) && ctx.pc == 0x08817954u) goto L_08817954;
    return;
L_08817954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817B74;
      }
      goto L_0881795C;
    }
L_0881795C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x0881796Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x0881796Cu) goto L_0881796C;
    return;
L_0881796C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08817978u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817978u) goto L_08817978;
    return;
L_08817978:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08817998u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08817998u) goto L_08817998;
    return;
L_08817998:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088179A8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x088179A8u) goto L_088179A8;
    return;
L_088179A8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088179B8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x088179B8u) goto L_088179B8;
    return;
L_088179B8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088179CCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088179CCu) goto L_088179CC;
    return;
L_088179CC:
    ctx.gpr[4] = (0u | 66u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088179F4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088179F4u) goto L_088179F4;
    return;
L_088179F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08817A64;
      }
      goto L_08817A08;
    }
L_08817A08:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[31] = (0x08817A18u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817A18u) goto L_08817A18;
    return;
L_08817A18:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x08817A24u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817A24u) goto L_08817A24;
    return;
L_08817A24:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08817A34u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817A34u) goto L_08817A34;
    return;
L_08817A34:
    ctx.gpr[31] = (0x08817A3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817A3Cu) goto L_08817A3C;
    return;
L_08817A3C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08817A48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817A48u) goto L_08817A48;
    return;
L_08817A48:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1453));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817A64u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 293u, 0x08AE58CCu>(ctx, &aot_mem) && ctx.pc == 0x08817A64u) goto L_08817A64;
    return;
L_08817A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817B74;
      }
      goto L_08817A6C;
    }
L_08817A6C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08817A7Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817A7Cu) goto L_08817A7C;
    return;
L_08817A7C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08817A88u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817A88u) goto L_08817A88;
    return;
L_08817A88:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08817AA8u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08817AA8u) goto L_08817AA8;
    return;
L_08817AA8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08817AB8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817AB8u) goto L_08817AB8;
    return;
L_08817AB8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817AC8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817AC8u) goto L_08817AC8;
    return;
L_08817AC8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08817ADCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08817ADCu) goto L_08817ADC;
    return;
L_08817ADC:
    ctx.gpr[4] = (0u | 66u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08817B04u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08817B04u) goto L_08817B04;
    return;
L_08817B04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08817B74;
      }
      goto L_08817B18;
    }
L_08817B18:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[31] = (0x08817B28u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817B28u) goto L_08817B28;
    return;
L_08817B28:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x08817B34u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817B34u) goto L_08817B34;
    return;
L_08817B34:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08817B44u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817B44u) goto L_08817B44;
    return;
L_08817B44:
    ctx.gpr[31] = (0x08817B4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817B4Cu) goto L_08817B4C;
    return;
L_08817B4C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08817B58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817B58u) goto L_08817B58;
    return;
L_08817B58:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1453));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817B74u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 293u, 0x08AE58CCu>(ctx, &aot_mem) && ctx.pc == 0x08817B74u) goto L_08817B74;
    return;
L_08817B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08817B94;
      }
      goto L_08817B84;
    }
L_08817B84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08817ED4;
      }
      goto L_08817B8C;
    }
L_08817B8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817BAC;
      }
      goto L_08817B94;
    }
L_08817B94:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08817CBC;
      }
      goto L_08817B9C;
    }
L_08817B9C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08817DCC;
      }
      goto L_08817BA4;
    }
L_08817BA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817ED4;
      }
      goto L_08817BAC;
    }
L_08817BAC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[31] = (0x08817BBCu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1344));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817BBCu) goto L_08817BBC;
    return;
L_08817BBC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.gpr[31] = (0x08817BC8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817BC8u) goto L_08817BC8;
    return;
L_08817BC8:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08817BE8u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08817BE8u) goto L_08817BE8;
    return;
L_08817BE8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08817BF8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817BF8u) goto L_08817BF8;
    return;
L_08817BF8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817C08u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817C08u) goto L_08817C08;
    return;
L_08817C08:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08817C1Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08817C1Cu) goto L_08817C1C;
    return;
L_08817C1C:
    ctx.gpr[4] = (0u | 66u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08817C44u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08817C44u) goto L_08817C44;
    return;
L_08817C44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1420)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08817CB4;
      }
      goto L_08817C58;
    }
L_08817C58:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[31] = (0x08817C68u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1344));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817C68u) goto L_08817C68;
    return;
L_08817C68:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    ctx.gpr[31] = (0x08817C74u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817C74u) goto L_08817C74;
    return;
L_08817C74:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08817C84u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817C84u) goto L_08817C84;
    return;
L_08817C84:
    ctx.gpr[31] = (0x08817C8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817C8Cu) goto L_08817C8C;
    return;
L_08817C8C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08817C98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817C98u) goto L_08817C98;
    return;
L_08817C98:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1448)));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1455));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817CB4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 293u, 0x08AE58CCu>(ctx, &aot_mem) && ctx.pc == 0x08817CB4u) goto L_08817CB4;
    return;
L_08817CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817ED4;
      }
      goto L_08817CBC;
    }
L_08817CBC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.gpr[31] = (0x08817CCCu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1344));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817CCCu) goto L_08817CCC;
    return;
L_08817CCC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.gpr[31] = (0x08817CD8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817CD8u) goto L_08817CD8;
    return;
L_08817CD8:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08817CF8u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08817CF8u) goto L_08817CF8;
    return;
L_08817CF8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08817D08u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817D08u) goto L_08817D08;
    return;
L_08817D08:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817D18u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817D18u) goto L_08817D18;
    return;
L_08817D18:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08817D2Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08817D2Cu) goto L_08817D2C;
    return;
L_08817D2C:
    ctx.gpr[4] = (0u | 66u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08817D54u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08817D54u) goto L_08817D54;
    return;
L_08817D54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1420)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08817DC4;
      }
      goto L_08817D68;
    }
L_08817D68:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    ctx.gpr[31] = (0x08817D78u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1344));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817D78u) goto L_08817D78;
    return;
L_08817D78:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    ctx.gpr[31] = (0x08817D84u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817D84u) goto L_08817D84;
    return;
L_08817D84:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08817D94u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817D94u) goto L_08817D94;
    return;
L_08817D94:
    ctx.gpr[31] = (0x08817D9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817D9Cu) goto L_08817D9C;
    return;
L_08817D9C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08817DA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817DA8u) goto L_08817DA8;
    return;
L_08817DA8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1448)));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1455));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817DC4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 293u, 0x08AE58CCu>(ctx, &aot_mem) && ctx.pc == 0x08817DC4u) goto L_08817DC4;
    return;
L_08817DC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08817ED4;
      }
      goto L_08817DCC;
    }
L_08817DCC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.gpr[31] = (0x08817DDCu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1344));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817DDCu) goto L_08817DDC;
    return;
L_08817DDC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.gpr[31] = (0x08817DE8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817DE8u) goto L_08817DE8;
    return;
L_08817DE8:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08817E08u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08817E08u) goto L_08817E08;
    return;
L_08817E08:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08817E18u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817E18u) goto L_08817E18;
    return;
L_08817E18:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817E28u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817E28u) goto L_08817E28;
    return;
L_08817E28:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08817E3Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08817E3Cu) goto L_08817E3C;
    return;
L_08817E3C:
    ctx.gpr[4] = (0u | 66u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08817E64u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08817E64u) goto L_08817E64;
    return;
L_08817E64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1420)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08817ED4;
      }
      goto L_08817E78;
    }
L_08817E78:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1312));
    ctx.gpr[31] = (0x08817E88u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1344));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08817E88u) goto L_08817E88;
    return;
L_08817E88:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x08817E94u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08817E94u) goto L_08817E94;
    return;
L_08817E94:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08817EA4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817EA4u) goto L_08817EA4;
    return;
L_08817EA4:
    ctx.gpr[31] = (0x08817EACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817EACu) goto L_08817EAC;
    return;
L_08817EAC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08817EB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08817EB8u) goto L_08817EB8;
    return;
L_08817EB8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1448)));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1455));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08817ED4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 293u, 0x08AE58CCu>(ctx, &aot_mem) && ctx.pc == 0x08817ED4u) goto L_08817ED4;
    return;
L_08817ED4:
    ctx.gpr[31] = (0x08817EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 421u, 0x08ACA8D4u>(ctx, &aot_mem) && ctx.pc == 0x08817EDCu) goto L_08817EDC;
    return;
L_08817EDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 12u, 0x08818108u>(ctx, &aot_mem); return;
      }
      goto L_08817EE4;
    }
L_08817EE4:
    ctx.gpr[31] = (0x08817EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 425u, 0x08ACA8FCu>(ctx, &aot_mem) && ctx.pc == 0x08817EECu) goto L_08817EEC;
    return;
L_08817EEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 12u, 0x08818108u>(ctx, &aot_mem); return;
      }
      goto L_08817EF4;
    }
L_08817EF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 12u, 0x08818108u>(ctx, &aot_mem); return;
      }
      goto L_08817F00;
    }
L_08817F00:
    ctx.gpr[31] = (0x08817F08u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x08817F08u) goto L_08817F08;
    return;
L_08817F08:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 12u, 0x08818108u>(ctx, &aot_mem); return;
      }
      goto L_08817F20;
    }
L_08817F20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 12u, 0x08818108u>(ctx, &aot_mem); return;
      }
      goto L_08817F40;
    }
L_08817F40:
    ctx.gpr[31] = (0x08817F48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08817F48u) goto L_08817F48;
    return;
L_08817F48:
    ctx.gpr[31] = (0x08817F50u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 309u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08817F50u) goto L_08817F50;
    return;
L_08817F50:
    ctx.gpr[31] = (0x08817F58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08817F58u) goto L_08817F58;
    return;
L_08817F58:
    ctx.gpr[31] = (0x08817F60u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 312u, 0x0880AC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08817F60u) goto L_08817F60;
    return;
L_08817F60:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 12u, 0x08818108u>(ctx, &aot_mem); return;
      }
      goto L_08817F78;
    }
L_08817F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1392));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1408));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08817FA4u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 305u, 0x08A1DF44u>(ctx, &aot_mem) && ctx.pc == 0x08817FA4u) goto L_08817FA4;
    return;
L_08817FA4:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1424));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08817FB8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08817FB8u) goto L_08817FB8;
    return;
L_08817FB8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1440));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08817FCCu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08817FCCu) goto L_08817FCC;
    return;
L_08817FCC:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1456));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08817FE0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08817FE0u) goto L_08817FE0;
    return;
L_08817FE0:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1360));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08817FF8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08817FF8u) goto L_08817FF8;
    return;
L_08817FF8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08818000u; return;
}

void recomp_unit_0004(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0004_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_4(Runtime &runtime) {
    runtime.register_generated_unit(4u, 0x08814000u, 16384u, &recomp_unit_0004, &recomp_unit_0004_entry);
    runtime.register_function(0x08814000u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881400Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814028u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814038u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814044u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814054u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881405Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881406Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814080u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814088u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814090u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814098u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088140F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814100u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814114u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814118u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814124u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814134u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881413Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814144u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881414Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881415Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814170u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814174u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814180u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814190u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088141FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814208u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814210u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814218u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814220u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814228u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814230u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814238u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814244u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881424Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814254u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814260u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814268u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814274u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814284u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814290u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814298u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088142A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088142B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088142C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088142CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088142D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088142E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088142ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088142F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814304u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814310u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814318u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814338u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881435Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881436Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814374u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881437Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814384u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814390u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814394u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088143F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814404u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881440Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881441Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814424u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814430u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814440u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814448u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814450u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814458u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814460u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814468u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814480u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814488u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088144E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814500u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881450Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814518u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814520u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814530u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814538u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814540u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814548u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814554u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881455Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814568u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814594u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881459Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088145D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814604u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881460Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814614u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814624u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881462Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814638u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814658u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814660u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814668u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814674u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814690u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881469Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088146F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814714u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881472Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814740u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881474Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814758u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881476Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814778u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881478Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814794u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088147E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814804u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814810u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881481Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881482Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814838u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814848u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814850u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814860u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814874u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814880u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814894u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088148FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814914u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814928u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881493Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814944u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881495Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814970u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881497Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881498Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088149F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814A8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814AECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814B94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814BF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814C98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814CF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D60u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814D94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814DF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814E9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814ED4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814EE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F60u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814F98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814FA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814FC0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08814FECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815024u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815034u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815058u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815070u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815090u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088150F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881511Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815124u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815130u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881513Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881515Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815178u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815180u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815184u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815190u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088151F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815204u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881520Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881521Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815228u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815238u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815248u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815278u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088152F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881530Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815320u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815324u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881532Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815338u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815340u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881534Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815354u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815360u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881537Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881538Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815394u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088153FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815408u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815410u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815418u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815420u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815434u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815440u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815444u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815458u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815460u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815478u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815480u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815490u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815498u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088154F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815508u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815510u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815538u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815554u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815564u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815570u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815584u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815594u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088155F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815600u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815610u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815618u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815620u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815628u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815648u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815650u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815670u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088156ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815700u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815708u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815744u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815754u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815784u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815798u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881579Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088157C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088157D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088157DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088157E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088157F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088157F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815818u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881582Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815838u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815840u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815854u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815860u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815868u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815888u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881589Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088158E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815900u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881590Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815914u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815928u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815938u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815950u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815958u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815974u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815984u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881599Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088159F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815A90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AB4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815ACCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815AFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815B94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BBCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BD4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815BF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815C98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CBCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815CE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D90u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815D98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815DA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815DD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815DE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815DE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815DFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E0Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E14u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815E94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EBCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815ED0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815EE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815F9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08815FFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881600Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816024u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816030u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816040u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816058u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816060u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816070u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816084u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816094u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088160F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816104u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816114u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816124u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816134u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816144u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881618Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088161D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816204u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816228u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816230u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816250u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816258u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816260u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881626Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881627Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816294u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088162F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816300u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816308u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816370u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816384u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816390u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816398u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088163A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088163ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088163CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088163DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088163ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816400u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881641Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816424u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881642Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881644Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816454u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881645Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816474u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881647Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816484u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881649Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088164F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816508u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816518u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816524u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881652Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816540u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816550u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881655Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816598u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088165F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816600u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881660Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816614u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881661Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881663Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816640u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816648u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816664u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816668u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816670u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816674u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881667Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816688u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816690u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881669Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088166FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816704u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881670Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816730u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816754u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881678Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088167FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816808u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816834u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816844u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881685Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816868u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816874u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816890u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168C8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088168F0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816914u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816924u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816938u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816968u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816970u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816978u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816980u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816994u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169D4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088169E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816A88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816AF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816B94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BA0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BBCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816BFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C5Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816C9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816CFCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D60u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816D98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DD0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816DF0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E10u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E38u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E60u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816E88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EB0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816EECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F30u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F70u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F80u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816F94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FBCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08816FF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817004u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817010u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817038u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817040u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881704Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817054u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881705Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817064u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881707Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817098u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088170F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881711Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881713Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817150u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881715Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817168u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817174u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881719Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171ACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088171F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817218u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817228u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881723Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817264u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817284u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817298u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172B0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088172F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881730Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817324u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817334u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817340u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817360u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817374u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817380u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881738Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817398u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173D8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088173F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817400u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817420u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817430u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881743Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817448u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817454u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817460u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881746Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817478u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817484u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817490u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881749Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174C0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174E0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174ECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088174FCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881750Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817514u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817520u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817528u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817530u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817548u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817558u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817564u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817578u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817588u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817594u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881759Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175B4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175C4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175D0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088175F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817600u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817610u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881761Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817638u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817660u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817684u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817694u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176A0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088176E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817708u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817720u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881772Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817750u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881777Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817784u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817790u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177A4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177DCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177E8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088177F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817808u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817814u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817824u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881782Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817834u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881783Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817844u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881784Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881785Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817868u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817888u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817898u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178BCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178E4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088178F8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817908u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817914u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817924u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881792Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817938u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817954u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881795Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x0881796Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817978u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817998u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179A8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179B8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179CCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x088179F4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A24u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A6Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A7Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817A88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817AA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817AB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817AC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817ADCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B04u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B34u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B4Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817B9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BBCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BC8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817BF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C1Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C44u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C74u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C8Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817C98u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817CB4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817CBCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817CCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817CD8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817CF8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D2Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D54u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D68u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D84u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817D9Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DA8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DC4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817DE8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E18u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E28u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E3Cu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E64u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E88u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817E94u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EACu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817ED4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EDCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EE4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EECu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817EF4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F00u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F08u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F20u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F40u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F48u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F50u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F58u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F60u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817F78u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817FA4u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817FB8u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817FCCu, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817FE0u, &recomp_unit_0004, "recomp_unit_0004");
    runtime.register_function(0x08817FF8u, &recomp_unit_0004, "recomp_unit_0004");
}
} // namespace psprecomp
