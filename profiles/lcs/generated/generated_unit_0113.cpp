#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0113[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14,
    0, 15, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 27, 0, 0,
    28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33,
    0, 0, 34, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0,
    0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59,
    0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 84, 85,
    0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 101, 0, 0,
    0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 114, 0,
    0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0,
    121, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0,
    0, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161,
    0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0,
    172, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0,
    0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197,
    0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 216,
    0, 217, 0, 218, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0,
    0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 229,
    0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0,
    240, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 258, 0, 259, 0, 0, 260, 0, 261, 0, 262,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 0, 275, 0,
    276, 0, 0, 277, 0, 0, 0, 0, 278, 0, 279, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 291, 0,
    0, 292, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 298, 0, 299, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0,
    0, 0, 304, 0, 305, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 316, 0, 0, 0, 317, 0, 0, 0, 318,
    0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 328, 0, 0,
    0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 333, 0, 334, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 0, 341, 0, 342, 0,
    0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 346, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355,
    0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 362, 0, 0, 0, 0,
    0, 363, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 371, 0, 372,
    0, 373, 0, 374, 0, 375, 0, 0, 376, 0, 377, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0, 381, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0,
    0, 0, 0, 384, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0,
    389, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 400, 0,
    401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0,
    414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0, 0, 421, 0,
    422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426,
    0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0,
    0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 443, 0,
    0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 448, 0, 0, 0, 0, 449, 0, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458, 0, 0, 459, 0, 0, 460,
    0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 469, 0, 0, 470, 0, 0, 471, 0, 472,
    0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 0, 479, 0, 480, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0,
    484, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0,
    0, 495, 0, 496, 0, 497, 498, 0, 499, 0, 0, 0, 500, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0,
    0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 508, 0, 0, 509, 0, 510, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 513, 0,
    514, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 520, 0,
    0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 528, 529, 0, 0, 0, 530, 0, 531, 0,
    0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 537, 0, 0, 538,
    0, 539, 0, 0, 540, 541, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 0, 544, 0, 545, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0,
    0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0,
    0, 0, 0, 0, 0, 556, 557, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 561, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 566, 0, 567, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 571, 0, 0, 572, 573, 0, 0, 574, 0, 575, 0, 0,
    576, 0, 577, 0, 0, 0, 578, 0, 0, 579, 0, 580, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0,
    0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 587, 0, 0, 588, 589, 0, 0, 0, 590, 591, 0, 592, 593, 0, 0, 594, 0, 595, 0,
    0, 596, 0, 597, 0, 0, 0, 598, 0, 0, 599, 0, 600, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0,
    0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 606, 0, 607, 0, 0, 608, 609, 0, 0, 0, 610, 611, 612, 0, 613, 0, 614, 0, 0, 615, 616, 0,
    0, 617, 0, 618, 0, 0, 619, 0, 620, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 624, 0, 0, 625, 0, 626, 0, 0, 0, 0,
    0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 630, 631, 0, 0, 632, 633, 0, 0, 0, 634, 635, 0, 636, 637, 0,
    0, 638, 0, 639, 0, 0, 640, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 645, 0, 0, 646, 0, 647, 0, 0, 0, 0,
    0, 0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 651, 652, 0, 0, 653, 654, 0, 0, 0, 655, 656, 657, 0, 658, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 661, 0, 662, 0, 0, 663, 0, 664, 0, 665, 0, 0, 0, 666, 0, 667, 0, 668, 0, 669, 0, 670, 0, 671, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 672, 0, 673, 0, 674, 0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 679, 0, 0,
    0, 0, 0, 0, 680, 0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 683, 0, 0, 0, 0, 684, 0, 0, 685, 0, 686, 0, 687, 0, 0, 0, 688,
    0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 693, 0, 0, 694, 0, 695, 0, 696, 0, 697, 0, 698, 0, 699, 0,
    0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 705, 0, 706, 0, 0, 0, 0,
    707, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 715, 0, 716, 0, 717, 0, 718, 0,
    0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 721, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0, 0, 724, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0, 729, 0, 0, 730, 0,
    0, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 733, 734, 0, 735, 0, 736, 0, 737, 0, 0, 0, 0, 0, 738, 0, 739, 0, 0,
    740, 0, 0, 0, 0, 741, 0, 742, 0, 0, 743, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 0, 748,
    0, 749, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 757, 758, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 761, 762, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 764, 765, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 768, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 0, 0, 0,
    0, 0, 0, 771, 0, 0, 0, 772, 0, 0, 773, 0, 0, 774, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 777,
    778, 0, 0, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 782, 783, 0, 0, 784, 0, 785, 0, 0, 0, 786, 787, 0, 0, 788, 0, 0, 0, 0,
    789, 790, 0, 791, 0, 0, 792, 0, 0, 0, 793, 0, 794, 0, 0, 795, 0, 796, 0, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801,
    0, 802, 0, 0, 0, 0, 0, 0, 803, 0, 0, 804, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0,
    808, 0, 0, 809, 0, 0, 810, 0, 811, 0, 0, 0, 812, 813, 0, 0, 0, 0, 0, 0, 814, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 0,
    817, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 0, 0, 822, 0, 0, 0, 823, 0, 824, 0,
    0, 0, 825, 0, 826, 0, 0, 827, 0, 828, 0, 0, 829, 0, 830, 831, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 835, 0,
    0, 0, 0, 836, 0, 0, 0, 0, 0, 837, 0, 0, 838, 0, 0, 0, 0, 0, 0, 839, 0, 840, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0,
    842, 0, 0, 0, 843, 0, 0, 844, 0, 0, 845, 0, 846, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 850, 0, 851, 852, 0, 0, 853, 0, 0, 854, 0, 0,
    0, 0, 855, 0, 0, 0, 856, 0, 0, 0, 857, 0, 0, 0, 0, 0, 858, 0, 0, 859, 0, 860, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0,
    862, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 864, 0, 865, 866, 0, 0, 867, 0, 0, 868, 0, 0, 0, 0, 869, 0, 0, 0, 870, 0,
    0, 0, 871, 0, 0, 0, 0, 0, 872, 0, 0, 873, 0, 874, 0, 0, 0, 0, 875, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 877,
    0, 0, 0, 0, 0, 878, 0, 879, 880, 0, 0, 881, 0, 0, 0, 882, 0, 0, 0, 0, 883, 0, 0, 0, 884, 0, 0, 0, 885, 0, 0, 886,
    0, 0, 0, 0, 0, 887, 0, 0, 888, 0, 889, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 891, 0, 0, 0, 0, 0, 892, 0, 0, 0, 0,
    0, 893, 0, 894, 895, 0, 0, 896, 0, 0, 897, 0, 0, 0, 0, 898, 0, 0, 0, 899, 0, 0, 0, 900, 0, 0, 0, 0, 0, 901, 0, 0,
    902, 0, 903, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 905, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 906, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 0, 908, 0, 909, 910, 0, 0, 911, 0, 0, 912, 0, 0, 0, 913, 0,
    914, 0, 915, 0, 916, 0, 0, 0, 917, 0, 918, 0, 0, 919, 0, 920, 0, 0, 0, 921, 0, 0, 0, 0, 0, 922, 0, 0, 0, 0, 923, 0,
    0, 0, 0, 0, 924, 0, 0, 0, 0, 0, 925, 0, 0, 0, 0, 0, 926, 0, 927, 928, 0, 0, 929, 0, 0, 930, 0, 0, 0, 931, 0, 932,
    0, 933, 0, 934, 0, 0, 0, 935, 0, 936, 0, 937, 0, 938, 0, 0, 0, 939, 0, 0, 0, 0, 0, 940, 0, 0, 0, 0, 941, 0, 0, 0,
    0, 0, 942, 0, 0, 0, 0, 0, 0, 943, 0, 0, 0, 0, 0, 944, 0, 945, 946, 0, 0, 947, 0, 0, 948, 0, 0, 949, 0, 950, 0, 951,
};
void recomp_unit_0113_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089C8000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0113[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C8000;
    case 2u: goto L_089C8010;
    case 3u: goto L_089C8040;
    case 4u: goto L_089C804C;
    case 5u: goto L_089C806C;
    case 6u: goto L_089C8088;
    case 7u: goto L_089C8098;
    case 8u: goto L_089C80A8;
    case 9u: goto L_089C80B8;
    case 10u: goto L_089C80C4;
    case 11u: goto L_089C80D4;
    case 12u: goto L_089C80DC;
    case 13u: goto L_089C80F4;
    case 14u: goto L_089C80FC;
    case 15u: goto L_089C8104;
    case 16u: goto L_089C8110;
    case 17u: goto L_089C8124;
    case 18u: goto L_089C8178;
    case 19u: goto L_089C8184;
    case 20u: goto L_089C818C;
    case 21u: goto L_089C81AC;
    case 22u: goto L_089C81B4;
    case 23u: goto L_089C81BC;
    case 24u: goto L_089C81C4;
    case 25u: goto L_089C81E0;
    case 26u: goto L_089C81E8;
    case 27u: goto L_089C81F4;
    case 28u: goto L_089C8200;
    case 29u: goto L_089C8218;
    case 30u: goto L_089C8220;
    case 31u: goto L_089C8260;
    case 32u: goto L_089C8270;
    case 33u: goto L_089C827C;
    case 34u: goto L_089C8288;
    case 35u: goto L_089C828C;
    case 36u: goto L_089C82B4;
    case 37u: goto L_089C82C8;
    case 38u: goto L_089C82D4;
    case 39u: goto L_089C82E0;
    case 40u: goto L_089C82EC;
    case 41u: goto L_089C8388;
    case 42u: goto L_089C83A0;
    case 43u: goto L_089C83B0;
    case 44u: goto L_089C83B8;
    case 45u: goto L_089C83C4;
    case 46u: goto L_089C83F4;
    case 47u: goto L_089C8404;
    case 48u: goto L_089C8424;
    case 49u: goto L_089C842C;
    case 50u: goto L_089C8440;
    case 51u: goto L_089C8450;
    case 52u: goto L_089C8470;
    case 53u: goto L_089C8478;
    case 54u: goto L_089C8484;
    case 55u: goto L_089C848C;
    case 56u: goto L_089C84B4;
    case 57u: goto L_089C84C4;
    case 58u: goto L_089C84E0;
    case 59u: goto L_089C84FC;
    case 60u: goto L_089C8504;
    case 61u: goto L_089C851C;
    case 62u: goto L_089C8528;
    case 63u: goto L_089C854C;
    case 64u: goto L_089C8554;
    case 65u: goto L_089C8560;
    case 66u: goto L_089C8568;
    case 67u: goto L_089C8584;
    case 68u: goto L_089C85B0;
    case 69u: goto L_089C85B8;
    case 70u: goto L_089C85C0;
    case 71u: goto L_089C8628;
    case 72u: goto L_089C8638;
    case 73u: goto L_089C865C;
    case 74u: goto L_089C8664;
    case 75u: goto L_089C8670;
    case 76u: goto L_089C8688;
    case 77u: goto L_089C8698;
    case 78u: goto L_089C86B0;
    case 79u: goto L_089C86C0;
    case 80u: goto L_089C86C8;
    case 81u: goto L_089C86D4;
    case 82u: goto L_089C86DC;
    case 83u: goto L_089C86EC;
    case 84u: goto L_089C86F8;
    case 85u: goto L_089C86FC;
    case 86u: goto L_089C8708;
    case 87u: goto L_089C8720;
    case 88u: goto L_089C8730;
    case 89u: goto L_089C8744;
    case 90u: goto L_089C8758;
    case 91u: goto L_089C8788;
    case 92u: goto L_089C87A8;
    case 93u: goto L_089C87BC;
    case 94u: goto L_089C87D4;
    case 95u: goto L_089C87E0;
    case 96u: goto L_089C87FC;
    case 97u: goto L_089C8810;
    case 98u: goto L_089C8828;
    case 99u: goto L_089C8834;
    case 100u: goto L_089C8870;
    case 101u: goto L_089C8874;
    case 102u: goto L_089C888C;
    case 103u: goto L_089C8898;
    case 104u: goto L_089C88A4;
    case 105u: goto L_089C88B8;
    case 106u: goto L_089C88C4;
    case 107u: goto L_089C88D4;
    case 108u: goto L_089C88E8;
    case 109u: goto L_089C890C;
    case 110u: goto L_089C8948;
    case 111u: goto L_089C894C;
    case 112u: goto L_089C8964;
    case 113u: goto L_089C896C;
    case 114u: goto L_089C8978;
    case 115u: goto L_089C898C;
    case 116u: goto L_089C8998;
    case 117u: goto L_089C89A4;
    case 118u: goto L_089C89B8;
    case 119u: goto L_089C89DC;
    case 120u: goto L_089C89F4;
    case 121u: goto L_089C8A00;
    case 122u: goto L_089C8A18;
    case 123u: goto L_089C8A24;
    case 124u: goto L_089C8A40;
    case 125u: goto L_089C8A64;
    case 126u: goto L_089C8A6C;
    case 127u: goto L_089C8A8C;
    case 128u: goto L_089C8AA0;
    case 129u: goto L_089C8AC4;
    case 130u: goto L_089C8AE0;
    case 131u: goto L_089C8AF4;
    case 132u: goto L_089C8B48;
    case 133u: goto L_089C8B50;
    case 134u: goto L_089C8B6C;
    case 135u: goto L_089C8B74;
    case 136u: goto L_089C8BE0;
    case 137u: goto L_089C8BFC;
    case 138u: goto L_089C8C18;
    case 139u: goto L_089C8C28;
    case 140u: goto L_089C8C44;
    case 141u: goto L_089C8C58;
    case 142u: goto L_089C8C68;
    case 143u: goto L_089C8C70;
    case 144u: goto L_089C8C88;
    case 145u: goto L_089C8C90;
    case 146u: goto L_089C8CA4;
    case 147u: goto L_089C8CC8;
    case 148u: goto L_089C8CD8;
    case 149u: goto L_089C8CEC;
    case 150u: goto L_089C8CFC;
    case 151u: goto L_089C8D2C;
    case 152u: goto L_089C8D4C;
    case 153u: goto L_089C8D7C;
    case 154u: goto L_089C8D84;
    case 155u: goto L_089C8D9C;
    case 156u: goto L_089C8DA4;
    case 157u: goto L_089C8DA8;
    case 158u: goto L_089C8DC4;
    case 159u: goto L_089C8DDC;
    case 160u: goto L_089C8DE4;
    case 161u: goto L_089C8DFC;
    case 162u: goto L_089C8E1C;
    case 163u: goto L_089C8E2C;
    case 164u: goto L_089C8E38;
    case 165u: goto L_089C8E40;
    case 166u: goto L_089C8E48;
    case 167u: goto L_089C8E58;
    case 168u: goto L_089C8E60;
    case 169u: goto L_089C8E68;
    case 170u: goto L_089C8E70;
    case 171u: goto L_089C8E78;
    case 172u: goto L_089C8E80;
    case 173u: goto L_089C8E98;
    case 174u: goto L_089C8EA0;
    case 175u: goto L_089C8EB8;
    case 176u: goto L_089C8F0C;
    case 177u: goto L_089C8F18;
    case 178u: goto L_089C8F34;
    case 179u: goto L_089C8F40;
    case 180u: goto L_089C8F4C;
    case 181u: goto L_089C8F5C;
    case 182u: goto L_089C8F6C;
    case 183u: goto L_089C8F78;
    case 184u: goto L_089C8F88;
    case 185u: goto L_089C8F90;
    case 186u: goto L_089C8F98;
    case 187u: goto L_089C8FA0;
    case 188u: goto L_089C8FA8;
    case 189u: goto L_089C8FB4;
    case 190u: goto L_089C8FBC;
    case 191u: goto L_089C8FC4;
    case 192u: goto L_089C8FCC;
    case 193u: goto L_089C8FD4;
    case 194u: goto L_089C8FDC;
    case 195u: goto L_089C8FE8;
    case 196u: goto L_089C8FF4;
    case 197u: goto L_089C8FFC;
    case 198u: goto L_089C9004;
    case 199u: goto L_089C900C;
    case 200u: goto L_089C9014;
    case 201u: goto L_089C901C;
    case 202u: goto L_089C9028;
    case 203u: goto L_089C9040;
    case 204u: goto L_089C904C;
    case 205u: goto L_089C9054;
    case 206u: goto L_089C905C;
    case 207u: goto L_089C9064;
    case 208u: goto L_089C906C;
    case 209u: goto L_089C9094;
    case 210u: goto L_089C90AC;
    case 211u: goto L_089C90BC;
    case 212u: goto L_089C90C8;
    case 213u: goto L_089C90D4;
    case 214u: goto L_089C90E4;
    case 215u: goto L_089C90EC;
    case 216u: goto L_089C90FC;
    case 217u: goto L_089C9104;
    case 218u: goto L_089C910C;
    case 219u: goto L_089C9110;
    case 220u: goto L_089C913C;
    case 221u: goto L_089C9174;
    case 222u: goto L_089C918C;
    case 223u: goto L_089C91A0;
    case 224u: goto L_089C91B0;
    case 225u: goto L_089C91BC;
    case 226u: goto L_089C91C4;
    case 227u: goto L_089C91E8;
    case 228u: goto L_089C91F0;
    case 229u: goto L_089C91FC;
    case 230u: goto L_089C9204;
    case 231u: goto L_089C921C;
    case 232u: goto L_089C922C;
    case 233u: goto L_089C923C;
    case 234u: goto L_089C9248;
    case 235u: goto L_089C9250;
    case 236u: goto L_089C925C;
    case 237u: goto L_089C9264;
    case 238u: goto L_089C9270;
    case 239u: goto L_089C9278;
    case 240u: goto L_089C9280;
    case 241u: goto L_089C9284;
    case 242u: goto L_089C92B4;
    case 243u: goto L_089C92EC;
    case 244u: goto L_089C9304;
    case 245u: goto L_089C9318;
    case 246u: goto L_089C9328;
    case 247u: goto L_089C9334;
    case 248u: goto L_089C933C;
    case 249u: goto L_089C9344;
    case 250u: goto L_089C9354;
    case 251u: goto L_089C935C;
    case 252u: goto L_089C9380;
    case 253u: goto L_089C9398;
    case 254u: goto L_089C93A8;
    case 255u: goto L_089C93B8;
    case 256u: goto L_089C93C4;
    case 257u: goto L_089C93CC;
    case 258u: goto L_089C93D8;
    case 259u: goto L_089C93E0;
    case 260u: goto L_089C93EC;
    case 261u: goto L_089C93F4;
    case 262u: goto L_089C93FC;
    case 263u: goto L_089C9400;
    case 264u: goto L_089C9430;
    case 265u: goto L_089C9480;
    case 266u: goto L_089C948C;
    case 267u: goto L_089C94A4;
    case 268u: goto L_089C94B0;
    case 269u: goto L_089C94C0;
    case 270u: goto L_089C94CC;
    case 271u: goto L_089C94D4;
    case 272u: goto L_089C94DC;
    case 273u: goto L_089C94E4;
    case 274u: goto L_089C94EC;
    case 275u: goto L_089C94F8;
    case 276u: goto L_089C9500;
    case 277u: goto L_089C950C;
    case 278u: goto L_089C9520;
    case 279u: goto L_089C9528;
    case 280u: goto L_089C952C;
    case 281u: goto L_089C9554;
    case 282u: goto L_089C9588;
    case 283u: goto L_089C9594;
    case 284u: goto L_089C95A8;
    case 285u: goto L_089C95B4;
    case 286u: goto L_089C95C0;
    case 287u: goto L_089C95CC;
    case 288u: goto L_089C95D8;
    case 289u: goto L_089C95E0;
    case 290u: goto L_089C95E8;
    case 291u: goto L_089C95F8;
    case 292u: goto L_089C9604;
    case 293u: goto L_089C960C;
    case 294u: goto L_089C9618;
    case 295u: goto L_089C9624;
    case 296u: goto L_089C9630;
    case 297u: goto L_089C963C;
    case 298u: goto L_089C9644;
    case 299u: goto L_089C964C;
    case 300u: goto L_089C9654;
    case 301u: goto L_089C9660;
    case 302u: goto L_089C966C;
    case 303u: goto L_089C9678;
    case 304u: goto L_089C9688;
    case 305u: goto L_089C9690;
    case 306u: goto L_089C9694;
    case 307u: goto L_089C969C;
    case 308u: goto L_089C96F0;
    case 309u: goto L_089C96F8;
    case 310u: goto L_089C9710;
    case 311u: goto L_089C9720;
    case 312u: goto L_089C9730;
    case 313u: goto L_089C9748;
    case 314u: goto L_089C9750;
    case 315u: goto L_089C9758;
    case 316u: goto L_089C975C;
    case 317u: goto L_089C976C;
    case 318u: goto L_089C977C;
    case 319u: goto L_089C9788;
    case 320u: goto L_089C9790;
    case 321u: goto L_089C97A0;
    case 322u: goto L_089C97B0;
    case 323u: goto L_089C97C8;
    case 324u: goto L_089C97D0;
    case 325u: goto L_089C97DC;
    case 326u: goto L_089C97E4;
    case 327u: goto L_089C97EC;
    case 328u: goto L_089C97F4;
    case 329u: goto L_089C9804;
    case 330u: goto L_089C9814;
    case 331u: goto L_089C982C;
    case 332u: goto L_089C9834;
    case 333u: goto L_089C9844;
    case 334u: goto L_089C984C;
    case 335u: goto L_089C9850;
    case 336u: goto L_089C9878;
    case 337u: goto L_089C98B8;
    case 338u: goto L_089C98CC;
    case 339u: goto L_089C98DC;
    case 340u: goto L_089C98E4;
    case 341u: goto L_089C98F0;
    case 342u: goto L_089C98F8;
    case 343u: goto L_089C9904;
    case 344u: goto L_089C9910;
    case 345u: goto L_089C9920;
    case 346u: goto L_089C9928;
    case 347u: goto L_089C9930;
    case 348u: goto L_089C9940;
    case 349u: goto L_089C9954;
    case 350u: goto L_089C995C;
    case 351u: goto L_089C9990;
    case 352u: goto L_089C999C;
    case 353u: goto L_089C99D4;
    case 354u: goto L_089C99E0;
    case 355u: goto L_089C99FC;
    case 356u: goto L_089C9A08;
    case 357u: goto L_089C9A18;
    case 358u: goto L_089C9A28;
    case 359u: goto L_089C9A38;
    case 360u: goto L_089C9A5C;
    case 361u: goto L_089C9A64;
    case 362u: goto L_089C9A6C;
    case 363u: goto L_089C9A84;
    case 364u: goto L_089C9A8C;
    case 365u: goto L_089C9A94;
    case 366u: goto L_089C9AA4;
    case 367u: goto L_089C9AB4;
    case 368u: goto L_089C9AC8;
    case 369u: goto L_089C9AE0;
    case 370u: goto L_089C9AEC;
    case 371u: goto L_089C9AF4;
    case 372u: goto L_089C9AFC;
    case 373u: goto L_089C9B04;
    case 374u: goto L_089C9B0C;
    case 375u: goto L_089C9B14;
    case 376u: goto L_089C9B20;
    case 377u: goto L_089C9B28;
    case 378u: goto L_089C9B34;
    case 379u: goto L_089C9B3C;
    case 380u: goto L_089C9B4C;
    case 381u: goto L_089C9B54;
    case 382u: goto L_089C9B60;
    case 383u: goto L_089C9B68;
    case 384u: goto L_089C9B8C;
    case 385u: goto L_089C9B90;
    case 386u: goto L_089C9BC0;
    case 387u: goto L_089C9BDC;
    case 388u: goto L_089C9BF8;
    case 389u: goto L_089C9C00;
    case 390u: goto L_089C9C08;
    case 391u: goto L_089C9C10;
    case 392u: goto L_089C9C18;
    case 393u: goto L_089C9C2C;
    case 394u: goto L_089C9C3C;
    case 395u: goto L_089C9C4C;
    case 396u: goto L_089C9C54;
    case 397u: goto L_089C9C5C;
    case 398u: goto L_089C9C64;
    case 399u: goto L_089C9C6C;
    case 400u: goto L_089C9C78;
    case 401u: goto L_089C9C80;
    case 402u: goto L_089C9C94;
    case 403u: goto L_089C9CA8;
    case 404u: goto L_089C9CB0;
    case 405u: goto L_089C9CB8;
    case 406u: goto L_089C9CC4;
    case 407u: goto L_089C9CDC;
    case 408u: goto L_089C9D00;
    case 409u: goto L_089C9D20;
    case 410u: goto L_089C9D38;
    case 411u: goto L_089C9D48;
    case 412u: goto L_089C9D60;
    case 413u: goto L_089C9D78;
    case 414u: goto L_089C9D80;
    case 415u: goto L_089C9D94;
    case 416u: goto L_089C9DA8;
    case 417u: goto L_089C9DC8;
    case 418u: goto L_089C9DD4;
    case 419u: goto L_089C9DE4;
    case 420u: goto L_089C9DEC;
    case 421u: goto L_089C9DF8;
    case 422u: goto L_089C9E00;
    case 423u: goto L_089C9E10;
    case 424u: goto L_089C9E2C;
    case 425u: goto L_089C9E44;
    case 426u: goto L_089C9E7C;
    case 427u: goto L_089C9E98;
    case 428u: goto L_089C9EA4;
    case 429u: goto L_089C9EB4;
    case 430u: goto L_089C9ECC;
    case 431u: goto L_089C9EE4;
    case 432u: goto L_089C9EEC;
    case 433u: goto L_089C9F0C;
    case 434u: goto L_089C9F20;
    case 435u: goto L_089C9F3C;
    case 436u: goto L_089C9F50;
    case 437u: goto L_089C9F88;
    case 438u: goto L_089C9FA4;
    case 439u: goto L_089C9FB0;
    case 440u: goto L_089C9FC0;
    case 441u: goto L_089C9FD8;
    case 442u: goto L_089C9FF0;
    case 443u: goto L_089C9FF8;
    case 444u: goto L_089CA018;
    case 445u: goto L_089CA02C;
    case 446u: goto L_089CA048;
    case 447u: goto L_089CA05C;
    case 448u: goto L_089CA088;
    case 449u: goto L_089CA09C;
    case 450u: goto L_089CA0A4;
    case 451u: goto L_089CA0AC;
    case 452u: goto L_089CA0B4;
    case 453u: goto L_089CA0BC;
    case 454u: goto L_089CA0C4;
    case 455u: goto L_089CA0CC;
    case 456u: goto L_089CA0D4;
    case 457u: goto L_089CA0DC;
    case 458u: goto L_089CA0E4;
    case 459u: goto L_089CA0F0;
    case 460u: goto L_089CA0FC;
    case 461u: goto L_089CA104;
    case 462u: goto L_089CA10C;
    case 463u: goto L_089CA12C;
    case 464u: goto L_089CA134;
    case 465u: goto L_089CA13C;
    case 466u: goto L_089CA144;
    case 467u: goto L_089CA14C;
    case 468u: goto L_089CA154;
    case 469u: goto L_089CA15C;
    case 470u: goto L_089CA168;
    case 471u: goto L_089CA174;
    case 472u: goto L_089CA17C;
    case 473u: goto L_089CA184;
    case 474u: goto L_089CA1A4;
    case 475u: goto L_089CA1AC;
    case 476u: goto L_089CA1B4;
    case 477u: goto L_089CA1BC;
    case 478u: goto L_089CA1C4;
    case 479u: goto L_089CA1CC;
    case 480u: goto L_089CA1D4;
    case 481u: goto L_089CA1E0;
    case 482u: goto L_089CA1EC;
    case 483u: goto L_089CA1F8;
    case 484u: goto L_089CA200;
    case 485u: goto L_089CA208;
    case 486u: goto L_089CA210;
    case 487u: goto L_089CA230;
    case 488u: goto L_089CA248;
    case 489u: goto L_089CA250;
    case 490u: goto L_089CA258;
    case 491u: goto L_089CA260;
    case 492u: goto L_089CA268;
    case 493u: goto L_089CA270;
    case 494u: goto L_089CA278;
    case 495u: goto L_089CA284;
    case 496u: goto L_089CA28C;
    case 497u: goto L_089CA294;
    case 498u: goto L_089CA298;
    case 499u: goto L_089CA2A0;
    case 500u: goto L_089CA2B0;
    case 501u: goto L_089CA2B8;
    case 502u: goto L_089CA2C0;
    case 503u: goto L_089CA2E4;
    case 504u: goto L_089CA2F0;
    case 505u: goto L_089CA304;
    case 506u: goto L_089CA320;
    case 507u: goto L_089CA330;
    case 508u: goto L_089CA338;
    case 509u: goto L_089CA344;
    case 510u: goto L_089CA34C;
    case 511u: goto L_089CA35C;
    case 512u: goto L_089CA364;
    case 513u: goto L_089CA378;
    case 514u: goto L_089CA380;
    case 515u: goto L_089CA3A4;
    case 516u: goto L_089CA3B4;
    case 517u: goto L_089CA3C8;
    case 518u: goto L_089CA3E8;
    case 519u: goto L_089CA3F0;
    case 520u: goto L_089CA3F8;
    case 521u: goto L_089CA408;
    case 522u: goto L_089CA410;
    case 523u: goto L_089CA430;
    case 524u: goto L_089CA4A0;
    case 525u: goto L_089CA4A8;
    case 526u: goto L_089CA4C4;
    case 527u: goto L_089CA4D0;
    case 528u: goto L_089CA4DC;
    case 529u: goto L_089CA4E0;
    case 530u: goto L_089CA4F0;
    case 531u: goto L_089CA4F8;
    case 532u: goto L_089CA514;
    case 533u: goto L_089CA534;
    case 534u: goto L_089CA540;
    case 535u: goto L_089CA55C;
    case 536u: goto L_089CA564;
    case 537u: goto L_089CA570;
    case 538u: goto L_089CA57C;
    case 539u: goto L_089CA584;
    case 540u: goto L_089CA590;
    case 541u: goto L_089CA594;
    case 542u: goto L_089CA5A4;
    case 543u: goto L_089CA5AC;
    case 544u: goto L_089CA5C4;
    case 545u: goto L_089CA5CC;
    case 546u: goto L_089CA5D4;
    case 547u: goto L_089CA5E8;
    case 548u: goto L_089CA5F8;
    case 549u: goto L_089CA604;
    case 550u: goto L_089CA610;
    case 551u: goto L_089CA628;
    case 552u: goto L_089CA630;
    case 553u: goto L_089CA63C;
    case 554u: goto L_089CA670;
    case 555u: goto L_089CA678;
    case 556u: goto L_089CA694;
    case 557u: goto L_089CA698;
    case 558u: goto L_089CA6A4;
    case 559u: goto L_089CA6B8;
    case 560u: goto L_089CA6C4;
    case 561u: goto L_089CA6D4;
    case 562u: goto L_089CA6D8;
    case 563u: goto L_089CA708;
    case 564u: goto L_089CA720;
    case 565u: goto L_089CA72C;
    case 566u: goto L_089CA73C;
    case 567u: goto L_089CA744;
    case 568u: goto L_089CA74C;
    case 569u: goto L_089CA754;
    case 570u: goto L_089CA7CC;
    case 571u: goto L_089CA7D0;
    case 572u: goto L_089CA7DC;
    case 573u: goto L_089CA7E0;
    case 574u: goto L_089CA7EC;
    case 575u: goto L_089CA7F4;
    case 576u: goto L_089CA800;
    case 577u: goto L_089CA808;
    case 578u: goto L_089CA818;
    case 579u: goto L_089CA824;
    case 580u: goto L_089CA82C;
    case 581u: goto L_089CA838;
    case 582u: goto L_089CA840;
    case 583u: goto L_089CA870;
    case 584u: goto L_089CA888;
    case 585u: goto L_089CA898;
    case 586u: goto L_089CA8A8;
    case 587u: goto L_089CA8B4;
    case 588u: goto L_089CA8C0;
    case 589u: goto L_089CA8C4;
    case 590u: goto L_089CA8D4;
    case 591u: goto L_089CA8D8;
    case 592u: goto L_089CA8E0;
    case 593u: goto L_089CA8E4;
    case 594u: goto L_089CA8F0;
    case 595u: goto L_089CA8F8;
    case 596u: goto L_089CA904;
    case 597u: goto L_089CA90C;
    case 598u: goto L_089CA91C;
    case 599u: goto L_089CA928;
    case 600u: goto L_089CA930;
    case 601u: goto L_089CA93C;
    case 602u: goto L_089CA944;
    case 603u: goto L_089CA970;
    case 604u: goto L_089CA988;
    case 605u: goto L_089CA998;
    case 606u: goto L_089CA9A8;
    case 607u: goto L_089CA9B0;
    case 608u: goto L_089CA9BC;
    case 609u: goto L_089CA9C0;
    case 610u: goto L_089CA9D0;
    case 611u: goto L_089CA9D4;
    case 612u: goto L_089CA9D8;
    case 613u: goto L_089CA9E0;
    case 614u: goto L_089CA9E8;
    case 615u: goto L_089CA9F4;
    case 616u: goto L_089CA9F8;
    case 617u: goto L_089CAA04;
    case 618u: goto L_089CAA0C;
    case 619u: goto L_089CAA18;
    case 620u: goto L_089CAA20;
    case 621u: goto L_089CAA30;
    case 622u: goto L_089CAA40;
    case 623u: goto L_089CAA50;
    case 624u: goto L_089CAA58;
    case 625u: goto L_089CAA64;
    case 626u: goto L_089CAA6C;
    case 627u: goto L_089CAA8C;
    case 628u: goto L_089CAAA4;
    case 629u: goto L_089CAAB4;
    case 630u: goto L_089CAAC4;
    case 631u: goto L_089CAAC8;
    case 632u: goto L_089CAAD4;
    case 633u: goto L_089CAAD8;
    case 634u: goto L_089CAAE8;
    case 635u: goto L_089CAAEC;
    case 636u: goto L_089CAAF4;
    case 637u: goto L_089CAAF8;
    case 638u: goto L_089CAB04;
    case 639u: goto L_089CAB0C;
    case 640u: goto L_089CAB18;
    case 641u: goto L_089CAB20;
    case 642u: goto L_089CAB30;
    case 643u: goto L_089CAB40;
    case 644u: goto L_089CAB50;
    case 645u: goto L_089CAB58;
    case 646u: goto L_089CAB64;
    case 647u: goto L_089CAB6C;
    case 648u: goto L_089CAB8C;
    case 649u: goto L_089CABA4;
    case 650u: goto L_089CABB4;
    case 651u: goto L_089CABC4;
    case 652u: goto L_089CABC8;
    case 653u: goto L_089CABD4;
    case 654u: goto L_089CABD8;
    case 655u: goto L_089CABE8;
    case 656u: goto L_089CABEC;
    case 657u: goto L_089CABF0;
    case 658u: goto L_089CABF8;
    case 659u: goto L_089CAC28;
    case 660u: goto L_089CAC5C;
    case 661u: goto L_089CAC8C;
    case 662u: goto L_089CAC94;
    case 663u: goto L_089CACA0;
    case 664u: goto L_089CACA8;
    case 665u: goto L_089CACB0;
    case 666u: goto L_089CACC0;
    case 667u: goto L_089CACC8;
    case 668u: goto L_089CACD0;
    case 669u: goto L_089CACD8;
    case 670u: goto L_089CACE0;
    case 671u: goto L_089CACE8;
    case 672u: goto L_089CAD14;
    case 673u: goto L_089CAD1C;
    case 674u: goto L_089CAD24;
    case 675u: goto L_089CAD30;
    case 676u: goto L_089CAD38;
    case 677u: goto L_089CAD64;
    case 678u: goto L_089CAD6C;
    case 679u: goto L_089CAD74;
    case 680u: goto L_089CAD90;
    case 681u: goto L_089CADA0;
    case 682u: goto L_089CADA8;
    case 683u: goto L_089CADBC;
    case 684u: goto L_089CADD0;
    case 685u: goto L_089CADDC;
    case 686u: goto L_089CADE4;
    case 687u: goto L_089CADEC;
    case 688u: goto L_089CADFC;
    case 689u: goto L_089CAE08;
    case 690u: goto L_089CAE10;
    case 691u: goto L_089CAE28;
    case 692u: goto L_089CAE3C;
    case 693u: goto L_089CAE44;
    case 694u: goto L_089CAE50;
    case 695u: goto L_089CAE58;
    case 696u: goto L_089CAE60;
    case 697u: goto L_089CAE68;
    case 698u: goto L_089CAE70;
    case 699u: goto L_089CAE78;
    case 700u: goto L_089CAE8C;
    case 701u: goto L_089CAEA0;
    case 702u: goto L_089CAEB0;
    case 703u: goto L_089CAEC8;
    case 704u: goto L_089CAED8;
    case 705u: goto L_089CAEE4;
    case 706u: goto L_089CAEEC;
    case 707u: goto L_089CAF00;
    case 708u: goto L_089CAF20;
    case 709u: goto L_089CAF30;
    case 710u: goto L_089CAF44;
    case 711u: goto L_089CAF64;
    case 712u: goto L_089CAFAC;
    case 713u: goto L_089CAFD0;
    case 714u: goto L_089CAFD8;
    case 715u: goto L_089CAFE0;
    case 716u: goto L_089CAFE8;
    case 717u: goto L_089CAFF0;
    case 718u: goto L_089CAFF8;
    case 719u: goto L_089CB010;
    case 720u: goto L_089CB034;
    case 721u: goto L_089CB040;
    case 722u: goto L_089CB050;
    case 723u: goto L_089CB058;
    case 724u: goto L_089CB078;
    case 725u: goto L_089CB0A4;
    case 726u: goto L_089CB0C0;
    case 727u: goto L_089CB0D0;
    case 728u: goto L_089CB0D8;
    case 729u: goto L_089CB0EC;
    case 730u: goto L_089CB0F8;
    case 731u: goto L_089CB108;
    case 732u: goto L_089CB11C;
    case 733u: goto L_089CB138;
    case 734u: goto L_089CB13C;
    case 735u: goto L_089CB144;
    case 736u: goto L_089CB14C;
    case 737u: goto L_089CB154;
    case 738u: goto L_089CB16C;
    case 739u: goto L_089CB174;
    case 740u: goto L_089CB180;
    case 741u: goto L_089CB194;
    case 742u: goto L_089CB19C;
    case 743u: goto L_089CB1A8;
    case 744u: goto L_089CB1B4;
    case 745u: goto L_089CB1C0;
    case 746u: goto L_089CB1D4;
    case 747u: goto L_089CB1E8;
    case 748u: goto L_089CB1FC;
    case 749u: goto L_089CB204;
    case 750u: goto L_089CB20C;
    case 751u: goto L_089CB214;
    case 752u: goto L_089CB238;
    case 753u: goto L_089CB244;
    case 754u: goto L_089CB258;
    case 755u: goto L_089CB268;
    case 756u: goto L_089CB298;
    case 757u: goto L_089CB304;
    case 758u: goto L_089CB308;
    case 759u: goto L_089CB324;
    case 760u: goto L_089CB358;
    case 761u: goto L_089CB388;
    case 762u: goto L_089CB38C;
    case 763u: goto L_089CB3B0;
    case 764u: goto L_089CB414;
    case 765u: goto L_089CB418;
    case 766u: goto L_089CB43C;
    case 767u: goto L_089CB444;
    case 768u: goto L_089CB448;
    case 769u: goto L_089CB460;
    case 770u: goto L_089CB46C;
    case 771u: goto L_089CB48C;
    case 772u: goto L_089CB49C;
    case 773u: goto L_089CB4A8;
    case 774u: goto L_089CB4B4;
    case 775u: goto L_089CB4C0;
    case 776u: goto L_089CB4F4;
    case 777u: goto L_089CB4FC;
    case 778u: goto L_089CB500;
    case 779u: goto L_089CB514;
    case 780u: goto L_089CB520;
    case 781u: goto L_089CB52C;
    case 782u: goto L_089CB534;
    case 783u: goto L_089CB538;
    case 784u: goto L_089CB544;
    case 785u: goto L_089CB54C;
    case 786u: goto L_089CB55C;
    case 787u: goto L_089CB560;
    case 788u: goto L_089CB56C;
    case 789u: goto L_089CB580;
    case 790u: goto L_089CB584;
    case 791u: goto L_089CB58C;
    case 792u: goto L_089CB598;
    case 793u: goto L_089CB5A8;
    case 794u: goto L_089CB5B0;
    case 795u: goto L_089CB5BC;
    case 796u: goto L_089CB5C4;
    case 797u: goto L_089CB5D8;
    case 798u: goto L_089CB5E8;
    case 799u: goto L_089CB644;
    case 800u: goto L_089CB648;
    case 801u: goto L_089CB67C;
    case 802u: goto L_089CB684;
    case 803u: goto L_089CB6A0;
    case 804u: goto L_089CB6AC;
    case 805u: goto L_089CB6C0;
    case 806u: goto L_089CB6E4;
    case 807u: goto L_089CB6F4;
    case 808u: goto L_089CB700;
    case 809u: goto L_089CB70C;
    case 810u: goto L_089CB718;
    case 811u: goto L_089CB720;
    case 812u: goto L_089CB730;
    case 813u: goto L_089CB734;
    case 814u: goto L_089CB750;
    case 815u: goto L_089CB758;
    case 816u: goto L_089CB770;
    case 817u: goto L_089CB780;
    case 818u: goto L_089CB79C;
    case 819u: goto L_089CB7A4;
    case 820u: goto L_089CB7BC;
    case 821u: goto L_089CB7D0;
    case 822u: goto L_089CB7E0;
    case 823u: goto L_089CB7F0;
    case 824u: goto L_089CB7F8;
    case 825u: goto L_089CB808;
    case 826u: goto L_089CB810;
    case 827u: goto L_089CB81C;
    case 828u: goto L_089CB824;
    case 829u: goto L_089CB830;
    case 830u: goto L_089CB838;
    case 831u: goto L_089CB83C;
    case 832u: goto L_089CB844;
    case 833u: goto L_089CB84C;
    case 834u: goto L_089CB86C;
    case 835u: goto L_089CB878;
    case 836u: goto L_089CB88C;
    case 837u: goto L_089CB8A4;
    case 838u: goto L_089CB8B0;
    case 839u: goto L_089CB8CC;
    case 840u: goto L_089CB8D4;
    case 841u: goto L_089CB8EC;
    case 842u: goto L_089CB900;
    case 843u: goto L_089CB910;
    case 844u: goto L_089CB91C;
    case 845u: goto L_089CB928;
    case 846u: goto L_089CB930;
    case 847u: goto L_089CB958;
    case 848u: goto L_089CB9A0;
    case 849u: goto L_089CB9B8;
    case 850u: goto L_089CB9D0;
    case 851u: goto L_089CB9D8;
    case 852u: goto L_089CB9DC;
    case 853u: goto L_089CB9E8;
    case 854u: goto L_089CB9F4;
    case 855u: goto L_089CBA08;
    case 856u: goto L_089CBA18;
    case 857u: goto L_089CBA28;
    case 858u: goto L_089CBA40;
    case 859u: goto L_089CBA4C;
    case 860u: goto L_089CBA54;
    case 861u: goto L_089CBA68;
    case 862u: goto L_089CBA80;
    case 863u: goto L_089CBA98;
    case 864u: goto L_089CBAB0;
    case 865u: goto L_089CBAB8;
    case 866u: goto L_089CBABC;
    case 867u: goto L_089CBAC8;
    case 868u: goto L_089CBAD4;
    case 869u: goto L_089CBAE8;
    case 870u: goto L_089CBAF8;
    case 871u: goto L_089CBB08;
    case 872u: goto L_089CBB20;
    case 873u: goto L_089CBB2C;
    case 874u: goto L_089CBB34;
    case 875u: goto L_089CBB48;
    case 876u: goto L_089CBB60;
    case 877u: goto L_089CBB7C;
    case 878u: goto L_089CBB94;
    case 879u: goto L_089CBB9C;
    case 880u: goto L_089CBBA0;
    case 881u: goto L_089CBBAC;
    case 882u: goto L_089CBBBC;
    case 883u: goto L_089CBBD0;
    case 884u: goto L_089CBBE0;
    case 885u: goto L_089CBBF0;
    case 886u: goto L_089CBBFC;
    case 887u: goto L_089CBC14;
    case 888u: goto L_089CBC20;
    case 889u: goto L_089CBC28;
    case 890u: goto L_089CBC3C;
    case 891u: goto L_089CBC54;
    case 892u: goto L_089CBC6C;
    case 893u: goto L_089CBC84;
    case 894u: goto L_089CBC8C;
    case 895u: goto L_089CBC90;
    case 896u: goto L_089CBC9C;
    case 897u: goto L_089CBCA8;
    case 898u: goto L_089CBCBC;
    case 899u: goto L_089CBCCC;
    case 900u: goto L_089CBCDC;
    case 901u: goto L_089CBCF4;
    case 902u: goto L_089CBD00;
    case 903u: goto L_089CBD08;
    case 904u: goto L_089CBD1C;
    case 905u: goto L_089CBD4C;
    case 906u: goto L_089CBD94;
    case 907u: goto L_089CBDAC;
    case 908u: goto L_089CBDC4;
    case 909u: goto L_089CBDCC;
    case 910u: goto L_089CBDD0;
    case 911u: goto L_089CBDDC;
    case 912u: goto L_089CBDE8;
    case 913u: goto L_089CBDF8;
    case 914u: goto L_089CBE00;
    case 915u: goto L_089CBE08;
    case 916u: goto L_089CBE10;
    case 917u: goto L_089CBE20;
    case 918u: goto L_089CBE28;
    case 919u: goto L_089CBE34;
    case 920u: goto L_089CBE3C;
    case 921u: goto L_089CBE4C;
    case 922u: goto L_089CBE64;
    case 923u: goto L_089CBE78;
    case 924u: goto L_089CBE90;
    case 925u: goto L_089CBEA8;
    case 926u: goto L_089CBEC0;
    case 927u: goto L_089CBEC8;
    case 928u: goto L_089CBECC;
    case 929u: goto L_089CBED8;
    case 930u: goto L_089CBEE4;
    case 931u: goto L_089CBEF4;
    case 932u: goto L_089CBEFC;
    case 933u: goto L_089CBF04;
    case 934u: goto L_089CBF0C;
    case 935u: goto L_089CBF1C;
    case 936u: goto L_089CBF24;
    case 937u: goto L_089CBF2C;
    case 938u: goto L_089CBF34;
    case 939u: goto L_089CBF44;
    case 940u: goto L_089CBF5C;
    case 941u: goto L_089CBF70;
    case 942u: goto L_089CBF88;
    case 943u: goto L_089CBFA4;
    case 944u: goto L_089CBFBC;
    case 945u: goto L_089CBFC4;
    case 946u: goto L_089CBFC8;
    case 947u: goto L_089CBFD4;
    case 948u: goto L_089CBFE0;
    case 949u: goto L_089CBFEC;
    case 950u: goto L_089CBFF4;
    case 951u: goto L_089CBFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C8000:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8010:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6004), 0u);
    ctx.gpr[4] = (0u | 157u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C8040u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CAC28;
L_089C8040:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C804C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C80DC;
      }
      goto L_089C806C;
    }
