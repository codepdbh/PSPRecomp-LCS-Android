#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0183[4095] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0,
    0, 8, 0, 0, 9, 0, 10, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 15, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22,
    0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 32,
    0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0,
    0, 41, 0, 0, 0, 42, 0, 43, 0, 44, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0,
    0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 68, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0,
    81, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 85, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 109, 110, 0, 0, 111, 0, 0, 0, 112,
    0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 120, 121, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 129, 130, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0,
    136, 0, 137, 138, 0, 0, 139, 0, 0, 0, 140, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 143, 0, 144, 145, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 151, 152, 0, 0, 153, 0, 0, 0, 154, 0, 155,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 161, 162, 0, 0, 163, 0, 0, 0, 164, 0,
    165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 169, 170, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0,
    176, 0, 177, 178, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 186, 0, 0, 187, 0, 0, 0,
    188, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 193, 194, 0, 0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 0, 198, 0, 0, 199,
    0, 0, 200, 0, 201, 202, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 209, 210, 0, 0, 211, 0,
    0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 217, 218, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 0, 222, 0,
    0, 223, 0, 0, 224, 0, 225, 226, 0, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 233, 234, 0, 0,
    235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 241, 242, 0, 0, 243, 0, 0, 0, 244, 245, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 251, 252,
    0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 259, 260, 0, 0, 261, 0, 0, 0, 262, 263, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 266, 267, 0, 268, 0, 269, 0, 0, 0, 270,
    0, 271, 272, 0, 273, 0, 274, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 278, 279, 0, 0, 280, 0, 0, 0, 281, 0, 282, 0, 0, 0,
    283, 0, 0, 284, 0, 0, 285, 0, 286, 287, 0, 0, 288, 0, 0, 0, 289, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 294, 295,
    0, 0, 296, 0, 0, 0, 297, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0,
    0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 305, 0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0,
    312, 313, 0, 0, 314, 0, 0, 0, 315, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0,
    0, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 329, 330, 0, 0, 331, 0,
    0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 337, 338, 0, 0, 339, 0, 0, 0, 340, 0, 341, 0, 0, 0, 342, 0,
    0, 343, 0, 0, 344, 0, 345, 346, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 353, 354, 0, 0,
    355, 0, 0, 0, 356, 357, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 361, 0,
    362, 363, 0, 364, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 370, 371, 0, 0, 372, 0, 0, 0, 373, 0, 374, 0, 0,
    0, 375, 0, 0, 376, 0, 0, 377, 0, 378, 379, 0, 0, 380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 386,
    387, 0, 0, 388, 0, 0, 0, 389, 390, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393,
    0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 397, 398, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 0, 402, 0, 0, 403, 0, 0, 404,
    0, 405, 406, 0, 0, 407, 0, 0, 0, 408, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0,
    0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 415, 416, 0, 0, 417, 0, 0, 0, 418, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0,
    0, 422, 0, 423, 424, 0, 0, 425, 0, 0, 0, 426, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428,
    0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 433, 434, 0, 0, 435, 0, 0, 0, 436, 0, 437, 0, 0, 0, 438, 0, 0,
    439, 0, 0, 440, 0, 441, 442, 0, 0, 443, 0, 0, 0, 444, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 452, 453, 0, 0, 454, 0, 0,
    0, 455, 0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 460, 461, 0, 0, 462, 0, 0, 0, 463, 464, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 470, 471, 0, 0, 472, 0,
    0, 0, 473, 0, 474, 0, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 478, 479, 0, 0, 480, 0, 0, 0, 481, 482, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 486, 0, 0, 487, 0, 488, 489, 0, 0, 490,
    0, 0, 0, 491, 0, 492, 0, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 496, 497, 0, 0, 498, 0, 0, 0, 499, 500, 0, 501, 0, 0, 0,
    502, 0, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 506, 507, 0, 0, 508, 0, 0, 0, 509, 0, 510, 0, 0, 0, 511, 0, 0, 512, 0, 0,
    513, 0, 514, 515, 0, 0, 516, 0, 0, 0, 517, 518, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 526, 527, 0, 528, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 534, 535, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 541, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0,
    544, 0, 0, 545, 0, 0, 546, 0, 547, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0,
    0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 557, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 562, 0, 0, 563, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 584, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0,
    0, 0, 0, 0, 589, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0,
    0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0,
    0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0,
    0, 0, 604, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 0, 0, 611, 0, 0,
    612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 618, 0, 619, 0, 0, 0, 0, 0, 620, 0, 621, 622, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 625, 0, 626, 627, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 638, 0, 639, 0, 640, 0, 641,
    0, 642, 0, 643, 0, 644, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 647, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 651, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0,
    0, 0, 653, 0, 0, 654, 0, 0, 655, 656, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 659, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 662, 0, 0, 663, 0, 664, 665,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 672, 0, 0, 673,
    0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0,
    0, 679, 0, 680, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 684,
    0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0,
    688, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0,
    0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0,
    0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0,
    0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0,
    0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0,
    0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 0,
    0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0,
    0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 718,
    0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0,
    723, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 0, 730,
    0, 731, 0, 0, 0, 0, 0, 732, 0, 733, 0, 734, 0, 735, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 738, 0, 0, 739, 0,
    0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 744, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746,
    0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 750, 0, 751,
    752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 756, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 763, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0,
    771, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0,
    777, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 782, 0,
    0, 0, 783, 0, 0, 0, 0, 0, 784, 0, 0, 0, 785, 786, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 788, 0, 789, 0, 790, 0, 791,
    0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 0, 794, 0, 795, 0, 796, 0, 0, 797, 0, 0, 0, 0, 0, 798, 0, 799, 0, 0, 0,
    0, 0, 0, 0, 800, 801, 0, 0, 0, 802, 0, 803, 0, 804, 0, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0, 807, 0, 808, 0, 0, 809, 0,
    0, 0, 0, 0, 810, 0, 811, 0, 812, 0, 0, 0, 0, 0, 0, 813, 0, 0, 814, 0, 0, 815, 0, 0, 816, 0, 817, 818, 0, 819, 0, 0,
    820, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 822, 0, 0, 823, 0, 0, 824, 0, 825, 826, 0, 827, 0, 828, 0, 0, 829, 0, 0, 0, 0,
    830, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 833, 0, 0, 0, 0, 0, 834, 0, 835, 0, 836, 0, 0, 837, 0, 0, 0, 0, 0, 838, 0,
    839, 0, 840, 0, 841, 0, 0, 842, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 848, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 850, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 0, 0, 0, 0, 0, 854,
    0, 0, 0, 855, 0, 0, 0, 856, 0, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0,
    0, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 0, 0, 861, 0, 0, 0, 0, 0, 862, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 864,
    0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0,
    0, 0, 0, 0, 868, 0, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 0, 871, 0, 0, 0, 0, 0, 872, 0, 0, 873,
};
void recomp_unit_0183_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AE0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0183[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AE0000;
    case 2u: goto L_08AE0008;
    case 3u: goto L_08AE0014;
    case 4u: goto L_08AE002C;
    case 5u: goto L_08AE0034;
    case 6u: goto L_08AE0068;
    case 7u: goto L_08AE0078;
    case 8u: goto L_08AE0084;
    case 9u: goto L_08AE0090;
    case 10u: goto L_08AE0098;
    case 11u: goto L_08AE009C;
    case 12u: goto L_08AE00A8;
    case 13u: goto L_08AE00DC;
    case 14u: goto L_08AE0108;
    case 15u: goto L_08AE0110;
    case 16u: goto L_08AE0114;
    case 17u: goto L_08AE012C;
    case 18u: goto L_08AE013C;
    case 19u: goto L_08AE0144;
    case 20u: goto L_08AE015C;
    case 21u: goto L_08AE016C;
    case 22u: goto L_08AE017C;
    case 23u: goto L_08AE0188;
    case 24u: goto L_08AE0190;
    case 25u: goto L_08AE01AC;
    case 26u: goto L_08AE01B4;
    case 27u: goto L_08AE01BC;
    case 28u: goto L_08AE01C8;
    case 29u: goto L_08AE01E0;
    case 30u: goto L_08AE01E8;
    case 31u: goto L_08AE01F0;
    case 32u: goto L_08AE01FC;
    case 33u: goto L_08AE0204;
    case 34u: goto L_08AE0220;
    case 35u: goto L_08AE0228;
    case 36u: goto L_08AE0230;
    case 37u: goto L_08AE023C;
    case 38u: goto L_08AE0254;
    case 39u: goto L_08AE0260;
    case 40u: goto L_08AE0274;
    case 41u: goto L_08AE0284;
    case 42u: goto L_08AE0294;
    case 43u: goto L_08AE029C;
    case 44u: goto L_08AE02A4;
    case 45u: goto L_08AE02A8;
    case 46u: goto L_08AE02D8;
    case 47u: goto L_08AE02E4;
    case 48u: goto L_08AE02EC;
    case 49u: goto L_08AE02F4;
    case 50u: goto L_08AE02FC;
    case 51u: goto L_08AE033C;
    case 52u: goto L_08AE0380;
    case 53u: goto L_08AE038C;
    case 54u: goto L_08AE03A4;
    case 55u: goto L_08AE03AC;
    case 56u: goto L_08AE03B4;
    case 57u: goto L_08AE03D0;
    case 58u: goto L_08AE03D8;
    case 59u: goto L_08AE03E0;
    case 60u: goto L_08AE03E8;
    case 61u: goto L_08AE0404;
    case 62u: goto L_08AE040C;
    case 63u: goto L_08AE041C;
    case 64u: goto L_08AE0434;
    case 65u: goto L_08AE043C;
    case 66u: goto L_08AE0448;
    case 67u: goto L_08AE0460;
    case 68u: goto L_08AE0468;
    case 69u: goto L_08AE046C;
    case 70u: goto L_08AE04AC;
    case 71u: goto L_08AE04B4;
    case 72u: goto L_08AE04BC;
    case 73u: goto L_08AE04C4;
    case 74u: goto L_08AE04CC;
    case 75u: goto L_08AE04D0;
    case 76u: goto L_08AE04D8;
    case 77u: goto L_08AE04E0;
    case 78u: goto L_08AE04E8;
    case 79u: goto L_08AE04F0;
    case 80u: goto L_08AE04F8;
    case 81u: goto L_08AE0500;
    case 82u: goto L_08AE0504;
    case 83u: goto L_08AE0540;
    case 84u: goto L_08AE0580;
    case 85u: goto L_08AE0588;
    case 86u: goto L_08AE0590;
    case 87u: goto L_08AE05A0;
    case 88u: goto L_08AE0608;
    case 89u: goto L_08AE066C;
    case 90u: goto L_08AE0670;
    case 91u: goto L_08AE06B0;
    case 92u: goto L_08AE06F0;
    case 93u: goto L_08AE0734;
    case 94u: goto L_08AE0778;
    case 95u: goto L_08AE07BC;
    case 96u: goto L_08AE07C0;
    case 97u: goto L_08AE07C8;
    case 98u: goto L_08AE07EC;
    case 99u: goto L_08AE07F8;
    case 100u: goto L_08AE0810;
    case 101u: goto L_08AE0828;
    case 102u: goto L_08AE0878;
    case 103u: goto L_08AE0880;
    case 104u: goto L_08AE088C;
    case 105u: goto L_08AE08AC;
    case 106u: goto L_08AE08BC;
    case 107u: goto L_08AE08C8;
    case 108u: goto L_08AE08D4;
    case 109u: goto L_08AE08DC;
    case 110u: goto L_08AE08E0;
    case 111u: goto L_08AE08EC;
    case 112u: goto L_08AE08FC;
    case 113u: goto L_08AE0904;
    case 114u: goto L_08AE0914;
    case 115u: goto L_08AE0920;
    case 116u: goto L_08AE092C;
    case 117u: goto L_08AE0934;
    case 118u: goto L_08AE0938;
    case 119u: goto L_08AE0944;
    case 120u: goto L_08AE0988;
    case 121u: goto L_08AE098C;
    case 122u: goto L_08AE0990;
    case 123u: goto L_08AE09D8;
    case 124u: goto L_08AE09F0;
    case 125u: goto L_08AE0A00;
    case 126u: goto L_08AE0A10;
    case 127u: goto L_08AE0A1C;
    case 128u: goto L_08AE0A28;
    case 129u: goto L_08AE0A30;
    case 130u: goto L_08AE0A34;
    case 131u: goto L_08AE0A40;
    case 132u: goto L_08AE0A50;
    case 133u: goto L_08AE0A58;
    case 134u: goto L_08AE0A68;
    case 135u: goto L_08AE0A74;
    case 136u: goto L_08AE0A80;
    case 137u: goto L_08AE0A88;
    case 138u: goto L_08AE0A8C;
    case 139u: goto L_08AE0A98;
    case 140u: goto L_08AE0AA8;
    case 141u: goto L_08AE0AAC;
    case 142u: goto L_08AE0AF8;
    case 143u: goto L_08AE0B08;
    case 144u: goto L_08AE0B10;
    case 145u: goto L_08AE0B14;
    case 146u: goto L_08AE0B1C;
    case 147u: goto L_08AE0B24;
    case 148u: goto L_08AE0B34;
    case 149u: goto L_08AE0B40;
    case 150u: goto L_08AE0B4C;
    case 151u: goto L_08AE0B54;
    case 152u: goto L_08AE0B58;
    case 153u: goto L_08AE0B64;
    case 154u: goto L_08AE0B74;
    case 155u: goto L_08AE0B7C;
    case 156u: goto L_08AE0B90;
    case 157u: goto L_08AE0BA8;
    case 158u: goto L_08AE0BB8;
    case 159u: goto L_08AE0BC4;
    case 160u: goto L_08AE0BD0;
    case 161u: goto L_08AE0BD8;
    case 162u: goto L_08AE0BDC;
    case 163u: goto L_08AE0BE8;
    case 164u: goto L_08AE0BF8;
    case 165u: goto L_08AE0C00;
    case 166u: goto L_08AE0C10;
    case 167u: goto L_08AE0C1C;
    case 168u: goto L_08AE0C28;
    case 169u: goto L_08AE0C30;
    case 170u: goto L_08AE0C34;
    case 171u: goto L_08AE0C40;
    case 172u: goto L_08AE0C50;
    case 173u: goto L_08AE0C58;
    case 174u: goto L_08AE0C68;
    case 175u: goto L_08AE0C74;
    case 176u: goto L_08AE0C80;
    case 177u: goto L_08AE0C88;
    case 178u: goto L_08AE0C8C;
    case 179u: goto L_08AE0C98;
    case 180u: goto L_08AE0CA8;
    case 181u: goto L_08AE0CB0;
    case 182u: goto L_08AE0CC0;
    case 183u: goto L_08AE0CCC;
    case 184u: goto L_08AE0CD8;
    case 185u: goto L_08AE0CE0;
    case 186u: goto L_08AE0CE4;
    case 187u: goto L_08AE0CF0;
    case 188u: goto L_08AE0D00;
    case 189u: goto L_08AE0D08;
    case 190u: goto L_08AE0D18;
    case 191u: goto L_08AE0D24;
    case 192u: goto L_08AE0D30;
    case 193u: goto L_08AE0D38;
    case 194u: goto L_08AE0D3C;
    case 195u: goto L_08AE0D48;
    case 196u: goto L_08AE0D58;
    case 197u: goto L_08AE0D60;
    case 198u: goto L_08AE0D70;
    case 199u: goto L_08AE0D7C;
    case 200u: goto L_08AE0D88;
    case 201u: goto L_08AE0D90;
    case 202u: goto L_08AE0D94;
    case 203u: goto L_08AE0DA0;
    case 204u: goto L_08AE0DB0;
    case 205u: goto L_08AE0DB8;
    case 206u: goto L_08AE0DC8;
    case 207u: goto L_08AE0DD4;
    case 208u: goto L_08AE0DE0;
    case 209u: goto L_08AE0DE8;
    case 210u: goto L_08AE0DEC;
    case 211u: goto L_08AE0DF8;
    case 212u: goto L_08AE0E08;
    case 213u: goto L_08AE0E10;
    case 214u: goto L_08AE0E20;
    case 215u: goto L_08AE0E2C;
    case 216u: goto L_08AE0E38;
    case 217u: goto L_08AE0E40;
    case 218u: goto L_08AE0E44;
    case 219u: goto L_08AE0E50;
    case 220u: goto L_08AE0E60;
    case 221u: goto L_08AE0E68;
    case 222u: goto L_08AE0E78;
    case 223u: goto L_08AE0E84;
    case 224u: goto L_08AE0E90;
    case 225u: goto L_08AE0E98;
    case 226u: goto L_08AE0E9C;
    case 227u: goto L_08AE0EA8;
    case 228u: goto L_08AE0EB8;
    case 229u: goto L_08AE0EC0;
    case 230u: goto L_08AE0ED0;
    case 231u: goto L_08AE0EDC;
    case 232u: goto L_08AE0EE8;
    case 233u: goto L_08AE0EF0;
    case 234u: goto L_08AE0EF4;
    case 235u: goto L_08AE0F00;
    case 236u: goto L_08AE0F10;
    case 237u: goto L_08AE0F18;
    case 238u: goto L_08AE0F28;
    case 239u: goto L_08AE0F34;
    case 240u: goto L_08AE0F40;
    case 241u: goto L_08AE0F48;
    case 242u: goto L_08AE0F4C;
    case 243u: goto L_08AE0F58;
    case 244u: goto L_08AE0F68;
    case 245u: goto L_08AE0F6C;
    case 246u: goto L_08AE0FB8;
    case 247u: goto L_08AE0FC8;
    case 248u: goto L_08AE0FD8;
    case 249u: goto L_08AE0FE4;
    case 250u: goto L_08AE0FF0;
    case 251u: goto L_08AE0FF8;
    case 252u: goto L_08AE0FFC;
    case 253u: goto L_08AE1008;
    case 254u: goto L_08AE1018;
    case 255u: goto L_08AE1020;
    case 256u: goto L_08AE1030;
    case 257u: goto L_08AE103C;
    case 258u: goto L_08AE1048;
    case 259u: goto L_08AE1050;
    case 260u: goto L_08AE1054;
    case 261u: goto L_08AE1060;
    case 262u: goto L_08AE1070;
    case 263u: goto L_08AE1074;
    case 264u: goto L_08AE10C0;
    case 265u: goto L_08AE10D0;
    case 266u: goto L_08AE10D8;
    case 267u: goto L_08AE10DC;
    case 268u: goto L_08AE10E4;
    case 269u: goto L_08AE10EC;
    case 270u: goto L_08AE10FC;
    case 271u: goto L_08AE1104;
    case 272u: goto L_08AE1108;
    case 273u: goto L_08AE1110;
    case 274u: goto L_08AE1118;
    case 275u: goto L_08AE1128;
    case 276u: goto L_08AE1134;
    case 277u: goto L_08AE1140;
    case 278u: goto L_08AE1148;
    case 279u: goto L_08AE114C;
    case 280u: goto L_08AE1158;
    case 281u: goto L_08AE1168;
    case 282u: goto L_08AE1170;
    case 283u: goto L_08AE1180;
    case 284u: goto L_08AE118C;
    case 285u: goto L_08AE1198;
    case 286u: goto L_08AE11A0;
    case 287u: goto L_08AE11A4;
    case 288u: goto L_08AE11B0;
    case 289u: goto L_08AE11C0;
    case 290u: goto L_08AE11C8;
    case 291u: goto L_08AE11D8;
    case 292u: goto L_08AE11E4;
    case 293u: goto L_08AE11F0;
    case 294u: goto L_08AE11F8;
    case 295u: goto L_08AE11FC;
    case 296u: goto L_08AE1208;
    case 297u: goto L_08AE1218;
    case 298u: goto L_08AE121C;
    case 299u: goto L_08AE1268;
    case 300u: goto L_08AE1278;
    case 301u: goto L_08AE1288;
    case 302u: goto L_08AE1294;
    case 303u: goto L_08AE12A0;
    case 304u: goto L_08AE12A8;
    case 305u: goto L_08AE12AC;
    case 306u: goto L_08AE12B8;
    case 307u: goto L_08AE12C8;
    case 308u: goto L_08AE12D0;
    case 309u: goto L_08AE12E0;
    case 310u: goto L_08AE12EC;
    case 311u: goto L_08AE12F8;
    case 312u: goto L_08AE1300;
    case 313u: goto L_08AE1304;
    case 314u: goto L_08AE1310;
    case 315u: goto L_08AE1320;
    case 316u: goto L_08AE1324;
    case 317u: goto L_08AE1370;
    case 318u: goto L_08AE1378;
    case 319u: goto L_08AE1388;
    case 320u: goto L_08AE1390;
    case 321u: goto L_08AE1398;
    case 322u: goto L_08AE13A0;
    case 323u: goto L_08AE13A8;
    case 324u: goto L_08AE13B0;
    case 325u: goto L_08AE13B8;
    case 326u: goto L_08AE13C8;
    case 327u: goto L_08AE13D4;
    case 328u: goto L_08AE13E0;
    case 329u: goto L_08AE13E8;
    case 330u: goto L_08AE13EC;
    case 331u: goto L_08AE13F8;
    case 332u: goto L_08AE1408;
    case 333u: goto L_08AE1410;
    case 334u: goto L_08AE1420;
    case 335u: goto L_08AE142C;
    case 336u: goto L_08AE1438;
    case 337u: goto L_08AE1440;
    case 338u: goto L_08AE1444;
    case 339u: goto L_08AE1450;
    case 340u: goto L_08AE1460;
    case 341u: goto L_08AE1468;
    case 342u: goto L_08AE1478;
    case 343u: goto L_08AE1484;
    case 344u: goto L_08AE1490;
    case 345u: goto L_08AE1498;
    case 346u: goto L_08AE149C;
    case 347u: goto L_08AE14A8;
    case 348u: goto L_08AE14B8;
    case 349u: goto L_08AE14C0;
    case 350u: goto L_08AE14D0;
    case 351u: goto L_08AE14DC;
    case 352u: goto L_08AE14E8;
    case 353u: goto L_08AE14F0;
    case 354u: goto L_08AE14F4;
    case 355u: goto L_08AE1500;
    case 356u: goto L_08AE1510;
    case 357u: goto L_08AE1514;
    case 358u: goto L_08AE1518;
    case 359u: goto L_08AE1560;
    case 360u: goto L_08AE1570;
    case 361u: goto L_08AE1578;
    case 362u: goto L_08AE1580;
    case 363u: goto L_08AE1584;
    case 364u: goto L_08AE158C;
    case 365u: goto L_08AE1594;
    case 366u: goto L_08AE159C;
    case 367u: goto L_08AE15AC;
    case 368u: goto L_08AE15B8;
    case 369u: goto L_08AE15C4;
    case 370u: goto L_08AE15CC;
    case 371u: goto L_08AE15D0;
    case 372u: goto L_08AE15DC;
    case 373u: goto L_08AE15EC;
    case 374u: goto L_08AE15F4;
    case 375u: goto L_08AE1604;
    case 376u: goto L_08AE1610;
    case 377u: goto L_08AE161C;
    case 378u: goto L_08AE1624;
    case 379u: goto L_08AE1628;
    case 380u: goto L_08AE1634;
    case 381u: goto L_08AE1644;
    case 382u: goto L_08AE164C;
    case 383u: goto L_08AE165C;
    case 384u: goto L_08AE1668;
    case 385u: goto L_08AE1674;
    case 386u: goto L_08AE167C;
    case 387u: goto L_08AE1680;
    case 388u: goto L_08AE168C;
    case 389u: goto L_08AE169C;
    case 390u: goto L_08AE16A0;
    case 391u: goto L_08AE16A4;
    case 392u: goto L_08AE16EC;
    case 393u: goto L_08AE16FC;
    case 394u: goto L_08AE170C;
    case 395u: goto L_08AE1718;
    case 396u: goto L_08AE1724;
    case 397u: goto L_08AE172C;
    case 398u: goto L_08AE1730;
    case 399u: goto L_08AE173C;
    case 400u: goto L_08AE174C;
    case 401u: goto L_08AE1754;
    case 402u: goto L_08AE1764;
    case 403u: goto L_08AE1770;
    case 404u: goto L_08AE177C;
    case 405u: goto L_08AE1784;
    case 406u: goto L_08AE1788;
    case 407u: goto L_08AE1794;
    case 408u: goto L_08AE17A4;
    case 409u: goto L_08AE17A8;
    case 410u: goto L_08AE17F4;
    case 411u: goto L_08AE1804;
    case 412u: goto L_08AE1814;
    case 413u: goto L_08AE1820;
    case 414u: goto L_08AE182C;
    case 415u: goto L_08AE1834;
    case 416u: goto L_08AE1838;
    case 417u: goto L_08AE1844;
    case 418u: goto L_08AE1854;
    case 419u: goto L_08AE185C;
    case 420u: goto L_08AE186C;
    case 421u: goto L_08AE1878;
    case 422u: goto L_08AE1884;
    case 423u: goto L_08AE188C;
    case 424u: goto L_08AE1890;
    case 425u: goto L_08AE189C;
    case 426u: goto L_08AE18AC;
    case 427u: goto L_08AE18B0;
    case 428u: goto L_08AE18FC;
    case 429u: goto L_08AE190C;
    case 430u: goto L_08AE191C;
    case 431u: goto L_08AE1928;
    case 432u: goto L_08AE1934;
    case 433u: goto L_08AE193C;
    case 434u: goto L_08AE1940;
    case 435u: goto L_08AE194C;
    case 436u: goto L_08AE195C;
    case 437u: goto L_08AE1964;
    case 438u: goto L_08AE1974;
    case 439u: goto L_08AE1980;
    case 440u: goto L_08AE198C;
    case 441u: goto L_08AE1994;
    case 442u: goto L_08AE1998;
    case 443u: goto L_08AE19A4;
    case 444u: goto L_08AE19B4;
    case 445u: goto L_08AE19B8;
    case 446u: goto L_08AE19C8;
    case 447u: goto L_08AE1A24;
    case 448u: goto L_08AE1A34;
    case 449u: goto L_08AE1A44;
    case 450u: goto L_08AE1A50;
    case 451u: goto L_08AE1A5C;
    case 452u: goto L_08AE1A64;
    case 453u: goto L_08AE1A68;
    case 454u: goto L_08AE1A74;
    case 455u: goto L_08AE1A84;
    case 456u: goto L_08AE1A8C;
    case 457u: goto L_08AE1A9C;
    case 458u: goto L_08AE1AA8;
    case 459u: goto L_08AE1AB4;
    case 460u: goto L_08AE1ABC;
    case 461u: goto L_08AE1AC0;
    case 462u: goto L_08AE1ACC;
    case 463u: goto L_08AE1ADC;
    case 464u: goto L_08AE1AE0;
    case 465u: goto L_08AE1B28;
    case 466u: goto L_08AE1B38;
    case 467u: goto L_08AE1B48;
    case 468u: goto L_08AE1B54;
    case 469u: goto L_08AE1B60;
    case 470u: goto L_08AE1B68;
    case 471u: goto L_08AE1B6C;
    case 472u: goto L_08AE1B78;
    case 473u: goto L_08AE1B88;
    case 474u: goto L_08AE1B90;
    case 475u: goto L_08AE1BA0;
    case 476u: goto L_08AE1BAC;
    case 477u: goto L_08AE1BB8;
    case 478u: goto L_08AE1BC0;
    case 479u: goto L_08AE1BC4;
    case 480u: goto L_08AE1BD0;
    case 481u: goto L_08AE1BE0;
    case 482u: goto L_08AE1BE4;
    case 483u: goto L_08AE1C2C;
    case 484u: goto L_08AE1C3C;
    case 485u: goto L_08AE1C4C;
    case 486u: goto L_08AE1C58;
    case 487u: goto L_08AE1C64;
    case 488u: goto L_08AE1C6C;
    case 489u: goto L_08AE1C70;
    case 490u: goto L_08AE1C7C;
    case 491u: goto L_08AE1C8C;
    case 492u: goto L_08AE1C94;
    case 493u: goto L_08AE1CA4;
    case 494u: goto L_08AE1CB0;
    case 495u: goto L_08AE1CBC;
    case 496u: goto L_08AE1CC4;
    case 497u: goto L_08AE1CC8;
    case 498u: goto L_08AE1CD4;
    case 499u: goto L_08AE1CE4;
    case 500u: goto L_08AE1CE8;
    case 501u: goto L_08AE1CF0;
    case 502u: goto L_08AE1D00;
    case 503u: goto L_08AE1D10;
    case 504u: goto L_08AE1D1C;
    case 505u: goto L_08AE1D28;
    case 506u: goto L_08AE1D30;
    case 507u: goto L_08AE1D34;
    case 508u: goto L_08AE1D40;
    case 509u: goto L_08AE1D50;
    case 510u: goto L_08AE1D58;
    case 511u: goto L_08AE1D68;
    case 512u: goto L_08AE1D74;
    case 513u: goto L_08AE1D80;
    case 514u: goto L_08AE1D88;
    case 515u: goto L_08AE1D8C;
    case 516u: goto L_08AE1D98;
    case 517u: goto L_08AE1DA8;
    case 518u: goto L_08AE1DAC;
    case 519u: goto L_08AE1DB8;
    case 520u: goto L_08AE1DC4;
    case 521u: goto L_08AE1DD0;
    case 522u: goto L_08AE1DE4;
    case 523u: goto L_08AE1E34;
    case 524u: goto L_08AE1E40;
    case 525u: goto L_08AE1E4C;
    case 526u: goto L_08AE1E54;
    case 527u: goto L_08AE1E58;
    case 528u: goto L_08AE1E60;
    case 529u: goto L_08AE1EA8;
    case 530u: goto L_08AE1EB4;
    case 531u: goto L_08AE1F10;
    case 532u: goto L_08AE1F1C;
    case 533u: goto L_08AE1F28;
    case 534u: goto L_08AE1F30;
    case 535u: goto L_08AE1F34;
    case 536u: goto L_08AE1F3C;
    case 537u: goto L_08AE1F88;
    case 538u: goto L_08AE1F94;
    case 539u: goto L_08AE1FC0;
    case 540u: goto L_08AE1FC8;
    case 541u: goto L_08AE1FD0;
    case 542u: goto L_08AE1FDC;
    case 543u: goto L_08AE1FF0;
    case 544u: goto L_08AE2000;
    case 545u: goto L_08AE200C;
    case 546u: goto L_08AE2018;
    case 547u: goto L_08AE2020;
    case 548u: goto L_08AE2024;
    case 549u: goto L_08AE2030;
    case 550u: goto L_08AE2078;
    case 551u: goto L_08AE2084;
    case 552u: goto L_08AE20D4;
    case 553u: goto L_08AE20E0;
    case 554u: goto L_08AE2128;
    case 555u: goto L_08AE2134;
    case 556u: goto L_08AE2140;
    case 557u: goto L_08AE2148;
    case 558u: goto L_08AE214C;
    case 559u: goto L_08AE2158;
    case 560u: goto L_08AE21A0;
    case 561u: goto L_08AE21AC;
    case 562u: goto L_08AE2208;
    case 563u: goto L_08AE2214;
    case 564u: goto L_08AE2218;
    case 565u: goto L_08AE2260;
    case 566u: goto L_08AE22AC;
    case 567u: goto L_08AE22F0;
    case 568u: goto L_08AE2338;
    case 569u: goto L_08AE2350;
    case 570u: goto L_08AE2380;
    case 571u: goto L_08AE23B0;
    case 572u: goto L_08AE23D8;
    case 573u: goto L_08AE2408;
    case 574u: goto L_08AE2434;
    case 575u: goto L_08AE2448;
    case 576u: goto L_08AE2474;
    case 577u: goto L_08AE249C;
    case 578u: goto L_08AE24B0;
    case 579u: goto L_08AE24DC;
    case 580u: goto L_08AE24F0;
    case 581u: goto L_08AE251C;
    case 582u: goto L_08AE2530;
    case 583u: goto L_08AE255C;
    case 584u: goto L_08AE2560;
    case 585u: goto L_08AE25A8;
    case 586u: goto L_08AE25C0;
    case 587u: goto L_08AE25E4;
    case 588u: goto L_08AE25F0;
    case 589u: goto L_08AE2610;
    case 590u: goto L_08AE261C;
    case 591u: goto L_08AE264C;
    case 592u: goto L_08AE2654;
    case 593u: goto L_08AE2670;
    case 594u: goto L_08AE268C;
    case 595u: goto L_08AE26A4;
    case 596u: goto L_08AE26BC;
    case 597u: goto L_08AE26D4;
    case 598u: goto L_08AE26F0;
    case 599u: goto L_08AE2708;
    case 600u: goto L_08AE2740;
    case 601u: goto L_08AE2748;
    case 602u: goto L_08AE2754;
    case 603u: goto L_08AE2778;
    case 604u: goto L_08AE2788;
    case 605u: goto L_08AE27A0;
    case 606u: goto L_08AE27A8;
    case 607u: goto L_08AE27BC;
    case 608u: goto L_08AE27CC;
    case 609u: goto L_08AE27D8;
    case 610u: goto L_08AE27E4;
    case 611u: goto L_08AE27F4;
    case 612u: goto L_08AE2800;
    case 613u: goto L_08AE2844;
    case 614u: goto L_08AE2888;
    case 615u: goto L_08AE2894;
    case 616u: goto L_08AE28A0;
    case 617u: goto L_08AE28B8;
    case 618u: goto L_08AE28C0;
    case 619u: goto L_08AE28C8;
    case 620u: goto L_08AE28E0;
    case 621u: goto L_08AE28E8;
    case 622u: goto L_08AE28EC;
    case 623u: goto L_08AE2948;
    case 624u: goto L_08AE2950;
    case 625u: goto L_08AE2998;
    case 626u: goto L_08AE29A0;
    case 627u: goto L_08AE29A4;
    case 628u: goto L_08AE29AC;
    case 629u: goto L_08AE29C8;
    case 630u: goto L_08AE29D8;
    case 631u: goto L_08AE2A28;
    case 632u: goto L_08AE2A30;
    case 633u: goto L_08AE2A40;
    case 634u: goto L_08AE2A48;
    case 635u: goto L_08AE2A50;
    case 636u: goto L_08AE2A58;
    case 637u: goto L_08AE2A60;
    case 638u: goto L_08AE2A64;
    case 639u: goto L_08AE2A6C;
    case 640u: goto L_08AE2A74;
    case 641u: goto L_08AE2A7C;
    case 642u: goto L_08AE2A84;
    case 643u: goto L_08AE2A8C;
    case 644u: goto L_08AE2A94;
    case 645u: goto L_08AE2A98;
    case 646u: goto L_08AE2AD8;
    case 647u: goto L_08AE2B1C;
    case 648u: goto L_08AE2B24;
    case 649u: goto L_08AE2B40;
    case 650u: goto L_08AE2B48;
    case 651u: goto L_08AE2B50;
    case 652u: goto L_08AE2B6C;
    case 653u: goto L_08AE2B88;
    case 654u: goto L_08AE2B94;
    case 655u: goto L_08AE2BA0;
    case 656u: goto L_08AE2BA4;
    case 657u: goto L_08AE2BA8;
    case 658u: goto L_08AE2BE8;
    case 659u: goto L_08AE2BF4;
    case 660u: goto L_08AE2C50;
    case 661u: goto L_08AE2C58;
    case 662u: goto L_08AE2C64;
    case 663u: goto L_08AE2C70;
    case 664u: goto L_08AE2C78;
    case 665u: goto L_08AE2C7C;
    case 666u: goto L_08AE2CCC;
    case 667u: goto L_08AE2CD4;
    case 668u: goto L_08AE2D24;
    case 669u: goto L_08AE2D38;
    case 670u: goto L_08AE2D54;
    case 671u: goto L_08AE2D60;
    case 672u: goto L_08AE2D70;
    case 673u: goto L_08AE2D7C;
    case 674u: goto L_08AE2D94;
    case 675u: goto L_08AE2DA0;
    case 676u: goto L_08AE2DB8;
    case 677u: goto L_08AE2DF0;
    case 678u: goto L_08AE2DF8;
    case 679u: goto L_08AE2E04;
    case 680u: goto L_08AE2E0C;
    case 681u: goto L_08AE2E2C;
    case 682u: goto L_08AE2E3C;
    case 683u: goto L_08AE2E60;
    case 684u: goto L_08AE2E7C;
    case 685u: goto L_08AE2EA0;
    case 686u: goto L_08AE2EBC;
    case 687u: goto L_08AE2EE0;
    case 688u: goto L_08AE2F00;
    case 689u: goto L_08AE2F24;
    case 690u: goto L_08AE2F40;
    case 691u: goto L_08AE2F64;
    case 692u: goto L_08AE2F84;
    case 693u: goto L_08AE2FA8;
    case 694u: goto L_08AE2FC4;
    case 695u: goto L_08AE2FE8;
    case 696u: goto L_08AE3008;
    case 697u: goto L_08AE302C;
    case 698u: goto L_08AE3048;
    case 699u: goto L_08AE306C;
    case 700u: goto L_08AE308C;
    case 701u: goto L_08AE30B0;
    case 702u: goto L_08AE30EC;
    case 703u: goto L_08AE3110;
    case 704u: goto L_08AE3130;
    case 705u: goto L_08AE3154;
    case 706u: goto L_08AE3170;
    case 707u: goto L_08AE3194;
    case 708u: goto L_08AE31B4;
    case 709u: goto L_08AE31D8;
    case 710u: goto L_08AE31F4;
    case 711u: goto L_08AE3218;
    case 712u: goto L_08AE3238;
    case 713u: goto L_08AE325C;
    case 714u: goto L_08AE3278;
    case 715u: goto L_08AE329C;
    case 716u: goto L_08AE32BC;
    case 717u: goto L_08AE32E0;
    case 718u: goto L_08AE32FC;
    case 719u: goto L_08AE3320;
    case 720u: goto L_08AE3340;
    case 721u: goto L_08AE3364;
    case 722u: goto L_08AE3370;
    case 723u: goto L_08AE3380;
    case 724u: goto L_08AE339C;
    case 725u: goto L_08AE33AC;
    case 726u: goto L_08AE33B4;
    case 727u: goto L_08AE33CC;
    case 728u: goto L_08AE33D4;
    case 729u: goto L_08AE33DC;
    case 730u: goto L_08AE33FC;
    case 731u: goto L_08AE3404;
    case 732u: goto L_08AE341C;
    case 733u: goto L_08AE3424;
    case 734u: goto L_08AE342C;
    case 735u: goto L_08AE3434;
    case 736u: goto L_08AE3450;
    case 737u: goto L_08AE3460;
    case 738u: goto L_08AE346C;
    case 739u: goto L_08AE3478;
    case 740u: goto L_08AE3488;
    case 741u: goto L_08AE3498;
    case 742u: goto L_08AE34A4;
    case 743u: goto L_08AE34B8;
    case 744u: goto L_08AE34CC;
    case 745u: goto L_08AE34D0;
    case 746u: goto L_08AE34FC;
    case 747u: goto L_08AE351C;
    case 748u: goto L_08AE3528;
    case 749u: goto L_08AE3554;
    case 750u: goto L_08AE3574;
    case 751u: goto L_08AE357C;
    case 752u: goto L_08AE3580;
    case 753u: goto L_08AE35AC;
    case 754u: goto L_08AE35CC;
    case 755u: goto L_08AE35D8;
    case 756u: goto L_08AE3604;
    case 757u: goto L_08AE3624;
    case 758u: goto L_08AE366C;
    case 759u: goto L_08AE36C0;
    case 760u: goto L_08AE36CC;
    case 761u: goto L_08AE36D4;
    case 762u: goto L_08AE36DC;
    case 763u: goto L_08AE36F8;
    case 764u: goto L_08AE3728;
    case 765u: goto L_08AE3744;
    case 766u: goto L_08AE3754;
    case 767u: goto L_08AE3760;
    case 768u: goto L_08AE3770;
    case 769u: goto L_08AE37B8;
    case 770u: goto L_08AE37EC;
    case 771u: goto L_08AE3800;
    case 772u: goto L_08AE3810;
    case 773u: goto L_08AE3824;
    case 774u: goto L_08AE383C;
    case 775u: goto L_08AE3850;
    case 776u: goto L_08AE385C;
    case 777u: goto L_08AE3880;
    case 778u: goto L_08AE38A0;
    case 779u: goto L_08AE38B0;
    case 780u: goto L_08AE38C8;
    case 781u: goto L_08AE38E0;
    case 782u: goto L_08AE38F8;
    case 783u: goto L_08AE3908;
    case 784u: goto L_08AE3920;
    case 785u: goto L_08AE3930;
    case 786u: goto L_08AE3934;
    case 787u: goto L_08AE394C;
    case 788u: goto L_08AE3964;
    case 789u: goto L_08AE396C;
    case 790u: goto L_08AE3974;
    case 791u: goto L_08AE397C;
    case 792u: goto L_08AE3994;
    case 793u: goto L_08AE399C;
    case 794u: goto L_08AE39B4;
    case 795u: goto L_08AE39BC;
    case 796u: goto L_08AE39C4;
    case 797u: goto L_08AE39D0;
    case 798u: goto L_08AE39E8;
    case 799u: goto L_08AE39F0;
    case 800u: goto L_08AE3A10;
    case 801u: goto L_08AE3A14;
    case 802u: goto L_08AE3A24;
    case 803u: goto L_08AE3A2C;
    case 804u: goto L_08AE3A34;
    case 805u: goto L_08AE3A40;
    case 806u: goto L_08AE3A5C;
    case 807u: goto L_08AE3A64;
    case 808u: goto L_08AE3A6C;
    case 809u: goto L_08AE3A78;
    case 810u: goto L_08AE3A90;
    case 811u: goto L_08AE3A98;
    case 812u: goto L_08AE3AA0;
    case 813u: goto L_08AE3ABC;
    case 814u: goto L_08AE3AC8;
    case 815u: goto L_08AE3AD4;
    case 816u: goto L_08AE3AE0;
    case 817u: goto L_08AE3AE8;
    case 818u: goto L_08AE3AEC;
    case 819u: goto L_08AE3AF4;
    case 820u: goto L_08AE3B00;
    case 821u: goto L_08AE3B20;
    case 822u: goto L_08AE3B2C;
    case 823u: goto L_08AE3B38;
    case 824u: goto L_08AE3B44;
    case 825u: goto L_08AE3B4C;
    case 826u: goto L_08AE3B50;
    case 827u: goto L_08AE3B58;
    case 828u: goto L_08AE3B60;
    case 829u: goto L_08AE3B6C;
    case 830u: goto L_08AE3B80;
    case 831u: goto L_08AE3B90;
    case 832u: goto L_08AE3BA0;
    case 833u: goto L_08AE3BAC;
    case 834u: goto L_08AE3BC4;
    case 835u: goto L_08AE3BCC;
    case 836u: goto L_08AE3BD4;
    case 837u: goto L_08AE3BE0;
    case 838u: goto L_08AE3BF8;
    case 839u: goto L_08AE3C00;
    case 840u: goto L_08AE3C08;
    case 841u: goto L_08AE3C10;
    case 842u: goto L_08AE3C1C;
    case 843u: goto L_08AE3C28;
    case 844u: goto L_08AE3C50;
    case 845u: goto L_08AE3C74;
    case 846u: goto L_08AE3CBC;
    case 847u: goto L_08AE3D30;
    case 848u: goto L_08AE3D3C;
    case 849u: goto L_08AE3D48;
    case 850u: goto L_08AE3D84;
    case 851u: goto L_08AE3DA4;
    case 852u: goto L_08AE3DB4;
    case 853u: goto L_08AE3DDC;
    case 854u: goto L_08AE3DFC;
    case 855u: goto L_08AE3E0C;
    case 856u: goto L_08AE3E1C;
    case 857u: goto L_08AE3E34;
    case 858u: goto L_08AE3E78;
    case 859u: goto L_08AE3E88;
    case 860u: goto L_08AE3EA4;
    case 861u: goto L_08AE3EB4;
    case 862u: goto L_08AE3ECC;
    case 863u: goto L_08AE3EDC;
    case 864u: goto L_08AE3EFC;
    case 865u: goto L_08AE3F08;
    case 866u: goto L_08AE3F4C;
    case 867u: goto L_08AE3F74;
    case 868u: goto L_08AE3F90;
    case 869u: goto L_08AE3F9C;
    case 870u: goto L_08AE3FC8;
    case 871u: goto L_08AE3FD4;
    case 872u: goto L_08AE3FEC;
    case 873u: goto L_08AE3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AE0000:
    ctx.gpr[31] = (0x08AE0008u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0008u) goto L_08AE0008;
    return;
L_08AE0008:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE0014u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0014u) goto L_08AE0014;
    return;