L_089C806C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C8088u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9628));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C8088u) goto L_089C8088;
    return;
L_089C8088:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-17288));
      if (branch_taken) {
          goto L_089C80A8;
      }
      goto L_089C8098;
    }
L_089C8098:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089C80A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9604));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C80A8u) goto L_089C80A8;
    return;
L_089C80A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_089C80B8;
L_089C80B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089C80C4u);
    ctx.gpr[5] = (0u | 5u);
    goto L_089CAC28;
L_089C80C4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C80B8;
      }
      goto L_089C80D4;
    }
L_089C80D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8110;
      }
      goto L_089C80DC;
    }
L_089C80DC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x089C80F4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 390u, 0x088724BCu>(ctx, &aot_mem) && ctx.pc == 0x089C80F4u) goto L_089C80F4;
    return;
L_089C80F4:
    ctx.gpr[31] = (0x089C80FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 309u, 0x089EDE80u>(ctx, &aot_mem) && ctx.pc == 0x089C80FCu) goto L_089C80FC;
    return;
L_089C80FC:
    ctx.gpr[31] = (0x089C8104u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 231u, 0x089ED8D0u>(ctx, &aot_mem) && ctx.pc == 0x089C8104u) goto L_089C8104;
    return;
L_089C8104:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C8110u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089CAC28;
L_089C8110:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004)));
    ctx.gpr[17] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[21] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[22] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[18] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    goto L_089C8178;