L_08AE0014:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x08AE002Cu);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE002Cu) goto L_08AE002C;
    return;
L_08AE002C:
    ctx.gpr[31] = (0x08AE0034u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AE0034u) goto L_08AE0034;
    return;
L_08AE0034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE0260;
      }
      goto L_08AE0068;
    }
L_08AE0068:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE00A8;
    }
    goto L_08AE0078;
L_08AE0078:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0084u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0084u) goto L_08AE0084;
    return;
L_08AE0084:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE009C;
      }
      goto L_08AE0090;
    }
L_08AE0090:
    ctx.gpr[31] = (0x08AE0098u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0098u) goto L_08AE0098;
    return;
L_08AE0098:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE009C;
L_08AE009C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE00A8;
L_08AE00A8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE00DCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE00DCu) goto L_08AE00DC;
    return;
L_08AE00DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AE0108u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8468));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 404u, 0x08AED66Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0108u) goto L_08AE0108;
    return;
L_08AE0108:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE016C;
      }
      goto L_08AE0110;
    }
L_08AE0110:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AE0114;
L_08AE0114:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 92u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE0144;
      }
      goto L_08AE012C;
    }
L_08AE012C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0144;
      }
      goto L_08AE013C;
    }
L_08AE013C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE0114;
      }
      goto L_08AE0144;
    }
L_08AE0144:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 92u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AE016C;
      }
      goto L_08AE015C;
    }
L_08AE015C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08AE016C;
L_08AE016C:
    ctx.gpr[4] = (17385u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[31] = (0x08AE017Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE017Cu) goto L_08AE017C;
    return;
L_08AE017C:
    ctx.gpr[4] = (16720u << 16u);
    ctx.gpr[31] = (0x08AE0188u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0188u) goto L_08AE0188;
    return;
L_08AE0188:
    ctx.gpr[31] = (0x08AE0190u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AE0190u) goto L_08AE0190;
    return;
L_08AE0190:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AE01ACu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE01ACu) goto L_08AE01AC;
    return;
L_08AE01AC:
    ctx.gpr[31] = (0x08AE01B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08AE01B4u) goto L_08AE01B4;
    return;
L_08AE01B4:
    ctx.gpr[31] = (0x08AE01BCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE01BCu) goto L_08AE01BC;
    return;
L_08AE01BC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE01C8u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE01C8u) goto L_08AE01C8;
    return;
L_08AE01C8:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (0u | 120u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x08AE01E0u);
    ctx.gpr[7] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE01E0u) goto L_08AE01E0;
    return;
L_08AE01E0:
    ctx.gpr[31] = (0x08AE01E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE01E8u) goto L_08AE01E8;
    return;