L_089C8178:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C818C;
      }
      goto L_089C8184;
    }
L_089C8184:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004), 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089C818C;
L_089C818C:
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C81BC;
      }
      goto L_089C81AC;
    }
L_089C81AC:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089C8178;
      }
      goto L_089C81B4;
    }
L_089C81B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[19] << 4u);
      if (branch_taken) {
          goto L_089C81C4;
      }
      goto L_089C81BC;
    }
L_089C81BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C828C;
      }
      goto L_089C81C4;
    }
L_089C81C4:
    ctx.gpr[9] = (ctx.gpr[19] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(13)));
    ctx.gpr[9] = (ctx.gpr[9] & 131u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C8178;
      }
      goto L_089C81E0;
    }
L_089C81E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_089C81F4;
      }
      goto L_089C81E8;
    }
L_089C81E8:
    ctx.gpr[9] = (ctx.gpr[19] << 2u);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_089C81F4;
L_089C81F4:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) > 0;
    // nop
      if (branch_taken) {
          goto L_089C8178;
      }
      goto L_089C8200;
    }
L_089C8200:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] ^ 1u);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8178;
      }
      goto L_089C8218;
    }
L_089C8218:
    ctx.gpr[31] = (0x089C8220u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089C8220u) goto L_089C8220;
    return;
L_089C8220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7552), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8270;
      }
      goto L_089C8260;
    }
L_089C8260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C8270;
L_089C8270:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(69))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089C8288;
      }
      goto L_089C827C;
    }
L_089C827C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089C8288u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 326u, 0x089EDFF4u>(ctx, &aot_mem) && ctx.pc == 0x089C8288u) goto L_089C8288;
    return;
L_089C8288:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C828C;
L_089C828C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C82B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 262u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C82C8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CAC28;
L_089C82C8:
    ctx.gpr[4] = (0u | 292u);
    ctx.gpr[31] = (0x089C82D4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CAC28;
L_089C82D4:
    ctx.gpr[4] = (0u | 273u);
    ctx.gpr[31] = (0x089C82E0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CAC28;
L_089C82E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C82EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[30] = (2229u << 16u);
    ctx.gpr[23] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9544));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9508));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9464));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9432));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[21] = (2226u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-9556));
    goto L_089C8388;
L_089C8388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C8628;
      }
      goto L_089C83A0;
    }
L_089C83A0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x089C83B0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 357u, 0x089C5768u>(ctx, &aot_mem) && ctx.pc == 0x089C83B0u) goto L_089C83B0;
    return;
L_089C83B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8628;
      }
      goto L_089C83B8;
    }
L_089C83B8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8478;
      }
      goto L_089C83C4;
    }
L_089C83C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089C8404;
      }
      goto L_089C83F4;
    }
L_089C83F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C8404;
L_089C8404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C842C;
      }
      goto L_089C8424;
    }
L_089C8424:
    ctx.gpr[31] = (0x089C842Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C842Cu) goto L_089C842C;
    return;
L_089C842C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
      if (branch_taken) {
          goto L_089C8450;
      }
      goto L_089C8440;
    }
L_089C8440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C8450;
L_089C8450:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[16]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x089C8470u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C8470u) goto L_089C8470;
    return;
L_089C8470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8628;
      }
      goto L_089C8478;
    }
L_089C8478:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6100 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C8554;
      }
      goto L_089C8484;
    }
L_089C8484:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_089C8554;
      }
      goto L_089C848C;
    }
L_089C848C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4900));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C84C4;
      }
      goto L_089C84B4;
    }
L_089C84B4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_089C84E0;
      }
      goto L_089C84C4;
    }
L_089C84C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[6] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    goto L_089C84E0;
L_089C84E0:
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8504;
      }
      goto L_089C84FC;
    }
L_089C84FC:
    ctx.gpr[31] = (0x089C8504u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C8504u) goto L_089C8504;
    return;
L_089C8504:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089C851Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 577u, 0x0892F95Cu>(ctx, &aot_mem) && ctx.pc == 0x089C851Cu) goto L_089C851C;
    return;
L_089C851C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C8528u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 660u, 0x0892FEDCu>(ctx, &aot_mem) && ctx.pc == 0x089C8528u) goto L_089C8528;
    return;
L_089C8528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C854Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C854Cu) goto L_089C854C;
    return;
L_089C854C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8628;
      }
      goto L_089C8554;
    }
L_089C8554:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6115 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C85B8;
      }
      goto L_089C8560;
    }
L_089C8560:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C85B8;
      }
      goto L_089C8568;
    }
L_089C8568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6100));
    ctx.gpr[31] = (0x089C8584u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 246u, 0x089859A0u>(ctx, &aot_mem) && ctx.pc == 0x089C8584u) goto L_089C8584;
    return;
L_089C8584:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C85B0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C85B0u) goto L_089C85B0;
    return;
L_089C85B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8628;
      }
      goto L_089C85B8;
    }
L_089C85B8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8628;
      }
      goto L_089C85C0;
    }
L_089C85C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6115));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7792)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[31] = (0x089C8628u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C8628u) goto L_089C8628;
    return;
L_089C8628:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6175 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089C8388;
      }
      goto L_089C8638;
    }
L_089C8638:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26512)));
    ctx.gpr[18] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-9392));
    ctx.gpr[19] = (32768u << 16u);
    goto L_089C865C;
L_089C865C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8708;
      }
      goto L_089C8664;
    }
L_089C8664:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8708;
      }
      goto L_089C8670;
    }
L_089C8670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
      if (branch_taken) {
          goto L_089C86FC;
      }
      goto L_089C8688;
    }
L_089C8688:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C86FC;
      }
      goto L_089C8698;
    }
L_089C8698:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    goto L_089C86B0;
L_089C86B0:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_089C86C0;
    }
    goto L_089C86C0;
L_089C86C0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C86DC;
      }
      goto L_089C86C8;
    }
L_089C86C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C86DC;
      }
      goto L_089C86D4;
    }
L_089C86D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C86EC;
      }
      goto L_089C86DC;
    }
L_089C86DC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C86B0;
      }
      goto L_089C86EC;
    }
L_089C86EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C86F8u);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C86F8u) goto L_089C86F8;
    return;
L_089C86F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089C86FC;
L_089C86FC:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089C865C;
      }
      goto L_089C8708;
    }
L_089C8708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089C8720u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9372));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C8720u) goto L_089C8720;
    return;
L_089C8720:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C8730u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9344));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C8730u) goto L_089C8730;
    return;
L_089C8730:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9316));
    ctx.gpr[31] = (0x089C8744u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C8744u) goto L_089C8744;
    return;
L_089C8744:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9288));
    ctx.gpr[31] = (0x089C8758u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089C8758u) goto L_089C8758;
    return;
L_089C8758:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C87A8u);
    ctx.gpr[6] = (0u | 1u);
    goto L_089C8A24;
L_089C87A8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C87BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C87D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30840));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x089C87D4u) goto L_089C87D4;
    return;
L_089C87D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C87E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C87FCu);
    ctx.gpr[5] = (0u | 2u);
    goto L_089C8AF4;
L_089C87FC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8810:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C8828u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30752));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x089C8828u) goto L_089C8828;
    return;
L_089C8828:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8834:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089C88E8;
      }
      goto L_089C8870;
    }
L_089C8870:
    ctx.gpr[17] = (2230u << 16u);
    goto L_089C8874;
L_089C8874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C88A4;
      }
      goto L_089C888C;
    }
L_089C888C:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089C8898u);
    ctx.gpr[6] = (0u | 1u);
    goto L_089C8A24;
L_089C8898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C88A4;
L_089C88A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28976)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C88D4;
      }
      goto L_089C88B8;
    }
L_089C88B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C88D4;
      }
      goto L_089C88C4;
    }
L_089C88C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089C88D4u);
    ctx.gpr[6] = (0u | 1u);
    goto L_089C8A24;
L_089C88D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C8874;
      }
      goto L_089C88E8;
    }
L_089C88E8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089C890C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089C89B8;
      }
      goto L_089C8948;
    }
L_089C8948:
    ctx.gpr[17] = (2230u << 16u);
    goto L_089C894C;
L_089C894C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8978;
      }
      goto L_089C8964;
    }
L_089C8964:
    ctx.gpr[31] = (0x089C896Cu);
    ctx.gpr[5] = (0u | 2u);
    goto L_089C8AF4;
L_089C896C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C8978;
L_089C8978:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28976)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C89A4;
      }
      goto L_089C898C;
    }
L_089C898C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C89A4;
      }
      goto L_089C8998;
    }
L_089C8998:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089C89A4u);
    ctx.gpr[5] = (0u | 2u);
    goto L_089C8AF4;
L_089C89A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C894C;
      }
      goto L_089C89B8;
    }
L_089C89B8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_089C89DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C89F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30668));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x089C89F4u) goto L_089C89F4;
    return;
L_089C89F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8A00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2205u << 16u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C8A18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30452));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 201u, 0x08AA4FD4u>(ctx, &aot_mem) && ctx.pc == 0x089C8A18u) goto L_089C8A18;
    return;
L_089C8A18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8A24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8A6C;
      }
      goto L_089C8A40;
    }
L_089C8A40:
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26512)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8A6C;
      }
      goto L_089C8A64;
    }
L_089C8A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8AE0;
      }
      goto L_089C8A6C;
    }
L_089C8A6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5792));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C8A8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 98u, 0x08B04678u>(ctx, &aot_mem) && ctx.pc == 0x089C8A8Cu) goto L_089C8A8C;
    return;
L_089C8A8C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C8AA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 73u, 0x08B04438u>(ctx, &aot_mem) && ctx.pc == 0x089C8AA0u) goto L_089C8AA0;
    return;
L_089C8AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089C8AE0;
      }
      goto L_089C8AC4;
    }
L_089C8AC4:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28032));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089C8AE0;
L_089C8AE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8AF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5792));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C8B48;
L_089C8B48:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
        goto L_089C8B74;
    }
    goto L_089C8B50;
L_089C8B50:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
        goto L_089C8B74;
    }
    goto L_089C8B6C;
L_089C8B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C8B48;
      }
      goto L_089C8B74;
    }
L_089C8B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] ^ ctx.gpr[8]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8C18;
      }
      goto L_089C8BE0;
    }
L_089C8BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[31] = (0x089C8BFCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 86u, 0x08B045A4u>(ctx, &aot_mem) && ctx.pc == 0x089C8BFCu) goto L_089C8BFC;
    return;
L_089C8BFC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28032));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089C8C18;
L_089C8C18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8C28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (32768u << 16u);
      if (branch_taken) {
          goto L_089C8C90;
      }
      goto L_089C8C44;
    }
L_089C8C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C8C68;
      }
      goto L_089C8C58;
    }
L_089C8C58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8C70;
      }
      goto L_089C8C68;
    }
L_089C8C68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8C88;
      }
      goto L_089C8C70;
    }
L_089C8C70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C8C88u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C8C88u) goto L_089C8C88;
    return;
L_089C8C88:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8C44;
      }
      goto L_089C8C90;
    }
L_089C8C90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8CA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089C8DE4;
      }
      goto L_089C8CC8;
    }
L_089C8CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C8DDC;
      }
      goto L_089C8CD8;
    }
L_089C8CD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8DDC;
      }
      goto L_089C8CEC;
    }
L_089C8CEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089C8DDC;
      }
      goto L_089C8CFC;
    }
L_089C8CFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u - ctx.gpr[5]);
        goto L_089C8D2C;
    }
    goto L_089C8D2C;
L_089C8D2C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089C8D84;
      }
      goto L_089C8D4C;
    }
L_089C8D4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[16]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u - ctx.gpr[5]);
        goto L_089C8DA4;
    }
    goto L_089C8D7C;
L_089C8D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C8DA8;
      }
      goto L_089C8D84;
    }
L_089C8D84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C8D9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C8D9Cu) goto L_089C8D9C;
    return;
L_089C8D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8DE4;
      }
      goto L_089C8DA4;
    }
L_089C8DA4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089C8DA8;
L_089C8DA8:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C8DDC;
      }
      goto L_089C8DC4;
    }
L_089C8DC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C8DDCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C8DDCu) goto L_089C8DDC;
    return;
L_089C8DDC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8CC8;
      }
      goto L_089C8DE4;
    }
L_089C8DE4:
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
L_089C8DFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C8EA0;
      }
      goto L_089C8E1C;
    }
L_089C8E1C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C8E98;
      }
      goto L_089C8E2C;
    }
L_089C8E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089C8E48;
    }
    goto L_089C8E38;
L_089C8E38:
    ctx.gpr[31] = (0x089C8E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x089C8E40u) goto L_089C8E40;
    return;
L_089C8E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089C8E48;
L_089C8E48:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8E80;
      }
      goto L_089C8E58;
    }
L_089C8E58:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_089C8E70;
    }
    goto L_089C8E60;
L_089C8E60:
    ctx.gpr[31] = (0x089C8E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x089C8E68u) goto L_089C8E68;
    return;
L_089C8E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    goto L_089C8E70;
L_089C8E70:
    ctx.gpr[31] = (0x089C8E78u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 86u, 0x0895076Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8E78u) goto L_089C8E78;
    return;
L_089C8E78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8E98;
      }
      goto L_089C8E80;
    }
L_089C8E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089C8E98u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C8E98u) goto L_089C8E98;
    return;
L_089C8E98:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8E1C;
      }
      goto L_089C8EA0;
    }
L_089C8EA0:
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
L_089C8EB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7404)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[20] = (0u | 20u);
      if (branch_taken) {
          goto L_089C9028;
      }
      goto L_089C8F0C;
    }
L_089C8F0C:
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C8F18;
L_089C8F18:
    ctx.gpr[5] = (ctx.gpr[18] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    ctx.gpr[21] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8F40;
      }
      goto L_089C8F34;
    }
L_089C8F34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C901C;
      }
      goto L_089C8F40;
    }
L_089C8F40:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8F98;
      }
      goto L_089C8F4C;
    }
L_089C8F4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8F6C;
      }
      goto L_089C8F5C;
    }
L_089C8F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C8F6C;
L_089C8F6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089C8F88;
      }
      goto L_089C8F78;
    }
L_089C8F78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C901C;
      }
      goto L_089C8F88;
    }
L_089C8F88:
    ctx.gpr[31] = (0x089C8F90u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089C8F90u) goto L_089C8F90;
    return;
L_089C8F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9110;
      }
      goto L_089C8F98;
    }
L_089C8F98:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 6100 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C8FDC;
      }
      goto L_089C8FA0;
    }
L_089C8FA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8FDC;
      }
      goto L_089C8FA8;
    }
L_089C8FA8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-4900));
    ctx.gpr[31] = (0x089C8FB4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 660u, 0x0892FEDCu>(ctx, &aot_mem) && ctx.pc == 0x089C8FB4u) goto L_089C8FB4;
    return;
L_089C8FB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_089C8F78;
      }
      goto L_089C8FBC;
    }
L_089C8FBC:
    ctx.gpr[31] = (0x089C8FC4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089C9554;
L_089C8FC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8F78;
      }
      goto L_089C8FCC;
    }
L_089C8FCC:
    ctx.gpr[31] = (0x089C8FD4u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4900));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089C8FD4u) goto L_089C8FD4;
    return;
L_089C8FD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9110;
      }
      goto L_089C8FDC;
    }
L_089C8FDC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 6115 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8F78;
      }
      goto L_089C8FE8;
    }
L_089C8FE8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-6115));
    ctx.gpr[31] = (0x089C8FF4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 539u, 0x08A8B34Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8FF4u) goto L_089C8FF4;
    return;
L_089C8FF4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_089C8F78;
      }
      goto L_089C8FFC;
    }
L_089C8FFC:
    ctx.gpr[31] = (0x089C9004u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089C969C;
L_089C9004:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8F78;
      }
      goto L_089C900C;
    }
L_089C900C:
    ctx.gpr[31] = (0x089C9014u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089C9014u) goto L_089C9014;
    return;
L_089C9014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9110;
      }
      goto L_089C901C;
    }
L_089C901C:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C8F18;
      }
      goto L_089C9028;
    }
L_089C9028:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089C9054;
      }
      goto L_089C9040;
    }
L_089C9040:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C904C;
    }
L_089C904C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C9054;
    }
L_089C9054:
    ctx.gpr[31] = (0x089C905Cu);
    // nop
    goto L_089C8124;
L_089C905C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C9064;
    }
L_089C9064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9110;
      }
      goto L_089C906C;
    }
L_089C906C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32444));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (0u | 4899u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(19596));
    goto L_089C9094;
L_089C9094:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] ^ 1u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C90D4;
      }
      goto L_089C90AC;
    }
L_089C90AC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089C90D4;
      }
      goto L_089C90BC;
    }
L_089C90BC:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_089C90C8;
    }
    goto L_089C90C8;
L_089C90C8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C90EC;
      }
      goto L_089C90D4;
    }
L_089C90D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_089C9094;
      }
      goto L_089C90E4;
    }
L_089C90E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C910C;
      }
      goto L_089C90EC;
    }
L_089C90EC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C90FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9200));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C90FCu) goto L_089C90FC;
    return;
L_089C90FC:
    ctx.gpr[31] = (0x089C9104u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089C9104u) goto L_089C9104;
    return;
L_089C9104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9110;
      }
      goto L_089C910C;
    }
L_089C910C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C9110;
L_089C9110:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C913C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C9280;
      }
      goto L_089C9174;
    }
L_089C9174:
    ctx.gpr[30] = (2233u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[19] = (32768u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    goto L_089C918C;
L_089C918C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C91BC;
      }
      goto L_089C91A0;
    }
L_089C91A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C91BC;
      }
      goto L_089C91B0;
    }
L_089C91B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C91C4;
      }
      goto L_089C91BC;
    }
L_089C91BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9278;
      }
      goto L_089C91C4;
    }
L_089C91C4:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9278;
      }
      goto L_089C91E8;
    }
L_089C91E8:
    ctx.gpr[31] = (0x089C91F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089C91F0u) goto L_089C91F0;
    return;
L_089C91F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1296)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C9204;
      }
      goto L_089C91FC;
    }
L_089C91FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9278;
      }
      goto L_089C9204;
    }
L_089C9204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089C921Cu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C921Cu) goto L_089C921C;
    return;
L_089C921C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089C923C;
      }
      goto L_089C922C;
    }
L_089C922C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C923C;
L_089C923C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9278;
      }
      goto L_089C9248;
    }
L_089C9248:
    ctx.gpr[31] = (0x089C9250u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089C9250u) goto L_089C9250;
    return;
L_089C9250:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C925Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 749u, 0x089C716Cu>(ctx, &aot_mem) && ctx.pc == 0x089C925Cu) goto L_089C925C;
    return;
L_089C925C:
    ctx.gpr[31] = (0x089C9264u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x089C9264u) goto L_089C9264;
    return;
L_089C9264:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9278;
      }
      goto L_089C9270;
    }
L_089C9270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9284;
      }
      goto L_089C9278;
    }
L_089C9278:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C918C;
      }
      goto L_089C9280;
    }
L_089C9280:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C9284;
L_089C9284:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C92B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C93FC;
      }
      goto L_089C92EC;
    }
L_089C92EC:
    ctx.gpr[30] = (2233u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[19] = (32768u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    goto L_089C9304;
L_089C9304:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C9354;
      }
      goto L_089C9318;
    }
L_089C9318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9354;
      }
      goto L_089C9328;
    }
L_089C9328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9354;
      }
      goto L_089C9334;
    }
L_089C9334:
    ctx.gpr[31] = (0x089C933Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 746u, 0x08A2F708u>(ctx, &aot_mem) && ctx.pc == 0x089C933Cu) goto L_089C933C;
    return;
L_089C933C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C935C;
      }
      goto L_089C9344;
    }
L_089C9344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C935C;
      }
      goto L_089C9354;
    }
L_089C9354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C93F4;
      }
      goto L_089C935C;
    }
L_089C935C:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C93F4;
      }
      goto L_089C9380;
    }
L_089C9380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089C9398u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9398u) goto L_089C9398;
    return;
L_089C9398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089C93B8;
      }
      goto L_089C93A8;
    }
L_089C93A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C93B8;
L_089C93B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C93F4;
      }
      goto L_089C93C4;
    }
L_089C93C4:
    ctx.gpr[31] = (0x089C93CCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089C93CCu) goto L_089C93CC;
    return;