L_08AE01E8:
    ctx.gpr[31] = (0x08AE01F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08AE01F0u) goto L_08AE01F0;
    return;
L_08AE01F0:
    ctx.gpr[4] = (17254u << 16u);
    ctx.gpr[31] = (0x08AE01FCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x08AE01FCu) goto L_08AE01FC;
    return;
L_08AE01FC:
    ctx.gpr[31] = (0x08AE0204u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 240u, 0x08A55194u>(ctx, &aot_mem) && ctx.pc == 0x08AE0204u) goto L_08AE0204;
    return;
L_08AE0204:
    ctx.gpr[6] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (17008u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0220u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0220u) goto L_08AE0220;
    return;
L_08AE0220:
    ctx.gpr[31] = (0x08AE0228u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 240u, 0x08A55194u>(ctx, &aot_mem) && ctx.pc == 0x08AE0228u) goto L_08AE0228;
    return;
L_08AE0228:
    ctx.gpr[31] = (0x08AE0230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE0230u) goto L_08AE0230;
    return;
L_08AE0230:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x08AE023Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x08AE023Cu) goto L_08AE023C;
    return;
L_08AE023C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE0254u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A54F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0254u) goto L_08AE0254;
    return;
L_08AE0254:
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[31] = (0x08AE0260u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A54F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0260u) goto L_08AE0260;
    return;
L_08AE0260:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE0274u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x08AE0274u) goto L_08AE0274;
    return;
L_08AE0274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE02A4;
      }
      goto L_08AE0284;
    }
L_08AE0284:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE029C;
      }
      goto L_08AE0294;
    }
L_08AE0294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE02A8;
      }
      goto L_08AE029C;
    }
L_08AE029C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE02A8;
      }
      goto L_08AE02A4;
    }
L_08AE02A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE02A8;
L_08AE02A8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE02E4;
      }
      goto L_08AE02D8;
    }
L_08AE02D8:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE02EC;
      }
      goto L_08AE02E4;
    }
L_08AE02E4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    goto L_08AE02EC;
L_08AE02EC:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AE02F4;
L_08AE02F4:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE02FC;
L_08AE02FC:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE03E0;
      }
      goto L_08AE033C;
    }
L_08AE033C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE03E0;
      }
      goto L_08AE0380;
    }
L_08AE0380:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE038Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE038Cu) goto L_08AE038C;
    return;
L_08AE038C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE03A4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE03A4u) goto L_08AE03A4;
    return;
L_08AE03A4:
    ctx.gpr[31] = (0x08AE03ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AE03ACu) goto L_08AE03AC;
    return;
L_08AE03AC:
    ctx.gpr[31] = (0x08AE03B4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AE03B4u) goto L_08AE03B4;
    return;
L_08AE03B4:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AE03D0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE03D0u) goto L_08AE03D0;
    return;
L_08AE03D0:
    ctx.gpr[31] = (0x08AE03D8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE03D8u) goto L_08AE03D8;
    return;
L_08AE03D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE046C;
      }
      goto L_08AE03E0;
    }
L_08AE03E0:
    ctx.gpr[31] = (0x08AE03E8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AE03E8u) goto L_08AE03E8;
    return;
L_08AE03E8:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AE0404u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE0404u) goto L_08AE0404;
    return;
L_08AE0404:
    ctx.gpr[31] = (0x08AE040Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE040Cu) goto L_08AE040C;
    return;
L_08AE040C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE041Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE041Cu) goto L_08AE041C;
    return;
L_08AE041C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0434u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0434u) goto L_08AE0434;
    return;
L_08AE0434:
    ctx.gpr[31] = (0x08AE043Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE043Cu) goto L_08AE043C;
    return;
L_08AE043C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE0448u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0448u) goto L_08AE0448;
    return;
L_08AE0448:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x08AE0460u);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0460u) goto L_08AE0460;
    return;
L_08AE0460:
    ctx.gpr[31] = (0x08AE0468u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AE0468u) goto L_08AE0468;
    return;
L_08AE0468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE046C;
L_08AE046C:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
        goto L_08AE04D0;
    }
    goto L_08AE04AC;
L_08AE04AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AE04F0;
      }
      goto L_08AE04B4;
    }
L_08AE04B4:
    ctx.gpr[31] = (0x08AE04BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE04BCu) goto L_08AE04BC;
    return;
L_08AE04BC:
    ctx.gpr[31] = (0x08AE04C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08AE04C4u) goto L_08AE04C4;
    return;
L_08AE04C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE0504;
      }
      goto L_08AE04CC;
    }
L_08AE04CC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_08AE04D0;
L_08AE04D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE04F0;
      }
      goto L_08AE04D8;
    }
L_08AE04D8:
    ctx.gpr[31] = (0x08AE04E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE04E0u) goto L_08AE04E0;
    return;
L_08AE04E0:
    ctx.gpr[31] = (0x08AE04E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE04E8u) goto L_08AE04E8;
    return;
L_08AE04E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE0504;
      }
      goto L_08AE04F0;
    }
L_08AE04F0:
    ctx.gpr[31] = (0x08AE04F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08AE04F8u) goto L_08AE04F8;
    return;
L_08AE04F8:
    ctx.gpr[31] = (0x08AE0500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0500u) goto L_08AE0500;
    return;
L_08AE0500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE0504;
L_08AE0504:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE0670;
    }
    goto L_08AE0540;
L_08AE0540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE0670;
    }
    goto L_08AE0580;
L_08AE0580:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE05A0;
      }
      goto L_08AE0588;
    }
L_08AE0588:
    if (ctx.gpr[22] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE0608;
    }
    goto L_08AE0590;
L_08AE0590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE0608;
    }
    goto L_08AE05A0;
L_08AE05A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (0u | 320u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE066C;
      }
      goto L_08AE0608;
    }
L_08AE0608:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08AE066C;
L_08AE066C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE0670;
L_08AE0670:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE3370;
      }
      goto L_08AE06B0;
    }
L_08AE06B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3370;
      }
      goto L_08AE06F0;
    }
L_08AE06F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE0904;
      }
      goto L_08AE0734;
    }
L_08AE0734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0904;
      }
      goto L_08AE0778;
    }
L_08AE0778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE07C0;
      }
      goto L_08AE07BC;
    }
L_08AE07BC:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    goto L_08AE07C0;
L_08AE07C0:
    ctx.gpr[31] = (0x08AE07C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08AE07C8u) goto L_08AE07C8;
    return;
L_08AE07C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20256));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE0878;
      }
      goto L_08AE07EC;
    }
L_08AE07EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AE07F8u);
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 169u, 0x088B0EACu>(ctx, &aot_mem) && ctx.pc == 0x08AE07F8u) goto L_08AE07F8;
    return;
L_08AE07F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6064));
    ctx.gpr[31] = (0x08AE0810u);
    ctx.gpr[5] = (ctx.gpr[22] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 247u, 0x089F99E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0810u) goto L_08AE0810;
    return;
L_08AE0810:
    ctx.gpr[5] = (16752u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 560u);
    ctx.gpr[31] = (0x08AE0828u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 407u, 0x08AD9BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0828u) goto L_08AE0828;
    return;
L_08AE0828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[23] = (0u | 2u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AE0878;
L_08AE0878:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE088C;
      }
      goto L_08AE0880;
    }
L_08AE0880:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE0990;
    }
    goto L_08AE088C;
L_08AE088C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[22] - ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9432));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08AE08ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8460));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08AE08ACu) goto L_08AE08AC;
    return;
L_08AE08AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE08EC;
      }
      goto L_08AE08BC;
    }
L_08AE08BC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE08C8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE08C8u) goto L_08AE08C8;
    return;
L_08AE08C8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE08E0;
      }
      goto L_08AE08D4;
    }
L_08AE08D4:
    ctx.gpr[31] = (0x08AE08DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE08DCu) goto L_08AE08DC;
    return;
L_08AE08DC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE08E0;
L_08AE08E0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE08EC;
L_08AE08EC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE08FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9432));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE08FCu) goto L_08AE08FC;
    return;
L_08AE08FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE098C;
      }
      goto L_08AE0904;
    }
L_08AE0904:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE0944;
    }
    goto L_08AE0914;
L_08AE0914:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0920u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0920u) goto L_08AE0920;
    return;
L_08AE0920:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0938;
      }
      goto L_08AE092C;
    }
L_08AE092C:
    ctx.gpr[31] = (0x08AE0934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0934u) goto L_08AE0934;
    return;
L_08AE0934:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE0938;
L_08AE0938:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE0944;
L_08AE0944:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5812));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE0988u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0988u) goto L_08AE0988;
    return;
L_08AE0988:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08AE098C;
L_08AE098C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE0990;
L_08AE0990:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE09D8;
    }
L_08AE09D8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7344)));
    jump_target = ctx.gpr[1];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE09F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25472)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0A58;
      }
      goto L_08AE0A00;
    }
L_08AE0A00:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0A40;
      }
      goto L_08AE0A10;
    }
L_08AE0A10:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0A1Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A1Cu) goto L_08AE0A1C;
    return;
L_08AE0A1C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0A34;
      }
      goto L_08AE0A28;
    }
L_08AE0A28:
    ctx.gpr[31] = (0x08AE0A30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A30u) goto L_08AE0A30;
    return;
L_08AE0A30:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0A34;
L_08AE0A34:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0A40;
L_08AE0A40:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE0A50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8448));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A50u) goto L_08AE0A50;
    return;
L_08AE0A50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE0AAC;
      }
      goto L_08AE0A58;
    }
L_08AE0A58:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0A98;
      }
      goto L_08AE0A68;
    }
L_08AE0A68:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0A74u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A74u) goto L_08AE0A74;
    return;
L_08AE0A74:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0A8C;
      }
      goto L_08AE0A80;
    }
L_08AE0A80:
    ctx.gpr[31] = (0x08AE0A88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A88u) goto L_08AE0A88;
    return;
L_08AE0A88:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0A8C;
L_08AE0A8C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0A98;
L_08AE0A98:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE0AA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8440));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0AA8u) goto L_08AE0AA8;
    return;
L_08AE0AA8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE0AAC;
L_08AE0AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE0AF8;
    }
L_08AE0AF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE0B14;
      }
      goto L_08AE0B08;
    }
L_08AE0B08:
    ctx.gpr[31] = (0x08AE0B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B10u) goto L_08AE0B10;
    return;
L_08AE0B10:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08AE0B14;
L_08AE0B14:
    ctx.gpr[31] = (0x08AE0B1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B1Cu) goto L_08AE0B1C;
    return;
L_08AE0B1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0B7C;
      }
      goto L_08AE0B24;
    }
L_08AE0B24:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0B64;
      }
      goto L_08AE0B34;
    }
L_08AE0B34:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0B40u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B40u) goto L_08AE0B40;
    return;
L_08AE0B40:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0B58;
      }
      goto L_08AE0B4C;
    }
L_08AE0B4C:
    ctx.gpr[31] = (0x08AE0B54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B54u) goto L_08AE0B54;
    return;
L_08AE0B54:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0B58;
L_08AE0B58:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0B64;
L_08AE0B64:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE0B74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8432));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B74u) goto L_08AE0B74;
    return;
L_08AE0B74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE0F6C;
      }
      goto L_08AE0B7C;
    }
L_08AE0B7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0F18;
      }
      goto L_08AE0B90;
    }
L_08AE0B90:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7184)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE0BA8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0BE8;
      }
      goto L_08AE0BB8;
    }
L_08AE0BB8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0BC4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0BC4u) goto L_08AE0BC4;
    return;
L_08AE0BC4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0BDC;
      }
      goto L_08AE0BD0;
    }
L_08AE0BD0:
    ctx.gpr[31] = (0x08AE0BD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0BD8u) goto L_08AE0BD8;
    return;
L_08AE0BD8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0BDC;
L_08AE0BDC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0BE8;
L_08AE0BE8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE0BF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8424));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0BF8u) goto L_08AE0BF8;
    return;
L_08AE0BF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE0F6C;
      }
      goto L_08AE0C00;
    }
L_08AE0C00:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0C40;
      }
      goto L_08AE0C10;
    }
L_08AE0C10:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0C1Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C1Cu) goto L_08AE0C1C;
    return;
L_08AE0C1C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0C34;
      }
      goto L_08AE0C28;
    }
L_08AE0C28:
    ctx.gpr[31] = (0x08AE0C30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C30u) goto L_08AE0C30;
    return;
L_08AE0C30:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0C34;
L_08AE0C34:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0C40;
L_08AE0C40:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE0C50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8416));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C50u) goto L_08AE0C50;
    return;
L_08AE0C50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE0F6C;
      }
      goto L_08AE0C58;
    }
L_08AE0C58:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0C98;
      }
      goto L_08AE0C68;
    }
L_08AE0C68:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0C74u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C74u) goto L_08AE0C74;
    return;
L_08AE0C74:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0C8C;
      }
      goto L_08AE0C80;
    }
L_08AE0C80:
    ctx.gpr[31] = (0x08AE0C88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C88u) goto L_08AE0C88;
    return;
L_08AE0C88:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0C8C;
L_08AE0C8C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0C98;
L_08AE0C98:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE0CA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8408));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0CA8u) goto L_08AE0CA8;
    return;
L_08AE0CA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE0F6C;
      }
      goto L_08AE0CB0;
    }
L_08AE0CB0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0CF0;
      }
      goto L_08AE0CC0;
    }
L_08AE0CC0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0CCCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0CCCu) goto L_08AE0CCC;
    return;
L_08AE0CCC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0CE4;
      }
      goto L_08AE0CD8;
    }
L_08AE0CD8:
    ctx.gpr[31] = (0x08AE0CE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0CE0u) goto L_08AE0CE0;
    return;
L_08AE0CE0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0CE4;
L_08AE0CE4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0CF0;
L_08AE0CF0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE0D00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8400));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D00u) goto L_08AE0D00;
    return;
L_08AE0D00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE0F6C;
      }
      goto L_08AE0D08;
    }
L_08AE0D08:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0D48;
      }
      goto L_08AE0D18;
    }
L_08AE0D18:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0D24u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D24u) goto L_08AE0D24;
    return;
L_08AE0D24:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0D3C;
      }
      goto L_08AE0D30;
    }
L_08AE0D30:
    ctx.gpr[31] = (0x08AE0D38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D38u) goto L_08AE0D38;
    return;
L_08AE0D38:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0D3C;
L_08AE0D3C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0D48;
L_08AE0D48:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE0D58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8392));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D58u) goto L_08AE0D58;
    return;
L_08AE0D58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE0F6C;
      }
      goto L_08AE0D60;
    }
L_08AE0D60:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0DA0;
      }
      goto L_08AE0D70;
    }
L_08AE0D70:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0D7Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D7Cu) goto L_08AE0D7C;
    return;
L_08AE0D7C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0D94;
      }
      goto L_08AE0D88;
    }
L_08AE0D88:
    ctx.gpr[31] = (0x08AE0D90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D90u) goto L_08AE0D90;
    return;
L_08AE0D90:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0D94;
L_08AE0D94:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0DA0;
L_08AE0DA0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE0DB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8384));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0DB0u) goto L_08AE0DB0;
    return;
L_08AE0DB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE0F6C;
      }
      goto L_08AE0DB8;
    }
L_08AE0DB8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0DF8;
      }
      goto L_08AE0DC8;
    }
L_08AE0DC8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0DD4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0DD4u) goto L_08AE0DD4;
    return;
L_08AE0DD4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0DEC;
      }
      goto L_08AE0DE0;
    }
L_08AE0DE0:
    ctx.gpr[31] = (0x08AE0DE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0DE8u) goto L_08AE0DE8;
    return;