L_089C93CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C93D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 749u, 0x089C716Cu>(ctx, &aot_mem) && ctx.pc == 0x089C93D8u) goto L_089C93D8;
    return;
L_089C93D8:
    ctx.gpr[31] = (0x089C93E0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x089C93E0u) goto L_089C93E0;
    return;
L_089C93E0:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C93F4;
      }
      goto L_089C93EC;
    }
L_089C93EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9400;
      }
      goto L_089C93F4;
    }
L_089C93F4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9304;
      }
      goto L_089C93FC;
    }
L_089C93FC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C9400;
L_089C9400:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9430:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[18] = (2u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7404)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[22] = (2233u << 16u);
      if (branch_taken) {
          goto L_089C9520;
      }
      goto L_089C9480;
    }
L_089C9480:
    ctx.gpr[19] = (0u | 20u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_089C948C;
L_089C948C:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089C950C;
      }
      goto L_089C94A4;
    }
L_089C94A4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C950C;
      }
      goto L_089C94B0;
    }
L_089C94B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C950C;
      }
      goto L_089C94C0;
    }
L_089C94C0:
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4900));
    ctx.gpr[31] = (0x089C94CCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 660u, 0x0892FEDCu>(ctx, &aot_mem) && ctx.pc == 0x089C94CCu) goto L_089C94CC;
    return;
L_089C94CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C950C;
      }
      goto L_089C94D4;
    }
L_089C94D4:
    ctx.gpr[31] = (0x089C94DCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089C9554;
L_089C94DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C950C;
      }
      goto L_089C94E4;
    }
L_089C94E4:
    ctx.gpr[31] = (0x089C94ECu);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(4900));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089C94ECu) goto L_089C94EC;
    return;
L_089C94EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C94F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 749u, 0x089C716Cu>(ctx, &aot_mem) && ctx.pc == 0x089C94F8u) goto L_089C94F8;
    return;
L_089C94F8:
    ctx.gpr[31] = (0x089C9500u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 828u, 0x08AA3ED4u>(ctx, &aot_mem) && ctx.pc == 0x089C9500u) goto L_089C9500;
    return;
L_089C9500:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9528;
      }
      goto L_089C950C;
    }
L_089C950C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C948C;
      }
      goto L_089C9520;
    }
L_089C9520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C952C;
      }
      goto L_089C9528;
    }
L_089C9528:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C952C;
L_089C952C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9554:
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7388)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7368));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
      if (branch_taken) {
          goto L_089C95E8;
      }
      goto L_089C9588;
    }
L_089C9588:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (0u | 20u);
    ctx.gpr[11] = (ctx.gpr[10] - ctx.gpr[8]);
    goto L_089C9594;
L_089C9594:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[11]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C95CC;
      }
      goto L_089C95A8;
    }
L_089C95A8:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_089C95C0;
      }
      goto L_089C95B4;
    }
L_089C95B4:
    ctx.gpr[11] = (ctx.gpr[2] << 2u);
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    goto L_089C95C0;
L_089C95C0:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C95E0;
      }
      goto L_089C95CC;
    }
L_089C95CC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    ctx.gpr[11] = (ctx.gpr[10] - ctx.gpr[8]);
      if (branch_taken) {
          goto L_089C9594;
      }
      goto L_089C95D8;
    }
L_089C95D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C95E8;
      }
      goto L_089C95E0;
    }
L_089C95E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9694;
      }
      goto L_089C95E8;
    }
L_089C95E8:
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-5768));
    goto L_089C95F8;
L_089C95F8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[7];
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[11]) < 4900 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C9630;
      }
      goto L_089C9604;
    }
L_089C9604:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9630;
      }
      goto L_089C960C;
    }
L_089C960C:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9624;
      }
      goto L_089C9618;
    }
L_089C9618:
    ctx.gpr[10] = (ctx.gpr[11] << 2u);
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_089C9624;
L_089C9624:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9644;
      }
      goto L_089C9630;
    }
L_089C9630:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[7];
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[11]) < 4900 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C964C;
      }
      goto L_089C963C;
    }
L_089C963C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9678;
      }
      goto L_089C9644;
    }
L_089C9644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9694;
      }
      goto L_089C964C;
    }
L_089C964C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9678;
      }
      goto L_089C9654;
    }
L_089C9654:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_089C966C;
      }
      goto L_089C9660;
    }
L_089C9660:
    ctx.gpr[10] = (ctx.gpr[11] << 2u);
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_089C966C;
L_089C966C:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9690;
      }
      goto L_089C9678;
    }
L_089C9678:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C95F8;
      }
      goto L_089C9688;
    }
L_089C9688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9694;
      }
      goto L_089C9690;
    }
L_089C9690:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C9694;
L_089C9694:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C969C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7388)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[21] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[22] = (2229u << 16u);
      if (branch_taken) {
          goto L_089C976C;
      }
      goto L_089C96F0;
    }
L_089C96F0:
    ctx.gpr[20] = (0u | 20u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C96F8;
L_089C96F8:
    ctx.gpr[5] = (ctx.gpr[18] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C975C;
      }
      goto L_089C9710;
    }
L_089C9710:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9730;
      }
      goto L_089C9720;
    }
L_089C9720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C9730;
L_089C9730:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089C9748u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9748u) goto L_089C9748;
    return;
L_089C9748:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C9758;
      }
      goto L_089C9750;
    }
L_089C9750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9850;
      }
      goto L_089C9758;
    }
L_089C9758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    goto L_089C975C;
L_089C975C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C96F8;
      }
      goto L_089C976C;
    }
L_089C976C:
    ctx.gpr[18] = (2277u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5768));
    goto L_089C977C;
L_089C977C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4900 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C97D0;
      }
      goto L_089C9788;
    }
L_089C9788:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C97D0;
      }
      goto L_089C9790;
    }
L_089C9790:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C97B0;
      }
      goto L_089C97A0;
    }
L_089C97A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C97B0;
L_089C97B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089C97C8u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C97C8u) goto L_089C97C8;
    return;
L_089C97C8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C97E4;
      }
      goto L_089C97D0;
    }
L_089C97D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4900 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C97EC;
      }
      goto L_089C97DC;
    }
L_089C97DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9834;
      }
      goto L_089C97E4;
    }
L_089C97E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9850;
      }
      goto L_089C97EC;
    }
L_089C97EC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9834;
      }
      goto L_089C97F4;
    }
L_089C97F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9814;
      }
      goto L_089C9804;
    }
L_089C9804:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C9814;
L_089C9814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089C982Cu);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C982Cu) goto L_089C982C;
    return;
L_089C982C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089C984C;
      }
      goto L_089C9834;
    }
L_089C9834:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C977C;
      }
      goto L_089C9844;
    }
L_089C9844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9850;
      }
      goto L_089C984C;
    }
L_089C984C:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C9850;
L_089C9850:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9878:
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7784)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-7568)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[9] = (32768u << 16u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089C98CC;
      }
      goto L_089C98B8;
    }
L_089C98B8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7560)));
    ctx.gpr[11] = (ctx.gpr[2] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C98DC;
      }
      goto L_089C98CC;
    }
L_089C98CC:
    ctx.gpr[13] = (0u | 0u);
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089C98E4;
      }
      goto L_089C98DC;
    }
L_089C98DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9954;
      }
      goto L_089C98E4;
    }
L_089C98E4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-7568)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C98F8;
      }
      goto L_089C98F0;
    }
L_089C98F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9930;
      }
      goto L_089C98F8;
    }
L_089C98F8:
    ctx.gpr[11] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9910;
      }
      goto L_089C9904;
    }
L_089C9904:
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C9920;
      }
      goto L_089C9910;
    }
L_089C9910:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7560)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    goto L_089C9920;
L_089C9920:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9930;
      }
      goto L_089C9928;
    }
L_089C9928:
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (ctx.gpr[13] | 0u);
    goto L_089C9930;
L_089C9930:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[13]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C98E4;
      }
      goto L_089C9940;
    }
L_089C9940:
    ctx.gpr[4] = (ctx.gpr[10] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-7784), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7568)));
    goto L_089C9954;
L_089C9954:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C995C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C9990u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 332u, 0x08A8A2CCu>(ctx, &aot_mem) && ctx.pc == 0x089C9990u) goto L_089C9990;
    return;
L_089C9990:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9B54;
      }
      goto L_089C999C;
    }
L_089C999C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[19] = (ctx.gpr[20] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5768));
    ctx.gpr[20] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    goto L_089C99D4;
L_089C99D4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089C9B3C;
      }
      goto L_089C99E0;
    }
L_089C99E0:
    ctx.gpr[16] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x089C99FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 356u, 0x089C5760u>(ctx, &aot_mem) && ctx.pc == 0x089C99FCu) goto L_089C99FC;
    return;
L_089C99FC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9B14;
      }
      goto L_089C9A08;
    }
L_089C9A08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9A28;
      }
      goto L_089C9A18;
    }
L_089C9A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C9A28;
L_089C9A28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C9B14;
      }
      goto L_089C9A38;
    }
L_089C9A38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28036)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9B14;
      }
      goto L_089C9A5C;
    }
L_089C9A5C:
    ctx.gpr[31] = (0x089C9A64u);
    // nop
    goto L_089C8124;
L_089C9A64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9B14;
      }
      goto L_089C9A6C;
    }
L_089C9A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 131u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9A94;
      }
      goto L_089C9A84;
    }
L_089C9A84:
    ctx.gpr[31] = (0x089C9A8Cu);
    // nop
    goto L_089CA708;
L_089C9A8C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089C9B14;
      }
      goto L_089C9A94;
    }
L_089C9A94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9AB4;
      }
      goto L_089C9AA4;
    }
L_089C9AA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C9AB4;
L_089C9AB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[31] = (0x089C9AC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089C9AC8u) goto L_089C9AC8;
    return;
L_089C9AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[4] & 131u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089C9AF4;
      }
      goto L_089C9AE0;
    }
L_089C9AE0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089C9AECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089CAC28;
L_089C9AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9B0C;
      }
      goto L_089C9AF4;
    }
L_089C9AF4:
    ctx.gpr[31] = (0x089C9AFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 660u, 0x0892FEDCu>(ctx, &aot_mem) && ctx.pc == 0x089C9AFCu) goto L_089C9AFC;
    return;
L_089C9AFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9B0C;
      }
      goto L_089C9B04;
    }
L_089C9B04:
    ctx.gpr[31] = (0x089C9B0Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4900));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089C9B0Cu) goto L_089C9B0C;
    return;
L_089C9B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9B3C;
      }
      goto L_089C9B14;
    }
L_089C9B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089C9B20u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 529u, 0x089CE054u>(ctx, &aot_mem) && ctx.pc == 0x089C9B20u) goto L_089C9B20;
    return;
L_089C9B20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9B34;
      }
      goto L_089C9B28;
    }
L_089C9B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089C9B34u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9B34u) goto L_089C9B34;
    return;
L_089C9B34:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    goto L_089C9B3C;
L_089C9B3C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C99D4;
      }
      goto L_089C9B4C;
    }
L_089C9B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C9B90;
      }
      goto L_089C9B54;
    }
L_089C9B54:
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 250u);
      if (branch_taken) {
          goto L_089C9B8C;
      }
      goto L_089C9B60;
    }
L_089C9B60:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C9B8C;
      }
      goto L_089C9B68;
    }
L_089C9B68:
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-5768));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-5988), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_089C9B8C;
L_089C9B8C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C9B90;
L_089C9B90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9BC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C9BDCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 529u, 0x08A964D8u>(ctx, &aot_mem) && ctx.pc == 0x089C9BDCu) goto L_089C9BDC;
    return;
L_089C9BDC:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5768));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C9C08;
      }
      goto L_089C9BF8;
    }
L_089C9BF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C9CC4;
      }
      goto L_089C9C00;
    }
L_089C9C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9C80;
      }
      goto L_089C9C08;
    }
L_089C9C08:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C9CA8;
      }
      goto L_089C9C10;
    }
L_089C9C10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9CC4;
      }
      goto L_089C9C18;
    }
L_089C9C18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089C9C2Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 332u, 0x08A8A2CCu>(ctx, &aot_mem) && ctx.pc == 0x089C9C2Cu) goto L_089C9C2C;
    return;
L_089C9C2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C9C6C;
      }
      goto L_089C9C3C;
    }
L_089C9C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9C54;
      }
      goto L_089C9C4C;
    }
L_089C9C4C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_089C9C54;
L_089C9C54:
    ctx.gpr[31] = (0x089C9C5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 332u, 0x08A8A2CCu>(ctx, &aot_mem) && ctx.pc == 0x089C9C5Cu) goto L_089C9C5C;
    return;
L_089C9C5C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C9C80;
      }
      goto L_089C9C64;
    }
L_089C9C64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9CC4;
      }
      goto L_089C9C6C;
    }
L_089C9C6C:
    ctx.gpr[5] = (0u | 250u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C9C80;
      }
      goto L_089C9C78;
    }
L_089C9C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9CC4;
      }
      goto L_089C9C80;
    }
L_089C9C80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089C9C94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 325u, 0x08A8A210u>(ctx, &aot_mem) && ctx.pc == 0x089C9C94u) goto L_089C9C94;
    return;
L_089C9C94:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-600));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089C9CC4;
      }
      goto L_089C9CA8;
    }
L_089C9CA8:
    ctx.gpr[31] = (0x089C9CB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C995C;
L_089C9CB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9CC4;
      }
      goto L_089C9CB8;
    }
L_089C9CB8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5988), ctx.gpr[4]);
    goto L_089C9CC4;
L_089C9CC4:
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
L_089C9CDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C9D80;
      }
      goto L_089C9D00;
    }
L_089C9D00:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089C9D20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 356u, 0x089C5760u>(ctx, &aot_mem) && ctx.pc == 0x089C9D20u) goto L_089C9D20;
    return;
L_089C9D20:
    ctx.gpr[6] = (ctx.gpr[2] << 11u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9D60;
      }
      goto L_089C9D38;
    }
L_089C9D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9D60;
      }
      goto L_089C9D48;
    }
L_089C9D48:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9D80;
      }
      goto L_089C9D60;
    }
L_089C9D60:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C9D78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9128));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C9D78u) goto L_089C9D78;
    return;
L_089C9D78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9E2C;
      }
      goto L_089C9D80;
    }
L_089C9D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (116u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25976));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C9DEC;
      }
      goto L_089C9D94;
    }
L_089C9D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9DEC;
      }
      goto L_089C9DA8;
    }
L_089C9DA8:
    ctx.gpr[4] = (116u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089C9DC8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 559u, 0x0886AFC0u>(ctx, &aot_mem) && ctx.pc == 0x089C9DC8u) goto L_089C9DC8;
    return;
L_089C9DC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C9E00;
      }
      goto L_089C9DD4;
    }
L_089C9DD4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4900));
    ctx.gpr[31] = (0x089C9DE4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 603u, 0x0892FAACu>(ctx, &aot_mem) && ctx.pc == 0x089C9DE4u) goto L_089C9DE4;
    return;
L_089C9DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E10;
      }
      goto L_089C9DEC;
    }
L_089C9DEC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089C9DF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9060));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C9DF8u) goto L_089C9DF8;
    return;
L_089C9DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9E2C;
      }
      goto L_089C9E00;
    }
L_089C9E00:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C9E10u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 603u, 0x0892FAACu>(ctx, &aot_mem) && ctx.pc == 0x089C9E10u) goto L_089C9E10;
    return;
L_089C9E10:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    goto L_089C9E2C;
L_089C9E2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089C9E7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 356u, 0x089C5760u>(ctx, &aot_mem) && ctx.pc == 0x089C9E7Cu) goto L_089C9E7C;
    return;
L_089C9E7C:
    ctx.gpr[4] = (24942u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] << 11u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(26989));
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C9ECC;
      }
      goto L_089C9E98;
    }
L_089C9E98:
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9ECC;
      }
      goto L_089C9EA4;
    }
L_089C9EA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9ECC;
      }
      goto L_089C9EB4;
    }
L_089C9EB4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9EEC;
      }
      goto L_089C9ECC;
    }
L_089C9ECC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C9EE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9024));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C9EE4u) goto L_089C9EE4;
    return;
L_089C9EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9F3C;
      }
      goto L_089C9EEC;
    }
L_089C9EEC:
    ctx.gpr[4] = (24942u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26989));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089C9F0Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 559u, 0x0886AFC0u>(ctx, &aot_mem) && ctx.pc == 0x089C9F0Cu) goto L_089C9F0C;
    return;
L_089C9F0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6115));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089C9F20u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 410u, 0x08A8A7E8u>(ctx, &aot_mem) && ctx.pc == 0x089C9F20u) goto L_089C9F20;
    return;
L_089C9F20:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    goto L_089C9F3C;
L_089C9F3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9F50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089C9F88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 356u, 0x089C5760u>(ctx, &aot_mem) && ctx.pc == 0x089C9F88u) goto L_089C9F88;
    return;
L_089C9F88:
    ctx.gpr[4] = (25455u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] << 11u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(27698));
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089C9FD8;
      }
      goto L_089C9FA4;
    }
L_089C9FA4:
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9FD8;
      }
      goto L_089C9FB0;
    }
L_089C9FB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9FD8;
      }
      goto L_089C9FC0;
    }
L_089C9FC0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9FF8;
      }
      goto L_089C9FD8;
    }