L_08AE0DE8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0DEC;
L_08AE0DEC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0DF8;
L_08AE0DF8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE0E08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8376));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E08u) goto L_08AE0E08;
    return;
L_08AE0E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE0F6C;
      }
      goto L_08AE0E10;
    }
L_08AE0E10:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0E50;
      }
      goto L_08AE0E20;
    }
L_08AE0E20:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0E2Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E2Cu) goto L_08AE0E2C;
    return;
L_08AE0E2C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0E44;
      }
      goto L_08AE0E38;
    }
L_08AE0E38:
    ctx.gpr[31] = (0x08AE0E40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E40u) goto L_08AE0E40;
    return;
L_08AE0E40:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0E44;
L_08AE0E44:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0E50;
L_08AE0E50:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE0E60u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E60u) goto L_08AE0E60;
    return;
L_08AE0E60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE0F6C;
      }
      goto L_08AE0E68;
    }
L_08AE0E68:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0EA8;
      }
      goto L_08AE0E78;
    }
L_08AE0E78:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0E84u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E84u) goto L_08AE0E84;
    return;
L_08AE0E84:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0E9C;
      }
      goto L_08AE0E90;
    }
L_08AE0E90:
    ctx.gpr[31] = (0x08AE0E98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E98u) goto L_08AE0E98;
    return;
L_08AE0E98:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0E9C;
L_08AE0E9C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0EA8;
L_08AE0EA8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE0EB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8360));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0EB8u) goto L_08AE0EB8;
    return;
L_08AE0EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE0F6C;
      }
      goto L_08AE0EC0;
    }
L_08AE0EC0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0F00;
      }
      goto L_08AE0ED0;
    }
L_08AE0ED0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0EDCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0EDCu) goto L_08AE0EDC;
    return;
L_08AE0EDC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0EF4;
      }
      goto L_08AE0EE8;
    }
L_08AE0EE8:
    ctx.gpr[31] = (0x08AE0EF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0EF0u) goto L_08AE0EF0;
    return;
L_08AE0EF0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0EF4;
L_08AE0EF4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0F00;
L_08AE0F00:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE0F10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8352));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F10u) goto L_08AE0F10;
    return;
L_08AE0F10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE0F6C;
      }
      goto L_08AE0F18;
    }
L_08AE0F18:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0F58;
      }
      goto L_08AE0F28;
    }
L_08AE0F28:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0F34u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F34u) goto L_08AE0F34;
    return;
L_08AE0F34:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0F4C;
      }
      goto L_08AE0F40;
    }
L_08AE0F40:
    ctx.gpr[31] = (0x08AE0F48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F48u) goto L_08AE0F48;
    return;
L_08AE0F48:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0F4C;
L_08AE0F4C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0F58;
L_08AE0F58:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE0F68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8432));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F68u) goto L_08AE0F68;
    return;
L_08AE0F68:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE0F6C;
L_08AE0F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE0FB8;
    }
L_08AE0FB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1020;
      }
      goto L_08AE0FC8;
    }
L_08AE0FC8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1008;
      }
      goto L_08AE0FD8;
    }
L_08AE0FD8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0FE4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0FE4u) goto L_08AE0FE4;
    return;
L_08AE0FE4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0FFC;
      }
      goto L_08AE0FF0;
    }
L_08AE0FF0:
    ctx.gpr[31] = (0x08AE0FF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE0FF8u) goto L_08AE0FF8;
    return;
L_08AE0FF8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0FFC;
L_08AE0FFC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1008;
L_08AE1008:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1018u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8344));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1018u) goto L_08AE1018;
    return;
L_08AE1018:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1074;
      }
      goto L_08AE1020;
    }
L_08AE1020:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1060;
      }
      goto L_08AE1030;
    }
L_08AE1030:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE103Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE103Cu) goto L_08AE103C;
    return;
L_08AE103C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1054;
      }
      goto L_08AE1048;
    }
L_08AE1048:
    ctx.gpr[31] = (0x08AE1050u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1050u) goto L_08AE1050;
    return;
L_08AE1050:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1054;
L_08AE1054:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1060;
L_08AE1060:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1070u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8432));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1070u) goto L_08AE1070;
    return;
L_08AE1070:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1074;
L_08AE1074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE10C0;
    }
L_08AE10C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE10DC;
      }
      goto L_08AE10D0;
    }
L_08AE10D0:
    ctx.gpr[31] = (0x08AE10D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x08AE10D8u) goto L_08AE10D8;
    return;
L_08AE10D8:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08AE10DC;
L_08AE10DC:
    ctx.gpr[31] = (0x08AE10E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 157u, 0x08838A28u>(ctx, &aot_mem) && ctx.pc == 0x08AE10E4u) goto L_08AE10E4;
    return;
L_08AE10E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11C8;
      }
      goto L_08AE10EC;
    }
L_08AE10EC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE1108;
      }
      goto L_08AE10FC;
    }
L_08AE10FC:
    ctx.gpr[31] = (0x08AE1104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x08AE1104u) goto L_08AE1104;
    return;
L_08AE1104:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08AE1108;
L_08AE1108:
    ctx.gpr[31] = (0x08AE1110u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x08AE1110u) goto L_08AE1110;
    return;
L_08AE1110:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1170;
      }
      goto L_08AE1118;
    }
L_08AE1118:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1158;
      }
      goto L_08AE1128;
    }
L_08AE1128:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1134u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1134u) goto L_08AE1134;
    return;
L_08AE1134:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE114C;
      }
      goto L_08AE1140;
    }
L_08AE1140:
    ctx.gpr[31] = (0x08AE1148u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1148u) goto L_08AE1148;
    return;
L_08AE1148:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE114C;
L_08AE114C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1158;
L_08AE1158:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1168u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8344));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1168u) goto L_08AE1168;
    return;
L_08AE1168:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE121C;
      }
      goto L_08AE1170;
    }
L_08AE1170:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE11B0;
      }
      goto L_08AE1180;
    }
L_08AE1180:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE118Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE118Cu) goto L_08AE118C;
    return;
L_08AE118C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11A4;
      }
      goto L_08AE1198;
    }
L_08AE1198:
    ctx.gpr[31] = (0x08AE11A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE11A0u) goto L_08AE11A0;
    return;
L_08AE11A0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE11A4;
L_08AE11A4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE11B0;
L_08AE11B0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE11C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8432));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE11C0u) goto L_08AE11C0;
    return;
L_08AE11C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE121C;
      }
      goto L_08AE11C8;
    }
L_08AE11C8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1208;
      }
      goto L_08AE11D8;
    }
L_08AE11D8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE11E4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE11E4u) goto L_08AE11E4;
    return;
L_08AE11E4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11FC;
      }
      goto L_08AE11F0;
    }
L_08AE11F0:
    ctx.gpr[31] = (0x08AE11F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE11F8u) goto L_08AE11F8;
    return;
L_08AE11F8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE11FC;
L_08AE11FC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1208;
L_08AE1208:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1218u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8336));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1218u) goto L_08AE1218;
    return;
L_08AE1218:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE121C;
L_08AE121C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE1268;
    }
L_08AE1268:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25490)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE12D0;
      }
      goto L_08AE1278;
    }
L_08AE1278:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE12B8;
      }
      goto L_08AE1288;
    }
L_08AE1288:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1294u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1294u) goto L_08AE1294;
    return;
L_08AE1294:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE12AC;
      }
      goto L_08AE12A0;
    }
L_08AE12A0:
    ctx.gpr[31] = (0x08AE12A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE12A8u) goto L_08AE12A8;
    return;
L_08AE12A8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE12AC;
L_08AE12AC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE12B8;
L_08AE12B8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE12C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8344));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE12C8u) goto L_08AE12C8;
    return;
L_08AE12C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1324;
      }
      goto L_08AE12D0;
    }
L_08AE12D0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1310;
      }
      goto L_08AE12E0;
    }
L_08AE12E0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE12ECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE12ECu) goto L_08AE12EC;
    return;
L_08AE12EC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1304;
      }
      goto L_08AE12F8;
    }
L_08AE12F8:
    ctx.gpr[31] = (0x08AE1300u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1300u) goto L_08AE1300;
    return;
L_08AE1300:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1304;
L_08AE1304:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1310;
L_08AE1310:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1320u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8432));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1320u) goto L_08AE1320;
    return;
L_08AE1320:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1324;
L_08AE1324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE1370;
    }
L_08AE1370:
    ctx.gpr[31] = (0x08AE1378u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08AE1378u) goto L_08AE1378;
    return;
L_08AE1378:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE13A0;
      }
      goto L_08AE1388;
    }
L_08AE1388:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE1518;
    }
    goto L_08AE1390;
L_08AE1390:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AE13B8;
      }
      goto L_08AE1398;
    }
L_08AE1398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1410;
      }
      goto L_08AE13A0;
    }
L_08AE13A0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1468;
      }
      goto L_08AE13A8;
    }
L_08AE13A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE14C0;
      }
      goto L_08AE13B0;
    }
L_08AE13B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE1518;
      }
      goto L_08AE13B8;
    }
L_08AE13B8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE13F8;
      }
      goto L_08AE13C8;
    }
L_08AE13C8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE13D4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE13D4u) goto L_08AE13D4;
    return;
L_08AE13D4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE13EC;
      }
      goto L_08AE13E0;
    }
L_08AE13E0:
    ctx.gpr[31] = (0x08AE13E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE13E8u) goto L_08AE13E8;
    return;
L_08AE13E8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE13EC;
L_08AE13EC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE13F8;
L_08AE13F8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1408u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8328));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1408u) goto L_08AE1408;
    return;
L_08AE1408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1514;
      }
      goto L_08AE1410;
    }
L_08AE1410:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1450;
      }
      goto L_08AE1420;
    }
L_08AE1420:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE142Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE142Cu) goto L_08AE142C;
    return;
L_08AE142C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1444;
      }
      goto L_08AE1438;
    }
L_08AE1438:
    ctx.gpr[31] = (0x08AE1440u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1440u) goto L_08AE1440;
    return;
L_08AE1440:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1444;
L_08AE1444:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1450;
L_08AE1450:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1460u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8328));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1460u) goto L_08AE1460;
    return;
L_08AE1460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1514;
      }
      goto L_08AE1468;
    }
L_08AE1468:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE14A8;
      }
      goto L_08AE1478;
    }
L_08AE1478:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1484u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1484u) goto L_08AE1484;
    return;
L_08AE1484:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE149C;
      }
      goto L_08AE1490;
    }
L_08AE1490:
    ctx.gpr[31] = (0x08AE1498u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1498u) goto L_08AE1498;
    return;
L_08AE1498:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE149C;
L_08AE149C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE14A8;
L_08AE14A8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE14B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8320));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE14B8u) goto L_08AE14B8;
    return;
L_08AE14B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1514;
      }
      goto L_08AE14C0;
    }
L_08AE14C0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1500;
      }
      goto L_08AE14D0;
    }
L_08AE14D0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE14DCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE14DCu) goto L_08AE14DC;
    return;
L_08AE14DC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE14F4;
      }
      goto L_08AE14E8;
    }
L_08AE14E8:
    ctx.gpr[31] = (0x08AE14F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE14F0u) goto L_08AE14F0;
    return;
L_08AE14F0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE14F4;
L_08AE14F4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1500;
L_08AE1500:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1510u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8320));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1510u) goto L_08AE1510;
    return;
L_08AE1510:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1514;
L_08AE1514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE1518;
L_08AE1518:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE1560;
    }
L_08AE1560:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25524)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1584;
      }
      goto L_08AE1570;
    }
L_08AE1570:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE16A4;
    }
    goto L_08AE1578;
L_08AE1578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE159C;
      }
      goto L_08AE1580;
    }
L_08AE1580:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    goto L_08AE1584;
L_08AE1584:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE15F4;
      }
      goto L_08AE158C;
    }
L_08AE158C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE164C;
      }
      goto L_08AE1594;
    }
L_08AE1594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE16A4;
      }
      goto L_08AE159C;
    }
L_08AE159C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE15DC;
      }
      goto L_08AE15AC;
    }
L_08AE15AC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE15B8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE15B8u) goto L_08AE15B8;
    return;
L_08AE15B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE15D0;
      }
      goto L_08AE15C4;
    }
L_08AE15C4:
    ctx.gpr[31] = (0x08AE15CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE15CCu) goto L_08AE15CC;
    return;
L_08AE15CC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE15D0;
L_08AE15D0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE15DC;
L_08AE15DC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE15ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8312));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE15ECu) goto L_08AE15EC;
    return;
L_08AE15EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE16A0;
      }
      goto L_08AE15F4;
    }
L_08AE15F4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1634;
      }
      goto L_08AE1604;
    }
L_08AE1604:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1610u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1610u) goto L_08AE1610;
    return;
L_08AE1610:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1628;
      }
      goto L_08AE161C;
    }
L_08AE161C:
    ctx.gpr[31] = (0x08AE1624u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1624u) goto L_08AE1624;
    return;
L_08AE1624:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1628;
L_08AE1628:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1634;
L_08AE1634:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1644u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8304));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1644u) goto L_08AE1644;
    return;
L_08AE1644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE16A0;
      }
      goto L_08AE164C;
    }
L_08AE164C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE168C;
      }
      goto L_08AE165C;
    }
L_08AE165C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1668u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1668u) goto L_08AE1668;
    return;
L_08AE1668:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1680;
      }
      goto L_08AE1674;
    }
L_08AE1674:
    ctx.gpr[31] = (0x08AE167Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE167Cu) goto L_08AE167C;
    return;
L_08AE167C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1680;
L_08AE1680:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE168C;
L_08AE168C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE169Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8432));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE169Cu) goto L_08AE169C;
    return;
L_08AE169C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE16A0;
L_08AE16A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE16A4;
L_08AE16A4:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE16EC;
    }
L_08AE16EC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1754;
      }
      goto L_08AE16FC;
    }
L_08AE16FC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE173C;
      }
      goto L_08AE170C;
    }
L_08AE170C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1718u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1718u) goto L_08AE1718;
    return;
L_08AE1718:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1730;
      }
      goto L_08AE1724;
    }
L_08AE1724:
    ctx.gpr[31] = (0x08AE172Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE172Cu) goto L_08AE172C;
    return;
L_08AE172C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1730;
L_08AE1730:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE173C;
L_08AE173C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE174Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8344));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE174Cu) goto L_08AE174C;
    return;
L_08AE174C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE17A8;
      }
      goto L_08AE1754;
    }
L_08AE1754:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1794;
      }
      goto L_08AE1764;
    }
L_08AE1764:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1770u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1770u) goto L_08AE1770;
    return;
L_08AE1770:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1788;
      }
      goto L_08AE177C;
    }
L_08AE177C:
    ctx.gpr[31] = (0x08AE1784u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1784u) goto L_08AE1784;
    return;
L_08AE1784:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1788;
L_08AE1788:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1794;
L_08AE1794:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE17A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8432));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE17A4u) goto L_08AE17A4;
    return;
L_08AE17A4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE17A8;
L_08AE17A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE17F4;
    }
L_08AE17F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25520)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE185C;
      }
      goto L_08AE1804;
    }
L_08AE1804:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1844;
      }
      goto L_08AE1814;
    }
L_08AE1814:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1820u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1820u) goto L_08AE1820;
    return;
L_08AE1820:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1838;
      }
      goto L_08AE182C;
    }
L_08AE182C:
    ctx.gpr[31] = (0x08AE1834u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1834u) goto L_08AE1834;
    return;
L_08AE1834:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1838;
L_08AE1838:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1844;
L_08AE1844:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1854u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8296));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1854u) goto L_08AE1854;
    return;
L_08AE1854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE18B0;
      }
      goto L_08AE185C;
    }
L_08AE185C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE189C;
      }
      goto L_08AE186C;
    }
L_08AE186C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1878u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1878u) goto L_08AE1878;
    return;
L_08AE1878:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1890;
      }
      goto L_08AE1884;
    }
L_08AE1884:
    ctx.gpr[31] = (0x08AE188Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE188Cu) goto L_08AE188C;
    return;
L_08AE188C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1890;
L_08AE1890:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE189C;
L_08AE189C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE18ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8288));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE18ACu) goto L_08AE18AC;
    return;
L_08AE18AC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE18B0;
L_08AE18B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE18FC;
    }
L_08AE18FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25527)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1964;
      }
      goto L_08AE190C;
    }
L_08AE190C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE194C;
      }
      goto L_08AE191C;
    }
L_08AE191C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1928u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1928u) goto L_08AE1928;
    return;
L_08AE1928:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1940;
      }
      goto L_08AE1934;
    }
L_08AE1934:
    ctx.gpr[31] = (0x08AE193Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE193Cu) goto L_08AE193C;
    return;
L_08AE193C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1940;
L_08AE1940:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE194C;
L_08AE194C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE195Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8344));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE195Cu) goto L_08AE195C;
    return;
L_08AE195C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE19B8;
      }
      goto L_08AE1964;
    }
L_08AE1964:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE19A4;
      }
      goto L_08AE1974;
    }
L_08AE1974:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1980u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1980u) goto L_08AE1980;
    return;
L_08AE1980:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1998;
      }
      goto L_08AE198C;
    }
L_08AE198C:
    ctx.gpr[31] = (0x08AE1994u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1994u) goto L_08AE1994;
    return;
L_08AE1994:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1998;
L_08AE1998:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE19A4;
L_08AE19A4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE19B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8432));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE19B4u) goto L_08AE19B4;
    return;
L_08AE19B4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE19B8;
L_08AE19B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE19C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AE19C8u) goto L_08AE19C8;
    return;
L_08AE19C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[23] = (0u | 1u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE1A24;
    }
L_08AE1A24:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25651)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1A8C;
      }
      goto L_08AE1A34;
    }
L_08AE1A34:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1A74;
      }
      goto L_08AE1A44;
    }
L_08AE1A44:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1A50u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1A50u) goto L_08AE1A50;
    return;
L_08AE1A50:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1A68;
      }
      goto L_08AE1A5C;
    }
L_08AE1A5C:
    ctx.gpr[31] = (0x08AE1A64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1A64u) goto L_08AE1A64;
    return;
L_08AE1A64:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1A68;
L_08AE1A68:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1A74;
L_08AE1A74:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1A84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8344));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1A84u) goto L_08AE1A84;
    return;
L_08AE1A84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1AE0;
      }
      goto L_08AE1A8C;
    }
L_08AE1A8C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1ACC;
      }
      goto L_08AE1A9C;
    }
L_08AE1A9C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1AA8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1AA8u) goto L_08AE1AA8;
    return;
L_08AE1AA8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1AC0;
      }
      goto L_08AE1AB4;
    }
L_08AE1AB4:
    ctx.gpr[31] = (0x08AE1ABCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1ABCu) goto L_08AE1ABC;
    return;
L_08AE1ABC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1AC0;
L_08AE1AC0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1ACC;
L_08AE1ACC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1ADCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8432));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1ADCu) goto L_08AE1ADC;
    return;
L_08AE1ADC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1AE0;
L_08AE1AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE1B28;
    }
L_08AE1B28:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25652)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1B90;
      }
      goto L_08AE1B38;
    }
L_08AE1B38:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1B78;
      }
      goto L_08AE1B48;
    }
L_08AE1B48:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1B54u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1B54u) goto L_08AE1B54;
    return;
L_08AE1B54:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1B6C;
      }
      goto L_08AE1B60;
    }
L_08AE1B60:
    ctx.gpr[31] = (0x08AE1B68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1B68u) goto L_08AE1B68;
    return;
L_08AE1B68:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1B6C;
L_08AE1B6C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1B78;
L_08AE1B78:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1B88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8280));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1B88u) goto L_08AE1B88;
    return;
L_08AE1B88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1BE4;
      }
      goto L_08AE1B90;
    }
L_08AE1B90:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1BD0;
      }
      goto L_08AE1BA0;
    }
L_08AE1BA0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1BACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1BACu) goto L_08AE1BAC;
    return;
L_08AE1BAC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1BC4;
      }
      goto L_08AE1BB8;
    }
L_08AE1BB8:
    ctx.gpr[31] = (0x08AE1BC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1BC0u) goto L_08AE1BC0;
    return;
L_08AE1BC0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1BC4;
L_08AE1BC4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1BD0;
L_08AE1BD0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1BE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8272));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1BE0u) goto L_08AE1BE0;
    return;
L_08AE1BE0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1BE4;
L_08AE1BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE1C2C;
    }
L_08AE1C2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25488)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1C94;
      }
      goto L_08AE1C3C;
    }
L_08AE1C3C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1C7C;
      }
      goto L_08AE1C4C;
    }
L_08AE1C4C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1C58u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1C58u) goto L_08AE1C58;
    return;
L_08AE1C58:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1C70;
      }
      goto L_08AE1C64;
    }
L_08AE1C64:
    ctx.gpr[31] = (0x08AE1C6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1C6Cu) goto L_08AE1C6C;
    return;
L_08AE1C6C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE1C70;
L_08AE1C70:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1C7C;
L_08AE1C7C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1C8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8344));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1C8Cu) goto L_08AE1C8C;
    return;
L_08AE1C8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1CE8;
      }
      goto L_08AE1C94;
    }
L_08AE1C94:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1CD4;
      }
      goto L_08AE1CA4;
    }
L_08AE1CA4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1CB0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1CB0u) goto L_08AE1CB0;
    return;
L_08AE1CB0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1CC8;
      }
      goto L_08AE1CBC;
    }
L_08AE1CBC:
    ctx.gpr[31] = (0x08AE1CC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1CC4u) goto L_08AE1CC4;
    return;
L_08AE1CC4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE1CC8;
L_08AE1CC8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1CD4;
L_08AE1CD4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1CE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8432));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1CE4u) goto L_08AE1CE4;
    return;
L_08AE1CE4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1CE8;
L_08AE1CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE1CF0;
    }
L_08AE1CF0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25487)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1D58;
      }
      goto L_08AE1D00;
    }
L_08AE1D00:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1D40;
      }
      goto L_08AE1D10;
    }
L_08AE1D10:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1D1Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1D1Cu) goto L_08AE1D1C;
    return;
L_08AE1D1C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1D34;
      }
      goto L_08AE1D28;
    }
L_08AE1D28:
    ctx.gpr[31] = (0x08AE1D30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1D30u) goto L_08AE1D30;
    return;
L_08AE1D30:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE1D34;
L_08AE1D34:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1D40;
L_08AE1D40:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1D50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8344));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1D50u) goto L_08AE1D50;
    return;
L_08AE1D50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE1D58;
    }
L_08AE1D58:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1D98;
      }
      goto L_08AE1D68;
    }
L_08AE1D68:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1D74u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1D74u) goto L_08AE1D74;
    return;
L_08AE1D74:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1D8C;
      }
      goto L_08AE1D80;
    }
L_08AE1D80:
    ctx.gpr[31] = (0x08AE1D88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1D88u) goto L_08AE1D88;
    return;
L_08AE1D88:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE1D8C;
L_08AE1D8C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1D98;
L_08AE1D98:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1DA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8432));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1DA8u) goto L_08AE1DA8;
    return;
L_08AE1DA8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1DAC;
L_08AE1DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AE27D8;
      }
      goto L_08AE1DB8;
    }
L_08AE1DB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE27D8;
      }
      goto L_08AE1DC4;
    }
L_08AE1DC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(104))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE27D8;
      }
      goto L_08AE1DD0;
    }
L_08AE1DD0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1FDC;
      }
      goto L_08AE1DE4;
    }
L_08AE1DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
      if (branch_taken) {
          goto L_08AE1E60;
      }
      goto L_08AE1E34;
    }
L_08AE1E34:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1E40u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1E40u) goto L_08AE1E40;
    return;
L_08AE1E40:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1E58;
      }
      goto L_08AE1E4C;
    }
L_08AE1E4C:
    ctx.gpr[31] = (0x08AE1E54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1E54u) goto L_08AE1E54;
    return;
L_08AE1E54:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE1E58;
L_08AE1E58:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_08AE1E60;
L_08AE1E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5812));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE1EA8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1EA8u) goto L_08AE1EA8;
    return;
L_08AE1EA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE1EB4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AE1EB4u) goto L_08AE1EB4;
    return;
L_08AE1EB4:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
      if (branch_taken) {
          goto L_08AE1F3C;
      }
      goto L_08AE1F10;
    }
L_08AE1F10:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1F1Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1F1Cu) goto L_08AE1F1C;
    return;
L_08AE1F1C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1F34;
      }
      goto L_08AE1F28;
    }
L_08AE1F28:
    ctx.gpr[31] = (0x08AE1F30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE1F30u) goto L_08AE1F30;
    return;
L_08AE1F30:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE1F34;
L_08AE1F34:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    goto L_08AE1F3C;
L_08AE1F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5812));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE1F88u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1F88u) goto L_08AE1F88;
    return;
L_08AE1F88:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE1F94u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AE1F94u) goto L_08AE1F94;
    return;
L_08AE1F94:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1FC8;
      }
      goto L_08AE1FC0;
    }
L_08AE1FC0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    goto L_08AE1FC8;
L_08AE1FC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AE2214;
      }
      goto L_08AE1FD0;
    }
L_08AE1FD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE2214;
      }
      goto L_08AE1FDC;
    }
L_08AE1FDC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4760));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE20E0;
    }
    goto L_08AE1FF0;
L_08AE1FF0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE2030;
    }
    goto L_08AE2000;
L_08AE2000:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE200Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE200Cu) goto L_08AE200C;
    return;
L_08AE200C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2024;
      }
      goto L_08AE2018;
    }
L_08AE2018:
    ctx.gpr[31] = (0x08AE2020u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE2020u) goto L_08AE2020;
    return;
L_08AE2020:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE2024;
L_08AE2024:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE2030;
L_08AE2030:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE2078u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2078u) goto L_08AE2078;
    return;
L_08AE2078:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE2084u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AE2084u) goto L_08AE2084;
    return;
L_08AE2084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (static_cast<std::int32_t>(ctx.gpr[19]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE2218;
    }
    goto L_08AE20D4;
L_08AE20D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE2214;
      }
      goto L_08AE20E0;
    }
L_08AE20E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE2158;
    }
    goto L_08AE2128;
L_08AE2128:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE2134u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2134u) goto L_08AE2134;
    return;
L_08AE2134:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE214C;
      }
      goto L_08AE2140;
    }
L_08AE2140:
    ctx.gpr[31] = (0x08AE2148u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE2148u) goto L_08AE2148;
    return;
L_08AE2148:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE214C;
L_08AE214C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE2158;
L_08AE2158:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08AE21A0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE21A0u) goto L_08AE21A0;
    return;
L_08AE21A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE21ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AE21ACu) goto L_08AE21AC;
    return;
L_08AE21AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE2218;
    }
    goto L_08AE2208;
L_08AE2208:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    goto L_08AE2214;
L_08AE2214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE2218;
L_08AE2218:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08AE22AC;
      }
      goto L_08AE2260;
    }
L_08AE2260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[17] = (0u | 550u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(30));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AE22F0;
      }
      goto L_08AE22AC;
    }
L_08AE22AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(30));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7));
    goto L_08AE22F0;
L_08AE22F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08AE2560;
      }
      goto L_08AE2338;
    }
L_08AE2338:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7144)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE2350:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-20));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AE2560;
      }
      goto L_08AE2380;
    }
L_08AE2380:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-25));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AE2560;
      }
      goto L_08AE23B0;
    }
L_08AE23B0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(30));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AE2560;
      }
      goto L_08AE23D8;
    }
L_08AE23D8:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-15));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(30));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AE2560;
      }
      goto L_08AE2408;
    }
L_08AE2408:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(130));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-18));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AE2560;
      }
      goto L_08AE2434;
    }
L_08AE2434:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[31] = (0x08AE2448u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AE2448u) goto L_08AE2448;
    return;
L_08AE2448:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
      if (branch_taken) {
          goto L_08AE2560;
      }
      goto L_08AE2474;
    }
L_08AE2474:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(65));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AE2560;
      }
      goto L_08AE249C;
    }
L_08AE249C:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[31] = (0x08AE24B0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AE24B0u) goto L_08AE24B0;
    return;
L_08AE24B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
      if (branch_taken) {
          goto L_08AE2560;
      }
      goto L_08AE24DC;
    }
L_08AE24DC:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[31] = (0x08AE24F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AE24F0u) goto L_08AE24F0;
    return;
L_08AE24F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
      if (branch_taken) {
          goto L_08AE2560;
      }
      goto L_08AE251C;
    }
L_08AE251C:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[31] = (0x08AE2530u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AE2530u) goto L_08AE2530;
    return;
L_08AE2530:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
      if (branch_taken) {
          goto L_08AE2560;
      }
      goto L_08AE255C;
    }
L_08AE255C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-15));
    goto L_08AE2560;
L_08AE2560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08AE25E4;
      }
      goto L_08AE25A8;
    }
L_08AE25A8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-6984)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE25C0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[30]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08AE2610;
      }
      goto L_08AE25E4;
    }
L_08AE25E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1388)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2610;
      }
      goto L_08AE25F0;
    }
L_08AE25F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[30]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08AE2610;
L_08AE2610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1416)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2778;
      }
      goto L_08AE261C;
    }
L_08AE261C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6240));
    ctx.gpr[31] = (0x08AE264Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 695u, 0x08ADACA4u>(ctx, &aot_mem) && ctx.pc == 0x08AE264Cu) goto L_08AE264C;
    return;
L_08AE264C:
    ctx.gpr[31] = (0x08AE2654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 326u, 0x08AED248u>(ctx, &aot_mem) && ctx.pc == 0x08AE2654u) goto L_08AE2654;
    return;
L_08AE2654:
    ctx.gpr[30] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE2670u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 326u, 0x08AED248u>(ctx, &aot_mem) && ctx.pc == 0x08AE2670u) goto L_08AE2670;
    return;
L_08AE2670:
    ctx.gpr[20] = (0u | 7u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE268Cu);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 326u, 0x08AED248u>(ctx, &aot_mem) && ctx.pc == 0x08AE268Cu) goto L_08AE268C;
    return;
L_08AE268C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE26A4u);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 326u, 0x08AED248u>(ctx, &aot_mem) && ctx.pc == 0x08AE26A4u) goto L_08AE26A4;
    return;
L_08AE26A4:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE26BCu);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 326u, 0x08AED248u>(ctx, &aot_mem) && ctx.pc == 0x08AE26BCu) goto L_08AE26BC;
    return;
L_08AE26BC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE26D4u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 326u, 0x08AED248u>(ctx, &aot_mem) && ctx.pc == 0x08AE26D4u) goto L_08AE26D4;
    return;
L_08AE26D4:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[31] = (0x08AE26F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 326u, 0x08AED248u>(ctx, &aot_mem) && ctx.pc == 0x08AE26F0u) goto L_08AE26F0;
    return;
L_08AE26F0:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE2708u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 326u, 0x08AED248u>(ctx, &aot_mem) && ctx.pc == 0x08AE2708u) goto L_08AE2708;
    return;
L_08AE2708:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE2740u);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 696u, 0x08ADACE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2740u) goto L_08AE2740;
    return;
L_08AE2740:
    ctx.gpr[31] = (0x08AE2748u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 697u, 0x08ADAD0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2748u) goto L_08AE2748;
    return;
L_08AE2748:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[31] = (0x08AE2754u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 698u, 0x08ADADB8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2754u) goto L_08AE2754;
    return;
L_08AE2754:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08AE27BC;
      }
      goto L_08AE2778;
    }
L_08AE2778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08AE27A8;
      }
      goto L_08AE2788;
    }