L_089C9FD8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C9FF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8960));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089C9FF0u) goto L_089C9FF0;
    return;
L_089C9FF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA048;
      }
      goto L_089C9FF8;
    }
L_089C9FF8:
    ctx.gpr[4] = (25455u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27698));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089CA018u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 559u, 0x0886AFC0u>(ctx, &aot_mem) && ctx.pc == 0x089CA018u) goto L_089CA018;
    return;
L_089CA018:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6100));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089CA02Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 250u, 0x089859E4u>(ctx, &aot_mem) && ctx.pc == 0x089CA02Cu) goto L_089CA02C;
    return;
L_089CA02C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    goto L_089CA048;
L_089CA048:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA05C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA0C4;
      }
      goto L_089CA088;
    }
L_089CA088:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6724))))));
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089CA0BC;
      }
      goto L_089CA09C;
    }
L_089CA09C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CA0BC;
      }
      goto L_089CA0A4;
    }
L_089CA0A4:
    ctx.gpr[31] = (0x089CA0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089CA0ACu) goto L_089CA0AC;
    return;
L_089CA0AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA0CC;
      }
      goto L_089CA0B4;
    }
L_089CA0B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA104;
      }
      goto L_089CA0BC;
    }
L_089CA0BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA410;
      }
      goto L_089CA0C4;
    }
L_089CA0C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA410;
      }
      goto L_089CA0CC;
    }
L_089CA0CC:
    ctx.gpr[31] = (0x089CA0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089CA0D4u) goto L_089CA0D4;
    return;
L_089CA0D4:
    ctx.gpr[31] = (0x089CA0DCu);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 348u, 0x08ACD668u>(ctx, &aot_mem) && ctx.pc == 0x089CA0DCu) goto L_089CA0DC;
    return;
L_089CA0DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA104;
      }
      goto L_089CA0E4;
    }
L_089CA0E4:
    ctx.gpr[4] = (0u | 158u);
    ctx.gpr[31] = (0x089CA0F0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CAC28;
L_089CA0F0:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x089CA0FCu);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CAC28;
L_089CA0FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA134;
      }
      goto L_089CA104;
    }
L_089CA104:
    ctx.gpr[31] = (0x089CA10Cu);
    ctx.gpr[4] = (0u | 158u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089CA10Cu) goto L_089CA10C;
    return;
L_089CA10C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA134;
      }
      goto L_089CA12C;
    }
L_089CA12C:
    ctx.gpr[31] = (0x089CA134u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089CA134u) goto L_089CA134;
    return;
L_089CA134:
    ctx.gpr[31] = (0x089CA13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089CA13Cu) goto L_089CA13C;
    return;
L_089CA13C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA17C;
      }
      goto L_089CA144;
    }
L_089CA144:
    ctx.gpr[31] = (0x089CA14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089CA14Cu) goto L_089CA14C;
    return;
L_089CA14C:
    ctx.gpr[31] = (0x089CA154u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 356u, 0x08ACD6B4u>(ctx, &aot_mem) && ctx.pc == 0x089CA154u) goto L_089CA154;
    return;
L_089CA154:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA17C;
      }
      goto L_089CA15C;
    }
L_089CA15C:
    ctx.gpr[4] = (0u | 148u);
    ctx.gpr[31] = (0x089CA168u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CAC28;
L_089CA168:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x089CA174u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CAC28;
L_089CA174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA1AC;
      }
      goto L_089CA17C;
    }
L_089CA17C:
    ctx.gpr[31] = (0x089CA184u);
    ctx.gpr[4] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089CA184u) goto L_089CA184;
    return;
L_089CA184:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2972)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA1AC;
      }
      goto L_089CA1A4;
    }
L_089CA1A4:
    ctx.gpr[31] = (0x089CA1ACu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089CA1ACu) goto L_089CA1AC;
    return;
L_089CA1AC:
    ctx.gpr[31] = (0x089CA1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089CA1B4u) goto L_089CA1B4;
    return;
L_089CA1B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA200;
      }
      goto L_089CA1BC;
    }
L_089CA1BC:
    ctx.gpr[31] = (0x089CA1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089CA1C4u) goto L_089CA1C4;
    return;
L_089CA1C4:
    ctx.gpr[31] = (0x089CA1CCu);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 364u, 0x08ACD700u>(ctx, &aot_mem) && ctx.pc == 0x089CA1CCu) goto L_089CA1CC;
    return;
L_089CA1CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA200;
      }
      goto L_089CA1D4;
    }
L_089CA1D4:
    ctx.gpr[4] = (0u | 162u);
    ctx.gpr[31] = (0x089CA1E0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CAC28;
L_089CA1E0:
    ctx.gpr[4] = (0u | 163u);
    ctx.gpr[31] = (0x089CA1ECu);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CAC28;
L_089CA1EC:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x089CA1F8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CAC28;
L_089CA1F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA250;
      }
      goto L_089CA200;
    }
L_089CA200:
    ctx.gpr[31] = (0x089CA208u);
    ctx.gpr[4] = (0u | 163u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089CA208u) goto L_089CA208;
    return;
L_089CA208:
    ctx.gpr[31] = (0x089CA210u);
    ctx.gpr[4] = (0u | 162u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089CA210u) goto L_089CA210;
    return;
L_089CA210:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3272)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA250;
      }
      goto L_089CA230;
    }
L_089CA230:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3252)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA250;
      }
      goto L_089CA248;
    }
L_089CA248:
    ctx.gpr[31] = (0x089CA250u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089CA250u) goto L_089CA250;
    return;
L_089CA250:
    ctx.gpr[31] = (0x089CA258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089CA258u) goto L_089CA258;
    return;
L_089CA258:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA28C;
      }
      goto L_089CA260;
    }
L_089CA260:
    ctx.gpr[31] = (0x089CA268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089CA268u) goto L_089CA268;
    return;
L_089CA268:
    ctx.gpr[31] = (0x089CA270u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 372u, 0x08ACD74Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA270u) goto L_089CA270;
    return;
L_089CA270:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089CA28C;
      }
      goto L_089CA278;
    }
L_089CA278:
    ctx.gpr[4] = (0u | 199u);
    ctx.gpr[31] = (0x089CA284u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089CAC28;
L_089CA284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
      if (branch_taken) {
          goto L_089CA298;
      }
      goto L_089CA28C;
    }
L_089CA28C:
    ctx.gpr[31] = (0x089CA294u);
    ctx.gpr[4] = (0u | 199u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089CA294u) goto L_089CA294;
    return;
L_089CA294:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    goto L_089CA298;
L_089CA298:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA2B8;
      }
      goto L_089CA2A0;
    }
L_089CA2A0:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-27988)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_089CA2C0;
      }
      goto L_089CA2B0;
    }
L_089CA2B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA408;
      }
      goto L_089CA2B8;
    }
L_089CA2B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA410;
      }
      goto L_089CA2C0;
    }
L_089CA2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28036)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA410;
      }
      goto L_089CA2E4;
    }
L_089CA2E4:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089CA2F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA2F0u) goto L_089CA2F0;
    return;
L_089CA2F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089CA304u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 390u, 0x088724BCu>(ctx, &aot_mem) && ctx.pc == 0x089CA304u) goto L_089CA304;
    return;
L_089CA304:
    ctx.gpr[20] = (2277u << 16u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5488));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    goto L_089CA320;
L_089CA320:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA364;
      }
      goto L_089CA330;
    }
L_089CA330:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA344;
      }
      goto L_089CA338;
    }
L_089CA338:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) > 0;
    // nop
      if (branch_taken) {
          goto L_089CA35C;
      }
      goto L_089CA344;
    }
L_089CA344:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089CA364;
      }
      goto L_089CA34C;
    }
L_089CA34C:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(34)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089CA364;
      }
      goto L_089CA35C;
    }
L_089CA35C:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    goto L_089CA364;
L_089CA364:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CA320;
      }
      goto L_089CA378;
    }
L_089CA378:
    ctx.gpr[31] = (0x089CA380u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 231u, 0x089ED8D0u>(ctx, &aot_mem) && ctx.pc == 0x089CA380u) goto L_089CA380;
    return;
L_089CA380:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_089CA3F8;
      }
      goto L_089CA3A4;
    }
L_089CA3A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA3C8;
      }
      goto L_089CA3B4;
    }
L_089CA3B4:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089CA3C8;
L_089CA3C8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7060)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(70))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[16] << (ctx.gpr[6] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA3F8;
      }
      goto L_089CA3E8;
    }
L_089CA3E8:
    ctx.gpr[31] = (0x089CA3F0u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089CAC28;
L_089CA3F0:
    ctx.gpr[4] = (0u | 350u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-27988), ctx.gpr[4]);
    goto L_089CA3F8;
L_089CA3F8:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089CA410;
      }
      goto L_089CA408;
    }
L_089CA408:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-27988), ctx.gpr[4]);
    goto L_089CA410;
L_089CA410:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA430:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    ctx.gpr[23] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-28036)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[20] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[18] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[30] = (2230u << 16u);
      if (branch_taken) {
          goto L_089CA514;
      }
      goto L_089CA4A0;
    }
L_089CA4A0:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[23] = (0u | 1u);
    goto L_089CA4A8;
L_089CA4A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004)));
    ctx.gpr[8] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[18]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7552)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CA4D0;
      }
      goto L_089CA4C4;
    }
L_089CA4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7456)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA4F8;
      }
      goto L_089CA4D0;
    }
L_089CA4D0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089CA4E0;
      }
      goto L_089CA4DC;
    }
L_089CA4DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004), 0u);
    goto L_089CA4E0;
L_089CA4E0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA4A8;
      }
      goto L_089CA4F0;
    }
L_089CA4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CA4F8;
L_089CA4F8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089CA678;
      }
      goto L_089CA514;
    }
L_089CA514:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7552)));
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    goto L_089CA534;
L_089CA534:
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    ctx.gpr[8] = (ctx.gpr[7] << 4u);
      if (branch_taken) {
          goto L_089CA584;
      }
      goto L_089CA540;
    }
L_089CA540:
    ctx.gpr[11] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(13)));
    ctx.gpr[8] = (ctx.gpr[8] & 131u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089CA584;
      }
      goto L_089CA55C;
    }
L_089CA55C:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA570;
      }
      goto L_089CA564;
    }
L_089CA564:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_089CA570;
L_089CA570:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA584;
      }
      goto L_089CA57C;
    }
L_089CA57C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA5C4;
      }
      goto L_089CA584;
    }
L_089CA584:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089CA594;
      }
      goto L_089CA590;
    }
L_089CA590:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004), 0u);
    goto L_089CA594;
L_089CA594:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA5AC;
      }
      goto L_089CA5A4;
    }
L_089CA5A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089CA5C4;
      }
      goto L_089CA5AC;
    }
L_089CA5AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004)));
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7552)));
      if (branch_taken) {
          goto L_089CA534;
      }
      goto L_089CA5C4;
    }
L_089CA5C4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CA628;
      }
      goto L_089CA5CC;
    }
L_089CA5CC:
    ctx.gpr[31] = (0x089CA5D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089CA5D4u) goto L_089CA5D4;
    return;
L_089CA5D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_089CA5F8;
      }
      goto L_089CA5E8;
    }
L_089CA5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CA5F8;
L_089CA5F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(69))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CA610;
      }
      goto L_089CA604;
    }
L_089CA604:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089CA610u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 326u, 0x089EDFF4u>(ctx, &aot_mem) && ctx.pc == 0x089CA610u) goto L_089CA610;
    return;
L_089CA610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089CA678;
      }
      goto L_089CA628;
    }
L_089CA628:
    ctx.gpr[31] = (0x089CA630u);
    // nop
    goto L_089CA708;
L_089CA630:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CA670;
      }
      goto L_089CA63C;
    }
L_089CA63C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089CA678;
      }
      goto L_089CA670;
    }
L_089CA670:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6D8;
      }
      goto L_089CA678;
    }
L_089CA678:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-7552), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CA698;
      }
      goto L_089CA694;
    }
L_089CA694:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-6004), 0u);
    goto L_089CA698;
L_089CA698:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6B8;
      }
      goto L_089CA6A4;
    }
L_089CA6A4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CA6B8;
L_089CA6B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(69))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089CA6D4;
      }
      goto L_089CA6C4;
    }
L_089CA6C4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(72))))));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089CA6D4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 323u, 0x089EDF80u>(ctx, &aot_mem) && ctx.pc == 0x089CA6D4u) goto L_089CA6D4;
    return;
L_089CA6D4:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
    goto L_089CA6D8;
L_089CA6D8:
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
L_089CA708:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_089CA720;
L_089CA720:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7552)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CA744;
      }
      goto L_089CA72C;
    }
L_089CA72C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CA720;
      }
      goto L_089CA73C;
    }
L_089CA73C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA74C;
      }
      goto L_089CA744;
    }
L_089CA744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089CA74C;
      }
      goto L_089CA74C;
    }
L_089CA74C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA754:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5996)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5992)));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089CA9E0;
      }
      goto L_089CA7CC;
    }
L_089CA7CC:
    ctx.gpr[22] = (2227u << 16u);
    goto L_089CA7D0;
L_089CA7D0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA8E0;
      }
      goto L_089CA7DC;
    }
L_089CA7DC:
    ctx.gpr[30] = (0u | 2u);
    goto L_089CA7E0;
L_089CA7E0:
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[30]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CA7F4;
      }
      goto L_089CA7EC;
    }
L_089CA7EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA8C4;
      }
      goto L_089CA7F4;
    }
L_089CA7F4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA808;
      }
      goto L_089CA800;
    }
L_089CA800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CA8D8;
      }
      goto L_089CA808;
    }
L_089CA808:
    ctx.gpr[23] = (0u - ctx.gpr[30]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[21] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA8C4;
      }
      goto L_089CA818;
    }
L_089CA818:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CA82C;
      }
      goto L_089CA824;
    }
L_089CA824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA8B4;
      }
      goto L_089CA82C;
    }
L_089CA82C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
        goto L_089CA840;
    }
    goto L_089CA838;
L_089CA838:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5996)));
      if (branch_taken) {
          goto L_089CA8C4;
      }
      goto L_089CA840;
    }
L_089CA840:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[31] = (0x089CA870u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[30]);
    goto L_089C8C28;
L_089CA870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5996)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5992)));
    ctx.gpr[31] = (0x089CA888u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C8CA4;
L_089CA888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[31] = (0x089CA898u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_089C8C28;
L_089CA898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[31] = (0x089CA8A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    goto L_089C8C28;
L_089CA8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5992)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089CA8B4;
L_089CA8B4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA818;
      }
      goto L_089CA8C0;
    }
L_089CA8C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5996)));
    goto L_089CA8C4;
L_089CA8C4:
    ctx.gpr[30] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[30]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA7E0;
      }
      goto L_089CA8D4;
    }
L_089CA8D4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_089CA8D8;
L_089CA8D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5996), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089CA9D8;
      }
      goto L_089CA8E0;
    }
L_089CA8E0:
    ctx.gpr[23] = (0u | 2u);
    goto L_089CA8E4;
L_089CA8E4:
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CA8F8;
      }
      goto L_089CA8F0;
    }
L_089CA8F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA9D4;
      }
      goto L_089CA8F8;
    }
L_089CA8F8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA90C;
      }
      goto L_089CA904;
    }
L_089CA904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA9C0;
      }
      goto L_089CA90C;
    }
L_089CA90C:
    ctx.gpr[21] = (0u - ctx.gpr[23]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA9C0;
      }
      goto L_089CA91C;
    }
L_089CA91C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CA930;
      }
      goto L_089CA928;
    }
L_089CA928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA9B0;
      }
      goto L_089CA930;
    }
L_089CA930:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
        goto L_089CA944;
    }
    goto L_089CA93C;
L_089CA93C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5996)));
      if (branch_taken) {
          goto L_089CA9C0;
      }
      goto L_089CA944;
    }
L_089CA944:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[31] = (0x089CA970u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[30]);
    goto L_089C8C28;
L_089CA970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5996)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5992)));
    ctx.gpr[31] = (0x089CA988u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C8CA4;
L_089CA988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[31] = (0x089CA998u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_089C8C28;
L_089CA998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[31] = (0x089CA9A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    goto L_089C8C28;
L_089CA9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5992)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089CA9B0;
L_089CA9B0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA91C;
      }
      goto L_089CA9BC;
    }
L_089CA9BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5996)));
    goto L_089CA9C0;
L_089CA9C0:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[23]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA8E4;
      }
      goto L_089CA9D0;
    }
L_089CA9D0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089CA9D4;
L_089CA9D4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5996), ctx.gpr[5]);
    goto L_089CA9D8;
L_089CA9D8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089CA7D0;
      }
      goto L_089CA9E0;
    }
L_089CA9E0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[16] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CABF8;
      }
      goto L_089CA9E8;
    }
L_089CA9E8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAAF4;
      }
      goto L_089CA9F4;
    }
L_089CA9F4:
    ctx.gpr[23] = (0u | 2u);
    goto L_089CA9F8;
L_089CA9F8:
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CAA0C;
      }
      goto L_089CAA04;
    }
L_089CAA04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CAAD8;
      }
      goto L_089CAA0C;
    }
L_089CAA0C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAA20;
      }
      goto L_089CAA18;
    }
L_089CAA18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CAAEC;
      }
      goto L_089CAA20;
    }