L_08AE2788:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1416), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE27A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6240));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 698u, 0x08ADADB8u>(ctx, &aot_mem) && ctx.pc == 0x08AE27A0u) goto L_08AE27A0;
    return;
L_08AE27A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE27BC;
      }
      goto L_08AE27A8;
    }
L_08AE27A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[31] = (0x08AE27BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6240));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 698u, 0x08ADADB8u>(ctx, &aot_mem) && ctx.pc == 0x08AE27BCu) goto L_08AE27BC;
    return;
L_08AE27BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08AE27D8;
      }
      goto L_08AE27CC;
    }
L_08AE27CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1416), ctx.gpr[4]);
    goto L_08AE27D8;
L_08AE27D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(104))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3370;
      }
      goto L_08AE27E4;
    }
L_08AE27E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE2888;
      }
      goto L_08AE27F4;
    }
L_08AE27F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2888;
      }
      goto L_08AE2800;
    }
L_08AE2800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2888;
      }
      goto L_08AE2844;
    }
L_08AE2844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2A28;
      }
      goto L_08AE2888;
    }
L_08AE2888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AE28C8;
      }
      goto L_08AE2894;
    }
L_08AE2894:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE28C8;
      }
      goto L_08AE28A0;
    }
L_08AE28A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AE28B8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE28B8u) goto L_08AE28B8;
    return;
L_08AE28B8:
    ctx.gpr[31] = (0x08AE28C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AE28C0u) goto L_08AE28C0;
    return;
L_08AE28C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE28EC;
      }
      goto L_08AE28C8;
    }
L_08AE28C8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[7] = (0u | 220u);
    ctx.gpr[31] = (0x08AE28E0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE28E0u) goto L_08AE28E0;
    return;
L_08AE28E0:
    ctx.gpr[31] = (0x08AE28E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AE28E8u) goto L_08AE28E8;
    return;
L_08AE28E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE28EC;
L_08AE28EC:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5812));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[5] = (ctx.gpr[7] << 4u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE2948u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8264));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 379u, 0x08AED520u>(ctx, &aot_mem) && ctx.pc == 0x08AE2948u) goto L_08AE2948;
    return;
L_08AE2948:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
        goto L_08AE29A4;
    }
    goto L_08AE2950;
L_08AE2950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE2998u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8256));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 379u, 0x08AED520u>(ctx, &aot_mem) && ctx.pc == 0x08AE2998u) goto L_08AE2998;
    return;
L_08AE2998:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE29D8;
    }
    goto L_08AE29A0;
L_08AE29A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    goto L_08AE29A4;
L_08AE29A4:
    if (ctx.gpr[22] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE29D8;
    }
    goto L_08AE29AC;
L_08AE29AC:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x08AE29C8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE29C8u) goto L_08AE29C8;
    return;
L_08AE29C8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE29D8;
L_08AE29D8:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE2A28u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A28u) goto L_08AE2A28;
    return;
L_08AE2A28:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2B88;
      }
      goto L_08AE2A30;
    }
L_08AE2A30:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
        goto L_08AE2A64;
    }
    goto L_08AE2A40;
L_08AE2A40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AE2A84;
      }
      goto L_08AE2A48;
    }
L_08AE2A48:
    ctx.gpr[31] = (0x08AE2A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A50u) goto L_08AE2A50;
    return;
L_08AE2A50:
    ctx.gpr[31] = (0x08AE2A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A58u) goto L_08AE2A58;
    return;
L_08AE2A58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE2A98;
      }
      goto L_08AE2A60;
    }
L_08AE2A60:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_08AE2A64;
L_08AE2A64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2A84;
      }
      goto L_08AE2A6C;
    }
L_08AE2A6C:
    ctx.gpr[31] = (0x08AE2A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A74u) goto L_08AE2A74;
    return;
L_08AE2A74:
    ctx.gpr[31] = (0x08AE2A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A7Cu) goto L_08AE2A7C;
    return;
L_08AE2A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE2A98;
      }
      goto L_08AE2A84;
    }
L_08AE2A84:
    ctx.gpr[31] = (0x08AE2A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A8Cu) goto L_08AE2A8C;
    return;
L_08AE2A8C:
    ctx.gpr[31] = (0x08AE2A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2A94u) goto L_08AE2A94;
    return;
L_08AE2A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE2A98;
L_08AE2A98:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2B48;
      }
      goto L_08AE2AD8;
    }
L_08AE2AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5812));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2B48;
      }
      goto L_08AE2B1C;
    }
L_08AE2B1C:
    ctx.gpr[31] = (0x08AE2B24u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B24u) goto L_08AE2B24;
    return;
L_08AE2B24:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AE2B40u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B40u) goto L_08AE2B40;
    return;
L_08AE2B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2B6C;
      }
      goto L_08AE2B48;
    }
L_08AE2B48:
    ctx.gpr[31] = (0x08AE2B50u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B50u) goto L_08AE2B50;
    return;
L_08AE2B50:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AE2B6Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B6Cu) goto L_08AE2B6C;
    return;
L_08AE2B6C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AE2B88u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B88u) goto L_08AE2B88;
    return;
L_08AE2B88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE2BA4;
      }
      goto L_08AE2B94;
    }
L_08AE2B94:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1424)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE2BA8;
    }
    goto L_08AE2BA0;
L_08AE2BA0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AE2BA4;
L_08AE2BA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE2BA8;
L_08AE2BA8:
    ctx.gpr[6] = (ctx.gpr[22] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[6] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5812));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AE2C58;
      }
      goto L_08AE2BE8;
    }
L_08AE2BE8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AE2D24;
      }
      goto L_08AE2BF4;
    }
L_08AE2BF4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25496)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17276u << 16u);
    ctx.gpr[5] = (17152u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (15232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17000u << 16u);
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16752u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE2C50u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 620u, 0x08AD6FB0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2C50u) goto L_08AE2C50;
    return;
L_08AE2C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2D24;
      }
      goto L_08AE2C58;
    }
L_08AE2C58:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AE2C7C;
      }
      goto L_08AE2C64;
    }
L_08AE2C64:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AE2CD4;
      }
      goto L_08AE2C70;
    }
L_08AE2C70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2D24;
      }
      goto L_08AE2C78;
    }
L_08AE2C78:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08AE2C7C;
L_08AE2C7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25476)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (15360u << 16u);
    ctx.gpr[4] = (17276u << 16u);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17008u << 16u);
    ctx.gpr[4] = (16920u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (16752u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE2CCCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 620u, 0x08AD6FB0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2CCCu) goto L_08AE2CCC;
    return;
L_08AE2CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2D24;
      }
      goto L_08AE2CD4;
    }
L_08AE2CD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25480)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (15360u << 16u);
    ctx.gpr[4] = (17276u << 16u);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17008u << 16u);
    ctx.gpr[4] = (17000u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (16752u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE2D24u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 620u, 0x08AD6FB0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2D24u) goto L_08AE2D24;
    return;
L_08AE2D24:
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08AE2D38u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 637u, 0x08A57420u>(ctx, &aot_mem) && ctx.pc == 0x08AE2D38u) goto L_08AE2D38;
    return;
L_08AE2D38:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AE2D60;
      }
      goto L_08AE2D54;
    }
L_08AE2D54:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AE2D60;
L_08AE2D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE3364;
      }
      goto L_08AE2D70;
    }
L_08AE2D70:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE2D7Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2D7Cu) goto L_08AE2D7C;
    return;
L_08AE2D7C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE2D94u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2D94u) goto L_08AE2D94;
    return;
L_08AE2D94:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE2DA0u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2DA0u) goto L_08AE2DA0;
    return;
L_08AE2DA0:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08AE2DB8u);
    ctx.gpr[7] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2DB8u) goto L_08AE2DB8;
    return;
L_08AE2DB8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08AE2DF8;
      }
      goto L_08AE2DF0;
    }
L_08AE2DF0:
    ctx.gpr[31] = (0x08AE2DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 699u, 0x08AFAF50u>(ctx, &aot_mem) && ctx.pc == 0x08AE2DF8u) goto L_08AE2DF8;
    return;
L_08AE2DF8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AE2E04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20624)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x08AE2E04u) goto L_08AE2E04;
    return;
L_08AE2E04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2E2C;
      }
      goto L_08AE2E0C;
    }
L_08AE2E0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE2E2C;
L_08AE2E2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_08AE2E60;
    }
    goto L_08AE2E3C;
L_08AE2E3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE2E7C;
      }
      goto L_08AE2E60;
    }
L_08AE2E60:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE2E7C;
L_08AE2E7C:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1176));
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE2EA0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2EA0u) goto L_08AE2EA0;
    return;
L_08AE2EA0:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE2EE0;
      }
      goto L_08AE2EBC;
    }
L_08AE2EBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE2F00;
      }
      goto L_08AE2EE0;
    }
L_08AE2EE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE2F00;
L_08AE2F00:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1180));
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE2F24u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2F24u) goto L_08AE2F24;
    return;
L_08AE2F24:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE2F64;
      }
      goto L_08AE2F40;
    }
L_08AE2F40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE2F84;
      }
      goto L_08AE2F64;
    }
L_08AE2F64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE2F84;
L_08AE2F84:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1184));
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE2FA8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2FA8u) goto L_08AE2FA8;
    return;
L_08AE2FA8:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE2FE8;
      }
      goto L_08AE2FC4;
    }
L_08AE2FC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE3008;
      }
      goto L_08AE2FE8;
    }
L_08AE2FE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE3008;
L_08AE3008:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1188));
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE302Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE302Cu) goto L_08AE302C;
    return;
L_08AE302C:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE306C;
      }
      goto L_08AE3048;
    }
L_08AE3048:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE308C;
      }
      goto L_08AE306C;
    }
L_08AE306C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE308C;
L_08AE308C:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1192));
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE30B0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE30B0u) goto L_08AE30B0;
    return;
L_08AE30B0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25471))))));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08AE3110;
      }
      goto L_08AE30EC;
    }
L_08AE30EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE3130;
      }
      goto L_08AE3110;
    }
L_08AE3110:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE3130;
L_08AE3130:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1196));
    ctx.gpr[6] = (17196u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE3154u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3154u) goto L_08AE3154;
    return;
L_08AE3154:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE3194;
      }
      goto L_08AE3170;
    }
L_08AE3170:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE31B4;
      }
      goto L_08AE3194;
    }
L_08AE3194:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE31B4;
L_08AE31B4:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1200));
    ctx.gpr[6] = (17196u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE31D8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE31D8u) goto L_08AE31D8;
    return;
L_08AE31D8:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE3218;
      }
      goto L_08AE31F4;
    }
L_08AE31F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE3238;
      }
      goto L_08AE3218;
    }
L_08AE3218:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE3238;
L_08AE3238:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1204));
    ctx.gpr[6] = (17196u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE325Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE325Cu) goto L_08AE325C;
    return;
L_08AE325C:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE329C;
      }
      goto L_08AE3278;
    }
L_08AE3278:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE32BC;
      }
      goto L_08AE329C;
    }
L_08AE329C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE32BC;
L_08AE32BC:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1208));
    ctx.gpr[6] = (17196u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE32E0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE32E0u) goto L_08AE32E0;
    return;
L_08AE32E0:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25471))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE3320;
      }
      goto L_08AE32FC;
    }
L_08AE32FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE3340;
      }
      goto L_08AE3320;
    }
L_08AE3320:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE3340;
L_08AE3340:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1212));
    ctx.gpr[6] = (17196u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE3364u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 897u, 0x08AD39E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3364u) goto L_08AE3364;
    return;
L_08AE3364:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08AE3370;
L_08AE3370:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 15 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE02FC;
    }
    goto L_08AE3380;
L_08AE3380:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(104))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AE02F4;
      }
      goto L_08AE339C;
    }
L_08AE339C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE33CC;
      }
      goto L_08AE33AC;
    }
L_08AE33AC:
    ctx.gpr[31] = (0x08AE33B4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 66u, 0x08AE45E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE33B4u) goto L_08AE33B4;
    return;
L_08AE33B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25520)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08AE33CCu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 642u, 0x08ADA984u>(ctx, &aot_mem) && ctx.pc == 0x08AE33CCu) goto L_08AE33CC;
    return;
L_08AE33CC:
    ctx.gpr[31] = (0x08AE33D4u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AE33D4u) goto L_08AE33D4;
    return;
L_08AE33D4:
    ctx.gpr[31] = (0x08AE33DCu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE33DCu) goto L_08AE33DC;
    return;
L_08AE33DC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE33FCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE33FCu) goto L_08AE33FC;
    return;
L_08AE33FC:
    ctx.gpr[31] = (0x08AE3404u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE3404u) goto L_08AE3404;
    return;
L_08AE3404:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 253u);
    ctx.gpr[6] = (0u | 179u);
    ctx.gpr[7] = (0u | 54u);
    ctx.gpr[31] = (0x08AE341Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE341Cu) goto L_08AE341C;
    return;
L_08AE341C:
    ctx.gpr[31] = (0x08AE3424u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AE3424u) goto L_08AE3424;
    return;
L_08AE3424:
    ctx.gpr[31] = (0x08AE342Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE342Cu) goto L_08AE342C;
    return;
L_08AE342C:
    ctx.gpr[31] = (0x08AE3434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08AE3434u) goto L_08AE3434;
    return;
L_08AE3434:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AE3450u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3450u) goto L_08AE3450;
    return;
L_08AE3450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1420)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE346C;
      }
      goto L_08AE3460;
    }
L_08AE3460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1420)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1420), ctx.gpr[4]);
    goto L_08AE346C;
L_08AE346C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(310)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3624;
      }
      goto L_08AE3478;
    }
L_08AE3478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE3624;
      }
      goto L_08AE3488;
    }
L_08AE3488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE3624;
      }
      goto L_08AE3498;
    }
L_08AE3498:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3624;
      }
      goto L_08AE34A4;
    }
L_08AE34A4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 15u);
    ctx.gpr[18] = (0u | 232u);
    ctx.gpr[31] = (0x08AE34B8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 196u, 0x08AD9034u>(ctx, &aot_mem) && ctx.pc == 0x08AE34B8u) goto L_08AE34B8;
    return;
L_08AE34B8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25444)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AE357C;
      }
      goto L_08AE34CC;
    }
L_08AE34CC:
    ctx.gpr[17] = (0u | 0u);
    goto L_08AE34D0;
L_08AE34D0:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28348));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE34FCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 211u, 0x08AD910Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE34FCu) goto L_08AE34FC;
    return;
L_08AE34FC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE34D0;
      }
      goto L_08AE351C;
    }
L_08AE351C:
    ctx.gpr[18] = (0u | 249u);
    ctx.gpr[19] = (0u | 15u);
    ctx.gpr[17] = (0u | 4u);
    goto L_08AE3528;
L_08AE3528:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28348));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE3554u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 211u, 0x08AD910Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3554u) goto L_08AE3554;
    return;
L_08AE3554:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE3528;
      }
      goto L_08AE3574;
    }
L_08AE3574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3624;
      }
      goto L_08AE357C;
    }
L_08AE357C:
    ctx.gpr[17] = (0u | 0u);
    goto L_08AE3580;
L_08AE3580:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28564));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE35ACu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 211u, 0x08AD910Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE35ACu) goto L_08AE35AC;
    return;
L_08AE35AC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE3580;
      }
      goto L_08AE35CC;
    }
L_08AE35CC:
    ctx.gpr[18] = (0u | 249u);
    ctx.gpr[17] = (0u | 15u);
    ctx.gpr[19] = (0u | 5u);
    goto L_08AE35D8;
L_08AE35D8:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28564));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE3604u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 211u, 0x08AD910Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3604u) goto L_08AE3604;
    return;
L_08AE3604:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE35D8;
      }
      goto L_08AE3624;
    }
L_08AE3624:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE366C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[18]);
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE36C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31073));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 153u, 0x08848DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AE36C0u) goto L_08AE36C0;
    return;
L_08AE36C0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE36CCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AE36CCu) goto L_08AE36CC;
    return;
L_08AE36CC:
    ctx.gpr[31] = (0x08AE36D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08AE36D4u) goto L_08AE36D4;
    return;
L_08AE36D4:
    ctx.gpr[31] = (0x08AE36DCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE36DCu) goto L_08AE36DC;
    return;
L_08AE36DC:
    ctx.gpr[4] = (16058u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34854u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16202u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49283u);
    ctx.gpr[31] = (0x08AE36F8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE36F8u) goto L_08AE36F8;
    return;
L_08AE36F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25548)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8248));
    ctx.gpr[23] = (2269u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5136));
    ctx.gpr[22] = (2229u << 16u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[30] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE3760;
      }
      goto L_08AE3728;
    }
L_08AE3728:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25552)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25420)));
      if (branch_taken) {
          goto L_08AE3754;
      }
      goto L_08AE3744;
    }
L_08AE3744:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25420), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE3760;
      }
      goto L_08AE3754;
    }
L_08AE3754:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25420), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AE3760;
L_08AE3760:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_08AE3A24;
      }
      goto L_08AE3770;
    }
L_08AE3770:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17235u << 16u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16916u << 16u);
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2269u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5648));
    ctx.gpr[20] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    goto L_08AE37B8;
L_08AE37B8:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-25420)));
    ctx.gpr[4] = (17220u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3800;
      }
      goto L_08AE37EC;
    }
L_08AE37EC:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE37EC;
      }
      goto L_08AE3800;
    }
L_08AE3800:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3824;
      }
      goto L_08AE3810;
    }
L_08AE3810:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3810;
      }
      goto L_08AE3824;
    }
L_08AE3824:
    ctx.gpr[4] = (16976u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17220u << 16u);
      if (branch_taken) {
          goto L_08AE3A14;
      }
      goto L_08AE383C;
    }
L_08AE383C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3A14;
      }
      goto L_08AE3850;
    }
L_08AE3850:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE385Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 153u, 0x08848DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AE385Cu) goto L_08AE385C;
    return;
L_08AE385C:
    ctx.gpr[4] = (17040u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE38C8;
      }
      goto L_08AE3880;
    }
L_08AE3880:
    ctx.gpr[4] = (16976u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE38B0;
      }
      goto L_08AE38A0;
    }
L_08AE38A0:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE38B0;
      }
      goto L_08AE38B0;
    }
L_08AE38B0:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_08AE38C8;
L_08AE38C8:
    ctx.gpr[4] = (17200u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3920;
      }
      goto L_08AE38E0;
    }
L_08AE38E0:
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3920;
      }
      goto L_08AE38F8;
    }
L_08AE38F8:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3920;
      }
      goto L_08AE3908;
    }
L_08AE3908:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_08AE3920;
L_08AE3920:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3934;
      }
      goto L_08AE3930;
    }
L_08AE3930:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08AE3934;
L_08AE3934:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AE394Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE394Cu) goto L_08AE394C;
    return;
L_08AE394C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE3964u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3964u) goto L_08AE3964;
    return;
L_08AE3964:
    ctx.gpr[31] = (0x08AE396Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AE396Cu) goto L_08AE396C;
    return;
L_08AE396C:
    ctx.gpr[31] = (0x08AE3974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08AE3974u) goto L_08AE3974;
    return;
L_08AE3974:
    ctx.gpr[31] = (0x08AE397Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE397Cu) goto L_08AE397C;
    return;
L_08AE397C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3994u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3994u) goto L_08AE3994;
    return;
L_08AE3994:
    ctx.gpr[31] = (0x08AE399Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE399Cu) goto L_08AE399C;
    return;
L_08AE399C:
    ctx.gpr[6] = (16736u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AE39B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE39B4u) goto L_08AE39B4;
    return;
L_08AE39B4:
    ctx.gpr[31] = (0x08AE39BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE39BCu) goto L_08AE39BC;
    return;
L_08AE39BC:
    ctx.gpr[31] = (0x08AE39C4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE39C4u) goto L_08AE39C4;
    return;
L_08AE39C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE39D0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE39D0u) goto L_08AE39D0;
    return;
L_08AE39D0:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE39E8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE39E8u) goto L_08AE39E8;
    return;
L_08AE39E8:
    ctx.gpr[31] = (0x08AE39F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE39F0u) goto L_08AE39F0;
    return;
L_08AE39F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3A10u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A10u) goto L_08AE3A10;
    return;
L_08AE3A10:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    goto L_08AE3A14;
L_08AE3A14:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
        goto L_08AE37B8;
    }
    goto L_08AE3A24;
L_08AE3A24:
    ctx.gpr[31] = (0x08AE3A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A54EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A2Cu) goto L_08AE3A2C;
    return;
L_08AE3A2C:
    ctx.gpr[31] = (0x08AE3A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A54F14u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A34u) goto L_08AE3A34;
    return;
L_08AE3A34:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE3A40u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A40u) goto L_08AE3A40;
    return;
L_08AE3A40:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x08AE3A5Cu);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3A5Cu) goto L_08AE3A5C;
    return;
L_08AE3A5C:
    ctx.gpr[31] = (0x08AE3A64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A64u) goto L_08AE3A64;
    return;
L_08AE3A64:
    ctx.gpr[31] = (0x08AE3A6Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3A6Cu) goto L_08AE3A6C;
    return;
L_08AE3A6C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE3A78u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A78u) goto L_08AE3A78;
    return;
L_08AE3A78:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3A90u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3A90u) goto L_08AE3A90;
    return;
L_08AE3A90:
    ctx.gpr[31] = (0x08AE3A98u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE3A98u) goto L_08AE3A98;
    return;
L_08AE3A98:
    ctx.gpr[31] = (0x08AE3AA0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08AE3AA0u) goto L_08AE3AA0;
    return;
L_08AE3AA0:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AE3ABCu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3ABCu) goto L_08AE3ABC;
    return;
L_08AE3ABC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
        goto L_08AE3AF4;
    }
    goto L_08AE3AC8;
L_08AE3AC8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3AD4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3AD4u) goto L_08AE3AD4;
    return;
L_08AE3AD4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3AEC;
      }
      goto L_08AE3AE0;
    }
L_08AE3AE0:
    ctx.gpr[31] = (0x08AE3AE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE3AE8u) goto L_08AE3AE8;
    return;
L_08AE3AE8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE3AEC;
L_08AE3AEC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    goto L_08AE3AF4;
L_08AE3AF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE3B00u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B00u) goto L_08AE3B00;
    return;
L_08AE3B00:
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (16752u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3B20u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B20u) goto L_08AE3B20;
    return;
L_08AE3B20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AE3B58;
      }
      goto L_08AE3B2C;
    }
L_08AE3B2C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3B38u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B38u) goto L_08AE3B38;
    return;
L_08AE3B38:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3B50;
      }
      goto L_08AE3B44;
    }
L_08AE3B44:
    ctx.gpr[31] = (0x08AE3B4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B4Cu) goto L_08AE3B4C;
    return;
L_08AE3B4C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE3B50;
L_08AE3B50:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AE3B58;
L_08AE3B58:
    ctx.gpr[31] = (0x08AE3B60u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B60u) goto L_08AE3B60;
    return;
L_08AE3B60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE3B6Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B6Cu) goto L_08AE3B6C;
    return;
L_08AE3B6C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(9432));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE3B80u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8240));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 166u, 0x08844D28u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B80u) goto L_08AE3B80;
    return;
L_08AE3B80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE3B90u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B90u) goto L_08AE3B90;
    return;
L_08AE3B90:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE3BA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3BA0u) goto L_08AE3BA0;
    return;
L_08AE3BA0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE3BACu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3BACu) goto L_08AE3BAC;
    return;
L_08AE3BAC:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x08AE3BC4u);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3BC4u) goto L_08AE3BC4;
    return;
L_08AE3BC4:
    ctx.gpr[31] = (0x08AE3BCCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08AE3BCCu) goto L_08AE3BCC;
    return;
L_08AE3BCC:
    ctx.gpr[31] = (0x08AE3BD4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3BD4u) goto L_08AE3BD4;
    return;
L_08AE3BD4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE3BE0u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 348u, 0x08AD97E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3BE0u) goto L_08AE3BE0;
    return;
L_08AE3BE0:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3BF8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3BF8u) goto L_08AE3BF8;
    return;
L_08AE3BF8:
    ctx.gpr[31] = (0x08AE3C00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A550ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE3C00u) goto L_08AE3C00;
    return;
L_08AE3C00:
    ctx.gpr[31] = (0x08AE3C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A54EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C08u) goto L_08AE3C08;
    return;
L_08AE3C08:
    ctx.gpr[31] = (0x08AE3C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 350u, 0x08845C60u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C10u) goto L_08AE3C10;
    return;
L_08AE3C10:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AE3C1Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C1Cu) goto L_08AE3C1C;
    return;
L_08AE3C1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE3C28u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54A58u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C28u) goto L_08AE3C28;
    return;
L_08AE3C28:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3C50u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C50u) goto L_08AE3C50;
    return;
L_08AE3C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AE3C74u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C74u) goto L_08AE3C74;
    return;
L_08AE3C74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3CBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (50944u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(257));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE3D30u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(320), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 714u, 0x08967338u>(ctx, &aot_mem) && ctx.pc == 0x08AE3D30u) goto L_08AE3D30;
    return;
L_08AE3D30:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08AE3D3Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE3D3Cu) goto L_08AE3D3C;
    return;
L_08AE3D3C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08AE3D48u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE3D48u) goto L_08AE3D48;
    return;
L_08AE3D48:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x08AE3D84u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08AE3D84u) goto L_08AE3D84;
    return;
L_08AE3D84:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3DA4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3DA4u) goto L_08AE3DA4;
    return;
L_08AE3DA4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE3DB4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3DB4u) goto L_08AE3DB4;
    return;
L_08AE3DB4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1140)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1144)));
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(1172));
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[31] = (0x08AE3DDCu);
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x08AE3DDCu) goto L_08AE3DDC;
    return;
L_08AE3DDC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE3DFCu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3DFCu) goto L_08AE3DFC;
    return;
L_08AE3DFC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE3E0Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 906u, 0x08AD3ABCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3E0Cu) goto L_08AE3E0C;
    return;
L_08AE3E0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 13u, 0x08AE413Cu>(ctx, &aot_mem); return;
      }
      goto L_08AE3E1C;
    }
L_08AE3E1C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (50413u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7264)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 6u, 0x08AE4094u>(ctx, &aot_mem); return;
      }
      goto L_08AE3E34;
    }
L_08AE3E34:
    ctx.gpr[4] = (50104u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 7537u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[30]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    ctx.gpr[4] = (49758u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE3E78u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08AE3E78u) goto L_08AE3E78;
    return;
L_08AE3E78:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE3E88u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08AE3E88u) goto L_08AE3E88;
    return;
L_08AE3E88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE3EA4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08AE3EA4u) goto L_08AE3EA4;
    return;
L_08AE3EA4:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE3EB4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08AE3EB4u) goto L_08AE3EB4;
    return;
L_08AE3EB4:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AE3ECCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08AE3ECCu) goto L_08AE3ECC;
    return;
L_08AE3ECC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE3EDCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08AE3EDCu) goto L_08AE3EDC;
    return;
L_08AE3EDC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE3EFCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08AE3EFCu) goto L_08AE3EFC;
    return;
L_08AE3EFC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[31] = (0x08AE3F08u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08AE3F08u) goto L_08AE3F08;
    return;
L_08AE3F08:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3F4Cu);
    ctx.gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3F4Cu) goto L_08AE3F4C;
    return;
L_08AE3F4C:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AE3F74u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3F74u) goto L_08AE3F74;
    return;
L_08AE3F74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE3F90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08AE3F90u) goto L_08AE3F90;
    return;
L_08AE3F90:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE3F9Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08AE3F9Cu) goto L_08AE3F9C;
    return;
L_08AE3F9C:
    ctx.gpr[4] = (17559u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57917u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (17658u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 21053u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AE3FC8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08AE3FC8u) goto L_08AE3FC8;
    return;
L_08AE3FC8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE3FD4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08AE3FD4u) goto L_08AE3FD4;
    return;
L_08AE3FD4:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AE3FECu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x08AE3FECu) goto L_08AE3FEC;
    return;
L_08AE3FEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE3FF8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x08AE3FF8u) goto L_08AE3FF8;
    return;
L_08AE3FF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.pc = 0x08AE4000u; return;
}

void recomp_unit_0183(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0183_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_183(Runtime &runtime) {
    runtime.register_generated_unit(183u, 0x08AE0000u, 16384u, &recomp_unit_0183, &recomp_unit_0183_entry);
    runtime.register_function(0x08AE0000u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0008u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0014u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE002Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0034u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0068u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0078u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0084u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0090u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0098u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE009Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0108u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0110u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0114u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE012Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE013Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0144u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE015Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE016Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE017Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0188u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0190u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0204u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0220u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0228u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0230u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE023Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0254u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0260u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0274u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0284u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0294u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE029Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE033Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0380u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE038Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0404u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE040Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE041Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0434u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE043Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0448u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0460u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0468u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE046Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0500u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0504u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0540u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0580u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0588u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0590u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0608u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE066Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0670u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0734u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0778u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0810u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0828u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0878u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0880u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE088Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0904u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0914u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0920u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE092Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0934u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0938u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0944u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0988u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE098Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0990u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0ED0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1008u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1018u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1020u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1030u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE103Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1048u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1050u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1054u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1060u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1070u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1074u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1104u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1108u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1110u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1118u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1128u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1134u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1140u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1148u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE114Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1158u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1168u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1170u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1180u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE118Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1198u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1208u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1218u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE121Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1268u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1278u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1288u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1294u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1300u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1304u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1310u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1320u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1324u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1370u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1378u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1388u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1390u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1398u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1408u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1410u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1420u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE142Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1438u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1440u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1444u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1450u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1460u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1468u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1478u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1484u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1490u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1498u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE149Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1500u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1510u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1514u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1518u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1560u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1570u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1578u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1580u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1584u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE158Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1594u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE159Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1604u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1610u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE161Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1624u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1628u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1634u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1644u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE164Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE165Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1668u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1674u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE167Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1680u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE168Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE169Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE170Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1718u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1724u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE172Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1730u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE173Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE174Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1754u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1764u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1770u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE177Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1784u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1788u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1794u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1804u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1814u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1820u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE182Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1834u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1838u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1844u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1854u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE185Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE186Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1878u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1884u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE188Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1890u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE189Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE190Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE191Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1928u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1934u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE193Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1940u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE194Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE195Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1964u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1974u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1980u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE198Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1994u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1998u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1ABCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1ACCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1ADCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2000u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE200Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2018u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2020u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2024u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2030u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2078u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2084u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2128u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2134u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2140u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2148u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE214Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2158u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2208u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2214u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2218u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2260u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2338u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2350u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2380u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2408u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2434u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2448u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2474u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE249Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE251Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2530u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE255Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2560u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2610u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE261Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE264Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2654u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2670u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE268Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2708u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2740u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2748u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2754u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2778u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2788u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2800u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2844u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2888u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2894u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2948u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2950u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2998u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3008u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE302Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3048u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE306Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE308Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3110u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3130u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3154u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3170u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3194u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE31B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE31D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE31F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3218u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3238u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE325Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3278u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE329Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE32BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE32E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE32FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3320u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3340u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3364u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3370u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3380u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE339Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3404u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE341Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3424u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE342Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3434u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3450u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3460u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE346Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3478u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3488u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3498u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE351Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3528u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3554u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3574u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE357Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3580u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3604u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3624u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE366Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3728u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3744u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3754u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3760u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3770u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3800u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3810u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3824u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE383Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3850u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE385Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3880u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3908u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3920u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3930u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3934u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE394Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3964u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE396Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3974u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE397Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3994u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE399Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3ABCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3DA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3DB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3DDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3DFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3ECCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FF8u, &recomp_unit_0183, "recomp_unit_0183");
}
} // namespace psprecomp