L_089CAA20:
    ctx.gpr[22] = (0u - ctx.gpr[23]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CAAD8;
      }
      goto L_089CAA30;
    }
L_089CAA30:
    ctx.gpr[4] = (ctx.gpr[21] << 5u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[5] << 2u);
    ctx.gpr[21] = (ctx.gpr[21] - ctx.gpr[4]);
    goto L_089CAA40;
L_089CAA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5996)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CAA58;
      }
      goto L_089CAA50;
    }
L_089CAA50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CAAC8;
      }
      goto L_089CAA58;
    }
L_089CAA58:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAA6C;
      }
      goto L_089CAA64;
    }
L_089CAA64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5992)));
      if (branch_taken) {
          goto L_089CAAD8;
      }
      goto L_089CAA6C;
    }
L_089CAA6C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[30] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x089CAA8Cu);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[30]);
    goto L_089C8C28;
L_089CAA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5996)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5992)));
    ctx.gpr[31] = (0x089CAAA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C8CA4;
L_089CAAA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[31] = (0x089CAAB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_089C8C28;
L_089CAAB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[31] = (0x089CAAC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    goto L_089C8C28;
L_089CAAC4:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089CAAC8;
L_089CAAC8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAA40;
      }
      goto L_089CAAD4;
    }
L_089CAAD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5992)));
    goto L_089CAAD8;
L_089CAAD8:
    ctx.gpr[23] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA9F8;
      }
      goto L_089CAAE8;
    }
L_089CAAE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_089CAAEC;
L_089CAAEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5992), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CABF0;
      }
      goto L_089CAAF4;
    }
L_089CAAF4:
    ctx.gpr[19] = (0u | 2u);
    goto L_089CAAF8;
L_089CAAF8:
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CAB0C;
      }
      goto L_089CAB04;
    }
L_089CAB04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CABEC;
      }
      goto L_089CAB0C;
    }
L_089CAB0C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB20;
      }
      goto L_089CAB18;
    }
L_089CAB18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CABD8;
      }
      goto L_089CAB20;
    }
L_089CAB20:
    ctx.gpr[21] = (0u - ctx.gpr[19]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CABD8;
      }
      goto L_089CAB30;
    }
L_089CAB30:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[4]);
    goto L_089CAB40;
L_089CAB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5996)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CAB58;
      }
      goto L_089CAB50;
    }
L_089CAB50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CABC8;
      }
      goto L_089CAB58;
    }
L_089CAB58:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB6C;
      }
      goto L_089CAB64;
    }
L_089CAB64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5992)));
      if (branch_taken) {
          goto L_089CABD8;
      }
      goto L_089CAB6C;
    }
L_089CAB6C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[23] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x089CAB8Cu);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[23]);
    goto L_089C8C28;
L_089CAB8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5996)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5992)));
    ctx.gpr[31] = (0x089CABA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089C8CA4;
L_089CABA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089CABB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_089C8C28;
L_089CABB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x089CABC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    goto L_089C8C28;
L_089CABC4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089CABC8;
L_089CABC8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB40;
      }
      goto L_089CABD4;
    }
L_089CABD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5992)));
    goto L_089CABD8;
L_089CABD8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAAF8;
      }
      goto L_089CABE8;
    }
L_089CABE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CABEC;
L_089CABEC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5992), ctx.gpr[4]);
    goto L_089CABF0;
L_089CABF0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089CA9E8;
      }
      goto L_089CABF8;
    }
L_089CABF8:
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
L_089CAC28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-29308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4900 ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089CAC8C;
      }
      goto L_089CAC5C;
    }
L_089CAC5C:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CAC8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8884));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 468u, 0x089C6040u>(ctx, &aot_mem) && ctx.pc == 0x089CAC8Cu) goto L_089CAC8C;
    return;
L_089CAC8C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_089CACE8;
      }
      goto L_089CAC94;
    }
L_089CAC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089CACB0;
    }
    goto L_089CACA0;
L_089CACA0:
    ctx.gpr[31] = (0x089CACA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x089CACA8u) goto L_089CACA8;
    return;
L_089CACA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089CACB0;
L_089CACB0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CACE8;
      }
      goto L_089CACC0;
    }
L_089CACC0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089CACD8;
      }
      goto L_089CACC8;
    }
L_089CACC8:
    ctx.gpr[31] = (0x089CACD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x089CACD0u) goto L_089CACD0;
    return;
L_089CACD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089CACD8;
L_089CACD8:
    ctx.gpr[31] = (0x089CACE0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 86u, 0x0895076Cu>(ctx, &aot_mem) && ctx.pc == 0x089CACE0u) goto L_089CACE0;
    return;
L_089CACE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAD1C;
      }
      goto L_089CACE8;
    }
L_089CACE8:
    ctx.gpr[18] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_089CAD24;
      }
      goto L_089CAD14;
    }
L_089CAD14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAD64;
      }
      goto L_089CAD1C;
    }
L_089CAD1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAF44;
      }
      goto L_089CAD24;
    }
L_089CAD24:
    ctx.gpr[8] = (ctx.gpr[17] & 8u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] & 8u);
      if (branch_taken) {
          goto L_089CAD74;
      }
      goto L_089CAD30;
    }
L_089CAD30:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAD74;
      }
      goto L_089CAD38;
    }
L_089CAD38:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6000)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6000), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
      if (branch_taken) {
          goto L_089CAD74;
      }
      goto L_089CAD64;
    }
L_089CAD64:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAD74;
      }
      goto L_089CAD6C;
    }
L_089CAD6C:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[17] = (ctx.gpr[17] & ctx.gpr[8]);
    goto L_089CAD74;
L_089CAD74:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089CAE44;
      }
      goto L_089CAD90;
    }
L_089CAD90:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADFC;
      }
      goto L_089CADA0;
    }
L_089CADA0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADFC;
      }
      goto L_089CADA8;
    }
L_089CADA8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089CADD0;
      }
      goto L_089CADBC;
    }
L_089CADBC:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089CADD0;
L_089CADD0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_089CADEC;
      }
      goto L_089CADDC;
    }
L_089CADDC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 4u);
      if (branch_taken) {
          goto L_089CADEC;
      }
      goto L_089CADE4;
    }
L_089CADE4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089CADFC;
      }
      goto L_089CADEC;
    }
L_089CADEC:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_089CADFC;
L_089CADFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAE3C;
      }
      goto L_089CAE08;
    }
L_089CAE08:
    ctx.gpr[31] = (0x089CAE10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 355u, 0x089C5740u>(ctx, &aot_mem) && ctx.pc == 0x089CAE10u) goto L_089CAE10;
    return;
L_089CAE10:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] & 131u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAE3C;
      }
      goto L_089CAE28;
    }
L_089CAE28:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7428));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089CAE3Cu);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 354u, 0x089C5724u>(ctx, &aot_mem) && ctx.pc == 0x089CAE3Cu) goto L_089CAE3C;
    return;
L_089CAE3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAF44;
      }
      goto L_089CAE44;
    }
L_089CAE44:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089CAE68;
      }
      goto L_089CAE50;
    }
L_089CAE50:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CAE68;
      }
      goto L_089CAE58;
    }
L_089CAE58:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAE70;
      }
      goto L_089CAE60;
    }
L_089CAE60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAF30;
      }
      goto L_089CAE68;
    }
L_089CAE68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAF44;
      }
      goto L_089CAE70;
    }
L_089CAE70:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAEEC;
      }
      goto L_089CAE78;
    }
L_089CAE78:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089CAEA0;
      }
      goto L_089CAE8C;
    }
L_089CAE8C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CAEA0;
L_089CAEA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CAEB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4900));
    goto L_089CAC28;
L_089CAEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CAEC8u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAEC8u) goto L_089CAEC8;
    return;
L_089CAEC8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CAEE4;
      }
      goto L_089CAED8;
    }
L_089CAED8:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(6115));
    ctx.gpr[31] = (0x089CAEE4u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089CAC28;
L_089CAEE4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[18]);
    goto L_089CAEEC;
L_089CAEEC:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7388));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089CAF00u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 354u, 0x089C5724u>(ctx, &aot_mem) && ctx.pc == 0x089CAF00u) goto L_089CAF00;
    return;
L_089CAF00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7780)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7780), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089CAF30;
      }
      goto L_089CAF20;
    }
L_089CAF20:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6000)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6000), ctx.gpr[6]);
    goto L_089CAF30;
L_089CAF30:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_089CAF44;
L_089CAF44:
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
L_089CAF64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-27980)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (2230u << 16u);
      if (branch_taken) {
          goto L_089CAFD8;
      }
      goto L_089CAFAC;
    }
L_089CAFAC:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-27980), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (2u << 16u);
    ctx.gpr[18] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7388));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5768));
    ctx.gpr[21] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2u << 16u);
      if (branch_taken) {
          goto L_089CAFE0;
      }
      goto L_089CAFD0;
    }
L_089CAFD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAFE0;
      }
      goto L_089CAFD8;
    }
L_089CAFD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089CB268;
      }
      goto L_089CAFE0;
    }
L_089CAFE0:
    ctx.gpr[31] = (0x089CAFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 554u, 0x089C65B4u>(ctx, &aot_mem) && ctx.pc == 0x089CAFE8u) goto L_089CAFE8;
    return;
L_089CAFE8:
    ctx.gpr[31] = (0x089CAFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 340u, 0x08A8A334u>(ctx, &aot_mem) && ctx.pc == 0x089CAFF0u) goto L_089CAFF0;
    return;
L_089CAFF0:
    ctx.gpr[31] = (0x089CAFF8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089C9878;
L_089CAFF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7364)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089CB238;
      }
      goto L_089CB010;
    }
L_089CB010:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8812));
    ctx.gpr[22] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[23] = (2230u << 16u);
    goto L_089CB034;
L_089CB034:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089CB040u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 485u, 0x089CDD0Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB040u) goto L_089CB040;
    return;
L_089CB040:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CB058;
      }
      goto L_089CB050;
    }
L_089CB050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB238;
      }
      goto L_089CB058;
    }
L_089CB058:
    ctx.gpr[16] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089CB078u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 355u, 0x089C5740u>(ctx, &aot_mem) && ctx.pc == 0x089CB078u) goto L_089CB078;
    return;
L_089CB078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7780)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-7780), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5768), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[7] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_089CB0C0;
      }
      goto L_089CB0A4;
    }
L_089CB0A4:
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6000)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-6000), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    goto L_089CB0C0;
L_089CB0C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089CB0D0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 357u, 0x089C5768u>(ctx, &aot_mem) && ctx.pc == 0x089CB0D0u) goto L_089CB0D0;
    return;
L_089CB0D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB174;
      }
      goto L_089CB0D8;
    }
L_089CB0D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089CB0ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CB0ECu) goto L_089CB0EC;
    return;
L_089CB0EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089CB0F8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB0F8u) goto L_089CB0F8;
    return;
L_089CB0F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[31] = (0x089CB108u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x089CB108u) goto L_089CB108;
    return;
L_089CB108:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[31] = (0x089CB11Cu);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x089CB11Cu) goto L_089CB11C;
    return;
L_089CB11C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089CB138u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 325u, 0x08A8A210u>(ctx, &aot_mem) && ctx.pc == 0x089CB138u) goto L_089CB138;
    return;
L_089CB138:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_089CB13C;
L_089CB13C:
    ctx.gpr[31] = (0x089CB144u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 341u, 0x08A8A340u>(ctx, &aot_mem) && ctx.pc == 0x089CB144u) goto L_089CB144;
    return;
L_089CB144:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB154;
      }
      goto L_089CB14C;
    }
L_089CB14C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB180;
      }
      goto L_089CB154;
    }
L_089CB154:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[31] = (0x089CB16Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 325u, 0x08A8A210u>(ctx, &aot_mem) && ctx.pc == 0x089CB16Cu) goto L_089CB16C;
    return;
L_089CB16C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089CB13C;
      }
      goto L_089CB174;
    }
L_089CB174:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089CB214;
      }
      goto L_089CB180;
    }
L_089CB180:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089CB194u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 529u, 0x089CE054u>(ctx, &aot_mem) && ctx.pc == 0x089CB194u) goto L_089CB194;
    return;
L_089CB194:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB1B4;
      }
      goto L_089CB19C;
    }
L_089CB19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089CB1A8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CB1A8u) goto L_089CB1A8;
    return;
L_089CB1A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089CB1B4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB1B4u) goto L_089CB1B4;
    return;
L_089CB1B4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089CB214;
      }
      goto L_089CB1C0;
    }
L_089CB1C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB1E8;
      }
      goto L_089CB1D4;
    }
L_089CB1D4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CB1E8;
L_089CB1E8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_089CB20C;
      }
      goto L_089CB1FC;
    }
L_089CB1FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_089CB20C;
      }
      goto L_089CB204;
    }
L_089CB204:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CB214;
      }
      goto L_089CB20C;
    }
L_089CB20C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089CB214;
L_089CB214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7388));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7364)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CB034;
      }
      goto L_089CB238;
    }
L_089CB238:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089CB244;
L_089CB244:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CB244;
      }
      goto L_089CB258;
    }
L_089CB258:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-27980), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (0u | 1u);
    goto L_089CB268;
L_089CB268:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB298:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7904)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5792));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (2277u << 16u);
        goto L_089CB38C;
    }
    goto L_089CB304;
L_089CB304:
    ctx.gpr[5] = (2277u << 16u);
    goto L_089CB308;
L_089CB308:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5792));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2277u << 16u);
      if (branch_taken) {
          goto L_089CB358;
      }
      goto L_089CB324;
    }
L_089CB324:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5792));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089CB3B0;
      }
      goto L_089CB358;
    }
L_089CB358:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5792));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2277u << 16u);
      if (branch_taken) {
          goto L_089CB308;
      }
      goto L_089CB388;
    }
L_089CB388:
    ctx.gpr[4] = (2277u << 16u);
    goto L_089CB38C;
L_089CB38C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5792));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    goto L_089CB3B0;
L_089CB3B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5792));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_089CB648;
    }
    goto L_089CB414;
L_089CB414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089CB418;
L_089CB418:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB448;
      }
      goto L_089CB43C;
    }
L_089CB43C:
    ctx.gpr[31] = (0x089CB444u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 131u, 0x08B04994u>(ctx, &aot_mem) && ctx.pc == 0x089CB444u) goto L_089CB444;
    return;
L_089CB444:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089CB448;
L_089CB448:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x089CB460u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 794u, 0x08AA3C08u>(ctx, &aot_mem) && ctx.pc == 0x089CB460u) goto L_089CB460;
    return;
L_089CB460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089CB5D8;
      }
      goto L_089CB46C;
    }
L_089CB46C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x089CB48Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5792));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 86u, 0x08B045A4u>(ctx, &aot_mem) && ctx.pc == 0x089CB48Cu) goto L_089CB48C;
    return;
L_089CB48C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_089CB4C0;
    }
    goto L_089CB49C;
L_089CB49C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_089CB4B4;
    }
    goto L_089CB4A8;
L_089CB4A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089CB4B4;
L_089CB4B4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CB5D8;
      }
      goto L_089CB4C0;
    }
L_089CB4C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089CB4FC;
      }
      goto L_089CB4F4;
    }
L_089CB4F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
      if (branch_taken) {
          goto L_089CB500;
      }
      goto L_089CB4FC;
    }
L_089CB4FC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(204));
    goto L_089CB500;
L_089CB500:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB538;
      }
      goto L_089CB514;
    }
L_089CB514:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[31] = (0x089CB520u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x089CB520u) goto L_089CB520;
    return;
L_089CB520:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
      if (branch_taken) {
          goto L_089CB538;
      }
      goto L_089CB52C;
    }
L_089CB52C:
    ctx.gpr[31] = (0x089CB534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x089CB534u) goto L_089CB534;
    return;
L_089CB534:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_089CB538;
L_089CB538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089CB54C;
      }
      goto L_089CB544;
    }
L_089CB544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089CB560;
      }
      goto L_089CB54C;
    }
L_089CB54C:
    ctx.gpr[21] = (ctx.gpr[17] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CB55Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x089CB55Cu) goto L_089CB55C;
    return;
L_089CB55C:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[21]);
    goto L_089CB560;
L_089CB560:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
        goto L_089CB584;
    }
    goto L_089CB56C;
L_089CB56C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CB56C;
      }
      goto L_089CB580;
    }
L_089CB580:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089CB584;
L_089CB584:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089CB5B0;
      }
      goto L_089CB58C;
    }
L_089CB58C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_089CB5B0;
      }
      goto L_089CB598;
    }
L_089CB598:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CB5A8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x089CB5A8u) goto L_089CB5A8;
    return;
L_089CB5A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_089CB5B0;
      }
      goto L_089CB5B0;
    }
L_089CB5B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089CB5C4;
      }
      goto L_089CB5BC;
    }
L_089CB5BC:
    ctx.gpr[31] = (0x089CB5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x089CB5C4u) goto L_089CB5C4;
    return;
L_089CB5C4:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_089CB5D8;
L_089CB5D8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x089CB5E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 794u, 0x08AA3C08u>(ctx, &aot_mem) && ctx.pc == 0x089CB5E8u) goto L_089CB5E8;
    return;
L_089CB5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5792));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_089CB418;
    }
    goto L_089CB644;
L_089CB644:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089CB648;
L_089CB648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5792));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    ctx.gpr[31] = (0x089CB67Cu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 98u, 0x08B04678u>(ctx, &aot_mem) && ctx.pc == 0x089CB67Cu) goto L_089CB67C;
    return;
L_089CB67C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB6AC;
      }
      goto L_089CB684;
    }
L_089CB684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[31] = (0x089CB6A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5792));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 73u, 0x08B04438u>(ctx, &aot_mem) && ctx.pc == 0x089CB6A0u) goto L_089CB6A0;
    return;
L_089CB6A0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CB684;
      }
      goto L_089CB6AC;
    }
L_089CB6AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2624));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CB910;
      }
      goto L_089CB6C0;
    }
L_089CB6C0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (25455u << 16u);
    ctx.gpr[18] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27698));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CB810;
      }
      goto L_089CB6E4;
    }
L_089CB6E4:
    ctx.gpr[5] = (24942u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26989));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (116u << 16u);
      if (branch_taken) {
          goto L_089CB824;
      }
      goto L_089CB6F4;
    }
L_089CB6F4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25976));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (109u << 16u);
      if (branch_taken) {
          goto L_089CB720;
      }
      goto L_089CB700;
    }
L_089CB700:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25708));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CB838;
      }
      goto L_089CB70C;
    }
L_089CB70C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089CB718u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8780));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CB718u) goto L_089CB718;
    return;
L_089CB718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB83C;
      }
      goto L_089CB720;
    }
L_089CB720:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 1200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB808;
      }
      goto L_089CB730;
    }
L_089CB730:
    ctx.gpr[4] = (2227u << 16u);
    goto L_089CB734;
L_089CB734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CB758;
      }
      goto L_089CB750;
    }
L_089CB750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB770;
      }
      goto L_089CB758;
    }
L_089CB758:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089CB770;
L_089CB770:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CB7F8;
      }
      goto L_089CB780;
    }
L_089CB780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CB7A4;
      }
      goto L_089CB79C;
    }
L_089CB79C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB7BC;
      }
      goto L_089CB7A4;
    }
L_089CB7A4:
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
    ctx.gpr[5] = (ctx.gpr[22] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089CB7BC;
L_089CB7BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CB7F8;
      }
      goto L_089CB7D0;
    }
L_089CB7D0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089CB7E0u);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8760));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 577u, 0x0892F95Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB7E0u) goto L_089CB7E0;
    return;
L_089CB7E0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089CB7F0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CB7F0u) goto L_089CB7F0;
    return;
L_089CB7F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089CB808;
      }
      goto L_089CB7F8;
    }
L_089CB7F8:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 1200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CB734;
      }
      goto L_089CB808;
    }
L_089CB808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB83C;
      }
      goto L_089CB810;
    }
L_089CB810:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089CB81Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8732));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CB81Cu) goto L_089CB81C;
    return;
L_089CB81C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB83C;
      }
      goto L_089CB824;
    }
L_089CB824:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089CB830u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8708));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 333u, 0x089C55D8u>(ctx, &aot_mem) && ctx.pc == 0x089CB830u) goto L_089CB830;
    return;
L_089CB830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB83C;
      }
      goto L_089CB838;
    }
L_089CB838:
    ctx.gpr[20] = (0u | 0u);
    goto L_089CB83C;
L_089CB83C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB84C;
      }
      goto L_089CB844;
    }
L_089CB844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB900;
      }
      goto L_089CB84C;
    }
L_089CB84C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CB8A4;
      }
      goto L_089CB86C;
    }
L_089CB86C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB88C;
      }
      goto L_089CB878;
    }
L_089CB878:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_089CB88C;
L_089CB88C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CB86C;
      }
      goto L_089CB8A4;
    }
L_089CB8A4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CB900;
      }
      goto L_089CB8B0;
    }
L_089CB8B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_089CB8D4;
      }
      goto L_089CB8CC;
    }
L_089CB8CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB8EC;
      }
      goto L_089CB8D4;
    }
L_089CB8D4:
    ctx.gpr[4] = (ctx.gpr[21] << 5u);
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28096)));
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_089CB8EC;
L_089CB8EC:
    ctx.gpr[5] = (2204u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089CB900u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22244));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 56u, 0x08A0CDE0u>(ctx, &aot_mem) && ctx.pc == 0x089CB900u) goto L_089CB900;
    return;
L_089CB900:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CB6C0;
      }
      goto L_089CB910;
    }
L_089CB910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089CB930;
      }
      goto L_089CB91C;
    }
L_089CB91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB930;
      }
      goto L_089CB928;
    }
L_089CB928:
    ctx.gpr[31] = (0x089CB930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x089CB930u) goto L_089CB930;
    return;
L_089CB930:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB958:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15036)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089CBA68;
      }
      goto L_089CB9A0;
    }
L_089CB9A0:
    ctx.gpr[21] = (ctx.gpr[22] << 5u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2229u << 16u);
    goto L_089CB9B8;
L_089CB9B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089CB9D8;
    }
    goto L_089CB9D0;
L_089CB9D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB9DC;
      }
      goto L_089CB9D8;
    }
L_089CB9D8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_089CB9DC;
L_089CB9DC:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBA54;
      }
      goto L_089CB9E8;
    }
L_089CB9E8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089CBA54;
      }
      goto L_089CB9F4;
    }
L_089CB9F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBA18;
      }
      goto L_089CBA08;
    }
L_089CBA08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089CBA18;
L_089CBA18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBA54;
      }
      goto L_089CBA28;
    }
L_089CBA28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089CBA40u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBA40u) goto L_089CBA40;
    return;
L_089CBA40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBA54;
      }
      goto L_089CBA4C;
    }
L_089CBA4C:
    ctx.gpr[31] = (0x089CBA54u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089CBA54u) goto L_089CBA54;
    return;
L_089CBA54:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089CB9B8;
      }
      goto L_089CBA68;
    }
L_089CBA68:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089CBB48;
      }
      goto L_089CBA80;
    }
L_089CBA80:
    ctx.gpr[21] = (ctx.gpr[22] << 5u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2229u << 16u);
    goto L_089CBA98;
L_089CBA98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089CBAB8;
    }
    goto L_089CBAB0;
L_089CBAB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBABC;
      }
      goto L_089CBAB8;
    }
L_089CBAB8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_089CBABC;
L_089CBABC:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBB34;
      }
      goto L_089CBAC8;
    }
L_089CBAC8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089CBB34;
      }
      goto L_089CBAD4;
    }
L_089CBAD4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBAF8;
      }
      goto L_089CBAE8;
    }
L_089CBAE8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089CBAF8;
L_089CBAF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBB34;
      }
      goto L_089CBB08;
    }
L_089CBB08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089CBB20u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBB20u) goto L_089CBB20;
    return;
L_089CBB20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBB34;
      }
      goto L_089CBB2C;
    }
L_089CBB2C:
    ctx.gpr[31] = (0x089CBB34u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089CBB34u) goto L_089CBB34;
    return;
L_089CBB34:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089CBA98;
      }
      goto L_089CBB48;
    }
L_089CBB48:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089CBC3C;
      }
      goto L_089CBB60;
    }
L_089CBB60:
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[19] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[23] = (2229u << 16u);
    goto L_089CBB7C;
L_089CBB7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CBB9C;
    }
    goto L_089CBB94;
L_089CBB94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBBA0;
      }
      goto L_089CBB9C;
    }
L_089CBB9C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_089CBBA0;
L_089CBBA0:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBC28;
      }
      goto L_089CBBAC;
    }
L_089CBBAC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(90)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CBC28;
      }
      goto L_089CBBBC;
    }
L_089CBBBC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBBE0;
      }
      goto L_089CBBD0;
    }
L_089CBBD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089CBBE0;
L_089CBBE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBC28;
      }
      goto L_089CBBF0;
    }
L_089CBBF0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CBC28;
      }
      goto L_089CBBFC;
    }
L_089CBBFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089CBC14u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBC14u) goto L_089CBC14;
    return;
L_089CBC14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBC28;
      }
      goto L_089CBC20;
    }
L_089CBC20:
    ctx.gpr[31] = (0x089CBC28u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089CBC28u) goto L_089CBC28;
    return;
L_089CBC28:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-544));
      if (branch_taken) {
          goto L_089CBB7C;
      }
      goto L_089CBC3C;
    }
L_089CBC3C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089CBD1C;
      }
      goto L_089CBC54;
    }
L_089CBC54:
    ctx.gpr[18] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    goto L_089CBC6C;
L_089CBC6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_089CBC8C;
    }
    goto L_089CBC84;
L_089CBC84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBC90;
      }
      goto L_089CBC8C;
    }
L_089CBC8C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_089CBC90;
L_089CBC90:
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBD08;
      }
      goto L_089CBC9C;
    }
L_089CBC9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089CBD08;
      }
      goto L_089CBCA8;
    }
L_089CBCA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBCCC;
      }
      goto L_089CBCBC;
    }
L_089CBCBC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CBCCC;
L_089CBCCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBD08;
      }
      goto L_089CBCDC;
    }
L_089CBCDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089CBCF4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBCF4u) goto L_089CBCF4;
    return;
L_089CBCF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBD08;
      }
      goto L_089CBD00;
    }
L_089CBD00:
    ctx.gpr[31] = (0x089CBD08u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089CBD08u) goto L_089CBD08;
    return;
L_089CBD08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089CBC6C;
      }
      goto L_089CBD1C;
    }
L_089CBD1C:
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
L_089CBD4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15036)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089CBE78;
      }
      goto L_089CBD94;
    }
L_089CBD94:
    ctx.gpr[19] = (ctx.gpr[18] << 5u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[30] = (0u | 13u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[23] = (128u << 16u);
    ctx.gpr[22] = (256u << 16u);
    goto L_089CBDAC;
L_089CBDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CBDCC;
    }
    goto L_089CBDC4;
L_089CBDC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBDD0;
      }
      goto L_089CBDCC;
    }
L_089CBDCC:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_089CBDD0;
L_089CBDD0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE64;
      }
      goto L_089CBDDC;
    }
L_089CBDDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE64;
      }
      goto L_089CBDE8;
    }
L_089CBDE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(91)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CBE00;
      }
      goto L_089CBDF8;
    }
L_089CBDF8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBE08;
      }
      goto L_089CBE00;
    }
L_089CBE00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089CBE08;
      }
      goto L_089CBE08;
    }
L_089CBE08:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE64;
      }
      goto L_089CBE10;
    }
L_089CBE10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
      if (branch_taken) {
          goto L_089CBE28;
      }
      goto L_089CBE20;
    }
L_089CBE20:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE64;
      }
      goto L_089CBE28;
    }
L_089CBE28:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
      if (branch_taken) {
          goto L_089CBE3C;
      }
      goto L_089CBE34;
    }
L_089CBE34:
    ctx.gpr[31] = (0x089CBE3Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089CAC28;
L_089CBE3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE64;
      }
      goto L_089CBE4C;
    }
L_089CBE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CBE64u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBE64u) goto L_089CBE64;
    return;
L_089CBE64:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089CBDAC;
      }
      goto L_089CBE78;
    }
L_089CBE78:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15032)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089CBF70;
      }
      goto L_089CBE90;
    }
L_089CBE90:
    ctx.gpr[19] = (ctx.gpr[18] << 5u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[30] = (0u | 13u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[23] = (128u << 16u);
    ctx.gpr[22] = (256u << 16u);
    goto L_089CBEA8;
L_089CBEA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_089CBEC8;
    }
    goto L_089CBEC0;
L_089CBEC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBECC;
      }
      goto L_089CBEC8;
    }
L_089CBEC8:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_089CBECC;
L_089CBECC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF5C;
      }
      goto L_089CBED8;
    }
L_089CBED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF5C;
      }
      goto L_089CBEE4;
    }
L_089CBEE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(91)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CBEFC;
      }
      goto L_089CBEF4;
    }
L_089CBEF4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBF04;
      }
      goto L_089CBEFC;
    }
L_089CBEFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089CBF04;
      }
      goto L_089CBF04;
    }
L_089CBF04:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF5C;
      }
      goto L_089CBF0C;
    }
L_089CBF0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
      if (branch_taken) {
          goto L_089CBF24;
      }
      goto L_089CBF1C;
    }
L_089CBF1C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF5C;
      }
      goto L_089CBF24;
    }
L_089CBF24:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
      if (branch_taken) {
          goto L_089CBF34;
      }
      goto L_089CBF2C;
    }
L_089CBF2C:
    ctx.gpr[31] = (0x089CBF34u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089CAC28;
L_089CBF34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF5C;
      }
      goto L_089CBF44;
    }
L_089CBF44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CBF5Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBF5Cu) goto L_089CBF5C;
    return;
L_089CBF5C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_089CBEA8;
      }
      goto L_089CBF70;
    }
L_089CBF70:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 5u, 0x089CC04Cu>(ctx, &aot_mem); return;
      }
      goto L_089CBF88;
    }
L_089CBF88:
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[17] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (0u | 13u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_089CBFA4;
L_089CBFA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089CBFC4;
    }
    goto L_089CBFBC;
L_089CBFBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBFC8;
      }
      goto L_089CBFC4;
    }
L_089CBFC4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_089CBFC8;
L_089CBFC8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 4u, 0x089CC038u>(ctx, &aot_mem); return;
      }
      goto L_089CBFD4;
    }
L_089CBFD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 4u, 0x089CC038u>(ctx, &aot_mem); return;
      }
      goto L_089CBFE0;
    }
L_089CBFE0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(91)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CBFF4;
      }
      goto L_089CBFEC;
    }
L_089CBFEC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[19];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBFFC;
      }
      goto L_089CBFF4;
    }
L_089CBFF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089CBFFC;
      }
      goto L_089CBFFC;
    }
L_089CBFFC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 4u, 0x089CC038u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 1u, 0x089CC004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0113(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0113_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_113(Runtime &runtime) {
    runtime.register_generated_unit(113u, 0x089C8000u, 16384u, &recomp_unit_0113, &recomp_unit_0113_entry);
    runtime.register_function(0x089C8000u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8010u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8040u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C804Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C806Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8088u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8098u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8104u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8110u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8124u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8178u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8184u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C818Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8200u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8218u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8220u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8260u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8270u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C827Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8288u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C828Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8388u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8404u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8424u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C842Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8440u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8450u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8470u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8478u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8484u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C848Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8504u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C851Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8528u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C854Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8554u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8560u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8568u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8584u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8628u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8638u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C865Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8664u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8670u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8688u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8698u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8708u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8720u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8730u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8744u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8758u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8788u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8810u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8828u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8834u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8870u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8874u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C888Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8898u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C890Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8948u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C894Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8964u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C896Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8978u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C898Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8998u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8AA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8AC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8AE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8AF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8DA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8DA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8DC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8DDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8DE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8DFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FCCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9004u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C900Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9014u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C901Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9028u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9040u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C904Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9054u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C905Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9064u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C906Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9094u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9104u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C910Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9110u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C913Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9174u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C918Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9204u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C921Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C922Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C923Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9248u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9250u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C925Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9264u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9270u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9278u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9280u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9284u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9304u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9318u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9328u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9334u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C933Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9344u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9354u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C935Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9380u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9398u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9400u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9430u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9480u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C948Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9500u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C950Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9520u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9528u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C952Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9554u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9588u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9594u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9604u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C960Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9618u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9624u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9630u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C963Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9644u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C964Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9654u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9660u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C966Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9678u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9688u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9690u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9694u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C969Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9710u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9720u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9730u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9748u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9750u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9758u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C975Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C976Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C977Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9788u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9790u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9804u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9814u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C982Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9834u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9844u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C984Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9850u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9878u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9904u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9910u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9920u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9928u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9930u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9940u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9954u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C995Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9990u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C999Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9ECCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA018u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA02Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA048u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA05Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA088u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA09Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA104u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA10Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA12Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA134u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA13Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA144u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA14Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA154u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA15Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA168u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA174u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA17Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA184u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA200u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA208u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA210u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA230u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA248u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA250u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA258u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA260u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA268u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA270u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA278u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA284u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA28Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA294u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA298u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA304u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA320u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA330u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA338u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA344u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA34Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA35Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA364u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA378u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA380u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA408u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA410u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA430u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA514u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA534u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA540u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA55Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA564u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA570u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA57Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA584u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA590u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA594u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA604u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA610u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA628u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA630u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA63Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA670u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA678u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA694u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA698u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA708u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA720u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA72Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA73Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA744u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA74Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA754u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA800u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA808u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA818u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA824u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA82Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA838u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA840u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA870u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA888u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA898u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA904u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA90Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA91Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA928u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA930u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA93Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA944u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA970u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA988u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA998u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA30u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB30u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD30u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAED8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF30u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB010u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB034u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB040u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB050u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB058u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB078u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB108u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB11Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB138u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB13Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB144u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB14Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB154u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB16Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB174u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB180u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB194u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB19Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB204u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB20Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB214u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB238u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB244u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB258u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB268u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB298u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB304u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB308u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB324u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB358u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB388u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB38Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB3B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB414u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB418u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB43Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB444u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB448u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB460u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB46Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB48Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB49Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB500u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB514u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB520u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB52Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB534u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB538u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB544u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB54Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB55Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB560u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB56Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB580u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB584u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB58Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB598u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB644u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB648u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB67Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB684u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB700u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB70Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB718u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB720u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB730u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB734u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB750u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB758u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB770u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB780u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB79Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB808u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB810u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB81Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB824u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB830u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB838u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB83Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB844u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB84Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB86Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB878u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB88Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB900u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB910u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB91Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB928u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB930u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB958u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBABCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCCCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDCCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBECCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBED8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFFCu, &recomp_unit_0113, "recomp_unit_0113");
}
} // namespace psprecomp
